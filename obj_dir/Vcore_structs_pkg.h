// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE_STRUCTS_PKG_H_
#define VERILATED_VCORE_STRUCTS_PKG_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_structs_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_structs_pkg(Vcore__Syms* symsp, const char* v__name);
    ~Vcore_structs_pkg();
    VL_UNCOPYABLE(Vcore_structs_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
