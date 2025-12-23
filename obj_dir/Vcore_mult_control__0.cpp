// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_mult_control___ico_sequent__TOP__core__mult_fu__multiply_cu__0(Vcore_mult_control* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_mult_control___ico_sequent__TOP__core__mult_fu__multiply_cu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.shiftregs = (2U == (IData)(vlSelfRef.ps));
    vlSelfRef.addregs = (1U == (IData)(vlSelfRef.ps));
    vlSelfRef.decr_P = (1U == (IData)(vlSelfRef.ps));
    vlSelfRef.valid_out = (3U == (IData)(vlSelfRef.ps));
    vlSelfRef.ready = (0U == (IData)(vlSelfRef.ps));
}

void Vcore_mult_control___ico_sequent__TOP__core__mult_fu__multiply_cu__1(Vcore_mult_control* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_mult_control___ico_sequent__TOP__core__mult_fu__multiply_cu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = ((0U == (IData)(vlSelfRef.ps)) 
                          & (IData)(vlSelfRef.valid_in));
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.valid_in)
                         ? 1U : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = 2U;
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((0U == vlSelfRef.P) ? 3U : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.yumi_in) ? 0U
                         : 3U);
    }
}

void Vcore_mult_control___nba_sequent__TOP__core__mult_fu__multiply_cu__0(Vcore_mult_control* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_mult_control___nba_sequent__TOP__core__mult_fu__multiply_cu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    vlSelfRef.__Vdly__ps = ((IData)(vlSelfRef.reset)
                             ? 0U : (IData)(vlSelfRef.ns));
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.shiftregs = (2U == (IData)(vlSelfRef.ps));
    vlSelfRef.addregs = (1U == (IData)(vlSelfRef.ps));
    vlSelfRef.decr_P = (1U == (IData)(vlSelfRef.ps));
    vlSelfRef.valid_out = (3U == (IData)(vlSelfRef.ps));
    vlSelfRef.ready = (0U == (IData)(vlSelfRef.ps));
}

void Vcore_mult_control___nba_comb__TOP__core__mult_fu__multiply_cu__0(Vcore_mult_control* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_mult_control___nba_comb__TOP__core__mult_fu__multiply_cu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = ((0U == (IData)(vlSelfRef.ps)) 
                          & (IData)(vlSelfRef.valid_in));
}

void Vcore_mult_control___nba_comb__TOP__core__mult_fu__multiply_cu__1(Vcore_mult_control* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_mult_control___nba_comb__TOP__core__mult_fu__multiply_cu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.valid_in)
                         ? 1U : 0U);
    } else if ((1U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = 2U;
    } else if ((2U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((0U == vlSelfRef.P) ? 3U : 1U);
    } else if ((3U == (IData)(vlSelfRef.ps))) {
        vlSelfRef.ns = ((IData)(vlSelfRef.yumi_in) ? 0U
                         : 3U);
    }
}
