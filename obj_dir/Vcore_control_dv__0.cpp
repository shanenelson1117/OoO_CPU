// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_control_dv___ico_sequent__TOP__core__div_fu__divide_cu__0(Vcore_control_dv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_control_dv___ico_sequent__TOP__core__div_fu__divide_cu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pass1 = (1U == (IData)(vlSelfRef.ps));
    vlSelfRef.pass2 = (2U == (IData)(vlSelfRef.ps));
    vlSelfRef.signadj = (4U == (IData)(vlSelfRef.ps));
    vlSelfRef.valid_out = (5U == (IData)(vlSelfRef.ps));
    vlSelfRef.ready = (0U == (IData)(vlSelfRef.ps));
}

void Vcore_control_dv___ico_sequent__TOP__core__div_fu__divide_cu__1(Vcore_control_dv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_control_dv___ico_sequent__TOP__core__div_fu__divide_cu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = ((0U == (IData)(vlSelfRef.ps)) 
                          & (IData)(vlSelfRef.valid_in));
    vlSelfRef.ns = ((0U == (IData)(vlSelfRef.ps)) ? 
                    (((IData)(vlSelfRef.valid_in) & 
                      (~ (IData)(vlSelfRef.a_lt_b)))
                      ? 1U : (((IData)(vlSelfRef.valid_in) 
                               & (IData)(vlSelfRef.a_lt_b))
                               ? 5U : 0U)) : ((1U == (IData)(vlSelfRef.ps))
                                               ? ((0U 
                                                   == vlSelfRef.P)
                                                   ? 2U
                                                   : 1U)
                                               : ((2U 
                                                   == (IData)(vlSelfRef.ps))
                                                   ? 
                                                  ((IData)(vlSelfRef.div)
                                                    ? 4U
                                                    : 5U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.ps))
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.ps))
                                                     ? 
                                                    ((IData)(vlSelfRef.yumi_in)
                                                      ? 0U
                                                      : 5U)
                                                     : 0U)))));
}

void Vcore_control_dv___nba_sequent__TOP__core__div_fu__divide_cu__0(Vcore_control_dv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_control_dv___nba_sequent__TOP__core__div_fu__divide_cu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ps = vlSelfRef.ps;
    vlSelfRef.__Vdly__ps = ((IData)(vlSelfRef.reset)
                             ? 0U : (IData)(vlSelfRef.ns));
    vlSelfRef.ps = vlSelfRef.__Vdly__ps;
    vlSelfRef.pass1 = (1U == (IData)(vlSelfRef.ps));
    vlSelfRef.pass2 = (2U == (IData)(vlSelfRef.ps));
    vlSelfRef.signadj = (4U == (IData)(vlSelfRef.ps));
    vlSelfRef.valid_out = (5U == (IData)(vlSelfRef.ps));
    vlSelfRef.ready = (0U == (IData)(vlSelfRef.ps));
}

void Vcore_control_dv___nba_comb__TOP__core__div_fu__divide_cu__0(Vcore_control_dv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_control_dv___nba_comb__TOP__core__div_fu__divide_cu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = ((0U == (IData)(vlSelfRef.ps)) 
                          & (IData)(vlSelfRef.valid_in));
}

void Vcore_control_dv___nba_comb__TOP__core__div_fu__divide_cu__1(Vcore_control_dv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_control_dv___nba_comb__TOP__core__div_fu__divide_cu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ns = ((0U == (IData)(vlSelfRef.ps)) ? 
                    (((IData)(vlSelfRef.valid_in) & 
                      (~ (IData)(vlSelfRef.a_lt_b)))
                      ? 1U : (((IData)(vlSelfRef.valid_in) 
                               & (IData)(vlSelfRef.a_lt_b))
                               ? 5U : 0U)) : ((1U == (IData)(vlSelfRef.ps))
                                               ? ((0U 
                                                   == vlSelfRef.P)
                                                   ? 2U
                                                   : 1U)
                                               : ((2U 
                                                   == (IData)(vlSelfRef.ps))
                                                   ? 
                                                  ((IData)(vlSelfRef.div)
                                                    ? 4U
                                                    : 5U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.ps))
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.ps))
                                                     ? 
                                                    ((IData)(vlSelfRef.yumi_in)
                                                      ? 0U
                                                      : 5U)
                                                     : 0U)))));
}
