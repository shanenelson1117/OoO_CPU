// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_five_to_thirtytwo_decoder___ctor_var_reset(Vcore_five_to_thirtytwo_decoder* vlSelf);

Vcore_five_to_thirtytwo_decoder::Vcore_five_to_thirtytwo_decoder(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_five_to_thirtytwo_decoder___ctor_var_reset(this);
}

void Vcore_five_to_thirtytwo_decoder::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_five_to_thirtytwo_decoder::~Vcore_five_to_thirtytwo_decoder() {
}
