// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_core___ctor_var_reset(Vcore_core* vlSelf);

Vcore_core::Vcore_core(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_core___ctor_var_reset(this);
}

void Vcore_core::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_core::~Vcore_core() {
}
