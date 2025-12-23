// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_lsq_scheduler___stl_sequent__TOP__core__lsq_sched__0(Vcore_lsq_scheduler* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_lsq_scheduler___stl_sequent__TOP__core__lsq_sched__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79, vlSelfRef.out, vlSelfRef.in);
    vlSelfRef.wr_en = (1U & (VL_BITSEL_IWII(79, vlSelfRef.in, 0x0000004eU) 
                             | VL_BITSEL_IWII(79, vlSelfRef.in, 0x0000004dU)));
}

VL_ATTR_COLD void Vcore_lsq_scheduler___ctor_var_reset(Vcore_lsq_scheduler* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_lsq_scheduler___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    VL_SCOPED_RAND_RESET_W(79, vlSelf->in, __VscopeHash, 5406812645801907143ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->out, __VscopeHash, 7519490245117619040ull);
    vlSelf->wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710928637576349896ull);
}
