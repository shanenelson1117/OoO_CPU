// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_full_add___ctor_var_reset(Vcore_full_add* vlSelf);

Vcore_full_add::Vcore_full_add(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_full_add___ctor_var_reset(this);
}

void Vcore_full_add::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_full_add::~Vcore_full_add() {
}
