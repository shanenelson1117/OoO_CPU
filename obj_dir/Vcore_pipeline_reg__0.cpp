// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_pipeline_reg___nba_sequent__TOP__core__fetch_issue_reg__0(Vcore_pipeline_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_pipeline_reg___nba_sequent__TOP__core__fetch_issue_reg__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(112, vlSelfRef.__Vdly__q, vlSelfRef.q);
    if (vlSelfRef.reset) {
        VL_CONST_W_1X(112,vlSelfRef.__Vdly__q,0x00000000);
    } else if ((1U & (~ (IData)(vlSelfRef.stall)))) {
        VL_ASSIGN_W(112, vlSelfRef.__Vdly__q, vlSelfRef.d);
    }
    VL_ASSIGN_W(112, vlSelfRef.q, vlSelfRef.__Vdly__q);
}
