// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_datapath___ctor_var_reset(Vcore_datapath* vlSelf);

Vcore_datapath::Vcore_datapath(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_datapath___ctor_var_reset(this);
}

void Vcore_datapath::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_datapath::~Vcore_datapath() {
}
