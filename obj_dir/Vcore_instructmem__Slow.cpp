// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_instructmem___ctor_var_reset(Vcore_instructmem* vlSelf);

Vcore_instructmem::Vcore_instructmem(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_instructmem___ctor_var_reset(this);
}

void Vcore_instructmem::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_instructmem::~Vcore_instructmem() {
}
