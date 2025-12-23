// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_lsq_scheduler___ctor_var_reset(Vcore_lsq_scheduler* vlSelf);

Vcore_lsq_scheduler::Vcore_lsq_scheduler(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_lsq_scheduler___ctor_var_reset(this);
}

void Vcore_lsq_scheduler::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_lsq_scheduler::~Vcore_lsq_scheduler() {
}
