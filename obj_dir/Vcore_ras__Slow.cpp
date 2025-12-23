// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_ras___ctor_var_reset(Vcore_ras* vlSelf);

Vcore_ras::Vcore_ras(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_ras___ctor_var_reset(this);
}

void Vcore_ras::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_ras::~Vcore_ras() {
}
