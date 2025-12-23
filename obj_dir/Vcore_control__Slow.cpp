// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_control___ctor_var_reset(Vcore_control* vlSelf);

Vcore_control::Vcore_control(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_control___ctor_var_reset(this);
}

void Vcore_control::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_control::~Vcore_control() {
}
