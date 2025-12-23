// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_cdb_scheduler___ico_sequent__TOP__core__cdb__0(Vcore_cdb_scheduler* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_cdb_scheduler___ico_sequent__TOP__core__cdb__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 4U))) {
        vlSelfRef.new_CDB = vlSelfRef.mem_out;
        vlSelfRef.yummi_in_bus = 0x10U;
    } else if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 5U))) {
        vlSelfRef.new_CDB = vlSelfRef.shift_out;
        vlSelfRef.yummi_in_bus = 0x20U;
    } else if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 3U))) {
        vlSelfRef.new_CDB = vlSelfRef.div_out;
        vlSelfRef.yummi_in_bus = 8U;
    } else if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 2U))) {
        vlSelfRef.new_CDB = vlSelfRef.mult_out;
        vlSelfRef.yummi_in_bus = 4U;
    } else if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 1U))) {
        vlSelfRef.new_CDB = vlSelfRef.adder_1_out;
        vlSelfRef.yummi_in_bus = 2U;
    } else if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 0U))) {
        vlSelfRef.new_CDB = vlSelfRef.adder_0_out;
        vlSelfRef.yummi_in_bus = 1U;
    } else {
        VL_ASSIGNSEL_QQ(38, 37, 1U, vlSelfRef.new_CDB, 0ULL);
        vlSelfRef.yummi_in_bus = 0U;
    }
}

void Vcore_cdb_scheduler___nba_comb__TOP__core__cdb__0(Vcore_cdb_scheduler* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_cdb_scheduler___nba_comb__TOP__core__cdb__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 4U))) {
        vlSelfRef.new_CDB = vlSelfRef.mem_out;
        vlSelfRef.yummi_in_bus = 0x10U;
    } else if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 5U))) {
        vlSelfRef.new_CDB = vlSelfRef.shift_out;
        vlSelfRef.yummi_in_bus = 0x20U;
    } else if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 3U))) {
        vlSelfRef.new_CDB = vlSelfRef.div_out;
        vlSelfRef.yummi_in_bus = 8U;
    } else if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 2U))) {
        vlSelfRef.new_CDB = vlSelfRef.mult_out;
        vlSelfRef.yummi_in_bus = 4U;
    } else if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 1U))) {
        vlSelfRef.new_CDB = vlSelfRef.adder_1_out;
        vlSelfRef.yummi_in_bus = 2U;
    } else if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 0U))) {
        vlSelfRef.new_CDB = vlSelfRef.adder_0_out;
        vlSelfRef.yummi_in_bus = 1U;
    } else {
        VL_ASSIGNSEL_QQ(38, 37, 1U, vlSelfRef.new_CDB, 0ULL);
        vlSelfRef.yummi_in_bus = 0U;
    }
}
