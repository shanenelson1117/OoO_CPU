// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_HALF_ADD_H_
#define VERILATED_VCORE_HALF_ADD_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_half_add final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(sum,0,0);
    VL_OUT8(c_out,0,0);
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_half_add(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_half_add();
    VL_UNCOPYABLE(Vcore_half_add);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
