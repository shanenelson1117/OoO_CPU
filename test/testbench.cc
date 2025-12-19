#include "core.h"       // top-level module
#include "verilated.h"
#include <fstream>

const int kCycles = 1000;

int main(int argc, char **argv) {

    Verilated::commandArgs(argc, argv);
    core* top = new core;

    std::ofstream trace_file("trace.log");
    int cycles_ran = 0;

    auto program = load_program("program.bin");  // ELF converted via objcopy

    for (size_t i = 0; i < program.size(); i++) {
        top->fetch_stage->program_counter->inst->mem_wr_addr = i;
        top->fetch_stage->program_counter->inst->mem_wr_data = program[i];
        top->fetch_stage->program_counter->inst->mem_wr_en   = 1;
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
    }
    top->fetch_stage->program_counter->inst->mem_wr_en = 0;  // done loading
    
    while (cycles_ran < kCycles) {
        top->clk = 0;
        top->eval();       // falling edge
        top->clk = 1;
        top->eval();       // rising edge

        // Check if commit_valid is high
        if (top->valid_commit && top->RegWrite) {
            trace_file << std::hex << top->head.pc << " "
                       << std::dec << (int)top->rd<< " "
                       << std::hex << top->WriteData
                       << std::endl;
            
            cycles_ran++;
        }
    }

    trace_file.close();
    delete top;
    return 0;
}
