// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_datapath_dv___ctor_var_reset(Vcore_datapath_dv* vlSelf);

Vcore_datapath_dv::Vcore_datapath_dv(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_datapath_dv___ctor_var_reset(this);
}

void Vcore_datapath_dv::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_datapath_dv::~Vcore_datapath_dv() {
}
