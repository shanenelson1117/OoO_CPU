// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_issue___ico_sequent__TOP__core__res_sched__0(Vcore_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_issue___ico_sequent__TOP__core__res_sched__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IWII(112, vlSelfRef.hold_out, 0x0000002fU));
    vlSelfRef.exception = (1U & VL_BITSEL_IWII(112, vlSelfRef.hold_out, 0U));
    vlSelfRef.mcause = (0x000000ffU & VL_SEL_IWII(112, vlSelfRef.hold_out, 1U, 8));
    vlSelfRef.jump = (1U & VL_BITSEL_IWII(112, vlSelfRef.hold_out, 0x0000002dU));
    vlSelfRef.curr_branch_pc = VL_SEL_IWII(112, vlSelfRef.hold_out, 0x00000050U, 32);
    vlSelfRef.branch = (1U & VL_BITSEL_IWII(112, vlSelfRef.hold_out, 0x0000002eU));
    vlSelfRef.ins = VL_SEL_IWII(112, vlSelfRef.hold_out, 0x00000030U, 32);
    vlSelfRef.op = (0x0000007fU & VL_SEL_IIII(32, vlSelfRef.ins, 0U, 7));
    vlSelfRef.rs_dest = ((0U == (IData)(vlSelfRef.op))
                          ? 4U : ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.busy_bus), 0U))
                                   ? ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.busy_bus), 1U))
                                       ? ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.busy_bus), 2U))
                                           ? ((1U & 
                                               VL_BITSEL_IIII(4, (IData)(vlSelfRef.busy_bus), 3U))
                                               ? 5U
                                               : 3U)
                                           : 2U) : 1U)
                                   : 0U));
}

void Vcore_issue___ico_sequent__TOP__core__res_sched__1(Vcore_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_issue___ico_sequent__TOP__core__res_sched__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    VL_ASSIGNSEL_WQ(81, 33, 0x00000030U, vlSelfRef.jalrq_input, 
                    VL_CONCAT_QII(33,1,32, ((0x67U 
                                             == (IData)(vlSelfRef.op)) 
                                            & (~ (IData)(vlSelfRef.stall))), 
                                  VL_SEL_IWII(112, vlSelfRef.hold_out, 9U, 32)));
    VL_ASSIGNSEL_WI(81, 12, 4U, vlSelfRef.jalrq_input, 
                    (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
    if (((((IData)(vlSelfRef.Q_j) == (0x0000000fU & 
                                      VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4))) 
          & (0U != (0x0000000fU & VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4)))) 
         & (~ VL_BITSEL_IQII(38, vlSelfRef.new_CDB, 0U)))) {
        VL_ASSIGNSEL_WI(81, 32, 0x00000010U, vlSelfRef.jalrq_input, 
                        VL_SEL_IQII(38, vlSelfRef.new_CDB, 2U, 32));
        VL_ASSIGNSEL_WI(81, 4, 0U, vlSelfRef.jalrq_input, 0U);
    } else if (vlSelfRef.rs1reg_busy) {
        if (vlSelfRef.rs1rob_ready) {
            VL_ASSIGNSEL_WI(81, 32, 0x00000010U, vlSelfRef.jalrq_input, vlSelfRef.rs1rob_data);
            VL_ASSIGNSEL_WI(81, 4, 0U, vlSelfRef.jalrq_input, 0U);
        } else {
            VL_ASSIGNSEL_WI(81, 32, 0x00000010U, vlSelfRef.jalrq_input, 0U);
            VL_ASSIGNSEL_WI(81, 4, 0U, vlSelfRef.jalrq_input, vlSelfRef.Q_j);
        }
    } else {
        VL_ASSIGNSEL_WI(81, 32, 0x00000010U, vlSelfRef.jalrq_input, vlSelfRef.rs1_data);
        VL_ASSIGNSEL_WI(81, 4, 0U, vlSelfRef.jalrq_input, 0U);
    }
    if (vlSelfRef.stall) {
        VL_EXTEND_WI(75,4, __Vtemp_1, (IData)(vlSelfRef.Q_k));
        VL_ASSIGNSEL_WW(79, 75, 4U, vlSelfRef.lsq_input, __Vtemp_1);
    } else {
        if ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            VL_ASSIGNSEL_WI(79, 4, 0U, vlSelfRef.lsq_input, 3U);
        } else if ((1U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            VL_ASSIGNSEL_WI(79, 4, 0U, vlSelfRef.lsq_input, 5U);
        } else if ((2U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            VL_ASSIGNSEL_WI(79, 4, 0U, vlSelfRef.lsq_input, 9U);
        } else if ((4U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            VL_ASSIGNSEL_WI(79, 4, 0U, vlSelfRef.lsq_input, 2U);
        } else if ((5U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            VL_ASSIGNSEL_WI(79, 4, 0U, vlSelfRef.lsq_input, 4U);
        }
        if ((3U == (IData)(vlSelfRef.op))) {
            VL_CONST_W_1X(65,__Vtemp_2,0x00000000);
            VL_CONCAT_WIW(66,1,65, __Vtemp_3, (1U & 
                                               (~ (IData)(vlSelfRef.stall))), __Vtemp_2);
            VL_ASSIGNSEL_WW(79, 66, 0x0000000dU, vlSelfRef.lsq_input, __Vtemp_3);
            VL_ASSIGNSEL_WI(79, 4, 9U, vlSelfRef.lsq_input, 
                            (((IData)(vlSelfRef.stall) 
                              | (0U == (IData)(vlSelfRef.op)))
                              ? 0U : (IData)(vlSelfRef.ROB_entry)));
            VL_ASSIGNSEL_WI(79, 5, 4U, vlSelfRef.lsq_input, 0U);
        } else if ((0x23U == (IData)(vlSelfRef.op))) {
            VL_ASSIGNSEL_WQ(79, 34, 0x0000002dU, vlSelfRef.lsq_input, 
                            VL_CONCAT_QII(34,2,32, 
                                          VL_EXTEND_II(2,1, 
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.stall)))), 0U));
            if (((((0x0000000fU & VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4)) 
                   == (IData)(vlSelfRef.Q_k)) & (0U 
                                                 != 
                                                 (0x0000000fU 
                                                  & VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4)))) 
                 & (~ VL_BITSEL_IQII(38, vlSelfRef.new_CDB, 0U)))) {
                VL_ASSIGNSEL_WI(79, 32, 0x0000000dU, vlSelfRef.lsq_input, 
                                VL_SEL_IQII(38, vlSelfRef.new_CDB, 2U, 32));
                VL_ASSIGNSEL_WI(79, 4, 4U, vlSelfRef.lsq_input, 0U);
            } else if (vlSelfRef.rs2reg_busy) {
                if (vlSelfRef.rs2rob_ready) {
                    VL_ASSIGNSEL_WI(79, 32, 0x0000000dU, vlSelfRef.lsq_input, vlSelfRef.rs2rob_data);
                    VL_ASSIGNSEL_WI(79, 4, 4U, vlSelfRef.lsq_input, 0U);
                } else {
                    VL_ASSIGNSEL_WI(79, 32, 0x0000000dU, vlSelfRef.lsq_input, 0U);
                    VL_ASSIGNSEL_WI(79, 4, 4U, vlSelfRef.lsq_input, vlSelfRef.Q_k);
                }
            } else {
                VL_ASSIGNSEL_WI(79, 32, 0x0000000dU, vlSelfRef.lsq_input, vlSelfRef.rs2_data);
                VL_ASSIGNSEL_WI(79, 4, 4U, vlSelfRef.lsq_input, 0U);
            }
            VL_ASSIGNSEL_WI(79, 4, 9U, vlSelfRef.lsq_input, 
                            (((IData)(vlSelfRef.stall) 
                              | (0U == (IData)(vlSelfRef.op)))
                              ? 0U : (IData)(vlSelfRef.ROB_entry)));
            VL_ASSIGNBIT_WI(8U, vlSelfRef.lsq_input, 0U);
        } else {
            VL_CONST_W_1X(79,vlSelfRef.lsq_input,0x00000000);
        }
    }
}

void Vcore_issue___ico_comb__TOP__core__res_sched__0(Vcore_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_issue___ico_comb__TOP__core__res_sched__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    vlSelfRef.rs1 = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 0x0fU, 5));
    vlSelfRef.rs2 = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 5));
    vlSelfRef.issue_dest = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5));
    vlSelfRef.valid_packet = 1U;
    vlSelfRef.illegal = 0U;
    vlSelfRef.csr_valid_write_temp = 0U;
    vlSelfRef.issue_csr_write_select = 7U;
    vlSelfRef.csr_valid_read_temp = 0U;
    vlSelfRef.alu_op = 0U;
    if (((((IData)(vlSelfRef.Q_j) == (0x0000000fU & 
                                      VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4))) 
          & (0U != (0x0000000fU & VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4)))) 
         & (~ VL_BITSEL_IQII(38, vlSelfRef.new_CDB, 0U)))) {
        vlSelfRef.V_j = VL_SEL_IQII(38, vlSelfRef.new_CDB, 2U, 32);
        vlSelfRef.Q_temp_j = 0U;
    } else if (vlSelfRef.rs1reg_busy) {
        if (vlSelfRef.rs1rob_ready) {
            vlSelfRef.V_j = vlSelfRef.rs1rob_data;
            vlSelfRef.Q_temp_j = 0U;
        } else {
            vlSelfRef.V_j = 0U;
            vlSelfRef.Q_temp_j = vlSelfRef.Q_j;
        }
    } else {
        vlSelfRef.V_j = vlSelfRef.rs1_data;
        vlSelfRef.Q_temp_j = 0U;
    }
    if (((((IData)(vlSelfRef.Q_k) == (0x0000000fU & 
                                      VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4))) 
          & (0U != (0x0000000fU & VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4)))) 
         & (~ VL_BITSEL_IQII(38, vlSelfRef.new_CDB, 0U)))) {
        vlSelfRef.V_k = VL_SEL_IQII(38, vlSelfRef.new_CDB, 2U, 32);
        vlSelfRef.Q_temp_k = 0U;
    } else if (vlSelfRef.rs2reg_busy) {
        if (vlSelfRef.rs2rob_ready) {
            vlSelfRef.V_k = vlSelfRef.rs2rob_data;
            vlSelfRef.Q_temp_k = 0U;
        } else {
            vlSelfRef.V_k = 0U;
            vlSelfRef.Q_temp_k = vlSelfRef.Q_k;
        }
    } else {
        vlSelfRef.V_k = vlSelfRef.rs2_data;
        vlSelfRef.Q_temp_k = 0U;
    }
    if ((0x33U == (IData)(vlSelfRef.op))) {
        vlSelfRef.branch_type = 2U;
        vlSelfRef.issue_writes_temp = 1U;
        vlSelfRef.temp_load = 0U;
        if ((0U == (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)))) {
            vlSelfRef.valid_packet = 0U;
            vlSelfRef.issue_writes_temp = 0U;
        }
        vlSelfRef.alu_op = (((0U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                             & (1U == (0x0000007fU 
                                       & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                             ? 0x0cU : (((1U == (7U 
                                                 & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                         & (1U == (0x0000007fU 
                                                   & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                         ? 0x0dU : 
                                        (((4U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                          & (1U == 
                                             (0x0000007fU 
                                              & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                          ? 0x0bU : 
                                         (((7U == (7U 
                                                   & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                           & (1U == 
                                              (0x0000007fU 
                                               & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                           ? 0x0aU : 
                                          (((0U == 
                                             (7U & 
                                              VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                            & (0U == 
                                               (0x0000007fU 
                                                & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                            ? 0U : 
                                           (((0U == 
                                              (7U & 
                                               VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                             & (0x20U 
                                                == 
                                                (0x0000007fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                             ? 4U : 
                                            (((4U == 
                                               (7U 
                                                & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                              & (0U 
                                                 == 
                                                 (0x0000007fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                              ? 1U : 
                                             (((6U 
                                                == 
                                                (7U 
                                                 & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                               & (0U 
                                                  == 
                                                  (0x0000007fU 
                                                   & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                               ? 2U
                                               : ((
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                                   & (0U 
                                                      == 
                                                      (0x0000007fU 
                                                       & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                                   ? 3U
                                                   : 
                                                  (((1U 
                                                     == 
                                                     (7U 
                                                      & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                                    & (0U 
                                                       == 
                                                       (0x0000007fU 
                                                        & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                                    ? 0x0fU
                                                    : 
                                                   (((5U 
                                                      == 
                                                      (7U 
                                                       & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                                     & (0U 
                                                        == 
                                                        (0x0000007fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                                     ? 8U
                                                     : 
                                                    (((5U 
                                                       == 
                                                       (7U 
                                                        & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                                      & (0x20U 
                                                         == 
                                                         (0x0000007fU 
                                                          & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                                      ? 9U
                                                      : 
                                                     (((2U 
                                                        == 
                                                        (7U 
                                                         & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                                       & (0U 
                                                          == 
                                                          (0x0000007fU 
                                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                                       ? 7U
                                                       : 6U)))))))))))));
    } else if (vlSelfRef.branch) {
        vlSelfRef.alu_op = 4U;
        vlSelfRef.issue_writes_temp = 0U;
        vlSelfRef.temp_load = 0U;
        vlSelfRef.branch_type = (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3));
    } else if ((0x13U == (IData)(vlSelfRef.op))) {
        vlSelfRef.issue_writes_temp = 1U;
        if ((0U == (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)))) {
            vlSelfRef.valid_packet = 0U;
            vlSelfRef.issue_writes_temp = 0U;
        }
        if ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 0U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        } else if ((4U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 1U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        } else if ((6U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 2U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        } else if ((7U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 3U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        } else if ((1U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 0x0fU;
            vlSelfRef.V_k = VL_EXTEND_II(32,5, (0x0000001fU 
                                                & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 5)));
        } else if (((5U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    & (~ VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1eU)))) {
            vlSelfRef.alu_op = 8U;
            vlSelfRef.V_k = VL_EXTEND_II(32,5, (0x0000001fU 
                                                & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 5)));
        } else if (((5U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1eU))) {
            vlSelfRef.alu_op = 9U;
            vlSelfRef.V_k = VL_EXTEND_II(32,5, (0x0000001fU 
                                                & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 5)));
        } else if ((2U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 7U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        } else {
            vlSelfRef.alu_op = 6U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        }
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
        vlSelfRef.temp_load = 0U;
    } else if (((IData)(vlSelfRef.jump) | (0x67U == (IData)(vlSelfRef.op)))) {
        vlSelfRef.alu_op = 0U;
        vlSelfRef.issue_writes_temp = 1U;
        vlSelfRef.temp_load = 0U;
        vlSelfRef.V_j = vlSelfRef.curr_branch_pc;
        vlSelfRef.V_k = 4U;
        vlSelfRef.Q_temp_j = 0U;
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
    } else if ((3U == (IData)(vlSelfRef.op))) {
        vlSelfRef.alu_op = 0U;
        vlSelfRef.issue_writes_temp = 1U;
        vlSelfRef.temp_load = 1U;
        vlSelfRef.V_k = VL_CONCAT_III(32,20,12, (0x000fffffU 
                                                 & VL_REPLICATE_IOI(1, 
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                      (0x00000fffU 
                                       & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
    } else if (((0x37U == (IData)(vlSelfRef.op)) | 
                (0x17U == (IData)(vlSelfRef.op)))) {
        vlSelfRef.issue_writes_temp = 1U;
        vlSelfRef.temp_load = 0U;
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
        vlSelfRef.Q_temp_j = 0U;
        vlSelfRef.alu_op = 0U;
        if ((0x37U == (IData)(vlSelfRef.op))) {
            vlSelfRef.V_j = 0U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 20)), 0U);
        } else {
            vlSelfRef.V_j = vlSelfRef.curr_branch_pc;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 20)), 0U);
        }
    } else if ((0x23U == (IData)(vlSelfRef.op))) {
        vlSelfRef.issue_writes_temp = 0U;
        vlSelfRef.alu_op = 0U;
        vlSelfRef.temp_load = 1U;
        vlSelfRef.V_k = VL_CONCAT_III(32,20,12, (0x000fffffU 
                                                 & VL_REPLICATE_IOI(1, 
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                      VL_CONCAT_III(12,7,5, 
                                                    (0x0000007fU 
                                                     & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7)), 
                                                    (0x0000001fU 
                                                     & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5))));
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
    } else if ((0x73U == (IData)(vlSelfRef.op))) {
        vlSelfRef.branch_type = 2U;
        vlSelfRef.issue_writes_temp = 0U;
        vlSelfRef.temp_load = 0U;
        if ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.valid_packet = 0U;
            if ((0U != (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                if ((0x0302U != (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                    if ((1U != (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                        vlSelfRef.illegal = 1U;
                    }
                }
            }
        } else if (((1U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (5U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            vlSelfRef.__Vfunc_index__0__csr = (0x00000fffU 
                                               & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12));
            vlSelfRef.__Vfunc_index__0__Vfuncout = 
                ((0x0300U == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                  ? 0U : ((0x0305U == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                           ? 1U : ((0x0314U == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                    ? 2U : ((0x0341U 
                                             == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                             ? 3U : 7U))));
            vlSelfRef.issue_csr_write_select = vlSelfRef.__Vfunc_index__0__Vfuncout;
            vlSelfRef.csr_valid_write_temp = 1U;
            vlSelfRef.V_k = 0U;
            vlSelfRef.Q_temp_k = 0U;
            if ((0U != (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)))) {
                vlSelfRef.csr_valid_read_temp = 1U;
                vlSelfRef.issue_writes_temp = 1U;
            }
            if ((1U != (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
                vlSelfRef.V_j = VL_EXTEND_II(32,5, (IData)(vlSelfRef.rs1));
                vlSelfRef.Q_temp_j = 0U;
            }
        } else if (((3U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (7U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            vlSelfRef.csr_valid_read_temp = 1U;
            vlSelfRef.issue_writes_temp = 1U;
            vlSelfRef.__Vfunc_index__1__csr = (0x00000fffU 
                                               & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12));
            vlSelfRef.__Vfunc_index__1__Vfuncout = 
                ((0x0300U == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                  ? 0U : ((0x0305U == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                           ? 1U : ((0x0314U == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                    ? 2U : ((0x0341U 
                                             == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                             ? 3U : 7U))));
            vlSelfRef.issue_csr_write_select = vlSelfRef.__Vfunc_index__1__Vfuncout;
            vlSelfRef.alu_op = 5U;
            vlSelfRef.V_k = vlSelfRef.csr_ReadData;
            vlSelfRef.Q_temp_k = 0U;
            if ((0U != (IData)(vlSelfRef.rs1))) {
                vlSelfRef.csr_valid_write_temp = 1U;
            }
            if ((3U != (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
                vlSelfRef.V_j = VL_EXTEND_II(32,5, (IData)(vlSelfRef.rs1));
                vlSelfRef.Q_temp_j = 0U;
            }
        } else if (((2U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (6U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            vlSelfRef.csr_valid_read_temp = 1U;
            vlSelfRef.issue_writes_temp = 1U;
            vlSelfRef.__Vfunc_index__2__csr = (0x00000fffU 
                                               & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12));
            vlSelfRef.__Vfunc_index__2__Vfuncout = 
                ((0x0300U == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                  ? 0U : ((0x0305U == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                           ? 1U : ((0x0314U == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                    ? 2U : ((0x0341U 
                                             == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                             ? 3U : 7U))));
            vlSelfRef.issue_csr_write_select = vlSelfRef.__Vfunc_index__2__Vfuncout;
            vlSelfRef.alu_op = 2U;
            vlSelfRef.V_k = vlSelfRef.csr_ReadData;
            vlSelfRef.Q_temp_k = 0U;
            if ((0U != (IData)(vlSelfRef.rs1))) {
                vlSelfRef.csr_valid_write_temp = 1U;
            }
            if ((2U != (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
                vlSelfRef.V_j = VL_EXTEND_II(32,5, (IData)(vlSelfRef.rs1));
                vlSelfRef.Q_temp_j = 0U;
            }
        } else {
            vlSelfRef.valid_packet = 0U;
            vlSelfRef.illegal = 1U;
        }
    } else {
        vlSelfRef.valid_packet = 0U;
        vlSelfRef.illegal = 1U;
        vlSelfRef.issue_writes_temp = 0U;
        vlSelfRef.alu_op = 0U;
        vlSelfRef.V_j = 0U;
        vlSelfRef.V_k = 0U;
        vlSelfRef.Q_temp_j = 0U;
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
        vlSelfRef.temp_load = 0U;
    }
    VL_CONCAT_WIQ(72,8,64, __Vtemp_1, VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.Q_temp_j), (IData)(vlSelfRef.Q_temp_k)), 
                  VL_CONCAT_QII(64,32,32, vlSelfRef.V_j, vlSelfRef.V_k));
    VL_ASSIGNSEL_WW(85, 72, 0x0000000dU, vlSelfRef.rs_input, __Vtemp_1);
    VL_ASSIGNBIT_WI(0U, vlSelfRef.rs_input, vlSelfRef.temp_load);
    VL_ASSIGNSEL_WI(85, 12, 1U, vlSelfRef.rs_input, 
                    VL_CONCAT_III(12,4,8, ((IData)(vlSelfRef.stall)
                                            ? 0U : (IData)(vlSelfRef.ROB_entry)), 
                                  VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.alu_op), 
                                                VL_CONCAT_III(4,3,1, (IData)(vlSelfRef.branch_type), 
                                                              (1U 
                                                               & (~ (IData)(vlSelfRef.stall)))))));
    vlSelfRef.issue_csr_valid_write = vlSelfRef.csr_valid_write_temp;
    vlSelfRef.csr_valid_read = vlSelfRef.csr_valid_read_temp;
    vlSelfRef.issue_writes = vlSelfRef.issue_writes_temp;
    VL_ASSIGNSEL_WI(163, 32, 0U, vlSelfRef.rob_input, vlSelfRef.ins);
    VL_ASSIGNSEL_WI(163, 32, 0x0000002eU, vlSelfRef.rob_input, vlSelfRef.curr_branch_pc);
    VL_ASSIGNSEL_WI(163, 4, 0x0000009fU, vlSelfRef.rob_input, 
                    (((IData)(vlSelfRef.stall) | (0U 
                                                  == (IData)(vlSelfRef.op)))
                      ? 0U : (IData)(vlSelfRef.ROB_entry)));
    VL_ASSIGNSEL_WI(163, 2, 0x0000009dU, vlSelfRef.rob_input, 
                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.prediction), 0U));
    VL_ASSIGNBIT_WI(0x0000004eU, vlSelfRef.rob_input, 
                    (1U & VL_BITSEL_IIII(32, ((0x67U 
                                               == (IData)(vlSelfRef.op))
                                               ? 1U
                                               : 0U), 0U)));
    VL_ASSIGNSEL_WI(163, 4, 0x00000092U, vlSelfRef.rob_input, 
                    (0x0000000fU & VL_SEL_IWII(112, vlSelfRef.hold_out, 0x00000029U, 4)));
    VL_ASSIGNSEL_WI(163, 3, 0x00000020U, vlSelfRef.rob_input, 
                    VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.issue_csr_valid_write), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.csr_valid_read), 
                                                ((IData)(vlSelfRef.exception) 
                                                 | (IData)(vlSelfRef.illegal)))));
    VL_ASSIGNSEL_WI(163, 7, 0x00000096U, vlSelfRef.rob_input, 
                    VL_CONCAT_III(7,5,2, (0x0000001fU 
                                          & ((IData)(vlSelfRef.issue_writes)
                                              ? VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)
                                              : 0U)), 2U));
    VL_ASSIGNSEL_WI(163, 11, 0x00000023U, vlSelfRef.rob_input, 
                    VL_CONCAT_III(11,8,3, ((IData)(vlSelfRef.exception)
                                            ? (IData)(vlSelfRef.mcause)
                                            : ((IData)(vlSelfRef.illegal)
                                                ? 2U
                                                : 0U)), 7U));
    if ((0x23U == (IData)(vlSelfRef.op))) {
        VL_CONCAT_WQI(67,64,3, __Vtemp_2, VL_EXTEND_QI(64,32, vlSelfRef.rs2_data), 3U);
        VL_ASSIGNSEL_WW(163, 67, 0x0000004fU, vlSelfRef.rob_input, __Vtemp_2);
    } else if (vlSelfRef.branch) {
        VL_ASSIGNSEL_WI(163, 2, 0x00000050U, vlSelfRef.rob_input, 0U);
        VL_ASSIGNSEL_WI(163, 13, 0x00000052U, vlSelfRef.rob_input, 
                        VL_CONCAT_III(13,2,11, VL_CONCAT_III(2,1,1, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 
                                                             (1U 
                                                              & VL_BITSEL_IIII(32, vlSelfRef.ins, 7U))), 
                                      VL_CONCAT_III(11,6,5, 
                                                    (0x0000003fU 
                                                     & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 6)), 
                                                    VL_CONCAT_III(5,4,1, 
                                                                  (0x0000000fU 
                                                                   & VL_SEL_IIII(32, vlSelfRef.ins, 8U, 4)), 0U))));
        VL_ASSIGNSEL_WQ(163, 51, 0x0000005fU, vlSelfRef.rob_input, 
                        VL_CONCAT_QII(51,32,19, vlSelfRef.curr_branch_pc, 
                                      (0x0007ffffU 
                                       & VL_REPLICATE_IOI(1, 
                                                          (1U 
                                                           & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000013U))));
        VL_ASSIGNBIT_WI(0x0000004fU, vlSelfRef.rob_input, 0U);
    } else if ((3U == (IData)(vlSelfRef.op))) {
        VL_CONCAT_WIQ(66,32,34, __Vtemp_3, VL_EXTEND_II(32,5, 
                                                        (0x0000001fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5))), 3ULL);
        VL_ASSIGNSEL_WW(163, 66, 0x00000050U, vlSelfRef.rob_input, __Vtemp_3);
        VL_ASSIGNBIT_WI(0x0000004fU, vlSelfRef.rob_input, 0U);
        VL_ASSIGNSEL_WI(163, 5, 0x00000098U, vlSelfRef.rob_input, 
                        (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)));
    } else if ((0x73U == (IData)(vlSelfRef.op))) {
        VL_CONST_W_1X(66,__Vtemp_4,0x00000003);
        VL_ASSIGNSEL_WW(163, 66, 0x00000050U, vlSelfRef.rob_input, __Vtemp_4);
        if ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            VL_ASSIGNSEL_WQ(163, 64, 0x00000052U, vlSelfRef.rob_input, 0ULL);
            if ((0U == (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                VL_ASSIGNSEL_WI(163, 2, 0x00000096U, vlSelfRef.rob_input, 1U);
            } else if ((0x0302U == (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                VL_ASSIGNSEL_WI(163, 2, 0x00000096U, vlSelfRef.rob_input, 0U);
            } else if ((1U == (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                VL_ASSIGNSEL_WI(163, 2, 0x00000096U, vlSelfRef.rob_input, 3U);
                VL_ASSIGNSEL_WI(163, 8, 0x00000026U, vlSelfRef.rob_input, 3U);
            }
        } else if (((1U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (5U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            VL_ASSIGNSEL_WI(163, 3, 0x00000023U, vlSelfRef.rob_input, vlSelfRef.issue_csr_write_select);
            VL_ASSIGNSEL_WQ(163, 64, 0x00000052U, vlSelfRef.rob_input, 
                            VL_CONCAT_QII(64,32,32, vlSelfRef.csr_ReadData, 0U));
        } else if (((3U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (7U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            VL_ASSIGNSEL_WI(163, 3, 0x00000023U, vlSelfRef.rob_input, vlSelfRef.issue_csr_write_select);
            VL_ASSIGNSEL_WQ(163, 64, 0x00000052U, vlSelfRef.rob_input, 
                            VL_CONCAT_QII(64,32,32, vlSelfRef.csr_ReadData, 0U));
        } else if (((2U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (6U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            VL_ASSIGNSEL_WI(163, 3, 0x00000023U, vlSelfRef.rob_input, vlSelfRef.issue_csr_write_select);
            VL_ASSIGNSEL_WQ(163, 64, 0x00000052U, vlSelfRef.rob_input, 
                            VL_CONCAT_QII(64,32,32, vlSelfRef.csr_ReadData, 0U));
        }
    } else {
        VL_CONCAT_WIQ(66,32,34, __Vtemp_5, VL_EXTEND_II(32,5, 
                                                        (0x0000001fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5))), 2ULL);
        VL_ASSIGNSEL_WW(163, 66, 0x00000050U, vlSelfRef.rob_input, __Vtemp_5);
        VL_ASSIGNBIT_WI(0x0000004fU, vlSelfRef.rob_input, 0U);
        VL_ASSIGNSEL_WI(163, 5, 0x00000098U, vlSelfRef.rob_input, 
                        (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)));
    }
    VL_ASSIGN_W(163, vlSelfRef.new_packet, vlSelfRef.rob_input);
}

void Vcore_issue___act_sequent__TOP__core__res_sched__0(Vcore_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_issue___act_sequent__TOP__core__res_sched__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    vlSelfRef.rs1 = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 0x0fU, 5));
    vlSelfRef.rs2 = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 5));
    vlSelfRef.issue_dest = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5));
    vlSelfRef.valid_packet = 1U;
    vlSelfRef.illegal = 0U;
    vlSelfRef.csr_valid_write_temp = 0U;
    vlSelfRef.issue_csr_write_select = 7U;
    vlSelfRef.csr_valid_read_temp = 0U;
    vlSelfRef.alu_op = 0U;
    if (((((IData)(vlSelfRef.Q_j) == (0x0000000fU & 
                                      VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4))) 
          & (0U != (0x0000000fU & VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4)))) 
         & (~ VL_BITSEL_IQII(38, vlSelfRef.new_CDB, 0U)))) {
        vlSelfRef.V_j = VL_SEL_IQII(38, vlSelfRef.new_CDB, 2U, 32);
        vlSelfRef.Q_temp_j = 0U;
    } else if (vlSelfRef.rs1reg_busy) {
        if (vlSelfRef.rs1rob_ready) {
            vlSelfRef.V_j = vlSelfRef.rs1rob_data;
            vlSelfRef.Q_temp_j = 0U;
        } else {
            vlSelfRef.V_j = 0U;
            vlSelfRef.Q_temp_j = vlSelfRef.Q_j;
        }
    } else {
        vlSelfRef.V_j = vlSelfRef.rs1_data;
        vlSelfRef.Q_temp_j = 0U;
    }
    if (((((IData)(vlSelfRef.Q_k) == (0x0000000fU & 
                                      VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4))) 
          & (0U != (0x0000000fU & VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4)))) 
         & (~ VL_BITSEL_IQII(38, vlSelfRef.new_CDB, 0U)))) {
        vlSelfRef.V_k = VL_SEL_IQII(38, vlSelfRef.new_CDB, 2U, 32);
        vlSelfRef.Q_temp_k = 0U;
    } else if (vlSelfRef.rs2reg_busy) {
        if (vlSelfRef.rs2rob_ready) {
            vlSelfRef.V_k = vlSelfRef.rs2rob_data;
            vlSelfRef.Q_temp_k = 0U;
        } else {
            vlSelfRef.V_k = 0U;
            vlSelfRef.Q_temp_k = vlSelfRef.Q_k;
        }
    } else {
        vlSelfRef.V_k = vlSelfRef.rs2_data;
        vlSelfRef.Q_temp_k = 0U;
    }
    if ((0x33U == (IData)(vlSelfRef.op))) {
        vlSelfRef.branch_type = 2U;
        vlSelfRef.issue_writes_temp = 1U;
        vlSelfRef.temp_load = 0U;
        if ((0U == (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)))) {
            vlSelfRef.valid_packet = 0U;
            vlSelfRef.issue_writes_temp = 0U;
        }
        vlSelfRef.alu_op = (((0U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                             & (1U == (0x0000007fU 
                                       & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                             ? 0x0cU : (((1U == (7U 
                                                 & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                         & (1U == (0x0000007fU 
                                                   & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                         ? 0x0dU : 
                                        (((4U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                          & (1U == 
                                             (0x0000007fU 
                                              & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                          ? 0x0bU : 
                                         (((7U == (7U 
                                                   & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                           & (1U == 
                                              (0x0000007fU 
                                               & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                           ? 0x0aU : 
                                          (((0U == 
                                             (7U & 
                                              VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                            & (0U == 
                                               (0x0000007fU 
                                                & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                            ? 0U : 
                                           (((0U == 
                                              (7U & 
                                               VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                             & (0x20U 
                                                == 
                                                (0x0000007fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                             ? 4U : 
                                            (((4U == 
                                               (7U 
                                                & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                              & (0U 
                                                 == 
                                                 (0x0000007fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                              ? 1U : 
                                             (((6U 
                                                == 
                                                (7U 
                                                 & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                               & (0U 
                                                  == 
                                                  (0x0000007fU 
                                                   & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                               ? 2U
                                               : ((
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                                   & (0U 
                                                      == 
                                                      (0x0000007fU 
                                                       & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                                   ? 3U
                                                   : 
                                                  (((1U 
                                                     == 
                                                     (7U 
                                                      & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                                    & (0U 
                                                       == 
                                                       (0x0000007fU 
                                                        & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                                    ? 0x0fU
                                                    : 
                                                   (((5U 
                                                      == 
                                                      (7U 
                                                       & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                                     & (0U 
                                                        == 
                                                        (0x0000007fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                                     ? 8U
                                                     : 
                                                    (((5U 
                                                       == 
                                                       (7U 
                                                        & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                                      & (0x20U 
                                                         == 
                                                         (0x0000007fU 
                                                          & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                                      ? 9U
                                                      : 
                                                     (((2U 
                                                        == 
                                                        (7U 
                                                         & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                                       & (0U 
                                                          == 
                                                          (0x0000007fU 
                                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                                       ? 7U
                                                       : 6U)))))))))))));
    } else if (vlSelfRef.branch) {
        vlSelfRef.alu_op = 4U;
        vlSelfRef.issue_writes_temp = 0U;
        vlSelfRef.temp_load = 0U;
        vlSelfRef.branch_type = (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3));
    } else if ((0x13U == (IData)(vlSelfRef.op))) {
        vlSelfRef.issue_writes_temp = 1U;
        if ((0U == (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)))) {
            vlSelfRef.valid_packet = 0U;
            vlSelfRef.issue_writes_temp = 0U;
        }
        if ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 0U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        } else if ((4U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 1U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        } else if ((6U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 2U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        } else if ((7U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 3U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        } else if ((1U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 0x0fU;
            vlSelfRef.V_k = VL_EXTEND_II(32,5, (0x0000001fU 
                                                & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 5)));
        } else if (((5U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    & (~ VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1eU)))) {
            vlSelfRef.alu_op = 8U;
            vlSelfRef.V_k = VL_EXTEND_II(32,5, (0x0000001fU 
                                                & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 5)));
        } else if (((5U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1eU))) {
            vlSelfRef.alu_op = 9U;
            vlSelfRef.V_k = VL_EXTEND_II(32,5, (0x0000001fU 
                                                & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 5)));
        } else if ((2U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 7U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        } else {
            vlSelfRef.alu_op = 6U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        }
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
        vlSelfRef.temp_load = 0U;
    } else if (((IData)(vlSelfRef.jump) | (0x67U == (IData)(vlSelfRef.op)))) {
        vlSelfRef.alu_op = 0U;
        vlSelfRef.issue_writes_temp = 1U;
        vlSelfRef.temp_load = 0U;
        vlSelfRef.V_j = vlSelfRef.curr_branch_pc;
        vlSelfRef.V_k = 4U;
        vlSelfRef.Q_temp_j = 0U;
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
    } else if ((3U == (IData)(vlSelfRef.op))) {
        vlSelfRef.alu_op = 0U;
        vlSelfRef.issue_writes_temp = 1U;
        vlSelfRef.temp_load = 1U;
        vlSelfRef.V_k = VL_CONCAT_III(32,20,12, (0x000fffffU 
                                                 & VL_REPLICATE_IOI(1, 
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                      (0x00000fffU 
                                       & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
    } else if (((0x37U == (IData)(vlSelfRef.op)) | 
                (0x17U == (IData)(vlSelfRef.op)))) {
        vlSelfRef.issue_writes_temp = 1U;
        vlSelfRef.temp_load = 0U;
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
        vlSelfRef.Q_temp_j = 0U;
        vlSelfRef.alu_op = 0U;
        if ((0x37U == (IData)(vlSelfRef.op))) {
            vlSelfRef.V_j = 0U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 20)), 0U);
        } else {
            vlSelfRef.V_j = vlSelfRef.curr_branch_pc;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 20)), 0U);
        }
    } else if ((0x23U == (IData)(vlSelfRef.op))) {
        vlSelfRef.issue_writes_temp = 0U;
        vlSelfRef.alu_op = 0U;
        vlSelfRef.temp_load = 1U;
        vlSelfRef.V_k = VL_CONCAT_III(32,20,12, (0x000fffffU 
                                                 & VL_REPLICATE_IOI(1, 
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                      VL_CONCAT_III(12,7,5, 
                                                    (0x0000007fU 
                                                     & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7)), 
                                                    (0x0000001fU 
                                                     & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5))));
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
    } else if ((0x73U == (IData)(vlSelfRef.op))) {
        vlSelfRef.branch_type = 2U;
        vlSelfRef.issue_writes_temp = 0U;
        vlSelfRef.temp_load = 0U;
        if ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.valid_packet = 0U;
            if ((0U != (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                if ((0x0302U != (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                    if ((1U != (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                        vlSelfRef.illegal = 1U;
                    }
                }
            }
        } else if (((1U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (5U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            vlSelfRef.__Vfunc_index__0__csr = (0x00000fffU 
                                               & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12));
            vlSelfRef.__Vfunc_index__0__Vfuncout = 
                ((0x0300U == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                  ? 0U : ((0x0305U == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                           ? 1U : ((0x0314U == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                    ? 2U : ((0x0341U 
                                             == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                             ? 3U : 7U))));
            vlSelfRef.issue_csr_write_select = vlSelfRef.__Vfunc_index__0__Vfuncout;
            vlSelfRef.csr_valid_write_temp = 1U;
            vlSelfRef.V_k = 0U;
            vlSelfRef.Q_temp_k = 0U;
            if ((0U != (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)))) {
                vlSelfRef.csr_valid_read_temp = 1U;
                vlSelfRef.issue_writes_temp = 1U;
            }
            if ((1U != (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
                vlSelfRef.V_j = VL_EXTEND_II(32,5, (IData)(vlSelfRef.rs1));
                vlSelfRef.Q_temp_j = 0U;
            }
        } else if (((3U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (7U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            vlSelfRef.csr_valid_read_temp = 1U;
            vlSelfRef.issue_writes_temp = 1U;
            vlSelfRef.__Vfunc_index__1__csr = (0x00000fffU 
                                               & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12));
            vlSelfRef.__Vfunc_index__1__Vfuncout = 
                ((0x0300U == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                  ? 0U : ((0x0305U == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                           ? 1U : ((0x0314U == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                    ? 2U : ((0x0341U 
                                             == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                             ? 3U : 7U))));
            vlSelfRef.issue_csr_write_select = vlSelfRef.__Vfunc_index__1__Vfuncout;
            vlSelfRef.alu_op = 5U;
            vlSelfRef.V_k = vlSelfRef.csr_ReadData;
            vlSelfRef.Q_temp_k = 0U;
            if ((0U != (IData)(vlSelfRef.rs1))) {
                vlSelfRef.csr_valid_write_temp = 1U;
            }
            if ((3U != (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
                vlSelfRef.V_j = VL_EXTEND_II(32,5, (IData)(vlSelfRef.rs1));
                vlSelfRef.Q_temp_j = 0U;
            }
        } else if (((2U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (6U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            vlSelfRef.csr_valid_read_temp = 1U;
            vlSelfRef.issue_writes_temp = 1U;
            vlSelfRef.__Vfunc_index__2__csr = (0x00000fffU 
                                               & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12));
            vlSelfRef.__Vfunc_index__2__Vfuncout = 
                ((0x0300U == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                  ? 0U : ((0x0305U == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                           ? 1U : ((0x0314U == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                    ? 2U : ((0x0341U 
                                             == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                             ? 3U : 7U))));
            vlSelfRef.issue_csr_write_select = vlSelfRef.__Vfunc_index__2__Vfuncout;
            vlSelfRef.alu_op = 2U;
            vlSelfRef.V_k = vlSelfRef.csr_ReadData;
            vlSelfRef.Q_temp_k = 0U;
            if ((0U != (IData)(vlSelfRef.rs1))) {
                vlSelfRef.csr_valid_write_temp = 1U;
            }
            if ((2U != (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
                vlSelfRef.V_j = VL_EXTEND_II(32,5, (IData)(vlSelfRef.rs1));
                vlSelfRef.Q_temp_j = 0U;
            }
        } else {
            vlSelfRef.valid_packet = 0U;
            vlSelfRef.illegal = 1U;
        }
    } else {
        vlSelfRef.valid_packet = 0U;
        vlSelfRef.illegal = 1U;
        vlSelfRef.issue_writes_temp = 0U;
        vlSelfRef.alu_op = 0U;
        vlSelfRef.V_j = 0U;
        vlSelfRef.V_k = 0U;
        vlSelfRef.Q_temp_j = 0U;
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
        vlSelfRef.temp_load = 0U;
    }
    VL_CONCAT_WIQ(72,8,64, __Vtemp_1, VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.Q_temp_j), (IData)(vlSelfRef.Q_temp_k)), 
                  VL_CONCAT_QII(64,32,32, vlSelfRef.V_j, vlSelfRef.V_k));
    VL_ASSIGNSEL_WW(85, 72, 0x0000000dU, vlSelfRef.rs_input, __Vtemp_1);
    VL_ASSIGNBIT_WI(0U, vlSelfRef.rs_input, vlSelfRef.temp_load);
    VL_ASSIGNSEL_WI(85, 12, 1U, vlSelfRef.rs_input, 
                    VL_CONCAT_III(12,4,8, ((IData)(vlSelfRef.stall)
                                            ? 0U : (IData)(vlSelfRef.ROB_entry)), 
                                  VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.alu_op), 
                                                VL_CONCAT_III(4,3,1, (IData)(vlSelfRef.branch_type), 
                                                              (1U 
                                                               & (~ (IData)(vlSelfRef.stall)))))));
    vlSelfRef.issue_csr_valid_write = vlSelfRef.csr_valid_write_temp;
    vlSelfRef.csr_valid_read = vlSelfRef.csr_valid_read_temp;
    vlSelfRef.issue_writes = vlSelfRef.issue_writes_temp;
    VL_ASSIGNSEL_WI(163, 32, 0U, vlSelfRef.rob_input, vlSelfRef.ins);
    VL_ASSIGNSEL_WI(163, 32, 0x0000002eU, vlSelfRef.rob_input, vlSelfRef.curr_branch_pc);
    VL_ASSIGNSEL_WI(163, 4, 0x0000009fU, vlSelfRef.rob_input, 
                    (((IData)(vlSelfRef.stall) | (0U 
                                                  == (IData)(vlSelfRef.op)))
                      ? 0U : (IData)(vlSelfRef.ROB_entry)));
    VL_ASSIGNSEL_WI(163, 2, 0x0000009dU, vlSelfRef.rob_input, 
                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.prediction), 0U));
    VL_ASSIGNBIT_WI(0x0000004eU, vlSelfRef.rob_input, 
                    (1U & VL_BITSEL_IIII(32, ((0x67U 
                                               == (IData)(vlSelfRef.op))
                                               ? 1U
                                               : 0U), 0U)));
    VL_ASSIGNSEL_WI(163, 4, 0x00000092U, vlSelfRef.rob_input, 
                    (0x0000000fU & VL_SEL_IWII(112, vlSelfRef.hold_out, 0x00000029U, 4)));
    VL_ASSIGNSEL_WI(163, 3, 0x00000020U, vlSelfRef.rob_input, 
                    VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.issue_csr_valid_write), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.csr_valid_read), 
                                                ((IData)(vlSelfRef.exception) 
                                                 | (IData)(vlSelfRef.illegal)))));
    VL_ASSIGNSEL_WI(163, 7, 0x00000096U, vlSelfRef.rob_input, 
                    VL_CONCAT_III(7,5,2, (0x0000001fU 
                                          & ((IData)(vlSelfRef.issue_writes)
                                              ? VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)
                                              : 0U)), 2U));
    VL_ASSIGNSEL_WI(163, 11, 0x00000023U, vlSelfRef.rob_input, 
                    VL_CONCAT_III(11,8,3, ((IData)(vlSelfRef.exception)
                                            ? (IData)(vlSelfRef.mcause)
                                            : ((IData)(vlSelfRef.illegal)
                                                ? 2U
                                                : 0U)), 7U));
    if ((0x23U == (IData)(vlSelfRef.op))) {
        VL_CONCAT_WQI(67,64,3, __Vtemp_2, VL_EXTEND_QI(64,32, vlSelfRef.rs2_data), 3U);
        VL_ASSIGNSEL_WW(163, 67, 0x0000004fU, vlSelfRef.rob_input, __Vtemp_2);
    } else if (vlSelfRef.branch) {
        VL_ASSIGNSEL_WI(163, 2, 0x00000050U, vlSelfRef.rob_input, 0U);
        VL_ASSIGNSEL_WI(163, 13, 0x00000052U, vlSelfRef.rob_input, 
                        VL_CONCAT_III(13,2,11, VL_CONCAT_III(2,1,1, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 
                                                             (1U 
                                                              & VL_BITSEL_IIII(32, vlSelfRef.ins, 7U))), 
                                      VL_CONCAT_III(11,6,5, 
                                                    (0x0000003fU 
                                                     & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 6)), 
                                                    VL_CONCAT_III(5,4,1, 
                                                                  (0x0000000fU 
                                                                   & VL_SEL_IIII(32, vlSelfRef.ins, 8U, 4)), 0U))));
        VL_ASSIGNSEL_WQ(163, 51, 0x0000005fU, vlSelfRef.rob_input, 
                        VL_CONCAT_QII(51,32,19, vlSelfRef.curr_branch_pc, 
                                      (0x0007ffffU 
                                       & VL_REPLICATE_IOI(1, 
                                                          (1U 
                                                           & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000013U))));
        VL_ASSIGNBIT_WI(0x0000004fU, vlSelfRef.rob_input, 0U);
    } else if ((3U == (IData)(vlSelfRef.op))) {
        VL_CONCAT_WIQ(66,32,34, __Vtemp_3, VL_EXTEND_II(32,5, 
                                                        (0x0000001fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5))), 3ULL);
        VL_ASSIGNSEL_WW(163, 66, 0x00000050U, vlSelfRef.rob_input, __Vtemp_3);
        VL_ASSIGNBIT_WI(0x0000004fU, vlSelfRef.rob_input, 0U);
        VL_ASSIGNSEL_WI(163, 5, 0x00000098U, vlSelfRef.rob_input, 
                        (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)));
    } else if ((0x73U == (IData)(vlSelfRef.op))) {
        VL_CONST_W_1X(66,__Vtemp_4,0x00000003);
        VL_ASSIGNSEL_WW(163, 66, 0x00000050U, vlSelfRef.rob_input, __Vtemp_4);
        if ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            VL_ASSIGNSEL_WQ(163, 64, 0x00000052U, vlSelfRef.rob_input, 0ULL);
            if ((0U == (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                VL_ASSIGNSEL_WI(163, 2, 0x00000096U, vlSelfRef.rob_input, 1U);
            } else if ((0x0302U == (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                VL_ASSIGNSEL_WI(163, 2, 0x00000096U, vlSelfRef.rob_input, 0U);
            } else if ((1U == (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                VL_ASSIGNSEL_WI(163, 2, 0x00000096U, vlSelfRef.rob_input, 3U);
                VL_ASSIGNSEL_WI(163, 8, 0x00000026U, vlSelfRef.rob_input, 3U);
            }
        } else if (((1U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (5U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            VL_ASSIGNSEL_WI(163, 3, 0x00000023U, vlSelfRef.rob_input, vlSelfRef.issue_csr_write_select);
            VL_ASSIGNSEL_WQ(163, 64, 0x00000052U, vlSelfRef.rob_input, 
                            VL_CONCAT_QII(64,32,32, vlSelfRef.csr_ReadData, 0U));
        } else if (((3U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (7U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            VL_ASSIGNSEL_WI(163, 3, 0x00000023U, vlSelfRef.rob_input, vlSelfRef.issue_csr_write_select);
            VL_ASSIGNSEL_WQ(163, 64, 0x00000052U, vlSelfRef.rob_input, 
                            VL_CONCAT_QII(64,32,32, vlSelfRef.csr_ReadData, 0U));
        } else if (((2U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (6U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            VL_ASSIGNSEL_WI(163, 3, 0x00000023U, vlSelfRef.rob_input, vlSelfRef.issue_csr_write_select);
            VL_ASSIGNSEL_WQ(163, 64, 0x00000052U, vlSelfRef.rob_input, 
                            VL_CONCAT_QII(64,32,32, vlSelfRef.csr_ReadData, 0U));
        }
    } else {
        VL_CONCAT_WIQ(66,32,34, __Vtemp_5, VL_EXTEND_II(32,5, 
                                                        (0x0000001fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5))), 2ULL);
        VL_ASSIGNSEL_WW(163, 66, 0x00000050U, vlSelfRef.rob_input, __Vtemp_5);
        VL_ASSIGNBIT_WI(0x0000004fU, vlSelfRef.rob_input, 0U);
        VL_ASSIGNSEL_WI(163, 5, 0x00000098U, vlSelfRef.rob_input, 
                        (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)));
    }
    VL_ASSIGN_W(163, vlSelfRef.new_packet, vlSelfRef.rob_input);
}

void Vcore_issue___nba_comb__TOP__core__res_sched__0(Vcore_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_issue___nba_comb__TOP__core__res_sched__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = (1U & VL_BITSEL_IWII(112, vlSelfRef.hold_out, 0x0000002fU));
    vlSelfRef.exception = (1U & VL_BITSEL_IWII(112, vlSelfRef.hold_out, 0U));
    vlSelfRef.mcause = (0x000000ffU & VL_SEL_IWII(112, vlSelfRef.hold_out, 1U, 8));
    vlSelfRef.jump = (1U & VL_BITSEL_IWII(112, vlSelfRef.hold_out, 0x0000002dU));
    vlSelfRef.curr_branch_pc = VL_SEL_IWII(112, vlSelfRef.hold_out, 0x00000050U, 32);
    vlSelfRef.branch = (1U & VL_BITSEL_IWII(112, vlSelfRef.hold_out, 0x0000002eU));
    vlSelfRef.ins = VL_SEL_IWII(112, vlSelfRef.hold_out, 0x00000030U, 32);
    vlSelfRef.op = (0x0000007fU & VL_SEL_IIII(32, vlSelfRef.ins, 0U, 7));
}

void Vcore_issue___nba_comb__TOP__core__res_sched__1(Vcore_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_issue___nba_comb__TOP__core__res_sched__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs_dest = ((0U == (IData)(vlSelfRef.op))
                          ? 4U : ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.busy_bus), 0U))
                                   ? ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.busy_bus), 1U))
                                       ? ((1U & VL_BITSEL_IIII(4, (IData)(vlSelfRef.busy_bus), 2U))
                                           ? ((1U & 
                                               VL_BITSEL_IIII(4, (IData)(vlSelfRef.busy_bus), 3U))
                                               ? 5U
                                               : 3U)
                                           : 2U) : 1U)
                                   : 0U));
}

void Vcore_issue___nba_comb__TOP__core__res_sched__2(Vcore_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_issue___nba_comb__TOP__core__res_sched__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    VL_ASSIGNSEL_WQ(81, 33, 0x00000030U, vlSelfRef.jalrq_input, 
                    VL_CONCAT_QII(33,1,32, ((0x67U 
                                             == (IData)(vlSelfRef.op)) 
                                            & (~ (IData)(vlSelfRef.stall))), 
                                  VL_SEL_IWII(112, vlSelfRef.hold_out, 9U, 32)));
    VL_ASSIGNSEL_WI(81, 12, 4U, vlSelfRef.jalrq_input, 
                    (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
    if (((((IData)(vlSelfRef.Q_j) == (0x0000000fU & 
                                      VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4))) 
          & (0U != (0x0000000fU & VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4)))) 
         & (~ VL_BITSEL_IQII(38, vlSelfRef.new_CDB, 0U)))) {
        VL_ASSIGNSEL_WI(81, 32, 0x00000010U, vlSelfRef.jalrq_input, 
                        VL_SEL_IQII(38, vlSelfRef.new_CDB, 2U, 32));
        VL_ASSIGNSEL_WI(81, 4, 0U, vlSelfRef.jalrq_input, 0U);
    } else if (vlSelfRef.rs1reg_busy) {
        if (vlSelfRef.rs1rob_ready) {
            VL_ASSIGNSEL_WI(81, 32, 0x00000010U, vlSelfRef.jalrq_input, vlSelfRef.rs1rob_data);
            VL_ASSIGNSEL_WI(81, 4, 0U, vlSelfRef.jalrq_input, 0U);
        } else {
            VL_ASSIGNSEL_WI(81, 32, 0x00000010U, vlSelfRef.jalrq_input, 0U);
            VL_ASSIGNSEL_WI(81, 4, 0U, vlSelfRef.jalrq_input, vlSelfRef.Q_j);
        }
    } else {
        VL_ASSIGNSEL_WI(81, 32, 0x00000010U, vlSelfRef.jalrq_input, vlSelfRef.rs1_data);
        VL_ASSIGNSEL_WI(81, 4, 0U, vlSelfRef.jalrq_input, 0U);
    }
    if (vlSelfRef.stall) {
        VL_EXTEND_WI(75,4, __Vtemp_1, (IData)(vlSelfRef.Q_k));
        VL_ASSIGNSEL_WW(79, 75, 4U, vlSelfRef.lsq_input, __Vtemp_1);
    } else {
        if ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            VL_ASSIGNSEL_WI(79, 4, 0U, vlSelfRef.lsq_input, 3U);
        } else if ((1U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            VL_ASSIGNSEL_WI(79, 4, 0U, vlSelfRef.lsq_input, 5U);
        } else if ((2U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            VL_ASSIGNSEL_WI(79, 4, 0U, vlSelfRef.lsq_input, 9U);
        } else if ((4U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            VL_ASSIGNSEL_WI(79, 4, 0U, vlSelfRef.lsq_input, 2U);
        } else if ((5U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            VL_ASSIGNSEL_WI(79, 4, 0U, vlSelfRef.lsq_input, 4U);
        }
        if ((3U == (IData)(vlSelfRef.op))) {
            VL_CONST_W_1X(65,__Vtemp_2,0x00000000);
            VL_CONCAT_WIW(66,1,65, __Vtemp_3, (1U & 
                                               (~ (IData)(vlSelfRef.stall))), __Vtemp_2);
            VL_ASSIGNSEL_WW(79, 66, 0x0000000dU, vlSelfRef.lsq_input, __Vtemp_3);
            VL_ASSIGNSEL_WI(79, 4, 9U, vlSelfRef.lsq_input, 
                            (((IData)(vlSelfRef.stall) 
                              | (0U == (IData)(vlSelfRef.op)))
                              ? 0U : (IData)(vlSelfRef.ROB_entry)));
            VL_ASSIGNSEL_WI(79, 5, 4U, vlSelfRef.lsq_input, 0U);
        } else if ((0x23U == (IData)(vlSelfRef.op))) {
            VL_ASSIGNSEL_WQ(79, 34, 0x0000002dU, vlSelfRef.lsq_input, 
                            VL_CONCAT_QII(34,2,32, 
                                          VL_EXTEND_II(2,1, 
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.stall)))), 0U));
            if (((((0x0000000fU & VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4)) 
                   == (IData)(vlSelfRef.Q_k)) & (0U 
                                                 != 
                                                 (0x0000000fU 
                                                  & VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4)))) 
                 & (~ VL_BITSEL_IQII(38, vlSelfRef.new_CDB, 0U)))) {
                VL_ASSIGNSEL_WI(79, 32, 0x0000000dU, vlSelfRef.lsq_input, 
                                VL_SEL_IQII(38, vlSelfRef.new_CDB, 2U, 32));
                VL_ASSIGNSEL_WI(79, 4, 4U, vlSelfRef.lsq_input, 0U);
            } else if (vlSelfRef.rs2reg_busy) {
                if (vlSelfRef.rs2rob_ready) {
                    VL_ASSIGNSEL_WI(79, 32, 0x0000000dU, vlSelfRef.lsq_input, vlSelfRef.rs2rob_data);
                    VL_ASSIGNSEL_WI(79, 4, 4U, vlSelfRef.lsq_input, 0U);
                } else {
                    VL_ASSIGNSEL_WI(79, 32, 0x0000000dU, vlSelfRef.lsq_input, 0U);
                    VL_ASSIGNSEL_WI(79, 4, 4U, vlSelfRef.lsq_input, vlSelfRef.Q_k);
                }
            } else {
                VL_ASSIGNSEL_WI(79, 32, 0x0000000dU, vlSelfRef.lsq_input, vlSelfRef.rs2_data);
                VL_ASSIGNSEL_WI(79, 4, 4U, vlSelfRef.lsq_input, 0U);
            }
            VL_ASSIGNSEL_WI(79, 4, 9U, vlSelfRef.lsq_input, 
                            (((IData)(vlSelfRef.stall) 
                              | (0U == (IData)(vlSelfRef.op)))
                              ? 0U : (IData)(vlSelfRef.ROB_entry)));
            VL_ASSIGNBIT_WI(8U, vlSelfRef.lsq_input, 0U);
        } else {
            VL_CONST_W_1X(79,vlSelfRef.lsq_input,0x00000000);
        }
    }
}

void Vcore_issue___nba_comb__TOP__core__res_sched__3(Vcore_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_issue___nba_comb__TOP__core__res_sched__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs1 = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 0x0fU, 5));
    vlSelfRef.rs2 = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 5));
    vlSelfRef.issue_dest = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5));
    vlSelfRef.valid_packet = 1U;
    vlSelfRef.illegal = 0U;
    vlSelfRef.csr_valid_write_temp = 0U;
    vlSelfRef.issue_csr_write_select = 7U;
    vlSelfRef.csr_valid_read_temp = 0U;
    vlSelfRef.alu_op = 0U;
    if (((((IData)(vlSelfRef.Q_j) == (0x0000000fU & 
                                      VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4))) 
          & (0U != (0x0000000fU & VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4)))) 
         & (~ VL_BITSEL_IQII(38, vlSelfRef.new_CDB, 0U)))) {
        vlSelfRef.V_j = VL_SEL_IQII(38, vlSelfRef.new_CDB, 2U, 32);
        vlSelfRef.Q_temp_j = 0U;
    } else if (vlSelfRef.rs1reg_busy) {
        if (vlSelfRef.rs1rob_ready) {
            vlSelfRef.V_j = vlSelfRef.rs1rob_data;
            vlSelfRef.Q_temp_j = 0U;
        } else {
            vlSelfRef.V_j = 0U;
            vlSelfRef.Q_temp_j = vlSelfRef.Q_j;
        }
    } else {
        vlSelfRef.V_j = vlSelfRef.rs1_data;
        vlSelfRef.Q_temp_j = 0U;
    }
    if (((((IData)(vlSelfRef.Q_k) == (0x0000000fU & 
                                      VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4))) 
          & (0U != (0x0000000fU & VL_SEL_IQII(38, vlSelfRef.new_CDB, 0x00000022U, 4)))) 
         & (~ VL_BITSEL_IQII(38, vlSelfRef.new_CDB, 0U)))) {
        vlSelfRef.V_k = VL_SEL_IQII(38, vlSelfRef.new_CDB, 2U, 32);
        vlSelfRef.Q_temp_k = 0U;
    } else if (vlSelfRef.rs2reg_busy) {
        if (vlSelfRef.rs2rob_ready) {
            vlSelfRef.V_k = vlSelfRef.rs2rob_data;
            vlSelfRef.Q_temp_k = 0U;
        } else {
            vlSelfRef.V_k = 0U;
            vlSelfRef.Q_temp_k = vlSelfRef.Q_k;
        }
    } else {
        vlSelfRef.V_k = vlSelfRef.rs2_data;
        vlSelfRef.Q_temp_k = 0U;
    }
    if ((0x33U == (IData)(vlSelfRef.op))) {
        vlSelfRef.branch_type = 2U;
        vlSelfRef.issue_writes_temp = 1U;
        vlSelfRef.temp_load = 0U;
        if ((0U == (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)))) {
            vlSelfRef.valid_packet = 0U;
            vlSelfRef.issue_writes_temp = 0U;
        }
        vlSelfRef.alu_op = (((0U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                             & (1U == (0x0000007fU 
                                       & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                             ? 0x0cU : (((1U == (7U 
                                                 & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                         & (1U == (0x0000007fU 
                                                   & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                         ? 0x0dU : 
                                        (((4U == (7U 
                                                  & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                          & (1U == 
                                             (0x0000007fU 
                                              & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                          ? 0x0bU : 
                                         (((7U == (7U 
                                                   & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                           & (1U == 
                                              (0x0000007fU 
                                               & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                           ? 0x0aU : 
                                          (((0U == 
                                             (7U & 
                                              VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                            & (0U == 
                                               (0x0000007fU 
                                                & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                            ? 0U : 
                                           (((0U == 
                                              (7U & 
                                               VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                             & (0x20U 
                                                == 
                                                (0x0000007fU 
                                                 & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                             ? 4U : 
                                            (((4U == 
                                               (7U 
                                                & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                              & (0U 
                                                 == 
                                                 (0x0000007fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                              ? 1U : 
                                             (((6U 
                                                == 
                                                (7U 
                                                 & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                               & (0U 
                                                  == 
                                                  (0x0000007fU 
                                                   & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                               ? 2U
                                               : ((
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                                   & (0U 
                                                      == 
                                                      (0x0000007fU 
                                                       & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                                   ? 3U
                                                   : 
                                                  (((1U 
                                                     == 
                                                     (7U 
                                                      & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                                    & (0U 
                                                       == 
                                                       (0x0000007fU 
                                                        & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                                    ? 0x0fU
                                                    : 
                                                   (((5U 
                                                      == 
                                                      (7U 
                                                       & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                                     & (0U 
                                                        == 
                                                        (0x0000007fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                                     ? 8U
                                                     : 
                                                    (((5U 
                                                       == 
                                                       (7U 
                                                        & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                                      & (0x20U 
                                                         == 
                                                         (0x0000007fU 
                                                          & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                                      ? 9U
                                                      : 
                                                     (((2U 
                                                        == 
                                                        (7U 
                                                         & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                                                       & (0U 
                                                          == 
                                                          (0x0000007fU 
                                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7))))
                                                       ? 7U
                                                       : 6U)))))))))))));
    } else if (vlSelfRef.branch) {
        vlSelfRef.alu_op = 4U;
        vlSelfRef.issue_writes_temp = 0U;
        vlSelfRef.temp_load = 0U;
        vlSelfRef.branch_type = (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3));
    } else if ((0x13U == (IData)(vlSelfRef.op))) {
        vlSelfRef.issue_writes_temp = 1U;
        if ((0U == (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)))) {
            vlSelfRef.valid_packet = 0U;
            vlSelfRef.issue_writes_temp = 0U;
        }
        if ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 0U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        } else if ((4U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 1U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        } else if ((6U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 2U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        } else if ((7U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 3U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        } else if ((1U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 0x0fU;
            vlSelfRef.V_k = VL_EXTEND_II(32,5, (0x0000001fU 
                                                & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 5)));
        } else if (((5U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    & (~ VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1eU)))) {
            vlSelfRef.alu_op = 8U;
            vlSelfRef.V_k = VL_EXTEND_II(32,5, (0x0000001fU 
                                                & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 5)));
        } else if (((5U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1eU))) {
            vlSelfRef.alu_op = 9U;
            vlSelfRef.V_k = VL_EXTEND_II(32,5, (0x0000001fU 
                                                & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 5)));
        } else if ((2U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.alu_op = 7U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        } else {
            vlSelfRef.alu_op = 6U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_REPLICATE_IOI(1, 
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                          (0x00000fffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        }
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
        vlSelfRef.temp_load = 0U;
    } else if (((IData)(vlSelfRef.jump) | (0x67U == (IData)(vlSelfRef.op)))) {
        vlSelfRef.alu_op = 0U;
        vlSelfRef.issue_writes_temp = 1U;
        vlSelfRef.temp_load = 0U;
        vlSelfRef.V_j = vlSelfRef.curr_branch_pc;
        vlSelfRef.V_k = 4U;
        vlSelfRef.Q_temp_j = 0U;
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
    } else if ((3U == (IData)(vlSelfRef.op))) {
        vlSelfRef.alu_op = 0U;
        vlSelfRef.issue_writes_temp = 1U;
        vlSelfRef.temp_load = 1U;
        vlSelfRef.V_k = VL_CONCAT_III(32,20,12, (0x000fffffU 
                                                 & VL_REPLICATE_IOI(1, 
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                      (0x00000fffU 
                                       & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)));
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
    } else if (((0x37U == (IData)(vlSelfRef.op)) | 
                (0x17U == (IData)(vlSelfRef.op)))) {
        vlSelfRef.issue_writes_temp = 1U;
        vlSelfRef.temp_load = 0U;
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
        vlSelfRef.Q_temp_j = 0U;
        vlSelfRef.alu_op = 0U;
        if ((0x37U == (IData)(vlSelfRef.op))) {
            vlSelfRef.V_j = 0U;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 20)), 0U);
        } else {
            vlSelfRef.V_j = vlSelfRef.curr_branch_pc;
            vlSelfRef.V_k = VL_CONCAT_III(32,20,12, 
                                          (0x000fffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 20)), 0U);
        }
    } else if ((0x23U == (IData)(vlSelfRef.op))) {
        vlSelfRef.issue_writes_temp = 0U;
        vlSelfRef.alu_op = 0U;
        vlSelfRef.temp_load = 1U;
        vlSelfRef.V_k = VL_CONCAT_III(32,20,12, (0x000fffffU 
                                                 & VL_REPLICATE_IOI(1, 
                                                                    (1U 
                                                                     & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000014U)), 
                                      VL_CONCAT_III(12,7,5, 
                                                    (0x0000007fU 
                                                     & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 7)), 
                                                    (0x0000001fU 
                                                     & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5))));
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
    } else if ((0x73U == (IData)(vlSelfRef.op))) {
        vlSelfRef.branch_type = 2U;
        vlSelfRef.issue_writes_temp = 0U;
        vlSelfRef.temp_load = 0U;
        if ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            vlSelfRef.valid_packet = 0U;
            if ((0U != (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                if ((0x0302U != (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                    if ((1U != (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                        vlSelfRef.illegal = 1U;
                    }
                }
            }
        } else if (((1U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (5U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            vlSelfRef.__Vfunc_index__0__csr = (0x00000fffU 
                                               & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12));
            vlSelfRef.__Vfunc_index__0__Vfuncout = 
                ((0x0300U == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                  ? 0U : ((0x0305U == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                           ? 1U : ((0x0314U == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                    ? 2U : ((0x0341U 
                                             == (IData)(vlSelfRef.__Vfunc_index__0__csr))
                                             ? 3U : 7U))));
            vlSelfRef.issue_csr_write_select = vlSelfRef.__Vfunc_index__0__Vfuncout;
            vlSelfRef.csr_valid_write_temp = 1U;
            vlSelfRef.V_k = 0U;
            vlSelfRef.Q_temp_k = 0U;
            if ((0U != (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)))) {
                vlSelfRef.csr_valid_read_temp = 1U;
                vlSelfRef.issue_writes_temp = 1U;
            }
            if ((1U != (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
                vlSelfRef.V_j = VL_EXTEND_II(32,5, (IData)(vlSelfRef.rs1));
                vlSelfRef.Q_temp_j = 0U;
            }
        } else if (((3U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (7U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            vlSelfRef.csr_valid_read_temp = 1U;
            vlSelfRef.issue_writes_temp = 1U;
            vlSelfRef.__Vfunc_index__1__csr = (0x00000fffU 
                                               & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12));
            vlSelfRef.__Vfunc_index__1__Vfuncout = 
                ((0x0300U == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                  ? 0U : ((0x0305U == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                           ? 1U : ((0x0314U == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                    ? 2U : ((0x0341U 
                                             == (IData)(vlSelfRef.__Vfunc_index__1__csr))
                                             ? 3U : 7U))));
            vlSelfRef.issue_csr_write_select = vlSelfRef.__Vfunc_index__1__Vfuncout;
            vlSelfRef.alu_op = 5U;
            vlSelfRef.V_k = vlSelfRef.csr_ReadData;
            vlSelfRef.Q_temp_k = 0U;
            if ((0U != (IData)(vlSelfRef.rs1))) {
                vlSelfRef.csr_valid_write_temp = 1U;
            }
            if ((3U != (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
                vlSelfRef.V_j = VL_EXTEND_II(32,5, (IData)(vlSelfRef.rs1));
                vlSelfRef.Q_temp_j = 0U;
            }
        } else if (((2U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (6U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            vlSelfRef.csr_valid_read_temp = 1U;
            vlSelfRef.issue_writes_temp = 1U;
            vlSelfRef.__Vfunc_index__2__csr = (0x00000fffU 
                                               & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12));
            vlSelfRef.__Vfunc_index__2__Vfuncout = 
                ((0x0300U == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                  ? 0U : ((0x0305U == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                           ? 1U : ((0x0314U == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                    ? 2U : ((0x0341U 
                                             == (IData)(vlSelfRef.__Vfunc_index__2__csr))
                                             ? 3U : 7U))));
            vlSelfRef.issue_csr_write_select = vlSelfRef.__Vfunc_index__2__Vfuncout;
            vlSelfRef.alu_op = 2U;
            vlSelfRef.V_k = vlSelfRef.csr_ReadData;
            vlSelfRef.Q_temp_k = 0U;
            if ((0U != (IData)(vlSelfRef.rs1))) {
                vlSelfRef.csr_valid_write_temp = 1U;
            }
            if ((2U != (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
                vlSelfRef.V_j = VL_EXTEND_II(32,5, (IData)(vlSelfRef.rs1));
                vlSelfRef.Q_temp_j = 0U;
            }
        } else {
            vlSelfRef.valid_packet = 0U;
            vlSelfRef.illegal = 1U;
        }
    } else {
        vlSelfRef.valid_packet = 0U;
        vlSelfRef.illegal = 1U;
        vlSelfRef.issue_writes_temp = 0U;
        vlSelfRef.alu_op = 0U;
        vlSelfRef.V_j = 0U;
        vlSelfRef.V_k = 0U;
        vlSelfRef.Q_temp_j = 0U;
        vlSelfRef.Q_temp_k = 0U;
        vlSelfRef.branch_type = 2U;
        vlSelfRef.temp_load = 0U;
    }
    vlSelfRef.issue_csr_valid_write = vlSelfRef.csr_valid_write_temp;
    vlSelfRef.csr_valid_read = vlSelfRef.csr_valid_read_temp;
    vlSelfRef.issue_writes = vlSelfRef.issue_writes_temp;
}

void Vcore_issue___nba_comb__TOP__core__res_sched__4(Vcore_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_issue___nba_comb__TOP__core__res_sched__4\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    VL_CONCAT_WIQ(72,8,64, __Vtemp_1, VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.Q_temp_j), (IData)(vlSelfRef.Q_temp_k)), 
                  VL_CONCAT_QII(64,32,32, vlSelfRef.V_j, vlSelfRef.V_k));
    VL_ASSIGNSEL_WW(85, 72, 0x0000000dU, vlSelfRef.rs_input, __Vtemp_1);
    VL_ASSIGNBIT_WI(0U, vlSelfRef.rs_input, vlSelfRef.temp_load);
    VL_ASSIGNSEL_WI(85, 12, 1U, vlSelfRef.rs_input, 
                    VL_CONCAT_III(12,4,8, ((IData)(vlSelfRef.stall)
                                            ? 0U : (IData)(vlSelfRef.ROB_entry)), 
                                  VL_CONCAT_III(8,4,4, (IData)(vlSelfRef.alu_op), 
                                                VL_CONCAT_III(4,3,1, (IData)(vlSelfRef.branch_type), 
                                                              (1U 
                                                               & (~ (IData)(vlSelfRef.stall)))))));
    VL_ASSIGNSEL_WI(163, 32, 0U, vlSelfRef.rob_input, vlSelfRef.ins);
    VL_ASSIGNSEL_WI(163, 32, 0x0000002eU, vlSelfRef.rob_input, vlSelfRef.curr_branch_pc);
    VL_ASSIGNSEL_WI(163, 4, 0x0000009fU, vlSelfRef.rob_input, 
                    (((IData)(vlSelfRef.stall) | (0U 
                                                  == (IData)(vlSelfRef.op)))
                      ? 0U : (IData)(vlSelfRef.ROB_entry)));
    VL_ASSIGNSEL_WI(163, 2, 0x0000009dU, vlSelfRef.rob_input, 
                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.prediction), 0U));
    VL_ASSIGNBIT_WI(0x0000004eU, vlSelfRef.rob_input, 
                    (1U & VL_BITSEL_IIII(32, ((0x67U 
                                               == (IData)(vlSelfRef.op))
                                               ? 1U
                                               : 0U), 0U)));
    VL_ASSIGNSEL_WI(163, 4, 0x00000092U, vlSelfRef.rob_input, 
                    (0x0000000fU & VL_SEL_IWII(112, vlSelfRef.hold_out, 0x00000029U, 4)));
    VL_ASSIGNSEL_WI(163, 3, 0x00000020U, vlSelfRef.rob_input, 
                    VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.issue_csr_valid_write), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.csr_valid_read), 
                                                ((IData)(vlSelfRef.exception) 
                                                 | (IData)(vlSelfRef.illegal)))));
    VL_ASSIGNSEL_WI(163, 7, 0x00000096U, vlSelfRef.rob_input, 
                    VL_CONCAT_III(7,5,2, (0x0000001fU 
                                          & ((IData)(vlSelfRef.issue_writes)
                                              ? VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)
                                              : 0U)), 2U));
    VL_ASSIGNSEL_WI(163, 11, 0x00000023U, vlSelfRef.rob_input, 
                    VL_CONCAT_III(11,8,3, ((IData)(vlSelfRef.exception)
                                            ? (IData)(vlSelfRef.mcause)
                                            : ((IData)(vlSelfRef.illegal)
                                                ? 2U
                                                : 0U)), 7U));
    if ((0x23U == (IData)(vlSelfRef.op))) {
        VL_CONCAT_WQI(67,64,3, __Vtemp_2, VL_EXTEND_QI(64,32, vlSelfRef.rs2_data), 3U);
        VL_ASSIGNSEL_WW(163, 67, 0x0000004fU, vlSelfRef.rob_input, __Vtemp_2);
    } else if (vlSelfRef.branch) {
        VL_ASSIGNSEL_WI(163, 2, 0x00000050U, vlSelfRef.rob_input, 0U);
        VL_ASSIGNSEL_WI(163, 13, 0x00000052U, vlSelfRef.rob_input, 
                        VL_CONCAT_III(13,2,11, VL_CONCAT_III(2,1,1, 
                                                             (1U 
                                                              & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 
                                                             (1U 
                                                              & VL_BITSEL_IIII(32, vlSelfRef.ins, 7U))), 
                                      VL_CONCAT_III(11,6,5, 
                                                    (0x0000003fU 
                                                     & VL_SEL_IIII(32, vlSelfRef.ins, 0x19U, 6)), 
                                                    VL_CONCAT_III(5,4,1, 
                                                                  (0x0000000fU 
                                                                   & VL_SEL_IIII(32, vlSelfRef.ins, 8U, 4)), 0U))));
        VL_ASSIGNSEL_WQ(163, 51, 0x0000005fU, vlSelfRef.rob_input, 
                        VL_CONCAT_QII(51,32,19, vlSelfRef.curr_branch_pc, 
                                      (0x0007ffffU 
                                       & VL_REPLICATE_IOI(1, 
                                                          (1U 
                                                           & VL_BITSEL_IIII(32, vlSelfRef.ins, 0x1fU)), 0x00000013U))));
        VL_ASSIGNBIT_WI(0x0000004fU, vlSelfRef.rob_input, 0U);
    } else if ((3U == (IData)(vlSelfRef.op))) {
        VL_CONCAT_WIQ(66,32,34, __Vtemp_3, VL_EXTEND_II(32,5, 
                                                        (0x0000001fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5))), 3ULL);
        VL_ASSIGNSEL_WW(163, 66, 0x00000050U, vlSelfRef.rob_input, __Vtemp_3);
        VL_ASSIGNBIT_WI(0x0000004fU, vlSelfRef.rob_input, 0U);
        VL_ASSIGNSEL_WI(163, 5, 0x00000098U, vlSelfRef.rob_input, 
                        (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)));
    } else if ((0x73U == (IData)(vlSelfRef.op))) {
        VL_CONST_W_1X(66,__Vtemp_4,0x00000003);
        VL_ASSIGNSEL_WW(163, 66, 0x00000050U, vlSelfRef.rob_input, __Vtemp_4);
        if ((0U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3)))) {
            VL_ASSIGNSEL_WQ(163, 64, 0x00000052U, vlSelfRef.rob_input, 0ULL);
            if ((0U == (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                VL_ASSIGNSEL_WI(163, 2, 0x00000096U, vlSelfRef.rob_input, 1U);
            } else if ((0x0302U == (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                VL_ASSIGNSEL_WI(163, 2, 0x00000096U, vlSelfRef.rob_input, 0U);
            } else if ((1U == (0x00000fffU & VL_SEL_IIII(32, vlSelfRef.ins, 0x14U, 12)))) {
                VL_ASSIGNSEL_WI(163, 2, 0x00000096U, vlSelfRef.rob_input, 3U);
                VL_ASSIGNSEL_WI(163, 8, 0x00000026U, vlSelfRef.rob_input, 3U);
            }
        } else if (((1U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (5U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            VL_ASSIGNSEL_WI(163, 3, 0x00000023U, vlSelfRef.rob_input, vlSelfRef.issue_csr_write_select);
            VL_ASSIGNSEL_WQ(163, 64, 0x00000052U, vlSelfRef.rob_input, 
                            VL_CONCAT_QII(64,32,32, vlSelfRef.csr_ReadData, 0U));
        } else if (((3U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (7U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            VL_ASSIGNSEL_WI(163, 3, 0x00000023U, vlSelfRef.rob_input, vlSelfRef.issue_csr_write_select);
            VL_ASSIGNSEL_WQ(163, 64, 0x00000052U, vlSelfRef.rob_input, 
                            VL_CONCAT_QII(64,32,32, vlSelfRef.csr_ReadData, 0U));
        } else if (((2U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))) 
                    | (6U == (7U & VL_SEL_IIII(32, vlSelfRef.ins, 0x0cU, 3))))) {
            VL_ASSIGNSEL_WI(163, 3, 0x00000023U, vlSelfRef.rob_input, vlSelfRef.issue_csr_write_select);
            VL_ASSIGNSEL_WQ(163, 64, 0x00000052U, vlSelfRef.rob_input, 
                            VL_CONCAT_QII(64,32,32, vlSelfRef.csr_ReadData, 0U));
        }
    } else {
        VL_CONCAT_WIQ(66,32,34, __Vtemp_5, VL_EXTEND_II(32,5, 
                                                        (0x0000001fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5))), 2ULL);
        VL_ASSIGNSEL_WW(163, 66, 0x00000050U, vlSelfRef.rob_input, __Vtemp_5);
        VL_ASSIGNBIT_WI(0x0000004fU, vlSelfRef.rob_input, 0U);
        VL_ASSIGNSEL_WI(163, 5, 0x00000098U, vlSelfRef.rob_input, 
                        (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.ins, 7U, 5)));
    }
    VL_ASSIGN_W(163, vlSelfRef.new_packet, vlSelfRef.rob_input);
}
