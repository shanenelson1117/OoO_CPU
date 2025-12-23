// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_D_FF___ctor_var_reset(Vcore_D_FF* vlSelf);

Vcore_D_FF::Vcore_D_FF(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_D_FF___ctor_var_reset(this);
}

void Vcore_D_FF::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_D_FF::~Vcore_D_FF() {
}
