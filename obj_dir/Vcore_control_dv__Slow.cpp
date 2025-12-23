// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_control_dv___ctor_var_reset(Vcore_control_dv* vlSelf);

Vcore_control_dv::Vcore_control_dv(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_control_dv___ctor_var_reset(this);
}

void Vcore_control_dv::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_control_dv::~Vcore_control_dv() {
}
