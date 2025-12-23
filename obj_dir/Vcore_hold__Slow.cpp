// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_hold___ctor_var_reset(Vcore_hold* vlSelf);

Vcore_hold::Vcore_hold(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_hold___ctor_var_reset(this);
}

void Vcore_hold::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_hold::~Vcore_hold() {
}
