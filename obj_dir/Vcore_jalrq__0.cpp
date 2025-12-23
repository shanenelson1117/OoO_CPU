// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_jalrq___ico_sequent__TOP__core__indirect_jump_queue__0(Vcore_jalrq* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_jalrq___ico_sequent__TOP__core__indirect_jump_queue__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.full = ((3U & ((IData)(1U) + VL_EXTEND_II(32,2, (IData)(vlSelfRef.wptr)))) 
                      == VL_EXTEND_II(32,2, (IData)(vlSelfRef.rptr)));
    vlSelfRef.jalr_actual_address = (VL_SEL_IWII(81, 
                                                 vlSelfRef.jalrq_data
                                                 [vlSelfRef.rptr], 0x00000010U, 32) 
                                     + VL_EXTEND_II(32,12, 
                                                    (0x00000fffU 
                                                     & VL_SEL_IWII(81, 
                                                                   vlSelfRef.jalrq_data
                                                                   [vlSelfRef.rptr], 4U, 12))));
    vlSelfRef.jalr_taken_address = VL_SEL_IWII(81, 
                                               vlSelfRef.jalrq_data
                                               [vlSelfRef.rptr], 0x00000030U, 32);
    vlSelfRef.empty = ((IData)(vlSelfRef.wptr) == (IData)(vlSelfRef.rptr));
    vlSelfRef.head_ready = (((~ (IData)(vlSelfRef.empty)) 
                             & (0U == (0x0000000fU 
                                       & VL_SEL_IWII(81, 
                                                     vlSelfRef.jalrq_data
                                                     [vlSelfRef.rptr], 0U, 4)))) 
                            & VL_BITSEL_IWII(81, vlSelfRef.jalrq_data
                                             [vlSelfRef.rptr], 0x00000050U));
}

void Vcore_jalrq___ico_sequent__TOP__core__indirect_jump_queue__1(Vcore_jalrq* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_jalrq___ico_sequent__TOP__core__indirect_jump_queue__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_en = (1U & VL_BITSEL_IWII(81, vlSelfRef.din, 0x00000050U));
}

void Vcore_jalrq___nba_sequent__TOP__core__indirect_jump_queue__0(Vcore_jalrq* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_jalrq___nba_sequent__TOP__core__indirect_jump_queue__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__Vdly__wptr = vlSelfRef.wptr;
    vlSelfRef.__Vdly__rptr = vlSelfRef.rptr;
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        vlSelfRef.unnamedblk2__DOT__i = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.unnamedblk2__DOT__i)) {
            if (((((0x0000000fU & VL_SEL_IWII(81, vlSelfRef.jalrq_data
                                              [(3U 
                                                & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 2))], 0U, 4)) 
                   == (0x0000000fU & VL_SEL_IQII(38, vlSelfRef.CDB_in, 0x00000022U, 4))) 
                  & (0U != (0x0000000fU & VL_SEL_IWII(81, 
                                                      vlSelfRef.jalrq_data
                                                      [
                                                      (3U 
                                                       & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 2))], 0U, 4)))) 
                 & (~ VL_BITSEL_IQII(38, vlSelfRef.CDB_in, 0U)))) {
                vlSelfRef.__VdlyDim0__jalrq_data__v2 
                    = (3U & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 2));
                VL_CONST_W_1X(81,__Vtemp_1,0x00000000);
                VL_CONST_W_1X(81,__Vtemp_2,0x0000000f);
                vlSelfRef.__VdlyCommitQueuejalrq_data.enqueue(__Vtemp_1, __Vtemp_2, (IData)(vlSelfRef.__VdlyDim0__jalrq_data__v2));
                vlSelfRef.__VdlyVal__jalrq_data__v3 
                    = VL_SEL_IQII(38, vlSelfRef.CDB_in, 2U, 32);
                vlSelfRef.__VdlyDim0__jalrq_data__v3 
                    = (3U & VL_SEL_IIII(32, vlSelfRef.unnamedblk2__DOT__i, 0U, 2));
                VL_CONST_W_1X(81,vlSelfRef.__VdlyElem__jalrq_data__v3,0x00000000);
                VL_ASSIGNSEL_WI(81, 32, 0x00000010U, vlSelfRef.__VdlyElem__jalrq_data__v3, vlSelfRef.__VdlyVal__jalrq_data__v3);
                VL_CONST_W_2X(81,__Vtemp_3,0x0000ffff,0xffff0000);
                vlSelfRef.__VdlyCommitQueuejalrq_data.enqueue(vlSelfRef.__VdlyElem__jalrq_data__v3, __Vtemp_3, (IData)(vlSelfRef.__VdlyDim0__jalrq_data__v3));
            }
            vlSelfRef.unnamedblk2__DOT__i = ((IData)(1U) 
                                             + vlSelfRef.unnamedblk2__DOT__i);
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__wptr = 0U;
        vlSelfRef.unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.unnamedblk1__DOT__i)) {
            vlSelfRef.__VdlyDim0__jalrq_data__v0 = 
                (3U & VL_SEL_IIII(32, vlSelfRef.unnamedblk1__DOT__i, 0U, 2));
            VL_CONST_W_1X(81,__Vtemp_4,0x00000000);
            VL_CONST_W_3X(81,__Vtemp_5,0x00010000,0x00000000,0x00000000);
            vlSelfRef.__VdlyCommitQueuejalrq_data.enqueue(__Vtemp_4, __Vtemp_5, (IData)(vlSelfRef.__VdlyDim0__jalrq_data__v0));
            vlSelfRef.unnamedblk1__DOT__i = ((IData)(1U) 
                                             + vlSelfRef.unnamedblk1__DOT__i);
        }
    } else if (((IData)(vlSelfRef.wr_en) & (~ (IData)(vlSelfRef.full)))) {
        VL_ASSIGN_W(81, vlSelfRef.__VdlyVal__jalrq_data__v1, vlSelfRef.din);
        vlSelfRef.__VdlyDim0__jalrq_data__v1 = vlSelfRef.wptr;
        VL_CONST_W_3X(81,__Vtemp_6,0x0001ffff,0xffffffff,0xffffffff);
        vlSelfRef.__VdlyCommitQueuejalrq_data.enqueue(vlSelfRef.__VdlyVal__jalrq_data__v1, __Vtemp_6, (IData)(vlSelfRef.__VdlyDim0__jalrq_data__v1));
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
    vlSelfRef.wptr = vlSelfRef.__Vdly__wptr;
    vlSelfRef.__VdlyCommitQueuejalrq_data.commit(vlSelfRef.jalrq_data);
    vlSelfRef.rptr = vlSelfRef.__Vdly__rptr;
    vlSelfRef.full = ((3U & ((IData)(1U) + VL_EXTEND_II(32,2, (IData)(vlSelfRef.wptr)))) 
                      == VL_EXTEND_II(32,2, (IData)(vlSelfRef.rptr)));
    vlSelfRef.jalr_actual_address = (VL_SEL_IWII(81, 
                                                 vlSelfRef.jalrq_data
                                                 [vlSelfRef.rptr], 0x00000010U, 32) 
                                     + VL_EXTEND_II(32,12, 
                                                    (0x00000fffU 
                                                     & VL_SEL_IWII(81, 
                                                                   vlSelfRef.jalrq_data
                                                                   [vlSelfRef.rptr], 4U, 12))));
    vlSelfRef.jalr_taken_address = VL_SEL_IWII(81, 
                                               vlSelfRef.jalrq_data
                                               [vlSelfRef.rptr], 0x00000030U, 32);
    vlSelfRef.empty = ((IData)(vlSelfRef.wptr) == (IData)(vlSelfRef.rptr));
    vlSelfRef.head_ready = (((~ (IData)(vlSelfRef.empty)) 
                             & (0U == (0x0000000fU 
                                       & VL_SEL_IWII(81, 
                                                     vlSelfRef.jalrq_data
                                                     [vlSelfRef.rptr], 0U, 4)))) 
                            & VL_BITSEL_IWII(81, vlSelfRef.jalrq_data
                                             [vlSelfRef.rptr], 0x00000050U));
}

void Vcore_jalrq___nba_comb__TOP__core__indirect_jump_queue__0(Vcore_jalrq* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_jalrq___nba_comb__TOP__core__indirect_jump_queue__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_en = (1U & VL_BITSEL_IWII(81, vlSelfRef.din, 0x00000050U));
}
