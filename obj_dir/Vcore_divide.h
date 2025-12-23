// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_DIVIDE_H_
#define VERILATED_VCORE_DIVIDE_H_  // guard

#include "verilated.h"
class Vcore_control_dv;
class Vcore_datapath_dv;


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_divide final : public VerilatedModule {
  public:
    // CELLS
    Vcore_datapath_dv* __PVT__divide_dp;
    Vcore_control_dv* __PVT__divide_cu;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(valid_in,0,0);
    VL_IN8(yumi_in,0,0);
    VL_IN8(rs_rob_entry,3,0);
    VL_IN8(ALUop,3,0);
    VL_OUT8(valid_out,0,0);
    VL_OUT8(ready,0,0);
    CData/*0:0*/ a_lt_b;
    CData/*0:0*/ loadregs;
    CData/*0:0*/ pass1;
    CData/*0:0*/ pass2;
    CData/*0:0*/ signadj;
    CData/*0:0*/ div;
    CData/*0:0*/ a_lt_b_reg;
    CData/*3:0*/ curr_rob;
    CData/*0:0*/ sor_msb;
    CData/*0:0*/ end_msb;
    CData/*3:0*/ __Vdly__curr_rob;
    CData/*0:0*/ __Vdly__div;
    CData/*0:0*/ __Vdly__sor_msb;
    CData/*0:0*/ __Vdly__end_msb;
    CData/*0:0*/ __Vdly__a_lt_b_reg;
    VL_IN(dividend,31,0);
    VL_IN(divisor,31,0);
    IData/*31:0*/ P;
    IData/*31:0*/ quotient;
    IData/*31:0*/ remainder;
    IData/*31:0*/ result;
    IData/*31:0*/ abs_sor;
    IData/*31:0*/ abs_end;
    VL_OUT64(out,37,0);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_divide(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_divide();
    VL_UNCOPYABLE(Vcore_divide);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
