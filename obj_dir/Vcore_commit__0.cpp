// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_commit___ico_sequent__TOP__core__commit_unit__0(Vcore_commit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_commit___ico_sequent__TOP__core__commit_unit__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.commit_jalr = (1U & VL_BITSEL_IIII(32, 
                                                 (((IData)(vlSelfRef.rob_head_ready) 
                                                   & (IData)(vlSelfRef.jalrq_ready))
                                                   ? 
                                                  VL_EXTEND_II(32,1, 
                                                               (1U 
                                                                & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000004eU)))
                                                   : 0U), 0U));
}

void Vcore_commit___ico_comb__TOP__core__commit_unit__0(Vcore_commit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_commit___ico_comb__TOP__core__commit_unit__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.special = 2U;
    vlSelfRef.commit_is_branch = 0U;
    vlSelfRef.commit_prediction = 0U;
    vlSelfRef.commit_result = 0U;
    vlSelfRef.RegWrite = 0U;
    vlSelfRef.committed_pc = 0U;
    vlSelfRef.commit_imm_se = 0U;
    vlSelfRef.rd_en = 0U;
    vlSelfRef.valid_commit = 0U;
    vlSelfRef.WriteData = 0U;
    vlSelfRef.csr_WriteData = 0U;
    vlSelfRef.csr_write_select = 0U;
    vlSelfRef.exception = 0U;
    vlSelfRef.mepc_WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x0000002eU, 32);
    vlSelfRef.mcause = 0U;
    vlSelfRef.csr_valid_write = 0U;
    vlSelfRef.rd_en_jalrq = 0U;
    if (((IData)(vlSelfRef.rob_head_ready) & (~ (IData)(vlSelfRef.empty)))) {
        vlSelfRef.rd_en = 1U;
        vlSelfRef.valid_commit = 1U;
        vlSelfRef.exception = (1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000020U));
        if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000004eU))) {
            vlSelfRef.rd_en_jalrq = vlSelfRef.jalrq_ready;
        }
        if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000020U))) {
            vlSelfRef.mcause = (0x000000ffU & VL_SEL_IWII(163, vlSelfRef.head, 0x00000026U, 8));
            vlSelfRef.exception = 1U;
            vlSelfRef.valid_commit = 0U;
        } else if ((0U == (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000050U, 2)))) {
            vlSelfRef.commit_is_branch = 1U;
            vlSelfRef.commit_prediction = (1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000009eU));
            vlSelfRef.commit_result = (1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000009dU));
            vlSelfRef.committed_pc = VL_SEL_IWII(163, vlSelfRef.head, 0x00000072U, 32);
            vlSelfRef.commit_imm_se = VL_SEL_IWII(163, vlSelfRef.head, 0x00000052U, 32);
        } else if ((1U == (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000050U, 2)))) {
            vlSelfRef.rd_en = vlSelfRef.rd_en_rob;
            vlSelfRef.valid_commit = vlSelfRef.rd_en_rob;
        } else if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000096U))) {
            vlSelfRef.special = (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000096U, 2));
            vlSelfRef.rd_en = 1U;
            vlSelfRef.exception = 1U;
            vlSelfRef.mcause = (0x000000ffU & VL_SEL_IWII(163, vlSelfRef.head, 0x00000026U, 8));
        } else if ((0U == (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000096U, 2)))) {
            vlSelfRef.special = (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000096U, 2));
            vlSelfRef.rd_en = (1U & (~ (IData)(vlSelfRef.illegal_access_e)));
            vlSelfRef.valid_commit = vlSelfRef.rd_en;
        } else if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000022U))) {
            vlSelfRef.RegWrite = (1U & (~ (IData)(vlSelfRef.illegal_access_e)));
            vlSelfRef.csr_valid_write = 1U;
            vlSelfRef.csr_WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000052U, 32);
            vlSelfRef.WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000072U, 32);
            vlSelfRef.csr_write_select = (7U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000023U, 3));
            vlSelfRef.rd_en = vlSelfRef.RegWrite;
            vlSelfRef.valid_commit = vlSelfRef.RegWrite;
        } else if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000021U))) {
            vlSelfRef.RegWrite = 1U;
            vlSelfRef.WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000072U, 32);
            vlSelfRef.valid_commit = 1U;
        } else {
            vlSelfRef.RegWrite = 1U;
            vlSelfRef.WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000052U, 32);
            vlSelfRef.rd_en = ((1U & (~ VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000004eU))) 
                               || (IData)(vlSelfRef.jalrq_ready));
        }
    }
    vlSelfRef.commit_ras_pointer = (0x0000000fU & ((IData)(vlSelfRef.rd_en)
                                                    ? 
                                                   VL_SEL_IWII(163, vlSelfRef.head, 0x00000092U, 4)
                                                    : 0U));
    vlSelfRef.commit_ROB = (0x0000000fU & ((IData)(vlSelfRef.rd_en)
                                            ? VL_SEL_IWII(163, vlSelfRef.head, 0x0000009fU, 4)
                                            : 0U));
    vlSelfRef.rd = (0x0000001fU & ((IData)(vlSelfRef.rd_en)
                                    ? VL_SEL_IWII(163, vlSelfRef.head, 0x00000098U, 5)
                                    : 0U));
}

void Vcore_commit___act_sequent__TOP__core__commit_unit__0(Vcore_commit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_commit___act_sequent__TOP__core__commit_unit__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.special = 2U;
    vlSelfRef.commit_is_branch = 0U;
    vlSelfRef.commit_prediction = 0U;
    vlSelfRef.commit_result = 0U;
    vlSelfRef.RegWrite = 0U;
    vlSelfRef.committed_pc = 0U;
    vlSelfRef.commit_imm_se = 0U;
    vlSelfRef.rd_en = 0U;
    vlSelfRef.valid_commit = 0U;
    vlSelfRef.WriteData = 0U;
    vlSelfRef.csr_WriteData = 0U;
    vlSelfRef.csr_write_select = 0U;
    vlSelfRef.exception = 0U;
    vlSelfRef.mepc_WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x0000002eU, 32);
    vlSelfRef.mcause = 0U;
    vlSelfRef.csr_valid_write = 0U;
    vlSelfRef.rd_en_jalrq = 0U;
    if (((IData)(vlSelfRef.rob_head_ready) & (~ (IData)(vlSelfRef.empty)))) {
        vlSelfRef.rd_en = 1U;
        vlSelfRef.valid_commit = 1U;
        vlSelfRef.exception = (1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000020U));
        if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000004eU))) {
            vlSelfRef.rd_en_jalrq = vlSelfRef.jalrq_ready;
        }
        if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000020U))) {
            vlSelfRef.mcause = (0x000000ffU & VL_SEL_IWII(163, vlSelfRef.head, 0x00000026U, 8));
            vlSelfRef.exception = 1U;
            vlSelfRef.valid_commit = 0U;
        } else if ((0U == (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000050U, 2)))) {
            vlSelfRef.commit_is_branch = 1U;
            vlSelfRef.commit_prediction = (1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000009eU));
            vlSelfRef.commit_result = (1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000009dU));
            vlSelfRef.committed_pc = VL_SEL_IWII(163, vlSelfRef.head, 0x00000072U, 32);
            vlSelfRef.commit_imm_se = VL_SEL_IWII(163, vlSelfRef.head, 0x00000052U, 32);
        } else if ((1U == (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000050U, 2)))) {
            vlSelfRef.rd_en = vlSelfRef.rd_en_rob;
            vlSelfRef.valid_commit = vlSelfRef.rd_en_rob;
        } else if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000096U))) {
            vlSelfRef.special = (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000096U, 2));
            vlSelfRef.rd_en = 1U;
            vlSelfRef.exception = 1U;
            vlSelfRef.mcause = (0x000000ffU & VL_SEL_IWII(163, vlSelfRef.head, 0x00000026U, 8));
        } else if ((0U == (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000096U, 2)))) {
            vlSelfRef.special = (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000096U, 2));
            vlSelfRef.rd_en = (1U & (~ (IData)(vlSelfRef.illegal_access_e)));
            vlSelfRef.valid_commit = vlSelfRef.rd_en;
        } else if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000022U))) {
            vlSelfRef.RegWrite = (1U & (~ (IData)(vlSelfRef.illegal_access_e)));
            vlSelfRef.csr_valid_write = 1U;
            vlSelfRef.csr_WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000052U, 32);
            vlSelfRef.WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000072U, 32);
            vlSelfRef.csr_write_select = (7U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000023U, 3));
            vlSelfRef.rd_en = vlSelfRef.RegWrite;
            vlSelfRef.valid_commit = vlSelfRef.RegWrite;
        } else if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000021U))) {
            vlSelfRef.RegWrite = 1U;
            vlSelfRef.WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000072U, 32);
            vlSelfRef.valid_commit = 1U;
        } else {
            vlSelfRef.RegWrite = 1U;
            vlSelfRef.WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000052U, 32);
            vlSelfRef.rd_en = ((1U & (~ VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000004eU))) 
                               || (IData)(vlSelfRef.jalrq_ready));
        }
    }
    vlSelfRef.commit_ras_pointer = (0x0000000fU & ((IData)(vlSelfRef.rd_en)
                                                    ? 
                                                   VL_SEL_IWII(163, vlSelfRef.head, 0x00000092U, 4)
                                                    : 0U));
    vlSelfRef.commit_ROB = (0x0000000fU & ((IData)(vlSelfRef.rd_en)
                                            ? VL_SEL_IWII(163, vlSelfRef.head, 0x0000009fU, 4)
                                            : 0U));
    vlSelfRef.rd = (0x0000001fU & ((IData)(vlSelfRef.rd_en)
                                    ? VL_SEL_IWII(163, vlSelfRef.head, 0x00000098U, 5)
                                    : 0U));
}

void Vcore_commit___nba_comb__TOP__core__commit_unit__0(Vcore_commit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_commit___nba_comb__TOP__core__commit_unit__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.commit_jalr = (1U & VL_BITSEL_IIII(32, 
                                                 (((IData)(vlSelfRef.rob_head_ready) 
                                                   & (IData)(vlSelfRef.jalrq_ready))
                                                   ? 
                                                  VL_EXTEND_II(32,1, 
                                                               (1U 
                                                                & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000004eU)))
                                                   : 0U), 0U));
}

void Vcore_commit___nba_comb__TOP__core__commit_unit__1(Vcore_commit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_commit___nba_comb__TOP__core__commit_unit__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.special = 2U;
    vlSelfRef.commit_is_branch = 0U;
    vlSelfRef.commit_prediction = 0U;
    vlSelfRef.commit_result = 0U;
    vlSelfRef.RegWrite = 0U;
    vlSelfRef.committed_pc = 0U;
    vlSelfRef.commit_imm_se = 0U;
    vlSelfRef.rd_en = 0U;
    vlSelfRef.valid_commit = 0U;
    vlSelfRef.WriteData = 0U;
    vlSelfRef.csr_WriteData = 0U;
    vlSelfRef.csr_write_select = 0U;
    vlSelfRef.exception = 0U;
    vlSelfRef.mepc_WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x0000002eU, 32);
    vlSelfRef.mcause = 0U;
    vlSelfRef.csr_valid_write = 0U;
    vlSelfRef.rd_en_jalrq = 0U;
    if (((IData)(vlSelfRef.rob_head_ready) & (~ (IData)(vlSelfRef.empty)))) {
        vlSelfRef.rd_en = 1U;
        vlSelfRef.valid_commit = 1U;
        vlSelfRef.exception = (1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000020U));
        if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000004eU))) {
            vlSelfRef.rd_en_jalrq = vlSelfRef.jalrq_ready;
        }
        if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000020U))) {
            vlSelfRef.mcause = (0x000000ffU & VL_SEL_IWII(163, vlSelfRef.head, 0x00000026U, 8));
            vlSelfRef.exception = 1U;
            vlSelfRef.valid_commit = 0U;
        } else if ((0U == (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000050U, 2)))) {
            vlSelfRef.commit_is_branch = 1U;
            vlSelfRef.commit_prediction = (1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000009eU));
            vlSelfRef.commit_result = (1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000009dU));
            vlSelfRef.committed_pc = VL_SEL_IWII(163, vlSelfRef.head, 0x00000072U, 32);
            vlSelfRef.commit_imm_se = VL_SEL_IWII(163, vlSelfRef.head, 0x00000052U, 32);
        } else if ((1U == (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000050U, 2)))) {
            vlSelfRef.rd_en = vlSelfRef.rd_en_rob;
            vlSelfRef.valid_commit = vlSelfRef.rd_en_rob;
        } else if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000096U))) {
            vlSelfRef.special = (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000096U, 2));
            vlSelfRef.rd_en = 1U;
            vlSelfRef.exception = 1U;
            vlSelfRef.mcause = (0x000000ffU & VL_SEL_IWII(163, vlSelfRef.head, 0x00000026U, 8));
        } else if ((0U == (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000096U, 2)))) {
            vlSelfRef.special = (3U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000096U, 2));
            vlSelfRef.rd_en = (1U & (~ (IData)(vlSelfRef.illegal_access_e)));
            vlSelfRef.valid_commit = vlSelfRef.rd_en;
        } else if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000022U))) {
            vlSelfRef.RegWrite = (1U & (~ (IData)(vlSelfRef.illegal_access_e)));
            vlSelfRef.csr_valid_write = 1U;
            vlSelfRef.csr_WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000052U, 32);
            vlSelfRef.WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000072U, 32);
            vlSelfRef.csr_write_select = (7U & VL_SEL_IWII(163, vlSelfRef.head, 0x00000023U, 3));
            vlSelfRef.rd_en = vlSelfRef.RegWrite;
            vlSelfRef.valid_commit = vlSelfRef.RegWrite;
        } else if ((1U & VL_BITSEL_IWII(163, vlSelfRef.head, 0x00000021U))) {
            vlSelfRef.RegWrite = 1U;
            vlSelfRef.WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000072U, 32);
            vlSelfRef.valid_commit = 1U;
        } else {
            vlSelfRef.RegWrite = 1U;
            vlSelfRef.WriteData = VL_SEL_IWII(163, vlSelfRef.head, 0x00000052U, 32);
            vlSelfRef.rd_en = ((1U & (~ VL_BITSEL_IWII(163, vlSelfRef.head, 0x0000004eU))) 
                               || (IData)(vlSelfRef.jalrq_ready));
        }
    }
    vlSelfRef.commit_ras_pointer = (0x0000000fU & ((IData)(vlSelfRef.rd_en)
                                                    ? 
                                                   VL_SEL_IWII(163, vlSelfRef.head, 0x00000092U, 4)
                                                    : 0U));
    vlSelfRef.commit_ROB = (0x0000000fU & ((IData)(vlSelfRef.rd_en)
                                            ? VL_SEL_IWII(163, vlSelfRef.head, 0x0000009fU, 4)
                                            : 0U));
    vlSelfRef.rd = (0x0000001fU & ((IData)(vlSelfRef.rd_en)
                                    ? VL_SEL_IWII(163, vlSelfRef.head, 0x00000098U, 5)
                                    : 0U));
}
