// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_csr_regstat___ctor_var_reset(Vcore_csr_regstat* vlSelf);

Vcore_csr_regstat::Vcore_csr_regstat(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_csr_regstat___ctor_var_reset(this);
}

void Vcore_csr_regstat::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_csr_regstat::~Vcore_csr_regstat() {
}
