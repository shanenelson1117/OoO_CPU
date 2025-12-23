// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_LSQ_SCHEDULER_H_
#define VERILATED_VCORE_LSQ_SCHEDULER_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_lsq_scheduler final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(wr_en,0,0);
    VL_INW(in,78,0,3);
    VL_OUTW(out,78,0,3);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_lsq_scheduler(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_lsq_scheduler();
    VL_UNCOPYABLE(Vcore_lsq_scheduler);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
