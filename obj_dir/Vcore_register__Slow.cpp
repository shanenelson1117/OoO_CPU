// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_register___ctor_var_reset(Vcore_register* vlSelf);

Vcore_register::Vcore_register(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_register___ctor_var_reset(this);
}

void Vcore_register::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_register::~Vcore_register() {
}
