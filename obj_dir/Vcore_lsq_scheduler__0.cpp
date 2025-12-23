// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_lsq_scheduler___ico_sequent__TOP__core__lsq_sched__0(Vcore_lsq_scheduler* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_lsq_scheduler___ico_sequent__TOP__core__lsq_sched__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79, vlSelfRef.out, vlSelfRef.in);
    vlSelfRef.wr_en = (1U & (VL_BITSEL_IWII(79, vlSelfRef.in, 0x0000004eU) 
                             | VL_BITSEL_IWII(79, vlSelfRef.in, 0x0000004dU)));
}

void Vcore_lsq_scheduler___nba_comb__TOP__core__lsq_sched__0(Vcore_lsq_scheduler* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_lsq_scheduler___nba_comb__TOP__core__lsq_sched__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79, vlSelfRef.out, vlSelfRef.in);
    vlSelfRef.wr_en = (1U & (VL_BITSEL_IWII(79, vlSelfRef.in, 0x0000004eU) 
                             | VL_BITSEL_IWII(79, vlSelfRef.in, 0x0000004dU)));
}
