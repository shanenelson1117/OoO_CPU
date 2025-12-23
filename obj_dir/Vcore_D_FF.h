// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_D_FF_H_
#define VERILATED_VCORE_D_FF_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_D_FF final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(q,0,0);
    VL_IN8(d,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    CData/*0:0*/ __Vdly__q;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_D_FF(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_D_FF();
    VL_UNCOPYABLE(Vcore_D_FF);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
