// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_bpb___ctor_var_reset(Vcore_bpb* vlSelf);

Vcore_bpb::Vcore_bpb(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_bpb___ctor_var_reset(this);
}

void Vcore_bpb::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_bpb::~Vcore_bpb() {
}
