// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_rs___stl_sequent__TOP__core__reservation_stations__rs0__0(Vcore_rs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_rs___stl_sequent__TOP__core__reservation_stations__rs0__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_WI(1U, vlSelfRef.out, (((0U == (0x0000000fU 
                                                 & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4))) 
                                         & (0U == (0x0000000fU 
                                                   & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4)))) 
                                        & (0U != (0x0000000fU 
                                                  & VL_SEL_IWII(85, vlSelfRef.q_reg, 9U, 4)))));
    vlSelfRef.busy = (1U & VL_BITSEL_IWII(85, vlSelfRef.q_reg, 1U));
    VL_ASSIGNSEL_WI(77, 11, 0x00000042U, vlSelfRef.out, 
                    VL_CONCAT_III(11,3,8, (7U & VL_SEL_IWII(85, vlSelfRef.q_reg, 2U, 3)), 
                                  VL_CONCAT_III(8,4,4, 
                                                (0x0000000fU 
                                                 & VL_SEL_IWII(85, vlSelfRef.q_reg, 5U, 4)), 
                                                (0x0000000fU 
                                                 & VL_SEL_IWII(85, vlSelfRef.q_reg, 9U, 4)))));
    VL_ASSIGNSEL_WQ(77, 64, 2U, vlSelfRef.out, VL_CONCAT_QII(64,32,32, 
                                                             VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000002dU, 32), 
                                                             VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000000dU, 32)));
    VL_ASSIGNBIT_WI(0U, vlSelfRef.out, (1U & VL_BITSEL_IWII(85, vlSelfRef.q_reg, 0U)));
}

VL_ATTR_COLD void Vcore_rs___stl_sequent__TOP__core__reservation_stations__rs1__0(Vcore_rs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_rs___stl_sequent__TOP__core__reservation_stations__rs1__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_WI(1U, vlSelfRef.out, (((0U == (0x0000000fU 
                                                 & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4))) 
                                         & (0U == (0x0000000fU 
                                                   & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4)))) 
                                        & (0U != (0x0000000fU 
                                                  & VL_SEL_IWII(85, vlSelfRef.q_reg, 9U, 4)))));
    vlSelfRef.busy = (1U & VL_BITSEL_IWII(85, vlSelfRef.q_reg, 1U));
    VL_ASSIGNSEL_WI(77, 11, 0x00000042U, vlSelfRef.out, 
                    VL_CONCAT_III(11,3,8, (7U & VL_SEL_IWII(85, vlSelfRef.q_reg, 2U, 3)), 
                                  VL_CONCAT_III(8,4,4, 
                                                (0x0000000fU 
                                                 & VL_SEL_IWII(85, vlSelfRef.q_reg, 5U, 4)), 
                                                (0x0000000fU 
                                                 & VL_SEL_IWII(85, vlSelfRef.q_reg, 9U, 4)))));
    VL_ASSIGNSEL_WQ(77, 64, 2U, vlSelfRef.out, VL_CONCAT_QII(64,32,32, 
                                                             VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000002dU, 32), 
                                                             VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000000dU, 32)));
    VL_ASSIGNBIT_WI(0U, vlSelfRef.out, (1U & VL_BITSEL_IWII(85, vlSelfRef.q_reg, 0U)));
}

VL_ATTR_COLD void Vcore_rs___stl_sequent__TOP__core__reservation_stations__rs2__0(Vcore_rs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_rs___stl_sequent__TOP__core__reservation_stations__rs2__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_WI(1U, vlSelfRef.out, (((0U == (0x0000000fU 
                                                 & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4))) 
                                         & (0U == (0x0000000fU 
                                                   & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4)))) 
                                        & (0U != (0x0000000fU 
                                                  & VL_SEL_IWII(85, vlSelfRef.q_reg, 9U, 4)))));
    vlSelfRef.busy = (1U & VL_BITSEL_IWII(85, vlSelfRef.q_reg, 1U));
    VL_ASSIGNSEL_WI(77, 11, 0x00000042U, vlSelfRef.out, 
                    VL_CONCAT_III(11,3,8, (7U & VL_SEL_IWII(85, vlSelfRef.q_reg, 2U, 3)), 
                                  VL_CONCAT_III(8,4,4, 
                                                (0x0000000fU 
                                                 & VL_SEL_IWII(85, vlSelfRef.q_reg, 5U, 4)), 
                                                (0x0000000fU 
                                                 & VL_SEL_IWII(85, vlSelfRef.q_reg, 9U, 4)))));
    VL_ASSIGNSEL_WQ(77, 64, 2U, vlSelfRef.out, VL_CONCAT_QII(64,32,32, 
                                                             VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000002dU, 32), 
                                                             VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000000dU, 32)));
    VL_ASSIGNBIT_WI(0U, vlSelfRef.out, (1U & VL_BITSEL_IWII(85, vlSelfRef.q_reg, 0U)));
}

VL_ATTR_COLD void Vcore_rs___stl_sequent__TOP__core__reservation_stations__rs3__0(Vcore_rs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_rs___stl_sequent__TOP__core__reservation_stations__rs3__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNBIT_WI(1U, vlSelfRef.out, (((0U == (0x0000000fU 
                                                 & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4))) 
                                         & (0U == (0x0000000fU 
                                                   & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4)))) 
                                        & (0U != (0x0000000fU 
                                                  & VL_SEL_IWII(85, vlSelfRef.q_reg, 9U, 4)))));
    vlSelfRef.busy = (1U & VL_BITSEL_IWII(85, vlSelfRef.q_reg, 1U));
    VL_ASSIGNSEL_WI(77, 11, 0x00000042U, vlSelfRef.out, 
                    VL_CONCAT_III(11,3,8, (7U & VL_SEL_IWII(85, vlSelfRef.q_reg, 2U, 3)), 
                                  VL_CONCAT_III(8,4,4, 
                                                (0x0000000fU 
                                                 & VL_SEL_IWII(85, vlSelfRef.q_reg, 5U, 4)), 
                                                (0x0000000fU 
                                                 & VL_SEL_IWII(85, vlSelfRef.q_reg, 9U, 4)))));
    VL_ASSIGNSEL_WQ(77, 64, 2U, vlSelfRef.out, VL_CONCAT_QII(64,32,32, 
                                                             VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000002dU, 32), 
                                                             VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000000dU, 32)));
    VL_ASSIGNBIT_WI(0U, vlSelfRef.out, (1U & VL_BITSEL_IWII(85, vlSelfRef.q_reg, 0U)));
}

VL_ATTR_COLD void Vcore_rs___ctor_var_reset(Vcore_rs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_rs___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->CDB_in = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 18108829248981814492ull);
    VL_SCOPED_RAND_RESET_W(85, vlSelf->d, __VscopeHash, 1720370409040345145ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710928637576349896ull);
    vlSelf->busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6386567572483775230ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->out, __VscopeHash, 7519490245117619040ull);
    VL_SCOPED_RAND_RESET_W(85, vlSelf->q_reg, __VscopeHash, 3861008368545356645ull);
    VL_SCOPED_RAND_RESET_W(85, vlSelf->__Vdly__q_reg, __VscopeHash, 10070838539913831060ull);
}
