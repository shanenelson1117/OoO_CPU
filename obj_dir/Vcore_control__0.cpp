// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_control___ico_sequent__TOP__core__shift_fu__shift_cu__0(Vcore_control* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_control___ico_sequent__TOP__core__shift_fu__shift_cu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.shiftregs = (2U == (IData)(vlSelfRef.ps));
    vlSelfRef.valid_out = (3U == (IData)(vlSelfRef.ps));
    vlSelfRef.ready = (0U == (IData)(vlSelfRef.ps));
}

void Vcore_control___ico_sequent__TOP__core__shift_fu__shift_cu__1(Vcore_control* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_control___ico_sequent__TOP__core__shift_fu__shift_cu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = ((0U == (IData)(vlSelfRef.ps)) 
                          & (IData)(vlSelfRef.valid_in));
    vlSelfRef.ns = ((0U == (IData)(vlSelfRef.ps)) ? 
                    ((IData)(vlSelfRef.valid_in) ? 2U
                      : 0U) : ((2U == (IData)(vlSelfRef.ps))
                                ? ((1U == vlSelfRef.P)
                                    ? 3U : 2U) : ((3U 
                                                   == (IData)(vlSelfRef.ps))
                                                   ? 
                                                  ((IData)(vlSelfRef.yumi_in)
                                                    ? 0U
                                                    : 3U)
                                                   : 0U)));
}

void Vcore_control___nba_sequent__TOP__core__shift_fu__shift_cu__0(Vcore_control* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_control___nba_sequent__TOP__core__shift_fu__shift_cu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    vlSelfRef.__Vdly__ps = ((IData)(vlSelfRef.reset)
                             ? 0U : (IData)(vlSelfRef.ns));
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.shiftregs = (2U == (IData)(vlSelfRef.ps));
    vlSelfRef.valid_out = (3U == (IData)(vlSelfRef.ps));
    vlSelfRef.ready = (0U == (IData)(vlSelfRef.ps));
}

void Vcore_control___nba_comb__TOP__core__shift_fu__shift_cu__0(Vcore_control* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_control___nba_comb__TOP__core__shift_fu__shift_cu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = ((0U == (IData)(vlSelfRef.ps)) 
                          & (IData)(vlSelfRef.valid_in));
}

void Vcore_control___nba_comb__TOP__core__shift_fu__shift_cu__1(Vcore_control* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_control___nba_comb__TOP__core__shift_fu__shift_cu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ns = ((0U == (IData)(vlSelfRef.ps)) ? 
                    ((IData)(vlSelfRef.valid_in) ? 2U
                      : 0U) : ((2U == (IData)(vlSelfRef.ps))
                                ? ((1U == vlSelfRef.P)
                                    ? 3U : 2U) : ((3U 
                                                   == (IData)(vlSelfRef.ps))
                                                   ? 
                                                  ((IData)(vlSelfRef.yumi_in)
                                                    ? 0U
                                                    : 3U)
                                                   : 0U)));
}
