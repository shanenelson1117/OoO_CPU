// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_csr_regstat___ico_sequent__TOP__core__csr_register_status__0(Vcore_csr_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr_regstat___ico_sequent__TOP__core__csr_register_status__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.d = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.issue_ROB), 1U);
}

void Vcore_csr_regstat___ico_comb__TOP__core__csr_register_status__0(Vcore_csr_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr_regstat___ico_comb__TOP__core__csr_register_status__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.write_enable = ((IData)(vlSelfRef.issue_csr_valid_write) 
                              & (~ VL_BITSEL_IQII(45, vlSelfRef.reg_stat_data, 
                                                  VL_EXTEND_II(32,6, 
                                                               (0x0000003fU 
                                                                & VL_SEL_IIII(32, 
                                                                              ((IData)(5U) 
                                                                               * 
                                                                               VL_EXTEND_II(32,3, (IData)(vlSelfRef.issue_csr_write_select))), 0U, 6))))));
    vlSelfRef.busy = (1U & (VL_BITSEL_IQII(45, vlSelfRef.reg_stat_data, 
                                           VL_EXTEND_II(32,6, 
                                                        (0x0000003fU 
                                                         & VL_SEL_IIII(32, 
                                                                       ((IData)(5U) 
                                                                        * 
                                                                        VL_EXTEND_II(32,3, (IData)(vlSelfRef.issue_csr_write_select))), 0U, 6)))) 
                            & (~ (IData)(vlSelfRef.csr_valid_read))));
}

void Vcore_csr_regstat___ico_comb__TOP__core__csr_register_status__1(Vcore_csr_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr_regstat___ico_comb__TOP__core__csr_register_status__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reset_enable = (((IData)(vlSelfRef.commit_csr_valid_write) 
                               & ((0x0000000fU & VL_SEL_IQII(45, vlSelfRef.reg_stat_data, 
                                                             ((IData)(1U) 
                                                              + 
                                                              VL_EXTEND_II(32,6, 
                                                                           (0x0000003fU 
                                                                            & VL_SEL_IIII(32, 
                                                                                ((IData)(5U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,3, (IData)(vlSelfRef.commit_csr_write_select))), 0U, 6)))), 4)) 
                                  == (IData)(vlSelfRef.commit_ROB))) 
                              & (~ (((IData)(vlSelfRef.issue_csr_write_select) 
                                     == (IData)(vlSelfRef.commit_csr_write_select)) 
                                    & (IData)(vlSelfRef.issue_csr_valid_write))));
}

void Vcore_csr_regstat___act_sequent__TOP__core__csr_register_status__0(Vcore_csr_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr_regstat___act_sequent__TOP__core__csr_register_status__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.write_enable = ((IData)(vlSelfRef.issue_csr_valid_write) 
                              & (~ VL_BITSEL_IQII(45, vlSelfRef.reg_stat_data, 
                                                  VL_EXTEND_II(32,6, 
                                                               (0x0000003fU 
                                                                & VL_SEL_IIII(32, 
                                                                              ((IData)(5U) 
                                                                               * 
                                                                               VL_EXTEND_II(32,3, (IData)(vlSelfRef.issue_csr_write_select))), 0U, 6))))));
    vlSelfRef.busy = (1U & (VL_BITSEL_IQII(45, vlSelfRef.reg_stat_data, 
                                           VL_EXTEND_II(32,6, 
                                                        (0x0000003fU 
                                                         & VL_SEL_IIII(32, 
                                                                       ((IData)(5U) 
                                                                        * 
                                                                        VL_EXTEND_II(32,3, (IData)(vlSelfRef.issue_csr_write_select))), 0U, 6)))) 
                            & (~ (IData)(vlSelfRef.csr_valid_read))));
}

void Vcore_csr_regstat___act_comb__TOP__core__csr_register_status__0(Vcore_csr_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr_regstat___act_comb__TOP__core__csr_register_status__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reset_enable = (((IData)(vlSelfRef.commit_csr_valid_write) 
                               & ((0x0000000fU & VL_SEL_IQII(45, vlSelfRef.reg_stat_data, 
                                                             ((IData)(1U) 
                                                              + 
                                                              VL_EXTEND_II(32,6, 
                                                                           (0x0000003fU 
                                                                            & VL_SEL_IIII(32, 
                                                                                ((IData)(5U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,3, (IData)(vlSelfRef.commit_csr_write_select))), 0U, 6)))), 4)) 
                                  == (IData)(vlSelfRef.commit_ROB))) 
                              & (~ (((IData)(vlSelfRef.issue_csr_write_select) 
                                     == (IData)(vlSelfRef.commit_csr_write_select)) 
                                    & (IData)(vlSelfRef.issue_csr_valid_write))));
}

void Vcore_csr_regstat___nba_sequent__TOP__core__csr_register_status__0(Vcore_csr_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr_regstat___nba_sequent__TOP__core__csr_register_status__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__reg_stat_data = vlSelfRef.reg_stat_data;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__reg_stat_data = 0ULL;
    } else if (((IData)(vlSelfRef.write_enable) & (~ (IData)(vlSelfRef.stall)))) {
        vlSelfRef.__Vlvbound_h72234604__0 = vlSelfRef.d;
        if (VL_LIKELY(((0x2cU >= (0x0000003fU & VL_SEL_IIII(32, 
                                                            ((IData)(5U) 
                                                             * 
                                                             VL_EXTEND_II(32,3, (IData)(vlSelfRef.issue_csr_write_select))), 0U, 6)))))) {
            VL_ASSIGNSEL_QI(45, 5, (0x0000003fU & VL_SEL_IIII(32, 
                                                              ((IData)(5U) 
                                                               * 
                                                               VL_EXTEND_II(32,3, (IData)(vlSelfRef.issue_csr_write_select))), 0U, 6)), vlSelfRef.__Vdly__reg_stat_data, vlSelfRef.__Vlvbound_h72234604__0);
        }
    }
    if (vlSelfRef.reset_enable) {
        vlSelfRef.__Vlvbound_h0823f771__0 = 0U;
        if (VL_LIKELY(((0x2cU >= (0x0000003fU & VL_SEL_IIII(32, 
                                                            ((IData)(5U) 
                                                             * 
                                                             VL_EXTEND_II(32,3, (IData)(vlSelfRef.commit_csr_write_select))), 0U, 6)))))) {
            VL_ASSIGNSEL_QI(45, 5, (0x0000003fU & VL_SEL_IIII(32, 
                                                              ((IData)(5U) 
                                                               * 
                                                               VL_EXTEND_II(32,3, (IData)(vlSelfRef.commit_csr_write_select))), 0U, 6)), vlSelfRef.__Vdly__reg_stat_data, vlSelfRef.__Vlvbound_h0823f771__0);
        }
    }
    vlSelfRef.reg_stat_data = vlSelfRef.__Vdly__reg_stat_data;
}

void Vcore_csr_regstat___nba_sequent__TOP__core__csr_register_status__1(Vcore_csr_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr_regstat___nba_sequent__TOP__core__csr_register_status__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.d = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.issue_ROB), 1U);
}

void Vcore_csr_regstat___nba_comb__TOP__core__csr_register_status__0(Vcore_csr_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr_regstat___nba_comb__TOP__core__csr_register_status__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.write_enable = ((IData)(vlSelfRef.issue_csr_valid_write) 
                              & (~ VL_BITSEL_IQII(45, vlSelfRef.reg_stat_data, 
                                                  VL_EXTEND_II(32,6, 
                                                               (0x0000003fU 
                                                                & VL_SEL_IIII(32, 
                                                                              ((IData)(5U) 
                                                                               * 
                                                                               VL_EXTEND_II(32,3, (IData)(vlSelfRef.issue_csr_write_select))), 0U, 6))))));
    vlSelfRef.busy = (1U & (VL_BITSEL_IQII(45, vlSelfRef.reg_stat_data, 
                                           VL_EXTEND_II(32,6, 
                                                        (0x0000003fU 
                                                         & VL_SEL_IIII(32, 
                                                                       ((IData)(5U) 
                                                                        * 
                                                                        VL_EXTEND_II(32,3, (IData)(vlSelfRef.issue_csr_write_select))), 0U, 6)))) 
                            & (~ (IData)(vlSelfRef.csr_valid_read))));
}

void Vcore_csr_regstat___nba_comb__TOP__core__csr_register_status__1(Vcore_csr_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr_regstat___nba_comb__TOP__core__csr_register_status__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reset_enable = (((IData)(vlSelfRef.commit_csr_valid_write) 
                               & ((0x0000000fU & VL_SEL_IQII(45, vlSelfRef.reg_stat_data, 
                                                             ((IData)(1U) 
                                                              + 
                                                              VL_EXTEND_II(32,6, 
                                                                           (0x0000003fU 
                                                                            & VL_SEL_IIII(32, 
                                                                                ((IData)(5U) 
                                                                                * 
                                                                                VL_EXTEND_II(32,3, (IData)(vlSelfRef.commit_csr_write_select))), 0U, 6)))), 4)) 
                                  == (IData)(vlSelfRef.commit_ROB))) 
                              & (~ (((IData)(vlSelfRef.issue_csr_write_select) 
                                     == (IData)(vlSelfRef.commit_csr_write_select)) 
                                    & (IData)(vlSelfRef.issue_csr_valid_write))));
}
