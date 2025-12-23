// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_MULTIPLY_H_
#define VERILATED_VCORE_MULTIPLY_H_  // guard

#include "verilated.h"
class Vcore_mult_control;
class Vcore_mult_datapath;


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_multiply final : public VerilatedModule {
  public:
    // CELLS
    Vcore_mult_datapath* __PVT__multiply_dp;
    Vcore_mult_control* __PVT__multiply_cu;

    // DESIGN SPECIFIC STATE
    VL_IN8(rs_rob_entry,3,0);
    VL_IN8(valid_in,0,0);
    VL_IN8(yumi_in,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(ALUop,3,0);
    VL_OUT8(valid_out,0,0);
    VL_OUT8(ready,0,0);
    CData/*0:0*/ loadregs;
    CData/*0:0*/ shiftregs;
    CData/*0:0*/ addregs;
    CData/*0:0*/ decr_P;
    CData/*0:0*/ mul_h;
    CData/*3:0*/ curr_rob;
    CData/*3:0*/ __Vdly__curr_rob;
    CData/*0:0*/ __Vdly__mul_h;
    VL_IN(A,31,0);
    VL_IN(B,31,0);
    IData/*31:0*/ multiplier;
    IData/*31:0*/ multiplicand;
    IData/*31:0*/ P;
    IData/*31:0*/ result;
    VL_OUT64(out,37,0);
    QData/*63:0*/ product_inter;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_multiply(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_multiply();
    VL_UNCOPYABLE(Vcore_multiply);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
