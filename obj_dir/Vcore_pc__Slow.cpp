// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_pc___ctor_var_reset(Vcore_pc* vlSelf);

Vcore_pc::Vcore_pc(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_pc___ctor_var_reset(this);
}

void Vcore_pc::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_pc::~Vcore_pc() {
}
