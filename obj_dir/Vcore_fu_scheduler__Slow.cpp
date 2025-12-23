// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_fu_scheduler___ctor_var_reset(Vcore_fu_scheduler* vlSelf);

Vcore_fu_scheduler::Vcore_fu_scheduler(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_fu_scheduler___ctor_var_reset(this);
}

void Vcore_fu_scheduler::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_fu_scheduler::~Vcore_fu_scheduler() {
}
