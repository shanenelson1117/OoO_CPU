// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_multiply___ctor_var_reset(Vcore_multiply* vlSelf);

Vcore_multiply::Vcore_multiply(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_multiply___ctor_var_reset(this);
}

void Vcore_multiply::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_multiply::~Vcore_multiply() {
}
