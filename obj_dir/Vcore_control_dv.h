// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_CONTROL_DV_H_
#define VERILATED_VCORE_CONTROL_DV_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_control_dv final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(valid_in,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(yumi_in,0,0);
    VL_IN8(a_lt_b,0,0);
    VL_IN8(div,0,0);
    VL_OUT8(loadregs,0,0);
    VL_OUT8(pass1,0,0);
    VL_OUT8(pass2,0,0);
    VL_OUT8(signadj,0,0);
    VL_OUT8(valid_out,0,0);
    VL_OUT8(ready,0,0);
    CData/*2:0*/ ps;
    CData/*2:0*/ ns;
    CData/*2:0*/ __Vdly__ps;
    VL_IN(P,31,0);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_control_dv(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_control_dv();
    VL_UNCOPYABLE(Vcore_control_dv);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
