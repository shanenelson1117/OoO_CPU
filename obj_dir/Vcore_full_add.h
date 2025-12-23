// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_FULL_ADD_H_
#define VERILATED_VCORE_FULL_ADD_H_  // guard

#include "verilated.h"
class Vcore_half_add;


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_full_add final : public VerilatedModule {
  public:
    // CELLS
    Vcore_half_add* __PVT__add1;
    Vcore_half_add* __PVT__add2;

    // DESIGN SPECIFIC STATE
    VL_OUT8(sum,0,0);
    VL_OUT8(c_out,0,0);
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(c_in,0,0);
    CData/*0:0*/ i1;
    CData/*0:0*/ i2;
    CData/*0:0*/ i3;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_full_add(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_full_add();
    VL_UNCOPYABLE(Vcore_full_add);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
