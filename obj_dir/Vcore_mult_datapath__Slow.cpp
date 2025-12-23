// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_mult_datapath___ctor_var_reset(Vcore_mult_datapath* vlSelf);

Vcore_mult_datapath::Vcore_mult_datapath(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_mult_datapath___ctor_var_reset(this);
}

void Vcore_mult_datapath::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_mult_datapath::~Vcore_mult_datapath() {
}
