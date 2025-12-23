// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_reg_status_entry___ctor_var_reset(Vcore_reg_status_entry* vlSelf);

Vcore_reg_status_entry::Vcore_reg_status_entry(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_reg_status_entry___ctor_var_reset(this);
}

void Vcore_reg_status_entry::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_reg_status_entry::~Vcore_reg_status_entry() {
}
