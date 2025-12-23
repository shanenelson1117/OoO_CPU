// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_DEMUX_10_TO_1024_H_
#define VERILATED_VCORE_DEMUX_10_TO_1024_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_demux_10_to_1024 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(en,0,0);
    VL_IN16(sel,9,0);
    VL_OUTW(out,1023,0,32);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_demux_10_to_1024(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_demux_10_to_1024();
    VL_UNCOPYABLE(Vcore_demux_10_to_1024);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
