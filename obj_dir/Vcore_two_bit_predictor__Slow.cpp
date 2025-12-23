// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_two_bit_predictor___ctor_var_reset(Vcore_two_bit_predictor* vlSelf);

Vcore_two_bit_predictor::Vcore_two_bit_predictor(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_two_bit_predictor___ctor_var_reset(this);
}

void Vcore_two_bit_predictor::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_two_bit_predictor::~Vcore_two_bit_predictor() {
}
