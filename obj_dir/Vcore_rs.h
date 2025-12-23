// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_RS_H_
#define VERILATED_VCORE_RS_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_rs final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(wr_en,0,0);
    VL_OUT8(busy,0,0);
    VL_IN64(CDB_in,37,0);
    VL_INW(d,84,0,3);
    VL_OUTW(out,76,0,3);
    VlWide<3>/*84:0*/ q_reg;
    VlWide<3>/*84:0*/ __Vdly__q_reg;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_rs(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_rs();
    VL_UNCOPYABLE(Vcore_rs);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
