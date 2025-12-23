// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_PIPELINE_REG_H_
#define VERILATED_VCORE_PIPELINE_REG_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_pipeline_reg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(stall,0,0);
    VL_INW(d,111,0,4);
    VL_OUTW(q,111,0,4);
    VlWide<4>/*111:0*/ __Vdly__q;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_pipeline_reg(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_pipeline_reg();
    VL_UNCOPYABLE(Vcore_pipeline_reg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
