// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_divide___ctor_var_reset(Vcore_divide* vlSelf);

Vcore_divide::Vcore_divide(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_divide___ctor_var_reset(this);
}

void Vcore_divide::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_divide::~Vcore_divide() {
}
