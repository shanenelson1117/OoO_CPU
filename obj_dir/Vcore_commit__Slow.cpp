// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_commit___ctor_var_reset(Vcore_commit* vlSelf);

Vcore_commit::Vcore_commit(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_commit___ctor_var_reset(this);
}

void Vcore_commit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_commit::~Vcore_commit() {
}
