// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_PC_H_
#define VERILATED_VCORE_PC_H_  // guard

#include "verilated.h"
class Vcore_instructmem;


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_pc final : public VerilatedModule {
  public:
    // CELLS
    Vcore_instructmem* __PVT__inst;

    // DESIGN SPECIFIC STATE
    VL_OUT8(read_exception,0,0);
    VL_OUT8(mcause,7,0);
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(stall,0,0);
    VL_IN8(mispredicted,0,0);
    VL_IN8(exception,0,0);
    VL_IN8(mret,0,0);
    VL_OUT(instruction,31,0);
    VL_OUT(pc,31,0);
    VL_IN(pc_update,31,0);
    VL_IN(mtvec_ReadData,31,0);
    VL_IN(mepc_ReadData,31,0);
    IData/*31:0*/ new_pc;
    IData/*31:0*/ __Vdly__pc;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_pc(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_pc();
    VL_UNCOPYABLE(Vcore_pc);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
