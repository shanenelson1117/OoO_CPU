// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_half_add___ctor_var_reset(Vcore_half_add* vlSelf);

Vcore_half_add::Vcore_half_add(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_half_add___ctor_var_reset(this);
}

void Vcore_half_add::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_half_add::~Vcore_half_add() {
}
