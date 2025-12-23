// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

// Parameter definitions for Vcore_lsq
constexpr IData/*31:0*/ Vcore_lsq::DEPTH;


void Vcore_lsq___ctor_var_reset(Vcore_lsq* vlSelf);

Vcore_lsq::Vcore_lsq(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_lsq___ctor_var_reset(this);
}

void Vcore_lsq::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_lsq::~Vcore_lsq() {
}
