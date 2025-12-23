// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_pipeline_reg___ctor_var_reset(Vcore_pipeline_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_pipeline_reg___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    VL_SCOPED_RAND_RESET_W(112, vlSelf->d, __VscopeHash, 1720370409040345145ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7179230919112499263ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->q, __VscopeHash, 8861071527689086543ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__Vdly__q, __VscopeHash, 356406880173246995ull);
}
