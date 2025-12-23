// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_memory___ctor_var_reset(Vcore_memory* vlSelf);

Vcore_memory::Vcore_memory(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_memory___ctor_var_reset(this);
}

void Vcore_memory::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_memory::~Vcore_memory() {
}
