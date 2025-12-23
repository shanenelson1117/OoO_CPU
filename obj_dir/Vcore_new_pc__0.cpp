// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_new_pc___ico_comb__TOP__core__generate_new_pc__0(Vcore_new_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_new_pc___ico_comb__TOP__core__generate_new_pc__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mis_taken = ((IData)(vlSelfRef.commit_taken) 
                           & (~ (IData)(vlSelfRef.commit_result)));
}

void Vcore_new_pc___ico_comb__TOP__core__generate_new_pc__1(Vcore_new_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_new_pc___ico_comb__TOP__core__generate_new_pc__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pipe_pc = VL_SEL_IWII(112, vlSelfRef.pipe_in, 0x00000050U, 32);
    vlSelfRef.jump = (1U & VL_BITSEL_IWII(112, vlSelfRef.pipe_in, 0x0000002dU));
    vlSelfRef.branch = (1U & VL_BITSEL_IWII(112, vlSelfRef.pipe_in, 0x0000002eU));
    vlSelfRef.pipe_taken = (1U & VL_BITSEL_IWII(112, vlSelfRef.pipe_in, 0x0000002fU));
    vlSelfRef.instruction = VL_SEL_IWII(112, vlSelfRef.pipe_in, 0x00000030U, 32);
    vlSelfRef.i = vlSelfRef.instruction;
}

void Vcore_new_pc___ico_comb__TOP__core__generate_new_pc__2(Vcore_new_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_new_pc___ico_comb__TOP__core__generate_new_pc__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.committed_is_branch) & ((IData)(vlSelfRef.commit_taken) 
                                                   ^ (IData)(vlSelfRef.commit_result)))) {
        vlSelfRef.mispredicted = 1U;
        if (vlSelfRef.mis_taken) {
            vlSelfRef.pc_pre = vlSelfRef.commit_pc;
            vlSelfRef.to_be_added = 4U;
        } else {
            vlSelfRef.pc_pre = vlSelfRef.commit_pc;
            vlSelfRef.to_be_added = vlSelfRef.commit_imm_se;
        }
    } else if (((IData)(vlSelfRef.commit_jalr) & (vlSelfRef.jalr_taken_address 
                                                  != vlSelfRef.jalr_actual_address))) {
        vlSelfRef.mispredicted = 1U;
        vlSelfRef.pc_pre = 0U;
        vlSelfRef.to_be_added = vlSelfRef.jalr_actual_address;
    } else {
        vlSelfRef.mispredicted = 0U;
        if (((IData)(vlSelfRef.branch) & (IData)(vlSelfRef.pipe_taken))) {
            vlSelfRef.pc_pre = vlSelfRef.pipe_pc;
            vlSelfRef.to_be_added = VL_CONCAT_III(32,19,13, 
                                                  (0x0007ffffU 
                                                   & VL_REPLICATE_IOI(1, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelfRef.i, 0x1fU)), 0x00000013U)), 
                                                  VL_CONCAT_III(13,2,11, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelfRef.i, 0x1fU)), 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelfRef.i, 7U))), 
                                                                VL_CONCAT_III(11,6,5, 
                                                                              (0x0000003fU 
                                                                               & VL_SEL_IIII(32, vlSelfRef.i, 0x19U, 6)), 
                                                                              VL_CONCAT_III(5,4,1, 
                                                                                (0x0000000fU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.i, 8U, 4)), 0U))));
        } else if (vlSelfRef.jump) {
            vlSelfRef.pc_pre = vlSelfRef.pipe_pc;
            vlSelfRef.to_be_added = VL_CONCAT_III(32,12,20, 
                                                  VL_CONCAT_III(12,11,1, 
                                                                (0x000007ffU 
                                                                 & VL_REPLICATE_IOI(1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.i, 0x1fU)), 0x0000000bU)), 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelfRef.i, 0x1fU))), 
                                                  VL_CONCAT_III(20,9,11, 
                                                                VL_CONCAT_III(9,8,1, 
                                                                              (0x000000ffU 
                                                                               & VL_SEL_IIII(32, vlSelfRef.i, 0x0cU, 8)), 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelfRef.i, 0x14U))), 
                                                                VL_CONCAT_III(11,10,1, 
                                                                              (0x000003ffU 
                                                                               & VL_SEL_IIII(32, vlSelfRef.i, 0x15U, 10)), 0U)));
        } else {
            vlSelfRef.pc_pre = vlSelfRef.pipe_pc;
            vlSelfRef.to_be_added = 4U;
        }
    }
    vlSelfRef.pc_update = (vlSelfRef.pc_pre + vlSelfRef.to_be_added);
}

void Vcore_new_pc___act_sequent__TOP__core__generate_new_pc__0(Vcore_new_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_new_pc___act_sequent__TOP__core__generate_new_pc__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pipe_pc = VL_SEL_IWII(112, vlSelfRef.pipe_in, 0x00000050U, 32);
    vlSelfRef.jump = (1U & VL_BITSEL_IWII(112, vlSelfRef.pipe_in, 0x0000002dU));
    vlSelfRef.branch = (1U & VL_BITSEL_IWII(112, vlSelfRef.pipe_in, 0x0000002eU));
    vlSelfRef.pipe_taken = (1U & VL_BITSEL_IWII(112, vlSelfRef.pipe_in, 0x0000002fU));
    vlSelfRef.instruction = VL_SEL_IWII(112, vlSelfRef.pipe_in, 0x00000030U, 32);
    vlSelfRef.i = vlSelfRef.instruction;
}

void Vcore_new_pc___act_sequent__TOP__core__generate_new_pc__1(Vcore_new_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_new_pc___act_sequent__TOP__core__generate_new_pc__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mis_taken = ((IData)(vlSelfRef.commit_taken) 
                           & (~ (IData)(vlSelfRef.commit_result)));
}

void Vcore_new_pc___act_comb__TOP__core__generate_new_pc__0(Vcore_new_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_new_pc___act_comb__TOP__core__generate_new_pc__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.committed_is_branch) & ((IData)(vlSelfRef.commit_taken) 
                                                   ^ (IData)(vlSelfRef.commit_result)))) {
        vlSelfRef.mispredicted = 1U;
        if (vlSelfRef.mis_taken) {
            vlSelfRef.pc_pre = vlSelfRef.commit_pc;
            vlSelfRef.to_be_added = 4U;
        } else {
            vlSelfRef.pc_pre = vlSelfRef.commit_pc;
            vlSelfRef.to_be_added = vlSelfRef.commit_imm_se;
        }
    } else if (((IData)(vlSelfRef.commit_jalr) & (vlSelfRef.jalr_taken_address 
                                                  != vlSelfRef.jalr_actual_address))) {
        vlSelfRef.mispredicted = 1U;
        vlSelfRef.pc_pre = 0U;
        vlSelfRef.to_be_added = vlSelfRef.jalr_actual_address;
    } else {
        vlSelfRef.mispredicted = 0U;
        if (((IData)(vlSelfRef.branch) & (IData)(vlSelfRef.pipe_taken))) {
            vlSelfRef.pc_pre = vlSelfRef.pipe_pc;
            vlSelfRef.to_be_added = VL_CONCAT_III(32,19,13, 
                                                  (0x0007ffffU 
                                                   & VL_REPLICATE_IOI(1, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelfRef.i, 0x1fU)), 0x00000013U)), 
                                                  VL_CONCAT_III(13,2,11, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelfRef.i, 0x1fU)), 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelfRef.i, 7U))), 
                                                                VL_CONCAT_III(11,6,5, 
                                                                              (0x0000003fU 
                                                                               & VL_SEL_IIII(32, vlSelfRef.i, 0x19U, 6)), 
                                                                              VL_CONCAT_III(5,4,1, 
                                                                                (0x0000000fU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.i, 8U, 4)), 0U))));
        } else if (vlSelfRef.jump) {
            vlSelfRef.pc_pre = vlSelfRef.pipe_pc;
            vlSelfRef.to_be_added = VL_CONCAT_III(32,12,20, 
                                                  VL_CONCAT_III(12,11,1, 
                                                                (0x000007ffU 
                                                                 & VL_REPLICATE_IOI(1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.i, 0x1fU)), 0x0000000bU)), 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelfRef.i, 0x1fU))), 
                                                  VL_CONCAT_III(20,9,11, 
                                                                VL_CONCAT_III(9,8,1, 
                                                                              (0x000000ffU 
                                                                               & VL_SEL_IIII(32, vlSelfRef.i, 0x0cU, 8)), 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelfRef.i, 0x14U))), 
                                                                VL_CONCAT_III(11,10,1, 
                                                                              (0x000003ffU 
                                                                               & VL_SEL_IIII(32, vlSelfRef.i, 0x15U, 10)), 0U)));
        } else {
            vlSelfRef.pc_pre = vlSelfRef.pipe_pc;
            vlSelfRef.to_be_added = 4U;
        }
    }
    vlSelfRef.pc_update = (vlSelfRef.pc_pre + vlSelfRef.to_be_added);
}

void Vcore_new_pc___nba_comb__TOP__core__generate_new_pc__0(Vcore_new_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_new_pc___nba_comb__TOP__core__generate_new_pc__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mis_taken = ((IData)(vlSelfRef.commit_taken) 
                           & (~ (IData)(vlSelfRef.commit_result)));
}

void Vcore_new_pc___nba_comb__TOP__core__generate_new_pc__1(Vcore_new_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_new_pc___nba_comb__TOP__core__generate_new_pc__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pipe_pc = VL_SEL_IWII(112, vlSelfRef.pipe_in, 0x00000050U, 32);
    vlSelfRef.jump = (1U & VL_BITSEL_IWII(112, vlSelfRef.pipe_in, 0x0000002dU));
    vlSelfRef.branch = (1U & VL_BITSEL_IWII(112, vlSelfRef.pipe_in, 0x0000002eU));
    vlSelfRef.pipe_taken = (1U & VL_BITSEL_IWII(112, vlSelfRef.pipe_in, 0x0000002fU));
    vlSelfRef.instruction = VL_SEL_IWII(112, vlSelfRef.pipe_in, 0x00000030U, 32);
    vlSelfRef.i = vlSelfRef.instruction;
}

void Vcore_new_pc___nba_comb__TOP__core__generate_new_pc__2(Vcore_new_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_new_pc___nba_comb__TOP__core__generate_new_pc__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.committed_is_branch) & ((IData)(vlSelfRef.commit_taken) 
                                                   ^ (IData)(vlSelfRef.commit_result)))) {
        vlSelfRef.mispredicted = 1U;
        if (vlSelfRef.mis_taken) {
            vlSelfRef.pc_pre = vlSelfRef.commit_pc;
            vlSelfRef.to_be_added = 4U;
        } else {
            vlSelfRef.pc_pre = vlSelfRef.commit_pc;
            vlSelfRef.to_be_added = vlSelfRef.commit_imm_se;
        }
    } else if (((IData)(vlSelfRef.commit_jalr) & (vlSelfRef.jalr_taken_address 
                                                  != vlSelfRef.jalr_actual_address))) {
        vlSelfRef.mispredicted = 1U;
        vlSelfRef.pc_pre = 0U;
        vlSelfRef.to_be_added = vlSelfRef.jalr_actual_address;
    } else {
        vlSelfRef.mispredicted = 0U;
        if (((IData)(vlSelfRef.branch) & (IData)(vlSelfRef.pipe_taken))) {
            vlSelfRef.pc_pre = vlSelfRef.pipe_pc;
            vlSelfRef.to_be_added = VL_CONCAT_III(32,19,13, 
                                                  (0x0007ffffU 
                                                   & VL_REPLICATE_IOI(1, 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelfRef.i, 0x1fU)), 0x00000013U)), 
                                                  VL_CONCAT_III(13,2,11, 
                                                                VL_CONCAT_III(2,1,1, 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelfRef.i, 0x1fU)), 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelfRef.i, 7U))), 
                                                                VL_CONCAT_III(11,6,5, 
                                                                              (0x0000003fU 
                                                                               & VL_SEL_IIII(32, vlSelfRef.i, 0x19U, 6)), 
                                                                              VL_CONCAT_III(5,4,1, 
                                                                                (0x0000000fU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.i, 8U, 4)), 0U))));
        } else if (vlSelfRef.jump) {
            vlSelfRef.pc_pre = vlSelfRef.pipe_pc;
            vlSelfRef.to_be_added = VL_CONCAT_III(32,12,20, 
                                                  VL_CONCAT_III(12,11,1, 
                                                                (0x000007ffU 
                                                                 & VL_REPLICATE_IOI(1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.i, 0x1fU)), 0x0000000bU)), 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(32, vlSelfRef.i, 0x1fU))), 
                                                  VL_CONCAT_III(20,9,11, 
                                                                VL_CONCAT_III(9,8,1, 
                                                                              (0x000000ffU 
                                                                               & VL_SEL_IIII(32, vlSelfRef.i, 0x0cU, 8)), 
                                                                              (1U 
                                                                               & VL_BITSEL_IIII(32, vlSelfRef.i, 0x14U))), 
                                                                VL_CONCAT_III(11,10,1, 
                                                                              (0x000003ffU 
                                                                               & VL_SEL_IIII(32, vlSelfRef.i, 0x15U, 10)), 0U)));
        } else {
            vlSelfRef.pc_pre = vlSelfRef.pipe_pc;
            vlSelfRef.to_be_added = 4U;
        }
    }
    vlSelfRef.pc_update = (vlSelfRef.pc_pre + vlSelfRef.to_be_added);
}
