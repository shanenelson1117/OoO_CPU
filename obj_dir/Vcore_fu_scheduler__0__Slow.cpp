// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

extern const VlWide<10>/*319:0*/ Vcore__ConstPool__CONST_hab76c978_0;

VL_ATTR_COLD void Vcore_fu_scheduler___stl_sequent__TOP__core__fu_sched__0(Vcore_fu_scheduler* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fu_scheduler___stl_sequent__TOP__core__fu_sched__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(320, vlSelfRef.fu_bus, Vcore__ConstPool__CONST_hab76c978_0);
    vlSelfRef.load = 0U;
    vlSelfRef.branch_type_bus = 0x12U;
    vlSelfRef.ROB_entry_bus = 0U;
    vlSelfRef.valid_in_bus = 0U;
    vlSelfRef.consumed_bus = 0U;
    vlSelfRef.ALU_op = 0U;
    if ((1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.ready_bus), 0U))) {
        if ((1U & (VL_BITSEL_IWII(77, vlSelfRef.rs0_data, 1U) 
                   & (~ VL_BITSEL_IWII(77, vlSelfRef.rs0_data, 0x00000049U))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs0_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_II(0U, vlSelfRef.load, (1U 
                                                 & VL_BITSEL_IWII(77, vlSelfRef.rs0_data, 0U)));
            VL_ASSIGNSEL_II(6, 3, 0U, vlSelfRef.branch_type_bus, 
                            (7U & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x0000004aU, 3)));
            VL_ASSIGNBIT_IO(0U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 0U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(0U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 0U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000046U, 4)));
        } else if ((1U & (VL_BITSEL_IWII(77, vlSelfRef.rs1_data, 1U) 
                          & (~ VL_BITSEL_IWII(77, vlSelfRef.rs1_data, 0x00000049U))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs1_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_II(0U, vlSelfRef.load, (1U 
                                                 & VL_BITSEL_IWII(77, vlSelfRef.rs1_data, 0U)));
            VL_ASSIGNSEL_II(6, 3, 0U, vlSelfRef.branch_type_bus, 
                            (7U & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x0000004aU, 3)));
            VL_ASSIGNBIT_IO(1U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 0U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(0U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 0U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000046U, 4)));
        } else if ((1U & (VL_BITSEL_IWII(77, vlSelfRef.rs2_data, 1U) 
                          & (~ VL_BITSEL_IWII(77, vlSelfRef.rs2_data, 0x00000049U))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs2_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_II(0U, vlSelfRef.load, (1U 
                                                 & VL_BITSEL_IWII(77, vlSelfRef.rs2_data, 0U)));
            VL_ASSIGNSEL_II(6, 3, 0U, vlSelfRef.branch_type_bus, 
                            (7U & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x0000004aU, 3)));
            VL_ASSIGNBIT_IO(2U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 0U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(0U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 0U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000046U, 4)));
        } else if ((1U & (VL_BITSEL_IWII(77, vlSelfRef.rs3_data, 1U) 
                          & (~ VL_BITSEL_IWII(77, vlSelfRef.rs3_data, 0x00000049U))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs3_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_II(0U, vlSelfRef.load, (1U 
                                                 & VL_BITSEL_IWII(77, vlSelfRef.rs3_data, 0U)));
            VL_ASSIGNSEL_II(6, 3, 0U, vlSelfRef.branch_type_bus, 
                            (7U & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x0000004aU, 3)));
            VL_ASSIGNBIT_IO(3U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 0U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(0U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 0U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000046U, 4)));
        }
    }
    if ((1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.ready_bus), 1U))) {
        if ((1U & ((VL_BITSEL_IWII(77, vlSelfRef.rs3_data, 1U) 
                    & (~ VL_BITSEL_IWII(77, vlSelfRef.rs3_data, 0x00000049U))) 
                   & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 3U))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x00000040U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs3_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_II(1U, vlSelfRef.load, (1U 
                                                 & VL_BITSEL_IWII(77, vlSelfRef.rs3_data, 0U)));
            VL_ASSIGNSEL_II(6, 3, 3U, vlSelfRef.branch_type_bus, 
                            (7U & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x0000004aU, 3)));
            VL_ASSIGNBIT_IO(3U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 4U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(1U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 4U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000046U, 4)));
        } else if ((1U & ((VL_BITSEL_IWII(77, vlSelfRef.rs2_data, 1U) 
                           & (~ VL_BITSEL_IWII(77, vlSelfRef.rs2_data, 0x00000049U))) 
                          & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 2U))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x00000040U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs2_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_II(1U, vlSelfRef.load, (1U 
                                                 & VL_BITSEL_IWII(77, vlSelfRef.rs2_data, 0U)));
            VL_ASSIGNSEL_II(6, 3, 3U, vlSelfRef.branch_type_bus, 
                            (7U & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x0000004aU, 3)));
            VL_ASSIGNBIT_IO(2U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 4U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(1U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 4U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000046U, 4)));
        } else if ((1U & ((VL_BITSEL_IWII(77, vlSelfRef.rs1_data, 1U) 
                           & (~ VL_BITSEL_IWII(77, vlSelfRef.rs1_data, 0x00000049U))) 
                          & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 1U))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x00000040U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs1_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_II(1U, vlSelfRef.load, (1U 
                                                 & VL_BITSEL_IWII(77, vlSelfRef.rs1_data, 0U)));
            VL_ASSIGNSEL_II(6, 3, 3U, vlSelfRef.branch_type_bus, 
                            (7U & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x0000004aU, 3)));
            VL_ASSIGNBIT_IO(1U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 4U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(1U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 4U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000046U, 4)));
        } else if ((1U & ((VL_BITSEL_IWII(77, vlSelfRef.rs0_data, 1U) 
                           & (~ VL_BITSEL_IWII(77, vlSelfRef.rs0_data, 0x00000049U))) 
                          & (~ VL_BITSEL_IIII(4, (IData)(vlSelfRef.consumed_bus), 0U))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x00000040U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs0_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_II(1U, vlSelfRef.load, (1U 
                                                 & VL_BITSEL_IWII(77, vlSelfRef.rs0_data, 0U)));
            VL_ASSIGNSEL_II(6, 3, 3U, vlSelfRef.branch_type_bus, 
                            (7U & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x0000004aU, 3)));
            VL_ASSIGNBIT_IO(0U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 4U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(1U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 4U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000046U, 4)));
        }
    }
    if ((1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.ready_bus), 2U))) {
        if ((VL_BITSEL_IWII(77, vlSelfRef.rs0_data, 1U) 
             & ((0x0cU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000046U, 4))) 
                | (0x0dU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000046U, 4)))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x00000080U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs0_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_IO(0U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 8U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(2U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 8U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000046U, 4)));
        } else if ((VL_BITSEL_IWII(77, vlSelfRef.rs1_data, 1U) 
                    & ((0x0cU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000046U, 4))) 
                       | (0x0dU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000046U, 4)))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x00000080U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs1_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_IO(1U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 8U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(2U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 8U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000046U, 4)));
        } else if ((VL_BITSEL_IWII(77, vlSelfRef.rs2_data, 1U) 
                    & ((0x0cU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000046U, 4))) 
                       | (0x0dU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000046U, 4)))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x00000080U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs2_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_IO(2U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 8U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(2U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 8U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000046U, 4)));
        } else if ((VL_BITSEL_IWII(77, vlSelfRef.rs3_data, 1U) 
                    & ((0x0cU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000046U, 4))) 
                       | (0x0dU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000046U, 4)))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x00000080U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs3_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_IO(3U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 8U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(2U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 8U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000046U, 4)));
        }
    }
    if ((1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.ready_bus), 3U))) {
        if ((VL_BITSEL_IWII(77, vlSelfRef.rs0_data, 1U) 
             & ((0x0bU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000046U, 4))) 
                | (0x0aU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000046U, 4)))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x000000c0U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs0_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_IO(0U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 0x0cU, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(3U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 0x0cU, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000046U, 4)));
        } else if ((VL_BITSEL_IWII(77, vlSelfRef.rs1_data, 1U) 
                    & ((0x0bU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000046U, 4))) 
                       | (0x0aU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000046U, 4)))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x000000c0U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs1_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_IO(1U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 0x0cU, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(3U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 0x0cU, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000046U, 4)));
        } else if ((VL_BITSEL_IWII(77, vlSelfRef.rs2_data, 1U) 
                    & ((0x0bU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000046U, 4))) 
                       | (0x0aU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000046U, 4)))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x000000c0U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs2_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_IO(2U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 0x0cU, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(3U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 0x0cU, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000046U, 4)));
        } else if ((VL_BITSEL_IWII(77, vlSelfRef.rs3_data, 1U) 
                    & ((0x0bU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000046U, 4))) 
                       | (0x0aU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000046U, 4)))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x000000c0U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs3_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_IO(3U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 0x0cU, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(3U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 0x0cU, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000046U, 4)));
        }
    }
    if ((1U & VL_BITSEL_IIII(5, (IData)(vlSelfRef.ready_bus), 4U))) {
        if ((VL_BITSEL_IWII(77, vlSelfRef.rs0_data, 1U) 
             & (((0x0fU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000046U, 4))) 
                 | (8U == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000046U, 4)))) 
                | (9U == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000046U, 4)))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x00000100U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs0_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_IO(0U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 0x10U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(4U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 0x10U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs0_data, 0x00000046U, 4)));
        } else if ((VL_BITSEL_IWII(77, vlSelfRef.rs1_data, 1U) 
                    & (((0x0fU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000046U, 4))) 
                        | (8U == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000046U, 4)))) 
                       | (9U == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000046U, 4)))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x00000100U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs1_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_IO(1U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 0x10U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(4U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 0x10U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs1_data, 0x00000046U, 4)));
        } else if ((VL_BITSEL_IWII(77, vlSelfRef.rs2_data, 1U) 
                    & (((0x0fU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000046U, 4))) 
                        | (8U == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000046U, 4)))) 
                       | (9U == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000046U, 4)))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x00000100U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs2_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_IO(2U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 0x10U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(4U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 0x10U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs2_data, 0x00000046U, 4)));
        } else if ((VL_BITSEL_IWII(77, vlSelfRef.rs3_data, 1U) 
                    & (((0x0fU == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000046U, 4))) 
                        | (8U == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000046U, 4)))) 
                       | (9U == (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000046U, 4)))))) {
            VL_ASSIGNSEL_WQ(320, 64, 0x00000100U, vlSelfRef.fu_bus, 
                            VL_CONCAT_QII(64,32,32, 
                                          VL_SEL_IWII(77, vlSelfRef.rs3_data, 2U, 32), 
                                          VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000022U, 32)));
            VL_ASSIGNBIT_IO(3U, vlSelfRef.consumed_bus);
            VL_ASSIGNSEL_II(20, 4, 0x10U, vlSelfRef.ROB_entry_bus, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000042U, 4)));
            VL_ASSIGNBIT_IO(4U, vlSelfRef.valid_in_bus);
            VL_ASSIGNSEL_II(20, 4, 0x10U, vlSelfRef.ALU_op, 
                            (0x0000000fU & VL_SEL_IWII(77, vlSelfRef.rs3_data, 0x00000046U, 4)));
        }
    }
}

VL_ATTR_COLD void Vcore_fu_scheduler___ctor_var_reset(Vcore_fu_scheduler* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fu_scheduler___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    VL_SCOPED_RAND_RESET_W(77, vlSelf->rs0_data, __VscopeHash, 6623469576102183047ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->rs1_data, __VscopeHash, 16624318508599476813ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->rs2_data, __VscopeHash, 10683005467506302743ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->rs3_data, __VscopeHash, 17123992503407504941ull);
    vlSelf->ready_bus = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 327073247487266104ull);
    vlSelf->ROB_entry_bus = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 2826662544100618595ull);
    vlSelf->load = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1148748992964133306ull);
    vlSelf->branch_type_bus = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17268700520792544164ull);
    vlSelf->ALU_op = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6668319976152363782ull);
    VL_SCOPED_RAND_RESET_W(320, vlSelf->fu_bus, __VscopeHash, 8948150120813538147ull);
    vlSelf->consumed_bus = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7268660960299225513ull);
    vlSelf->valid_in_bus = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8013077369210785226ull);
}
