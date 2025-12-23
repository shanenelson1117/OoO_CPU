// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

// Parameter definitions for Vcore_rob
constexpr IData/*31:0*/ Vcore_rob::DEPTH;


void Vcore_rob___ctor_var_reset(Vcore_rob* vlSelf);

Vcore_rob::Vcore_rob(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_rob___ctor_var_reset(this);
}

void Vcore_rob::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_rob::~Vcore_rob() {
}
