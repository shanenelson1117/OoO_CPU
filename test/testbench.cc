#include <fstream>
#include <vector>
#include <cstdint>
#include <iostream>

#include "../obj_dir/Vcore.h"     // top-level module
#include "verilated.h"

const int kCycles = 1000;

// Takes a path to an ELF and loads it into a vector of integers
std::vector<uint32_t> load_program(const char* filename);

int main(int argc, char **argv) {

    Verilated::commandArgs(argc, argv);
    Vcore* top = new Vcore;

    std::ofstream trace_file(argv[2]);
    int cycles_ran = 0;

    auto program = load_program(argv[1]);  // ELF converted via objcopy

    for (size_t i = 0; i < program.size(); i++) {
        top->mem_wr_addr = i*4;
        top->mem_wr_data = program[i];
        top->mem_wr_en   = 1;

        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
    }

    top->mem_wr_en = 0; // done loading

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
        if (top->valid_commit_out && top->RegWrite_out) {
            trace_file << std::hex << top->head_pc << " "
                       << std::dec << (int)top->rd_out<< " "
                       << std::hex << top->WriteData_out
                       << std::endl;
            
            cycles_ran++;
        }
    }

    trace_file.close();
    delete top;
    return 0;
}


// Load a raw binary into a vector of 32-bit little-endian words
std::vector<uint32_t> load_program(const char* filename) {
    std::ifstream file(filename, std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return {};
    }

    std::vector<uint32_t> program;

    while (!file.eof()) {
        uint8_t bytes[4] = {0};
        file.read(reinterpret_cast<char*>(bytes), 4);
        if (file.gcount() == 4) {
            uint32_t instr = bytes[0] | (bytes[1]<<8) | (bytes[2]<<16) | (bytes[3]<<24);
            program.push_back(instr);
        }
    }

    return program;
}