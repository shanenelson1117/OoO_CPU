// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_demux_10_to_1024___ctor_var_reset(Vcore_demux_10_to_1024* vlSelf);

Vcore_demux_10_to_1024::Vcore_demux_10_to_1024(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_demux_10_to_1024___ctor_var_reset(this);
}

void Vcore_demux_10_to_1024::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_demux_10_to_1024::~Vcore_demux_10_to_1024() {
}
