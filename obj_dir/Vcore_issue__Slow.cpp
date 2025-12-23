// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_issue___ctor_var_reset(Vcore_issue* vlSelf);

Vcore_issue::Vcore_issue(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_issue___ctor_var_reset(this);
}

void Vcore_issue::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_issue::~Vcore_issue() {
}
