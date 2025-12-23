// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_pipeline_reg___ctor_var_reset(Vcore_pipeline_reg* vlSelf);

Vcore_pipeline_reg::Vcore_pipeline_reg(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_pipeline_reg___ctor_var_reset(this);
}

void Vcore_pipeline_reg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_pipeline_reg::~Vcore_pipeline_reg() {
}
