// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_shift___ctor_var_reset(Vcore_shift* vlSelf);

Vcore_shift::Vcore_shift(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_shift___ctor_var_reset(this);
}

void Vcore_shift::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_shift::~Vcore_shift() {
}
