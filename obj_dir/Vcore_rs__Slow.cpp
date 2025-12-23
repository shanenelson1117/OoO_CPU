// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_rs___ctor_var_reset(Vcore_rs* vlSelf);

Vcore_rs::Vcore_rs(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_rs___ctor_var_reset(this);
}

void Vcore_rs::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_rs::~Vcore_rs() {
}
