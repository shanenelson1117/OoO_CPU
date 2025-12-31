#include "verilated.h"
#include "../obj_dir/Vcore.h" 
#include "test_utils.h"
#include "verilated_vcd_c.h"


const int kCycles = 1000;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vcore* top = new Vcore;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);   // depth = 99 is usually enough
    tfp->open("wave.vcd");

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
        top->eval();
        Verilated::timeInc(1);

        top->clk = 1;
        top->eval();
        tfp->dump(Verilated::time());  // only dump on rising edge
        Verilated::timeInc(1);

        cycles_ran++;
    }



    tfp->close();
    delete top;
    return 0;
}
