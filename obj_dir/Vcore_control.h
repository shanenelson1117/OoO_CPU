// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_CONTROL_H_
#define VERILATED_VCORE_CONTROL_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_control final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(valid_in,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(yumi_in,0,0);
    VL_OUT8(loadregs,0,0);
    VL_OUT8(shiftregs,0,0);
    VL_OUT8(valid_out,0,0);
    VL_OUT8(ready,0,0);
    CData/*1:0*/ ps;
    CData/*1:0*/ ns;
    CData/*1:0*/ __Vdly__ps;
    VL_IN(P,31,0);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_control(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_control();
    VL_UNCOPYABLE(Vcore_control);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
