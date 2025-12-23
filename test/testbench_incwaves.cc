#include "verilated.h"
#include "verilated_fst_c.h"
#include "../obj_dir/Vcore.h" 
#include "test_utils.h"

const int kCycles = 1000;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vcore* top = new Vcore;

    VerilatedFstC* tfp = new VerilatedFstC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);   // depth = 99 is usually enough
    tfp->open("wave.fst");

    int cycles_ran = 0;
    load_elf(argv[1], top, 0x80000000);

    while (cycles_ran < kCycles) {
        top->clk = 0;
        top->eval();
        tfp->dump(Verilated::time());

        top->clk = 1;
        top->eval();
        tfp->dump(Verilated::time());

        Verilated::timeInc(1);
        cycles_ran++;
    }

    tfp->close();
    delete top;
    return 0;
}
