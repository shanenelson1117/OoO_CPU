// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_SHIFT_H_
#define VERILATED_VCORE_SHIFT_H_  // guard

#include "verilated.h"
class Vcore_control;
class Vcore_datapath;


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_shift final : public VerilatedModule {
  public:
    // CELLS
    Vcore_datapath* __PVT__shift_dp;
    Vcore_control* __PVT__shift_cu;

    // DESIGN SPECIFIC STATE
    VL_IN8(rs_rob_entry,3,0);
    VL_IN8(ALUop,3,0);
    VL_IN8(valid_in,0,0);
    VL_IN8(yumi_in,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_OUT8(valid_out,0,0);
    VL_OUT8(ready,0,0);
    CData/*0:0*/ loadregs;
    CData/*0:0*/ shiftregs;
    CData/*3:0*/ curr_rob;
    CData/*3:0*/ ALUop_reg;
    CData/*3:0*/ __Vdly__curr_rob;
    CData/*3:0*/ __Vdly__ALUop_reg;
    VL_IN(A,31,0);
    VL_IN(B,31,0);
    IData/*31:0*/ shifted;
    IData/*31:0*/ shifter;
    IData/*31:0*/ result;
    IData/*31:0*/ output_inter;
    IData/*31:0*/ P;
    VL_OUT64(out,37,0);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_shift(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_shift();
    VL_UNCOPYABLE(Vcore_shift);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
