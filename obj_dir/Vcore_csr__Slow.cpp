// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_csr___ctor_var_reset(Vcore_csr* vlSelf);

Vcore_csr::Vcore_csr(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_csr___ctor_var_reset(this);
}

void Vcore_csr::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_csr::~Vcore_csr() {
}
