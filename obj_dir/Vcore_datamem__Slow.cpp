// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_datamem___ctor_var_reset(Vcore_datamem* vlSelf);

Vcore_datamem::Vcore_datamem(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_datamem___ctor_var_reset(this);
}

void Vcore_datamem::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_datamem::~Vcore_datamem() {
}
