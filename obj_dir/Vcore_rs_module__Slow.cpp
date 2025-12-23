// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_rs_module___ctor_var_reset(Vcore_rs_module* vlSelf);

Vcore_rs_module::Vcore_rs_module(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_rs_module___ctor_var_reset(this);
}

void Vcore_rs_module::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_rs_module::~Vcore_rs_module() {
}
