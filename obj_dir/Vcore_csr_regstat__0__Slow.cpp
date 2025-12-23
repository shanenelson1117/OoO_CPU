// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_csr_regstat___stl_sequent__TOP__core__csr_register_status__0(Vcore_csr_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr_regstat___stl_sequent__TOP__core__csr_register_status__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.d = VL_CONCAT_III(5,4,1, (IData)(vlSelfRef.issue_ROB), 1U);
}

VL_ATTR_COLD void Vcore_csr_regstat___stl_comb__TOP__core__csr_register_status__0(Vcore_csr_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr_regstat___stl_comb__TOP__core__csr_register_status__0\n"); );
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

VL_ATTR_COLD void Vcore_csr_regstat___stl_comb__TOP__core__csr_register_status__1(Vcore_csr_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr_regstat___stl_comb__TOP__core__csr_register_status__1\n"); );
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

VL_ATTR_COLD void Vcore_csr_regstat___ctor_var_reset(Vcore_csr_regstat* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr_regstat___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->issue_csr_valid_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11773079183719742632ull);
    vlSelf->commit_csr_valid_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17342650222553503820ull);
    vlSelf->commit_csr_write_select = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5322620241823764027ull);
    vlSelf->issue_csr_write_select = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1074160397596107661ull);
    vlSelf->stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7179230919112499263ull);
    vlSelf->commit_ROB = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5206458954467531095ull);
    vlSelf->issue_ROB = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8735798383957513358ull);
    vlSelf->csr_valid_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14473937940865524649ull);
    vlSelf->busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6386567572483775230ull);
    vlSelf->reg_stat_data = VL_SCOPED_RAND_RESET_Q(45, __VscopeHash, 11745402535543844801ull);
    vlSelf->d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1720370409040345145ull);
    vlSelf->reset_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9486116574124460597ull);
    vlSelf->write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3448544431963303041ull);
    vlSelf->__Vlvbound_h72234604__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3717532548608519379ull);
    vlSelf->__Vlvbound_h0823f771__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7291128058000391081ull);
    vlSelf->__Vdly__reg_stat_data = VL_SCOPED_RAND_RESET_Q(45, __VscopeHash, 12233758145387917136ull);
}
