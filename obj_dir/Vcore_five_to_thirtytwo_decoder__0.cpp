// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_five_to_thirtytwo_decoder___ico_comb__TOP__core__registers__regfile_enable_decode__0(Vcore_five_to_thirtytwo_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_five_to_thirtytwo_decoder___ico_comb__TOP__core__registers__regfile_enable_decode__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out = 0U;
    if (((IData)(vlSelfRef.enable) & (0U != (IData)(vlSelfRef.sel)))) {
        VL_ASSIGNBIT_IO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}

void Vcore_five_to_thirtytwo_decoder___act_sequent__TOP__core__registers__regfile_enable_decode__0(Vcore_five_to_thirtytwo_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_five_to_thirtytwo_decoder___act_sequent__TOP__core__registers__regfile_enable_decode__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out = 0U;
    if (((IData)(vlSelfRef.enable) & (0U != (IData)(vlSelfRef.sel)))) {
        VL_ASSIGNBIT_IO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}

void Vcore_five_to_thirtytwo_decoder___nba_comb__TOP__core__registers__regfile_enable_decode__0(Vcore_five_to_thirtytwo_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_five_to_thirtytwo_decoder___nba_comb__TOP__core__registers__regfile_enable_decode__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out = 0U;
    if (((IData)(vlSelfRef.enable) & (0U != (IData)(vlSelfRef.sel)))) {
        VL_ASSIGNBIT_IO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}

void Vcore_five_to_thirtytwo_decoder___ico_comb__TOP__core__reg_status_register__enable_decode__0(Vcore_five_to_thirtytwo_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_five_to_thirtytwo_decoder___ico_comb__TOP__core__reg_status_register__enable_decode__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out = 0U;
    if (((IData)(vlSelfRef.enable) & (0U != (IData)(vlSelfRef.sel)))) {
        VL_ASSIGNBIT_IO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}

void Vcore_five_to_thirtytwo_decoder___act_sequent__TOP__core__reg_status_register__enable_decode__0(Vcore_five_to_thirtytwo_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_five_to_thirtytwo_decoder___act_sequent__TOP__core__reg_status_register__enable_decode__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out = 0U;
    if (((IData)(vlSelfRef.enable) & (0U != (IData)(vlSelfRef.sel)))) {
        VL_ASSIGNBIT_IO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}

void Vcore_five_to_thirtytwo_decoder___nba_comb__TOP__core__reg_status_register__enable_decode__0(Vcore_five_to_thirtytwo_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_five_to_thirtytwo_decoder___nba_comb__TOP__core__reg_status_register__enable_decode__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out = 0U;
    if (((IData)(vlSelfRef.enable) & (0U != (IData)(vlSelfRef.sel)))) {
        VL_ASSIGNBIT_IO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}

void Vcore_five_to_thirtytwo_decoder___ico_comb__TOP__core__reg_status_register__reset_decode__0(Vcore_five_to_thirtytwo_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_five_to_thirtytwo_decoder___ico_comb__TOP__core__reg_status_register__reset_decode__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out = 0U;
    if (((IData)(vlSelfRef.enable) & (0U != (IData)(vlSelfRef.sel)))) {
        VL_ASSIGNBIT_IO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}

void Vcore_five_to_thirtytwo_decoder___act_comb__TOP__core__reg_status_register__reset_decode__0(Vcore_five_to_thirtytwo_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_five_to_thirtytwo_decoder___act_comb__TOP__core__reg_status_register__reset_decode__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out = 0U;
    if (((IData)(vlSelfRef.enable) & (0U != (IData)(vlSelfRef.sel)))) {
        VL_ASSIGNBIT_IO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}

void Vcore_five_to_thirtytwo_decoder___nba_comb__TOP__core__reg_status_register__reset_decode__0(Vcore_five_to_thirtytwo_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_five_to_thirtytwo_decoder___nba_comb__TOP__core__reg_status_register__reset_decode__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out = 0U;
    if (((IData)(vlSelfRef.enable) & (0U != (IData)(vlSelfRef.sel)))) {
        VL_ASSIGNBIT_IO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}
