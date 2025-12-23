#include <fstream>
#include <vector>
#include <cstdint>
#include <iostream>
#include <iomanip>

#include "../obj_dir/Vcore.h"     // top-level module
#include "verilated.h"
#include <cassert>
#include "test_utils.h"

const int kCycles = 1000;


// Takes a path to an ELF and loads it into a vector of integers
std::vector<uint32_t> load_program(const char* filename);
void load_elf(const char* filename, Vcore* top,uint32_t imem_base);

int main(int argc, char **argv) {

    Verilated::commandArgs(argc, argv);
    Vcore* top = new Vcore;

    std::ofstream trace_file(argv[2]);
    int cycles_ran = 0;

    load_elf(argv[1], top, 0x80000000);

    top->reset = 1;
    for (int i = 0; i < 5; i++) {  // adjust cycles as needed
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
    }

    top->reset = 0;

    while (cycles_ran < kCycles) {
        top->clk = 0;
        top->eval();       // falling edge
        top->clk = 1;
        top->eval();       // rising edge

        // Check if commit_valid is high
        if (top->valid_commit_out) {
          trace_file << "core   0: ";
          trace_file << static_cast<int>(top->priv_out) << " ";

          // PC
          trace_file << std::hex << std::setfill('0') << std::setw(8) << top->head_pc << " ";

          // Instruction
          trace_file << "(0x" << std::hex << std::setw(8) << (top->ins_out & 0xFFFFFFFF) << ") ";

          if (top->RegWrite_out && top->rd_out != 0) {
              trace_file << "x" << std::dec << (int)top->rd_out << " "
                        << "0x" << std::hex << std::setw(8) << (top->WriteData_out & 0xFFFFFFFF);
          }
          if (top->csr_write_out) {
            std::string csr_desc;
            switch(top->csr_write_select_out) {
                case 0: 
                    csr_desc = "c768_mstatus ";
                    break;
                case 1: 
                    csr_desc = "c773_mtvec";
                    break;
                case 2: 
                    csr_desc = "c788_mcause";
                    break;
                case 3: 
                    csr_desc = "c833_mepc";
                    break;
                default: csr_desc = "unimplemented_csr";
            }
            trace_file << csr_desc << " 0x" << std::hex << std::setw(8) << (top->csr_WriteData_out & 0xFFFFFFFF);
          }

          trace_file << std::endl;
      }

      cycles_ran++;
    }

    trace_file.close();
    delete top;
    return 0;
}

