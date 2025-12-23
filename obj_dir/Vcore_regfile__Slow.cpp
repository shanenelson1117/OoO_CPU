// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_regfile___ctor_var_reset(Vcore_regfile* vlSelf);

Vcore_regfile::Vcore_regfile(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_regfile___ctor_var_reset(this);
}

void Vcore_regfile::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_regfile::~Vcore_regfile() {
}
