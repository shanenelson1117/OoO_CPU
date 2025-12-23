// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_adder_32bit___ctor_var_reset(Vcore_adder_32bit* vlSelf);

Vcore_adder_32bit::Vcore_adder_32bit(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_adder_32bit___ctor_var_reset(this);
}

void Vcore_adder_32bit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_adder_32bit::~Vcore_adder_32bit() {
}
