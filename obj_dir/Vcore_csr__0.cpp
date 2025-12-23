// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_csr___ico_sequent__TOP__core__csrs__0(Vcore_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr___ico_sequent__TOP__core__csrs__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mepc_ReadData = ((0x011fU >= (0x000001ffU 
                                            & VL_SEL_IIII(32, 
                                                          VL_SHIFTL_III(32,32,32, 
                                                                        VL_EXTEND_II(32,3, 
                                                                                ([&]() {
                                    vlSelfRef.__Vfunc_index__0__csr = 0x0300U;
                                    vlSelfRef.__Vfunc_index__0__Vfuncout 
                                        = ((0x0300U 
                                            == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                            ? 0U : 
                                           ((0x0305U 
                                             == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                             ? 1U : 
                                            ((0x0314U 
                                              == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                              ? 2U : 
                                             ((0x0341U 
                                               == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                               ? 3U
                                               : 7U))));
                                }(), (IData)(vlSelfRef.__Vfunc_index__0__Vfuncout))), 5U), 0U, 9)))
                                ? VL_SEL_IWII(288, vlSelfRef.csr_data, 
                                              (0x000001ffU 
                                               & VL_SEL_IIII(32, 
                                                             VL_SHIFTL_III(32,32,32, 
                                                                           VL_EXTEND_II(32,3, 
                                                                                ([&]() {
                                    vlSelfRef.__Vfunc_index__1__csr = 0x0300U;
                                    vlSelfRef.__Vfunc_index__1__Vfuncout 
                                        = ((0x0300U 
                                            == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                            ? 0U : 
                                           ((0x0305U 
                                             == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                             ? 1U : 
                                            ((0x0314U 
                                              == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                              ? 2U : 
                                             ((0x0341U 
                                               == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                               ? 3U
                                               : 7U))));
                                }(), (IData)(vlSelfRef.__Vfunc_index__1__Vfuncout))), 5U), 0U, 9)), 32)
                                : 0U);
    vlSelfRef.mtvec_ReadData = ((0x011fU >= (0x000001ffU 
                                             & VL_SEL_IIII(32, 
                                                           VL_SHIFTL_III(32,32,32, 
                                                                         VL_EXTEND_II(32,3, 
                                                                                ([&]() {
                                    vlSelfRef.__Vfunc_index__2__csr = 0x0305U;
                                    vlSelfRef.__Vfunc_index__2__Vfuncout 
                                        = ((0x0300U 
                                            == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                            ? 0U : 
                                           ((0x0305U 
                                             == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                             ? 1U : 
                                            ((0x0314U 
                                              == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                              ? 2U : 
                                             ((0x0341U 
                                               == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                               ? 3U
                                               : 7U))));
                                }(), (IData)(vlSelfRef.__Vfunc_index__2__Vfuncout))), 5U), 0U, 9)))
                                 ? VL_SEL_IWII(288, vlSelfRef.csr_data, 
                                               (0x000001ffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_SHIFTL_III(32,32,32, 
                                                                            VL_EXTEND_II(32,3, 
                                                                                ([&]() {
                                    vlSelfRef.__Vfunc_index__3__csr = 0x0305U;
                                    vlSelfRef.__Vfunc_index__3__Vfuncout 
                                        = ((0x0300U 
                                            == (IData)(vlSelfRef.__Vfunc_index__3__csr))
                                            ? 0U : 
                                           ((0x0305U 
                                             == (IData)(vlSelfRef.__Vfunc_index__3__csr))
                                             ? 1U : 
                                            ((0x0314U 
                                              == (IData)(vlSelfRef.__Vfunc_index__3__csr))
                                              ? 2U : 
                                             ((0x0341U 
                                               == (IData)(vlSelfRef.__Vfunc_index__3__csr))
                                               ? 3U
                                               : 7U))));
                                }(), (IData)(vlSelfRef.__Vfunc_index__3__Vfuncout))), 5U), 0U, 9)), 32)
                                 : 0U);
}

void Vcore_csr___ico_comb__TOP__core__csrs__0(Vcore_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr___ico_comb__TOP__core__csrs__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_ReadData = ((IData)(vlSelfRef.valid_read)
                               ? ((0x011fU >= (0x000001ffU 
                                               & VL_SEL_IIII(32, 
                                                             VL_SHIFTL_III(32,32,32, 
                                                                           VL_EXTEND_II(32,3, (IData)(vlSelfRef.csr_read_select)), 5U), 0U, 9)))
                                   ? VL_SEL_IWII(288, vlSelfRef.csr_data, 
                                                 (0x000001ffU 
                                                  & VL_SEL_IIII(32, 
                                                                VL_SHIFTL_III(32,32,32, 
                                                                              VL_EXTEND_II(32,3, (IData)(vlSelfRef.csr_read_select)), 5U), 0U, 9)), 32)
                                   : 0U) : 0U);
}

void Vcore_csr___ico_comb__TOP__core__csrs__1(Vcore_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr___ico_comb__TOP__core__csrs__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.illegal_access_e = (((IData)(vlSelfRef.valid_write) 
                                   | (0U == (IData)(vlSelfRef.special))) 
                                  & (0U == (IData)(vlSelfRef.curr_priv)));
    vlSelfRef.mret = ((0U == (IData)(vlSelfRef.special)) 
                      & (0U != (IData)(vlSelfRef.curr_priv)));
}

void Vcore_csr___act_sequent__TOP__core__csrs__0(Vcore_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr___act_sequent__TOP__core__csrs__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_ReadData = ((IData)(vlSelfRef.valid_read)
                               ? ((0x011fU >= (0x000001ffU 
                                               & VL_SEL_IIII(32, 
                                                             VL_SHIFTL_III(32,32,32, 
                                                                           VL_EXTEND_II(32,3, (IData)(vlSelfRef.csr_read_select)), 5U), 0U, 9)))
                                   ? VL_SEL_IWII(288, vlSelfRef.csr_data, 
                                                 (0x000001ffU 
                                                  & VL_SEL_IIII(32, 
                                                                VL_SHIFTL_III(32,32,32, 
                                                                              VL_EXTEND_II(32,3, (IData)(vlSelfRef.csr_read_select)), 5U), 0U, 9)), 32)
                                   : 0U) : 0U);
}

void Vcore_csr___act_sequent__TOP__core__csrs__1(Vcore_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr___act_sequent__TOP__core__csrs__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.illegal_access_e = (((IData)(vlSelfRef.valid_write) 
                                   | (0U == (IData)(vlSelfRef.special))) 
                                  & (0U == (IData)(vlSelfRef.curr_priv)));
    vlSelfRef.mret = ((0U == (IData)(vlSelfRef.special)) 
                      & (0U != (IData)(vlSelfRef.curr_priv)));
}

extern const VlWide<9>/*287:0*/ Vcore__ConstPool__CONST_h9a2fc1c8_0;

void Vcore_csr___nba_sequent__TOP__core__csrs__0(Vcore_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr___nba_sequent__TOP__core__csrs__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(288, vlSelfRef.__Vdly__csr_data, vlSelfRef.csr_data);
    VL_ASSIGN_W(288, vlSelfRef.__Vdly__csr_data, vlSelfRef.csr_data);
    if (vlSelfRef.reset) {
        VL_ASSIGN_W(288, vlSelfRef.__Vdly__csr_data, Vcore__ConstPool__CONST_h9a2fc1c8_0);
    } else if (vlSelfRef.exception) {
        VL_ASSIGNSEL_WI(288, 32, 0x0040U, vlSelfRef.__Vdly__csr_data, vlSelfRef.mepc_WriteData);
        VL_ASSIGNSEL_WI(288, 32, 0U, vlSelfRef.__Vdly__csr_data, 
                        VL_CONCAT_III(32,19,13, (0x0007ffffU 
                                                 & VL_SEL_IWII(288, vlSelfRef.csr_data, 0x0000000dU, 19)), 
                                      VL_CONCAT_III(13,6,7, 
                                                    VL_CONCAT_III(6,2,4, (IData)(vlSelfRef.curr_priv), 
                                                                  VL_CONCAT_III(4,3,1, 
                                                                                (7U 
                                                                                & VL_SEL_IWII(288, vlSelfRef.csr_data, 8U, 3)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(288, vlSelfRef.csr_data, 3U)))), 
                                                    VL_CONCAT_III(7,3,4, 
                                                                  (7U 
                                                                   & VL_SEL_IWII(288, vlSelfRef.csr_data, 4U, 3)), 
                                                                  VL_EXTEND_II(4,3, 
                                                                               (7U 
                                                                                & VL_SEL_IWII(288, vlSelfRef.csr_data, 0U, 3)))))));
        VL_ASSIGNSEL_WI(288, 32, 0x0060U, vlSelfRef.__Vdly__csr_data, 
                        ((1U == (IData)(vlSelfRef.special))
                          ? ((3U == (IData)(vlSelfRef.curr_priv))
                              ? 0x0000000bU : 8U) : 
                         VL_EXTEND_II(32,8, (IData)(vlSelfRef.mcause))));
    } else if (((IData)(vlSelfRef.valid_write) & (~ (IData)(vlSelfRef.illegal_access_e)))) {
        vlSelfRef.__Vlvbound_ha782512b__0 = vlSelfRef.csr_WriteData;
        if (VL_LIKELY(((0x011fU >= (0x000001ffU & VL_SEL_IIII(32, 
                                                              VL_SHIFTL_III(32,32,32, 
                                                                            VL_EXTEND_II(32,3, (IData)(vlSelfRef.csr_write_select)), 5U), 0U, 9)))))) {
            VL_ASSIGNSEL_WI(288, 32, (0x000001ffU & 
                                      VL_SEL_IIII(32, 
                                                  VL_SHIFTL_III(32,32,32, 
                                                                VL_EXTEND_II(32,3, (IData)(vlSelfRef.csr_write_select)), 5U), 0U, 9)), vlSelfRef.__Vdly__csr_data, vlSelfRef.__Vlvbound_ha782512b__0);
        }
    } else if (((0U == (IData)(vlSelfRef.special)) 
                & (~ (IData)(vlSelfRef.illegal_access_e)))) {
        VL_ASSIGNSEL_WI(288, 32, 0U, vlSelfRef.__Vdly__csr_data, 
                        VL_CONCAT_III(32,19,13, (0x0007ffffU 
                                                 & VL_SEL_IWII(288, vlSelfRef.csr_data, 0x0000000dU, 19)), 
                                      VL_EXTEND_II(13,11, 
                                                   VL_CONCAT_III(11,3,8, 
                                                                 (7U 
                                                                  & VL_SEL_IWII(288, vlSelfRef.csr_data, 8U, 3)), 
                                                                 VL_EXTEND_II(8,7, 
                                                                              VL_CONCAT_III(7,3,4, 
                                                                                (7U 
                                                                                & VL_SEL_IWII(288, vlSelfRef.csr_data, 4U, 3)), 
                                                                                VL_CONCAT_III(4,1,3, 
                                                                                (1U 
                                                                                & VL_BITSEL_IWII(288, vlSelfRef.csr_data, 7U)), 
                                                                                (7U 
                                                                                & VL_SEL_IWII(288, vlSelfRef.csr_data, 0U, 3)))))))));
    }
    vlSelfRef.__Vdly__curr_priv = vlSelfRef.curr_priv;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__curr_priv = 3U;
    } else if (vlSelfRef.exception) {
        vlSelfRef.__Vdly__curr_priv = 3U;
    } else if ((0U == (IData)(vlSelfRef.special))) {
        vlSelfRef.__Vdly__curr_priv = (3U & VL_SEL_IWII(288, vlSelfRef.csr_data, 0x0000000bU, 2));
    }
    vlSelfRef.curr_priv = vlSelfRef.__Vdly__curr_priv;
    VL_ASSIGN_W(288, vlSelfRef.csr_data, vlSelfRef.__Vdly__csr_data);
    vlSelfRef.mepc_ReadData = ((0x011fU >= (0x000001ffU 
                                            & VL_SEL_IIII(32, 
                                                          VL_SHIFTL_III(32,32,32, 
                                                                        VL_EXTEND_II(32,3, 
                                                                                ([&]() {
                                    vlSelfRef.__Vfunc_index__0__csr = 0x0300U;
                                    vlSelfRef.__Vfunc_index__0__Vfuncout 
                                        = ((0x0300U 
                                            == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                            ? 0U : 
                                           ((0x0305U 
                                             == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                             ? 1U : 
                                            ((0x0314U 
                                              == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                              ? 2U : 
                                             ((0x0341U 
                                               == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                               ? 3U
                                               : 7U))));
                                }(), (IData)(vlSelfRef.__Vfunc_index__0__Vfuncout))), 5U), 0U, 9)))
                                ? VL_SEL_IWII(288, vlSelfRef.csr_data, 
                                              (0x000001ffU 
                                               & VL_SEL_IIII(32, 
                                                             VL_SHIFTL_III(32,32,32, 
                                                                           VL_EXTEND_II(32,3, 
                                                                                ([&]() {
                                    vlSelfRef.__Vfunc_index__1__csr = 0x0300U;
                                    vlSelfRef.__Vfunc_index__1__Vfuncout 
                                        = ((0x0300U 
                                            == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                            ? 0U : 
                                           ((0x0305U 
                                             == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                             ? 1U : 
                                            ((0x0314U 
                                              == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                              ? 2U : 
                                             ((0x0341U 
                                               == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                               ? 3U
                                               : 7U))));
                                }(), (IData)(vlSelfRef.__Vfunc_index__1__Vfuncout))), 5U), 0U, 9)), 32)
                                : 0U);
    vlSelfRef.mtvec_ReadData = ((0x011fU >= (0x000001ffU 
                                             & VL_SEL_IIII(32, 
                                                           VL_SHIFTL_III(32,32,32, 
                                                                         VL_EXTEND_II(32,3, 
                                                                                ([&]() {
                                    vlSelfRef.__Vfunc_index__2__csr = 0x0305U;
                                    vlSelfRef.__Vfunc_index__2__Vfuncout 
                                        = ((0x0300U 
                                            == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                            ? 0U : 
                                           ((0x0305U 
                                             == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                             ? 1U : 
                                            ((0x0314U 
                                              == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                              ? 2U : 
                                             ((0x0341U 
                                               == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                               ? 3U
                                               : 7U))));
                                }(), (IData)(vlSelfRef.__Vfunc_index__2__Vfuncout))), 5U), 0U, 9)))
                                 ? VL_SEL_IWII(288, vlSelfRef.csr_data, 
                                               (0x000001ffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_SHIFTL_III(32,32,32, 
                                                                            VL_EXTEND_II(32,3, 
                                                                                ([&]() {
                                    vlSelfRef.__Vfunc_index__3__csr = 0x0305U;
                                    vlSelfRef.__Vfunc_index__3__Vfuncout 
                                        = ((0x0300U 
                                            == (IData)(vlSelfRef.__Vfunc_index__3__csr))
                                            ? 0U : 
                                           ((0x0305U 
                                             == (IData)(vlSelfRef.__Vfunc_index__3__csr))
                                             ? 1U : 
                                            ((0x0314U 
                                              == (IData)(vlSelfRef.__Vfunc_index__3__csr))
                                              ? 2U : 
                                             ((0x0341U 
                                               == (IData)(vlSelfRef.__Vfunc_index__3__csr))
                                               ? 3U
                                               : 7U))));
                                }(), (IData)(vlSelfRef.__Vfunc_index__3__Vfuncout))), 5U), 0U, 9)), 32)
                                 : 0U);
}

void Vcore_csr___nba_comb__TOP__core__csrs__0(Vcore_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr___nba_comb__TOP__core__csrs__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_ReadData = ((IData)(vlSelfRef.valid_read)
                               ? ((0x011fU >= (0x000001ffU 
                                               & VL_SEL_IIII(32, 
                                                             VL_SHIFTL_III(32,32,32, 
                                                                           VL_EXTEND_II(32,3, (IData)(vlSelfRef.csr_read_select)), 5U), 0U, 9)))
                                   ? VL_SEL_IWII(288, vlSelfRef.csr_data, 
                                                 (0x000001ffU 
                                                  & VL_SEL_IIII(32, 
                                                                VL_SHIFTL_III(32,32,32, 
                                                                              VL_EXTEND_II(32,3, (IData)(vlSelfRef.csr_read_select)), 5U), 0U, 9)), 32)
                                   : 0U) : 0U);
}

void Vcore_csr___nba_comb__TOP__core__csrs__1(Vcore_csr* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_csr___nba_comb__TOP__core__csrs__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.illegal_access_e = (((IData)(vlSelfRef.valid_write) 
                                   | (0U == (IData)(vlSelfRef.special))) 
                                  & (0U == (IData)(vlSelfRef.curr_priv)));
    vlSelfRef.mret = ((0U == (IData)(vlSelfRef.special)) 
                      & (0U != (IData)(vlSelfRef.curr_priv)));
}
