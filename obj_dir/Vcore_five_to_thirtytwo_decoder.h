// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_FIVE_TO_THIRTYTWO_DECODER_H_
#define VERILATED_VCORE_FIVE_TO_THIRTYTWO_DECODER_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_five_to_thirtytwo_decoder final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(sel,4,0);
    VL_IN8(enable,0,0);
    VL_OUT(out,31,0);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_five_to_thirtytwo_decoder(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_five_to_thirtytwo_decoder();
    VL_UNCOPYABLE(Vcore_five_to_thirtytwo_decoder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
