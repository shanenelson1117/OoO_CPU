// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_gbhsr___ctor_var_reset(Vcore_gbhsr* vlSelf);

Vcore_gbhsr::Vcore_gbhsr(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_gbhsr___ctor_var_reset(this);
}

void Vcore_gbhsr::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_gbhsr::~Vcore_gbhsr() {
}
