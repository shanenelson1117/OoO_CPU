// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_rs___ico_sequent__TOP__core__reservation_stations__rs0__0(Vcore_rs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_rs___ico_sequent__TOP__core__reservation_stations__rs0__0\n"); );
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

void Vcore_rs___nba_sequent__TOP__core__reservation_stations__rs0__0(Vcore_rs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_rs___nba_sequent__TOP__core__reservation_stations__rs0__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(85, vlSelfRef.__Vdly__q_reg, vlSelfRef.q_reg);
    if (vlSelfRef.reset) {
        VL_CONST_W_1X(85,vlSelfRef.__Vdly__q_reg,0x00000008);
    } else if (vlSelfRef.wr_en) {
        VL_ASSIGN_W(85, vlSelfRef.__Vdly__q_reg, vlSelfRef.d);
    } else {
        if (((((0x0000000fU & VL_SEL_IQII(38, vlSelfRef.CDB_in, 0x00000022U, 4)) 
               == (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4))) 
              & (0U != (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4)))) 
             & (~ VL_BITSEL_IQII(38, vlSelfRef.CDB_in, 0U)))) {
            VL_ASSIGNSEL_WI(85, 4, 0x00000051U, vlSelfRef.__Vdly__q_reg, 0U);
            VL_ASSIGNSEL_WI(85, 32, 0x0000002dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IQII(38, vlSelfRef.CDB_in, 2U, 32));
        } else {
            VL_ASSIGNSEL_WI(85, 4, 0x00000051U, vlSelfRef.__Vdly__q_reg, 
                            (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4)));
            VL_ASSIGNSEL_WI(85, 32, 0x0000002dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000002dU, 32));
        }
        if (((((0x0000000fU & VL_SEL_IQII(38, vlSelfRef.CDB_in, 0x00000022U, 4)) 
               == (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4))) 
              & (0U != (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4)))) 
             & (~ VL_BITSEL_IQII(38, vlSelfRef.CDB_in, 0U)))) {
            VL_ASSIGNSEL_WI(85, 4, 0x0000004dU, vlSelfRef.__Vdly__q_reg, 0U);
            VL_ASSIGNSEL_WI(85, 32, 0x0000000dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IQII(38, vlSelfRef.CDB_in, 2U, 32));
        } else {
            VL_ASSIGNSEL_WI(85, 4, 0x0000004dU, vlSelfRef.__Vdly__q_reg, 
                            (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4)));
            VL_ASSIGNSEL_WI(85, 32, 0x0000000dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000000dU, 32));
        }
        VL_ASSIGNSEL_WI(85, 11, 2U, vlSelfRef.__Vdly__q_reg, 
                        VL_CONCAT_III(11,4,7, (0x0000000fU 
                                               & VL_SEL_IWII(85, vlSelfRef.q_reg, 9U, 4)), 
                                      VL_CONCAT_III(7,4,3, 
                                                    (0x0000000fU 
                                                     & VL_SEL_IWII(85, vlSelfRef.q_reg, 5U, 4)), 
                                                    (7U 
                                                     & VL_SEL_IWII(85, vlSelfRef.q_reg, 2U, 3)))));
        VL_ASSIGNSEL_WI(85, 2, 0U, vlSelfRef.__Vdly__q_reg, 
                        VL_CONCAT_III(2,1,1, (1U & 
                                              VL_BITSEL_IWII(85, vlSelfRef.q_reg, 1U)), 
                                      (1U & VL_BITSEL_IWII(85, vlSelfRef.q_reg, 0U))));
    }
    VL_ASSIGN_W(85, vlSelfRef.q_reg, vlSelfRef.__Vdly__q_reg);
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

void Vcore_rs___ico_sequent__TOP__core__reservation_stations__rs1__0(Vcore_rs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_rs___ico_sequent__TOP__core__reservation_stations__rs1__0\n"); );
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

void Vcore_rs___nba_sequent__TOP__core__reservation_stations__rs1__0(Vcore_rs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_rs___nba_sequent__TOP__core__reservation_stations__rs1__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(85, vlSelfRef.__Vdly__q_reg, vlSelfRef.q_reg);
    if (vlSelfRef.reset) {
        VL_CONST_W_1X(85,vlSelfRef.__Vdly__q_reg,0x00000008);
    } else if (vlSelfRef.wr_en) {
        VL_ASSIGN_W(85, vlSelfRef.__Vdly__q_reg, vlSelfRef.d);
    } else {
        if (((((0x0000000fU & VL_SEL_IQII(38, vlSelfRef.CDB_in, 0x00000022U, 4)) 
               == (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4))) 
              & (0U != (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4)))) 
             & (~ VL_BITSEL_IQII(38, vlSelfRef.CDB_in, 0U)))) {
            VL_ASSIGNSEL_WI(85, 4, 0x00000051U, vlSelfRef.__Vdly__q_reg, 0U);
            VL_ASSIGNSEL_WI(85, 32, 0x0000002dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IQII(38, vlSelfRef.CDB_in, 2U, 32));
        } else {
            VL_ASSIGNSEL_WI(85, 4, 0x00000051U, vlSelfRef.__Vdly__q_reg, 
                            (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4)));
            VL_ASSIGNSEL_WI(85, 32, 0x0000002dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000002dU, 32));
        }
        if (((((0x0000000fU & VL_SEL_IQII(38, vlSelfRef.CDB_in, 0x00000022U, 4)) 
               == (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4))) 
              & (0U != (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4)))) 
             & (~ VL_BITSEL_IQII(38, vlSelfRef.CDB_in, 0U)))) {
            VL_ASSIGNSEL_WI(85, 4, 0x0000004dU, vlSelfRef.__Vdly__q_reg, 0U);
            VL_ASSIGNSEL_WI(85, 32, 0x0000000dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IQII(38, vlSelfRef.CDB_in, 2U, 32));
        } else {
            VL_ASSIGNSEL_WI(85, 4, 0x0000004dU, vlSelfRef.__Vdly__q_reg, 
                            (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4)));
            VL_ASSIGNSEL_WI(85, 32, 0x0000000dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000000dU, 32));
        }
        VL_ASSIGNSEL_WI(85, 11, 2U, vlSelfRef.__Vdly__q_reg, 
                        VL_CONCAT_III(11,4,7, (0x0000000fU 
                                               & VL_SEL_IWII(85, vlSelfRef.q_reg, 9U, 4)), 
                                      VL_CONCAT_III(7,4,3, 
                                                    (0x0000000fU 
                                                     & VL_SEL_IWII(85, vlSelfRef.q_reg, 5U, 4)), 
                                                    (7U 
                                                     & VL_SEL_IWII(85, vlSelfRef.q_reg, 2U, 3)))));
        VL_ASSIGNSEL_WI(85, 2, 0U, vlSelfRef.__Vdly__q_reg, 
                        VL_CONCAT_III(2,1,1, (1U & 
                                              VL_BITSEL_IWII(85, vlSelfRef.q_reg, 1U)), 
                                      (1U & VL_BITSEL_IWII(85, vlSelfRef.q_reg, 0U))));
    }
    VL_ASSIGN_W(85, vlSelfRef.q_reg, vlSelfRef.__Vdly__q_reg);
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

void Vcore_rs___ico_sequent__TOP__core__reservation_stations__rs2__0(Vcore_rs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_rs___ico_sequent__TOP__core__reservation_stations__rs2__0\n"); );
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

void Vcore_rs___nba_sequent__TOP__core__reservation_stations__rs2__0(Vcore_rs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_rs___nba_sequent__TOP__core__reservation_stations__rs2__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(85, vlSelfRef.__Vdly__q_reg, vlSelfRef.q_reg);
    if (vlSelfRef.reset) {
        VL_CONST_W_1X(85,vlSelfRef.__Vdly__q_reg,0x00000008);
    } else if (vlSelfRef.wr_en) {
        VL_ASSIGN_W(85, vlSelfRef.__Vdly__q_reg, vlSelfRef.d);
    } else {
        if (((((0x0000000fU & VL_SEL_IQII(38, vlSelfRef.CDB_in, 0x00000022U, 4)) 
               == (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4))) 
              & (0U != (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4)))) 
             & (~ VL_BITSEL_IQII(38, vlSelfRef.CDB_in, 0U)))) {
            VL_ASSIGNSEL_WI(85, 4, 0x00000051U, vlSelfRef.__Vdly__q_reg, 0U);
            VL_ASSIGNSEL_WI(85, 32, 0x0000002dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IQII(38, vlSelfRef.CDB_in, 2U, 32));
        } else {
            VL_ASSIGNSEL_WI(85, 4, 0x00000051U, vlSelfRef.__Vdly__q_reg, 
                            (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4)));
            VL_ASSIGNSEL_WI(85, 32, 0x0000002dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000002dU, 32));
        }
        if (((((0x0000000fU & VL_SEL_IQII(38, vlSelfRef.CDB_in, 0x00000022U, 4)) 
               == (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4))) 
              & (0U != (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4)))) 
             & (~ VL_BITSEL_IQII(38, vlSelfRef.CDB_in, 0U)))) {
            VL_ASSIGNSEL_WI(85, 4, 0x0000004dU, vlSelfRef.__Vdly__q_reg, 0U);
            VL_ASSIGNSEL_WI(85, 32, 0x0000000dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IQII(38, vlSelfRef.CDB_in, 2U, 32));
        } else {
            VL_ASSIGNSEL_WI(85, 4, 0x0000004dU, vlSelfRef.__Vdly__q_reg, 
                            (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4)));
            VL_ASSIGNSEL_WI(85, 32, 0x0000000dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000000dU, 32));
        }
        VL_ASSIGNSEL_WI(85, 11, 2U, vlSelfRef.__Vdly__q_reg, 
                        VL_CONCAT_III(11,4,7, (0x0000000fU 
                                               & VL_SEL_IWII(85, vlSelfRef.q_reg, 9U, 4)), 
                                      VL_CONCAT_III(7,4,3, 
                                                    (0x0000000fU 
                                                     & VL_SEL_IWII(85, vlSelfRef.q_reg, 5U, 4)), 
                                                    (7U 
                                                     & VL_SEL_IWII(85, vlSelfRef.q_reg, 2U, 3)))));
        VL_ASSIGNSEL_WI(85, 2, 0U, vlSelfRef.__Vdly__q_reg, 
                        VL_CONCAT_III(2,1,1, (1U & 
                                              VL_BITSEL_IWII(85, vlSelfRef.q_reg, 1U)), 
                                      (1U & VL_BITSEL_IWII(85, vlSelfRef.q_reg, 0U))));
    }
    VL_ASSIGN_W(85, vlSelfRef.q_reg, vlSelfRef.__Vdly__q_reg);
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

void Vcore_rs___ico_sequent__TOP__core__reservation_stations__rs3__0(Vcore_rs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_rs___ico_sequent__TOP__core__reservation_stations__rs3__0\n"); );
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

void Vcore_rs___nba_sequent__TOP__core__reservation_stations__rs3__0(Vcore_rs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_rs___nba_sequent__TOP__core__reservation_stations__rs3__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(85, vlSelfRef.__Vdly__q_reg, vlSelfRef.q_reg);
    if (vlSelfRef.reset) {
        VL_CONST_W_1X(85,vlSelfRef.__Vdly__q_reg,0x00000008);
    } else if (vlSelfRef.wr_en) {
        VL_ASSIGN_W(85, vlSelfRef.__Vdly__q_reg, vlSelfRef.d);
    } else {
        if (((((0x0000000fU & VL_SEL_IQII(38, vlSelfRef.CDB_in, 0x00000022U, 4)) 
               == (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4))) 
              & (0U != (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4)))) 
             & (~ VL_BITSEL_IQII(38, vlSelfRef.CDB_in, 0U)))) {
            VL_ASSIGNSEL_WI(85, 4, 0x00000051U, vlSelfRef.__Vdly__q_reg, 0U);
            VL_ASSIGNSEL_WI(85, 32, 0x0000002dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IQII(38, vlSelfRef.CDB_in, 2U, 32));
        } else {
            VL_ASSIGNSEL_WI(85, 4, 0x00000051U, vlSelfRef.__Vdly__q_reg, 
                            (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x00000051U, 4)));
            VL_ASSIGNSEL_WI(85, 32, 0x0000002dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000002dU, 32));
        }
        if (((((0x0000000fU & VL_SEL_IQII(38, vlSelfRef.CDB_in, 0x00000022U, 4)) 
               == (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4))) 
              & (0U != (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4)))) 
             & (~ VL_BITSEL_IQII(38, vlSelfRef.CDB_in, 0U)))) {
            VL_ASSIGNSEL_WI(85, 4, 0x0000004dU, vlSelfRef.__Vdly__q_reg, 0U);
            VL_ASSIGNSEL_WI(85, 32, 0x0000000dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IQII(38, vlSelfRef.CDB_in, 2U, 32));
        } else {
            VL_ASSIGNSEL_WI(85, 4, 0x0000004dU, vlSelfRef.__Vdly__q_reg, 
                            (0x0000000fU & VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000004dU, 4)));
            VL_ASSIGNSEL_WI(85, 32, 0x0000000dU, vlSelfRef.__Vdly__q_reg, 
                            VL_SEL_IWII(85, vlSelfRef.q_reg, 0x0000000dU, 32));
        }
        VL_ASSIGNSEL_WI(85, 11, 2U, vlSelfRef.__Vdly__q_reg, 
                        VL_CONCAT_III(11,4,7, (0x0000000fU 
                                               & VL_SEL_IWII(85, vlSelfRef.q_reg, 9U, 4)), 
                                      VL_CONCAT_III(7,4,3, 
                                                    (0x0000000fU 
                                                     & VL_SEL_IWII(85, vlSelfRef.q_reg, 5U, 4)), 
                                                    (7U 
                                                     & VL_SEL_IWII(85, vlSelfRef.q_reg, 2U, 3)))));
        VL_ASSIGNSEL_WI(85, 2, 0U, vlSelfRef.__Vdly__q_reg, 
                        VL_CONCAT_III(2,1,1, (1U & 
                                              VL_BITSEL_IWII(85, vlSelfRef.q_reg, 1U)), 
                                      (1U & VL_BITSEL_IWII(85, vlSelfRef.q_reg, 0U))));
    }
    VL_ASSIGN_W(85, vlSelfRef.q_reg, vlSelfRef.__Vdly__q_reg);
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
