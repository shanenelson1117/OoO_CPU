// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_lsq___ico_sequent__TOP__core__load_store_queue__0(Vcore_lsq* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_lsq___ico_sequent__TOP__core__load_store_queue__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.head_load = (1U & VL_BITSEL_IWII(79, 
                                               vlSelfRef.lsq_data
                                               [vlSelfRef.rptr], 0x0000004eU));
    VL_ASSIGN_W(79, vlSelfRef.dout, vlSelfRef.lsq_data
                [vlSelfRef.rptr]);
    vlSelfRef.full = ((3U & ((IData)(1U) + VL_EXTEND_II(32,2, (IData)(vlSelfRef.wptr)))) 
                      == VL_EXTEND_II(32,2, (IData)(vlSelfRef.rptr)));
    vlSelfRef.empty = ((IData)(vlSelfRef.wptr) == (IData)(vlSelfRef.rptr));
    vlSelfRef.head_ready = (VL_BITSEL_IWII(79, vlSelfRef.lsq_data
                                           [vlSelfRef.rptr], 8U) 
                            & (0U == (0x0000000fU & 
                                      VL_SEL_IWII(79, 
                                                  vlSelfRef.lsq_data
                                                  [vlSelfRef.rptr], 4U, 4))));
}

void Vcore_lsq___nba_sequent__TOP__core__load_store_queue__0(Vcore_lsq* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_lsq___nba_sequent__TOP__core__load_store_queue__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    // Body
    vlSelfRef.__Vdly__wptr = vlSelfRef.wptr;
    vlSelfRef.__Vdly__rptr = vlSelfRef.rptr;
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        vlSelfRef.unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.unnamedblk2__DOT__i)) {
            if ((VL_EXTEND_II(32,2, (IData)(vlSelfRef.wptr)) 
                 != vlSelfRef.unnamedblk2__DOT__i)) {
                if (((((0x0000000fU & VL_SEL_IWII(79, 
                                                  vlSelfRef.lsq_data
                                                  [
                                                  (3U 
                                                   & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 2))], 4U, 4)) 
                       == (0x0000000fU & VL_SEL_IQII(38, vlSelfRef.CDB_in, 0x00000022U, 4))) 
                      & (0U != (0x0000000fU & VL_SEL_IWII(79, 
                                                          vlSelfRef.lsq_data
                                                          [
                                                          (3U 
                                                           & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 2))], 4U, 4)))) 
                     & (~ VL_BITSEL_IQII(38, vlSelfRef.CDB_in, 0U)))) {
                    vlSelfRef.__VdlyDim0__lsq_data__v2 
                        = (3U & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 2));
                    VL_CONST_W_1X(79,__Vtemp_1,0x00000000);
                    VL_CONST_W_1X(79,__Vtemp_2,0x000000f0);
                    vlSelfRef.__VdlyCommitQueuelsq_data.enqueue(__Vtemp_1, __Vtemp_2, (IData)(vlSelfRef.__VdlyDim0__lsq_data__v2));
                    vlSelfRef.__VdlyVal__lsq_data__v3 
                        = VL_SEL_IQII(38, vlSelfRef.CDB_in, 2U, 32);
                    vlSelfRef.__VdlyDim0__lsq_data__v3 
                        = (3U & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 2));
                    VL_CONST_W_1X(79,vlSelfRef.__VdlyElem__lsq_data__v3,0x00000000);
                    VL_ASSIGNSEL_WI(79, 32, 0x0000000dU, vlSelfRef.__VdlyElem__lsq_data__v3, vlSelfRef.__VdlyVal__lsq_data__v3);
                    VL_CONST_W_2X(79,__Vtemp_3,0x00001fff,0xffffe000);
                    vlSelfRef.__VdlyCommitQueuelsq_data.enqueue(vlSelfRef.__VdlyElem__lsq_data__v3, __Vtemp_3, (IData)(vlSelfRef.__VdlyDim0__lsq_data__v3));
                }
                if (((((0x0000000fU & VL_SEL_IWII(79, 
                                                  vlSelfRef.lsq_data
                                                  [
                                                  (3U 
                                                   & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 2))], 9U, 4)) 
                       == (0x0000000fU & VL_SEL_IQII(38, vlSelfRef.CDB_in, 0x00000022U, 4))) 
                      & (~ VL_BITSEL_IWII(79, vlSelfRef.lsq_data
                                          [(3U & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 2))], 8U))) 
                     & VL_BITSEL_IQII(38, vlSelfRef.CDB_in, 0U))) {
                    vlSelfRef.__VdlyVal__lsq_data__v4 
                        = VL_SEL_IQII(38, vlSelfRef.CDB_in, 2U, 32);
                    vlSelfRef.__VdlyDim0__lsq_data__v4 
                        = (3U & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 2));
                    VL_CONST_W_1X(79,vlSelfRef.__VdlyElem__lsq_data__v4,0x00000000);
                    VL_ASSIGNSEL_WI(79, 32, 0x0000002dU, vlSelfRef.__VdlyElem__lsq_data__v4, vlSelfRef.__VdlyVal__lsq_data__v4);
                    VL_CONST_W_3X(79,__Vtemp_4,0x00001fff,0xffffe000,0x00000000);
                    vlSelfRef.__VdlyCommitQueuelsq_data.enqueue(vlSelfRef.__VdlyElem__lsq_data__v4, __Vtemp_4, (IData)(vlSelfRef.__VdlyDim0__lsq_data__v4));
                    vlSelfRef.__VdlyDim0__lsq_data__v5 
                        = (3U & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 2));
                    VL_CONST_W_1X(79,__Vtemp_5,0x00000100);
                    VL_CONST_W_1X(79,__Vtemp_6,0x00000100);
                    vlSelfRef.__VdlyCommitQueuelsq_data.enqueue(__Vtemp_5, __Vtemp_6, (IData)(vlSelfRef.__VdlyDim0__lsq_data__v5));
                }
            }
            vlSelfRef.unnamedblk2__DOT__i = ((IData)(1U) 
                                             + vlSelfRef.unnamedblk2__DOT__i);
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__wptr = 0U;
        vlSelfRef.unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.unnamedblk1__DOT__i)) {
            vlSelfRef.__VdlyDim0__lsq_data__v0 = (3U 
                                                  & VL_SEL_IIII(32, vlSelfRef.unnamedblk1__DOT__i, 0U, 2));
            VL_CONST_W_1X(79,__Vtemp_7,0x00000000);
            VL_CONST_W_1X(79,__Vtemp_8,0x00000100);
            vlSelfRef.__VdlyCommitQueuelsq_data.enqueue(__Vtemp_7, __Vtemp_8, (IData)(vlSelfRef.__VdlyDim0__lsq_data__v0));
            vlSelfRef.unnamedblk1__DOT__i = ((IData)(1U) 
                                             + vlSelfRef.unnamedblk1__DOT__i);
        }
    } else if (((IData)(vlSelfRef.wr_en) & (~ (IData)(vlSelfRef.full)))) {
        VL_ASSIGN_W(79, vlSelfRef.__VdlyVal__lsq_data__v1, vlSelfRef.din);
        vlSelfRef.__VdlyDim0__lsq_data__v1 = vlSelfRef.wptr;
        VL_CONST_W_3X(79,__Vtemp_9,0x00007fff,0xffffffff,0xffffffff);
        vlSelfRef.__VdlyCommitQueuelsq_data.enqueue(vlSelfRef.__VdlyVal__lsq_data__v1, __Vtemp_9, (IData)(vlSelfRef.__VdlyDim0__lsq_data__v1));
        vlSelfRef.__Vdly__wptr = (3U & VL_SEL_IIII(32, 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.wptr))
                                                     ? 0U
                                                     : 
                                                    ((IData)(1U) 
                                                     + 
                                                     VL_EXTEND_II(32,2, (IData)(vlSelfRef.wptr)))), 0U, 2));
    }
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__rptr = 0U;
    } else if (((IData)(vlSelfRef.rd_en) & (~ (IData)(vlSelfRef.empty)))) {
        vlSelfRef.__Vdly__rptr = (3U & VL_SEL_IIII(32, 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.rptr))
                                                     ? 0U
                                                     : 
                                                    ((IData)(1U) 
                                                     + 
                                                     VL_EXTEND_II(32,2, (IData)(vlSelfRef.rptr)))), 0U, 2));
    }
    vlSelfRef.__VdlyCommitQueuelsq_data.commit(vlSelfRef.lsq_data);
    vlSelfRef.wptr = vlSelfRef.__Vdly__wptr;
    vlSelfRef.rptr = vlSelfRef.__Vdly__rptr;
    vlSelfRef.head_load = (1U & VL_BITSEL_IWII(79, 
                                               vlSelfRef.lsq_data
                                               [vlSelfRef.rptr], 0x0000004eU));
    VL_ASSIGN_W(79, vlSelfRef.dout, vlSelfRef.lsq_data
                [vlSelfRef.rptr]);
    vlSelfRef.full = ((3U & ((IData)(1U) + VL_EXTEND_II(32,2, (IData)(vlSelfRef.wptr)))) 
                      == VL_EXTEND_II(32,2, (IData)(vlSelfRef.rptr)));
    vlSelfRef.empty = ((IData)(vlSelfRef.wptr) == (IData)(vlSelfRef.rptr));
    vlSelfRef.head_ready = (VL_BITSEL_IWII(79, vlSelfRef.lsq_data
                                           [vlSelfRef.rptr], 8U) 
                            & (0U == (0x0000000fU & 
                                      VL_SEL_IWII(79, 
                                                  vlSelfRef.lsq_data
                                                  [vlSelfRef.rptr], 4U, 4))));
}
