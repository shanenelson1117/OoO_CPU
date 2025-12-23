// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_structs_pkg___ctor_var_reset(Vcore_structs_pkg* vlSelf);

Vcore_structs_pkg::Vcore_structs_pkg(Vcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_structs_pkg___ctor_var_reset(this);
}

void Vcore_structs_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_structs_pkg::~Vcore_structs_pkg() {
}
