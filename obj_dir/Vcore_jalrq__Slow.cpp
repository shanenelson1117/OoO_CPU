// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

// Parameter definitions for Vcore_jalrq
constexpr IData/*31:0*/ Vcore_jalrq::DEPTH;


void Vcore_jalrq___ctor_var_reset(Vcore_jalrq* vlSelf);

Vcore_jalrq::Vcore_jalrq(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_jalrq___ctor_var_reset(this);
}

void Vcore_jalrq::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_jalrq::~Vcore_jalrq() {
}
