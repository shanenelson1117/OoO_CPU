// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_REG_STATUS_ENTRY_H_
#define VERILATED_VCORE_REG_STATUS_ENTRY_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_reg_status_entry final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(write_en,0,0);
    VL_IN8(clear,0,0);
    VL_IN8(stall,0,0);
    VL_IN8(d,4,0);
    VL_OUT8(q,4,0);
    CData/*4:0*/ __Vdly__q;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_reg_status_entry(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_reg_status_entry();
    VL_UNCOPYABLE(Vcore_reg_status_entry);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
