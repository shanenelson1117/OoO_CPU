// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_rob___ico_sequent__TOP__core__reorder_buffer__0(Vcore_rob* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rob___ico_sequent__TOP__core__reorder_buffer__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.full = (((0x00000010U == ((IData)(1U) 
                                        + VL_EXTEND_II(32,4, (IData)(vlSelfRef.wptr))))
                        ? 1U : ((IData)(1U) + VL_EXTEND_II(32,4, (IData)(vlSelfRef.wptr)))) 
                      == VL_EXTEND_II(32,4, (IData)(vlSelfRef.rptr)));
    vlSelfRef.empty = ((IData)(vlSelfRef.wptr) == (IData)(vlSelfRef.rptr));
    VL_ASSIGN_W(163, vlSelfRef.head, vlSelfRef.rob_data
                [vlSelfRef.rptr]);
    vlSelfRef.ROB_entry = ((IData)(vlSelfRef.full) ? 0U
                            : (IData)(vlSelfRef.wptr));
    vlSelfRef.ROB_head_store = (1U == (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000050U, 2)));
    vlSelfRef.head_ready = (1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000004fU));
}

void Vcore_rob___ico_sequent__TOP__core__reorder_buffer__1(Vcore_rob* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rob___ico_sequent__TOP__core__reorder_buffer__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs1rob_data = VL_SEL_IWII(163, vlSelfRef.rob_data
                                        [vlSelfRef.Q_j], 0x00000052U, 32);
    vlSelfRef.rs1rob_ready = (1U & VL_BITSEL_IWII(163, 
                                                  vlSelfRef.rob_data
                                                  [vlSelfRef.Q_j], 0x0000004fU));
    vlSelfRef.rs2rob_data = VL_SEL_IWII(163, vlSelfRef.rob_data
                                        [vlSelfRef.Q_k], 0x00000052U, 32);
    vlSelfRef.rs2rob_ready = (1U & VL_BITSEL_IWII(163, 
                                                  vlSelfRef.rob_data
                                                  [vlSelfRef.Q_k], 0x0000004fU));
}

void Vcore_rob___ico_comb__TOP__core__reorder_buffer__0(Vcore_rob* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rob___ico_comb__TOP__core__reorder_buffer__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_en = ((0x0000000fU & VL_SEL_IWII(163, vlSelfRef.new_entry, 0x0000009fU, 4)) 
                       == (IData)(vlSelfRef.wptr));
}

void Vcore_rob___act_sequent__TOP__core__reorder_buffer__0(Vcore_rob* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rob___act_sequent__TOP__core__reorder_buffer__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_en = ((0x0000000fU & VL_SEL_IWII(163, vlSelfRef.new_entry, 0x0000009fU, 4)) 
                       == (IData)(vlSelfRef.wptr));
}

void Vcore_rob___nba_sequent__TOP__core__reorder_buffer__0(Vcore_rob* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rob___nba_sequent__TOP__core__reorder_buffer__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<6>/*191:0*/ __Vtemp_1;
    VlWide<6>/*191:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_3;
    VlWide<6>/*191:0*/ __Vtemp_4;
    VlWide<6>/*191:0*/ __Vtemp_5;
    VlWide<6>/*191:0*/ __Vtemp_6;
    VlWide<6>/*191:0*/ __Vtemp_7;
    VlWide<6>/*191:0*/ __Vtemp_8;
    VlWide<6>/*191:0*/ __Vtemp_9;
    VlWide<6>/*191:0*/ __Vtemp_10;
    VlWide<6>/*191:0*/ __Vtemp_11;
    VlWide<6>/*191:0*/ __Vtemp_12;
    VlWide<6>/*191:0*/ __Vtemp_13;
    // Body
    vlSelfRef.__Vdly__wptr = vlSelfRef.wptr;
    vlSelfRef.__Vdly__rptr = vlSelfRef.rptr;
    if (vlSelfRef.illegal_access_e) {
        vlSelfRef.__VdlyDim0__rob_data__v6 = vlSelfRef.rptr;
        VL_CONST_W_2X(163,__Vtemp_1,0x00000001,0x00000000);
        VL_CONST_W_2X(163,__Vtemp_2,0x00000001,0x00000000);
        vlSelfRef.__VdlyCommitQueuerob_data.enqueue(__Vtemp_1, __Vtemp_2, (IData)(vlSelfRef.__VdlyDim0__rob_data__v6));
        vlSelfRef.__VdlyDim0__rob_data__v7 = vlSelfRef.rptr;
        VL_CONST_W_2X(163,__Vtemp_3,0x00000080,0x00000000);
        VL_CONST_W_2X(163,__Vtemp_4,0x00003fc0,0x00000000);
        vlSelfRef.__VdlyCommitQueuerob_data.enqueue(__Vtemp_3, __Vtemp_4, (IData)(vlSelfRef.__VdlyDim0__rob_data__v7));
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        vlSelfRef.unnamedblk2__DOT__i = 1U;
        while (VL_GTS_III(32, 0x00000010U, vlSelfRef.unnamedblk2__DOT__i)) {
            if ((VL_EXTEND_II(32,4, (IData)(vlSelfRef.wptr)) 
                 != vlSelfRef.unnamedblk2__DOT__i)) {
                if ((0U == (3U & VL_SEL_IWII(163, vlSelfRef.rob_data
                                             [(0x0000000fU 
                                               & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 4))], 0x00000050U, 2)))) {
                    if ((((0x0000000fU & VL_SEL_IWII(163, 
                                                     vlSelfRef.rob_data
                                                     [
                                                     (0x0000000fU 
                                                      & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 4))], 0x0000009fU, 4)) 
                          == (0x0000000fU & VL_SEL_IQII(38, vlSelfRef.CDB_in, 0x00000022U, 4))) 
                         & (~ VL_BITSEL_IQII(38, vlSelfRef.CDB_in, 0U)))) {
                        vlSelfRef.__VdlyVal__rob_data__v2 
                            = (1U & VL_BITSEL_IQII(38, vlSelfRef.CDB_in, 1U));
                        vlSelfRef.__VdlyDim0__rob_data__v2 
                            = (0x0000000fU & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 4));
                        VL_CONST_W_1X(163,vlSelfRef.__VdlyElem__rob_data__v2,0x00000000);
                        VL_ASSIGNBIT_WI(0x0000009dU, vlSelfRef.__VdlyElem__rob_data__v2, vlSelfRef.__VdlyVal__rob_data__v2);
                        VL_CONST_W_5X(163,__Vtemp_5,0x20000000,0x00000000,0x00000000,0x00000000,0x00000000);
                        vlSelfRef.__VdlyCommitQueuerob_data.enqueue(vlSelfRef.__VdlyElem__rob_data__v2, __Vtemp_5, (IData)(vlSelfRef.__VdlyDim0__rob_data__v2));
                        vlSelfRef.__VdlyDim0__rob_data__v3 
                            = (0x0000000fU & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 4));
                        VL_CONST_W_3X(163,__Vtemp_6,0x00008000,0x00000000,0x00000000);
                        VL_CONST_W_3X(163,__Vtemp_7,0x00008000,0x00000000,0x00000000);
                        vlSelfRef.__VdlyCommitQueuerob_data.enqueue(__Vtemp_6, __Vtemp_7, (IData)(vlSelfRef.__VdlyDim0__rob_data__v3));
                    }
                } else if ((1U & VL_BITSEL_IWII(163, 
                                                vlSelfRef.rob_data
                                                [(0x0000000fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 4))], 0x00000051U))) {
                    if ((((0x0000000fU & VL_SEL_IWII(163, 
                                                     vlSelfRef.rob_data
                                                     [
                                                     (0x0000000fU 
                                                      & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 4))], 0x0000009fU, 4)) 
                          == (0x0000000fU & VL_SEL_IQII(38, vlSelfRef.CDB_in, 0x00000022U, 4))) 
                         & (~ VL_BITSEL_IQII(38, vlSelfRef.CDB_in, 0U)))) {
                        vlSelfRef.__VdlyVal__rob_data__v4 
                            = VL_SEL_IQII(38, vlSelfRef.CDB_in, 2U, 32);
                        vlSelfRef.__VdlyDim0__rob_data__v4 
                            = (0x0000000fU & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 4));
                        VL_CONST_W_1X(163,vlSelfRef.__VdlyElem__rob_data__v4,0x00000000);
                        VL_ASSIGNSEL_WI(163, 32, 0x00000052U, vlSelfRef.__VdlyElem__rob_data__v4, vlSelfRef.__VdlyVal__rob_data__v4);
                        VL_CONST_W_4X(163,__Vtemp_8,0x0003ffff,0xfffc0000,0x00000000,0x00000000);
                        vlSelfRef.__VdlyCommitQueuerob_data.enqueue(vlSelfRef.__VdlyElem__rob_data__v4, __Vtemp_8, (IData)(vlSelfRef.__VdlyDim0__rob_data__v4));
                        vlSelfRef.__VdlyDim0__rob_data__v5 
                            = (0x0000000fU & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 4));
                        VL_CONST_W_3X(163,__Vtemp_9,0x00008000,0x00000000,0x00000000);
                        VL_CONST_W_3X(163,__Vtemp_10,0x00008000,0x00000000,0x00000000);
                        vlSelfRef.__VdlyCommitQueuerob_data.enqueue(__Vtemp_9, __Vtemp_10, (IData)(vlSelfRef.__VdlyDim0__rob_data__v5));
                    }
                }
            }
            vlSelfRef.unnamedblk2__DOT__i = ((IData)(1U) 
                                             + vlSelfRef.unnamedblk2__DOT__i);
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__wptr = 1U;
        vlSelfRef.unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000010U, vlSelfRef.unnamedblk1__DOT__i)) {
            vlSelfRef.__VdlyDim0__rob_data__v0 = (0x0000000fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.unnamedblk1__DOT__i, 0U, 4));
            VL_CONST_W_1X(163,__Vtemp_11,0x00000000);
            VL_CONST_W_3X(163,__Vtemp_12,0x00008000,0x00000000,0x00000000);
            vlSelfRef.__VdlyCommitQueuerob_data.enqueue(__Vtemp_11, __Vtemp_12, (IData)(vlSelfRef.__VdlyDim0__rob_data__v0));
            vlSelfRef.unnamedblk1__DOT__i = ((IData)(1U) 
                                             + vlSelfRef.unnamedblk1__DOT__i);
        }
    } else if (((IData)(vlSelfRef.wr_en) & (~ (IData)(vlSelfRef.full)))) {
        VL_ASSIGN_W(163, vlSelfRef.__VdlyVal__rob_data__v1, vlSelfRef.new_entry);
        vlSelfRef.__VdlyDim0__rob_data__v1 = vlSelfRef.wptr;
        VL_CONST_W_6X(163,__Vtemp_13,0x00000007,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        vlSelfRef.__VdlyCommitQueuerob_data.enqueue(vlSelfRef.__VdlyVal__rob_data__v1, __Vtemp_13, (IData)(vlSelfRef.__VdlyDim0__rob_data__v1));
        vlSelfRef.__Vdly__wptr = (0x0000000fU & VL_SEL_IIII(32, 
                                                            ((0x0fU 
                                                              == (IData)(vlSelfRef.wptr))
                                                              ? 1U
                                                              : 
                                                             ((IData)(1U) 
                                                              + 
                                                              VL_EXTEND_II(32,4, (IData)(vlSelfRef.wptr)))), 0U, 4));
    }
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__rptr = 1U;
    } else if (((IData)(vlSelfRef.rd_en) & (~ (IData)(vlSelfRef.empty)))) {
        vlSelfRef.__Vdly__rptr = (0x0000000fU & ((0x0fU 
                                                  == (IData)(vlSelfRef.rptr))
                                                  ? 1U
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelfRef.rptr))));
    }
    vlSelfRef.wptr = vlSelfRef.__Vdly__wptr;
    vlSelfRef.__VdlyCommitQueuerob_data.commit(vlSelfRef.rob_data);
    vlSelfRef.rptr = vlSelfRef.__Vdly__rptr;
    vlSelfRef.full = (((0x00000010U == ((IData)(1U) 
                                        + VL_EXTEND_II(32,4, (IData)(vlSelfRef.wptr))))
                        ? 1U : ((IData)(1U) + VL_EXTEND_II(32,4, (IData)(vlSelfRef.wptr)))) 
                      == VL_EXTEND_II(32,4, (IData)(vlSelfRef.rptr)));
    vlSelfRef.empty = ((IData)(vlSelfRef.wptr) == (IData)(vlSelfRef.rptr));
    VL_ASSIGN_W(163, vlSelfRef.head, vlSelfRef.rob_data
                [vlSelfRef.rptr]);
    vlSelfRef.ROB_entry = ((IData)(vlSelfRef.full) ? 0U
                            : (IData)(vlSelfRef.wptr));
    vlSelfRef.ROB_head_store = (1U == (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000050U, 2)));
    vlSelfRef.head_ready = (1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000004fU));
}

void Vcore_rob___nba_comb__TOP__core__reorder_buffer__0(Vcore_rob* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rob___nba_comb__TOP__core__reorder_buffer__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs1rob_data = VL_SEL_IWII(163, vlSelfRef.rob_data
                                        [vlSelfRef.Q_j], 0x00000052U, 32);
    vlSelfRef.rs1rob_ready = (1U & VL_BITSEL_IWII(163, 
                                                  vlSelfRef.rob_data
                                                  [vlSelfRef.Q_j], 0x0000004fU));
    vlSelfRef.rs2rob_data = VL_SEL_IWII(163, vlSelfRef.rob_data
                                        [vlSelfRef.Q_k], 0x00000052U, 32);
    vlSelfRef.rs2rob_ready = (1U & VL_BITSEL_IWII(163, 
                                                  vlSelfRef.rob_data
                                                  [vlSelfRef.Q_k], 0x0000004fU));
}

void Vcore_rob___nba_comb__TOP__core__reorder_buffer__1(Vcore_rob* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rob___nba_comb__TOP__core__reorder_buffer__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_en = ((0x0000000fU & VL_SEL_IWII(163, vlSelfRef.new_entry, 0x0000009fU, 4)) 
                       == (IData)(vlSelfRef.wptr));
}
