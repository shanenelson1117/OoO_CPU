// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_fetch___ctor_var_reset(Vcore_fetch* vlSelf);

Vcore_fetch::Vcore_fetch(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_fetch___ctor_var_reset(this);
}

void Vcore_fetch::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_fetch::~Vcore_fetch() {
}
