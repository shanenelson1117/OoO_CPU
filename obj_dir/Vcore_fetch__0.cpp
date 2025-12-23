// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_fetch___ico_sequent__TOP__core__fetch_stage__0(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___ico_sequent__TOP__core__fetch_stage__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pc = vlSymsp->TOP__core__fetch_stage__program_counter.pc;
    vlSelfRef.ptr = vlSymsp->TOP__core__fetch_stage__ret_addr_s.ptr;
    vlSymsp->TOP__core__fetch_stage__ret_addr_s.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__program_counter.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__history_reg.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__pred_buffer.clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage__program_counter.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__ret_addr_s.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__history_reg.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__pred_buffer.reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage__program_counter.mepc_ReadData 
        = vlSelfRef.mepc_ReadData;
    vlSymsp->TOP__core__fetch_stage__program_counter.mtvec_ReadData 
        = vlSelfRef.mtvec_ReadData;
    vlSymsp->TOP__core__fetch_stage__program_counter.stall 
        = vlSelfRef.stall;
    vlSelfRef.__Vcellinp__ret_addr_s__ras_update = 
        ((IData)(4U) + vlSelfRef.pc);
    vlSymsp->TOP__core__fetch_stage__ret_addr_s.ras_update 
        = vlSelfRef.__Vcellinp__ret_addr_s__ras_update;
}

void Vcore_fetch___ico_sequent__TOP__core__fetch_stage__1(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___ico_sequent__TOP__core__fetch_stage__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.history = vlSymsp->TOP__core__fetch_stage__history_reg.history;
    vlSelfRef.index_read = (0x000003ffU & ((IData)(vlSelfRef.history) 
                                           ^ VL_SEL_IIII(32, vlSelfRef.pc, 0U, 10)));
    vlSymsp->TOP__core__fetch_stage__pred_buffer.index_read 
        = vlSelfRef.index_read;
}

void Vcore_fetch___ico_sequent__TOP__core__fetch_stage__2(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___ico_sequent__TOP__core__fetch_stage__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = vlSymsp->TOP__core__fetch_stage__pred_buffer.prediction;
    vlSelfRef.read_exception = vlSymsp->TOP__core__fetch_stage__program_counter.read_exception;
    vlSelfRef.mcause = vlSymsp->TOP__core__fetch_stage__program_counter.mcause;
    vlSelfRef.instruction = vlSymsp->TOP__core__fetch_stage__program_counter.instruction;
    vlSelfRef.rd = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.instruction, 7U, 5));
    vlSelfRef.rs1 = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.instruction, 0x0fU, 5));
    vlSelfRef.opcode = (0x0000007fU & VL_SEL_IIII(32, vlSelfRef.instruction, 0U, 7));
    vlSelfRef.jalr = (0x67U == (IData)(vlSelfRef.opcode));
    vlSelfRef.branch = (0x63U == (IData)(vlSelfRef.opcode));
    vlSelfRef.jump = (0x6fU == (IData)(vlSelfRef.opcode));
    if (vlSelfRef.jump) {
        vlSelfRef.push = (1U & VL_BITSEL_IIII(32, (
                                                   ((1U 
                                                     == (IData)(vlSelfRef.rd)) 
                                                    | (5U 
                                                       == (IData)(vlSelfRef.rd)))
                                                    ? 1U
                                                    : 0U), 0U));
        vlSelfRef.pop = 0U;
    } else if (vlSelfRef.jalr) {
        vlSelfRef.push = (1U & VL_BITSEL_IIII(32, (
                                                   ((1U 
                                                     == (IData)(vlSelfRef.rd)) 
                                                    | (5U 
                                                       == (IData)(vlSelfRef.rd)))
                                                    ? 1U
                                                    : 0U), 0U));
        vlSelfRef.pop = ((((1U != (IData)(vlSelfRef.rd)) 
                           & (5U != (IData)(vlSelfRef.rd))) 
                          & ((1U == (IData)(vlSelfRef.rs1)) 
                             | (5U == (IData)(vlSelfRef.rs1)))) 
                         || ((((1U == (IData)(vlSelfRef.rd)) 
                               | (5U == (IData)(vlSelfRef.rd))) 
                              & ((1U == (IData)(vlSelfRef.rs1)) 
                                 | (5U == (IData)(vlSelfRef.rs1)))) 
                             & ((IData)(vlSelfRef.rd) 
                                != (IData)(vlSelfRef.rs1))));
    } else {
        vlSelfRef.push = 0U;
        vlSelfRef.pop = 0U;
    }
    vlSymsp->TOP__core__fetch_stage__ret_addr_s.push 
        = vlSelfRef.push;
    vlSymsp->TOP__core__fetch_stage__ret_addr_s.pop 
        = vlSelfRef.pop;
}

void Vcore_fetch___ico_comb__TOP__core__fetch_stage__0(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___ico_comb__TOP__core__fetch_stage__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_stage__program_counter.exception 
        = vlSelfRef.exception;
    vlSelfRef.index_write = (0x000003ffU & ((IData)(vlSelfRef.history) 
                                            ^ VL_SEL_IIII(32, vlSelfRef.committed_pc, 0U, 10)));
    vlSymsp->TOP__core__fetch_stage__history_reg.valid_in 
        = vlSelfRef.valid_in;
    vlSymsp->TOP__core__fetch_stage__pred_buffer.update_valid 
        = vlSelfRef.valid_in;
    vlSymsp->TOP__core__fetch_stage__history_reg.update 
        = vlSelfRef.update;
    vlSymsp->TOP__core__fetch_stage__pred_buffer.update_value 
        = vlSelfRef.update;
    vlSymsp->TOP__core__fetch_stage__ret_addr_s.flush_ptr 
        = vlSelfRef.flush_ptr;
    vlSymsp->TOP__core__fetch_stage__pred_buffer.index_write 
        = vlSelfRef.index_write;
}

void Vcore_fetch___ico_comb__TOP__core__fetch_stage__1(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___ico_comb__TOP__core__fetch_stage__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_stage__program_counter.mret 
        = vlSelfRef.mret;
}

void Vcore_fetch___ico_comb__TOP__core__fetch_stage__2(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___ico_comb__TOP__core__fetch_stage__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_WQ(112, 33, 0x0000002fU, vlSelfRef.pipe_in, 
                    VL_CONCAT_QII(33,32,1, vlSelfRef.instruction, 
                                  (((IData)(vlSelfRef.prediction) 
                                    & (IData)(vlSelfRef.branch)) 
                                   | (IData)(vlSelfRef.jump))));
    VL_ASSIGNSEL_WI(112, 32, 0x00000050U, vlSelfRef.pipe_in, vlSelfRef.pc);
    VL_ASSIGNSEL_WQ(112, 38, 9U, vlSelfRef.pipe_in, 
                    VL_CONCAT_QIQ(38,1,37, (IData)(vlSelfRef.branch), 
                                  VL_CONCAT_QIQ(37,1,36, (IData)(vlSelfRef.jump), 
                                                VL_CONCAT_QII(36,4,32, (IData)(vlSelfRef.ptr), vlSelfRef.newpc))));
    VL_ASSIGNSEL_WI(112, 9, 0U, vlSelfRef.pipe_in, 
                    VL_CONCAT_III(9,8,1, (IData)(vlSelfRef.mcause), (IData)(vlSelfRef.read_exception)));
}

void Vcore_fetch___ico_comb__TOP__core__fetch_stage__3(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___ico_comb__TOP__core__fetch_stage__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_stage__program_counter.mispredicted 
        = vlSelfRef.mispredicted;
    vlSymsp->TOP__core__fetch_stage__ret_addr_s.mispredicted 
        = vlSelfRef.mispredicted;
}

void Vcore_fetch___ico_comb__TOP__core__fetch_stage__4(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___ico_comb__TOP__core__fetch_stage__4\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ras_new_pc = vlSymsp->TOP__core__fetch_stage__ret_addr_s.ras_new_pc;
    vlSelfRef.newpc = ((IData)(vlSelfRef.pop) ? vlSelfRef.ras_new_pc
                        : vlSelfRef.pc_update);
    vlSymsp->TOP__core__fetch_stage__program_counter.pc_update 
        = vlSelfRef.newpc;
}

void Vcore_fetch___act_sequent__TOP__core__fetch_stage__0(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___act_sequent__TOP__core__fetch_stage__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_WQ(112, 33, 0x0000002fU, vlSelfRef.pipe_in, 
                    VL_CONCAT_QII(33,32,1, vlSelfRef.instruction, 
                                  (((IData)(vlSelfRef.prediction) 
                                    & (IData)(vlSelfRef.branch)) 
                                   | (IData)(vlSelfRef.jump))));
    VL_ASSIGNSEL_WI(112, 32, 0x00000050U, vlSelfRef.pipe_in, vlSelfRef.pc);
    VL_ASSIGNSEL_WQ(112, 38, 9U, vlSelfRef.pipe_in, 
                    VL_CONCAT_QIQ(38,1,37, (IData)(vlSelfRef.branch), 
                                  VL_CONCAT_QIQ(37,1,36, (IData)(vlSelfRef.jump), 
                                                VL_CONCAT_QII(36,4,32, (IData)(vlSelfRef.ptr), vlSelfRef.newpc))));
    VL_ASSIGNSEL_WI(112, 9, 0U, vlSelfRef.pipe_in, 
                    VL_CONCAT_III(9,8,1, (IData)(vlSelfRef.mcause), (IData)(vlSelfRef.read_exception)));
}

void Vcore_fetch___act_sequent__TOP__core__fetch_stage__1(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___act_sequent__TOP__core__fetch_stage__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_stage__program_counter.exception 
        = vlSelfRef.exception;
    vlSelfRef.index_write = (0x000003ffU & ((IData)(vlSelfRef.history) 
                                            ^ VL_SEL_IIII(32, vlSelfRef.committed_pc, 0U, 10)));
    vlSymsp->TOP__core__fetch_stage__history_reg.valid_in 
        = vlSelfRef.valid_in;
    vlSymsp->TOP__core__fetch_stage__pred_buffer.update_valid 
        = vlSelfRef.valid_in;
    vlSymsp->TOP__core__fetch_stage__history_reg.update 
        = vlSelfRef.update;
    vlSymsp->TOP__core__fetch_stage__pred_buffer.update_value 
        = vlSelfRef.update;
    vlSymsp->TOP__core__fetch_stage__ret_addr_s.flush_ptr 
        = vlSelfRef.flush_ptr;
    vlSymsp->TOP__core__fetch_stage__pred_buffer.index_write 
        = vlSelfRef.index_write;
}

void Vcore_fetch___act_sequent__TOP__core__fetch_stage__2(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___act_sequent__TOP__core__fetch_stage__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_stage__program_counter.mret 
        = vlSelfRef.mret;
}

void Vcore_fetch___act_comb__TOP__core__fetch_stage__0(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___act_comb__TOP__core__fetch_stage__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_stage__program_counter.mispredicted 
        = vlSelfRef.mispredicted;
    vlSymsp->TOP__core__fetch_stage__ret_addr_s.mispredicted 
        = vlSelfRef.mispredicted;
}

void Vcore_fetch___act_comb__TOP__core__fetch_stage__1(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___act_comb__TOP__core__fetch_stage__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ras_new_pc = vlSymsp->TOP__core__fetch_stage__ret_addr_s.ras_new_pc;
    vlSelfRef.newpc = ((IData)(vlSelfRef.pop) ? vlSelfRef.ras_new_pc
                        : vlSelfRef.pc_update);
    vlSymsp->TOP__core__fetch_stage__program_counter.pc_update 
        = vlSelfRef.newpc;
}

void Vcore_fetch___nba_sequent__TOP__core__fetch_stage__0(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___nba_sequent__TOP__core__fetch_stage__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ptr = vlSymsp->TOP__core__fetch_stage__ret_addr_s.ptr;
}

void Vcore_fetch___nba_sequent__TOP__core__fetch_stage__1(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___nba_sequent__TOP__core__fetch_stage__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_stage__program_counter.stall 
        = vlSelfRef.stall;
}

void Vcore_fetch___nba_sequent__TOP__core__fetch_stage__2(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___nba_sequent__TOP__core__fetch_stage__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pc = vlSymsp->TOP__core__fetch_stage__program_counter.pc;
    vlSelfRef.__Vcellinp__ret_addr_s__ras_update = 
        ((IData)(4U) + vlSelfRef.pc);
    vlSymsp->TOP__core__fetch_stage__ret_addr_s.ras_update 
        = vlSelfRef.__Vcellinp__ret_addr_s__ras_update;
}

void Vcore_fetch___nba_sequent__TOP__core__fetch_stage__3(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___nba_sequent__TOP__core__fetch_stage__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.read_exception = vlSymsp->TOP__core__fetch_stage__program_counter.read_exception;
    vlSelfRef.mcause = vlSymsp->TOP__core__fetch_stage__program_counter.mcause;
}

void Vcore_fetch___nba_comb__TOP__core__fetch_stage__0(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___nba_comb__TOP__core__fetch_stage__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.history = vlSymsp->TOP__core__fetch_stage__history_reg.history;
}

void Vcore_fetch___nba_sequent__TOP__core__fetch_stage__4(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___nba_sequent__TOP__core__fetch_stage__4\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_stage__program_counter.mtvec_ReadData 
        = vlSelfRef.mtvec_ReadData;
    vlSymsp->TOP__core__fetch_stage__program_counter.mepc_ReadData 
        = vlSelfRef.mepc_ReadData;
}

void Vcore_fetch___nba_comb__TOP__core__fetch_stage__1(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___nba_comb__TOP__core__fetch_stage__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.instruction = vlSymsp->TOP__core__fetch_stage__program_counter.instruction;
    vlSelfRef.rd = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.instruction, 7U, 5));
    vlSelfRef.rs1 = (0x0000001fU & VL_SEL_IIII(32, vlSelfRef.instruction, 0x0fU, 5));
    vlSelfRef.opcode = (0x0000007fU & VL_SEL_IIII(32, vlSelfRef.instruction, 0U, 7));
    vlSelfRef.jalr = (0x67U == (IData)(vlSelfRef.opcode));
    vlSelfRef.branch = (0x63U == (IData)(vlSelfRef.opcode));
    vlSelfRef.jump = (0x6fU == (IData)(vlSelfRef.opcode));
    if (vlSelfRef.jump) {
        vlSelfRef.push = (1U & VL_BITSEL_IIII(32, (
                                                   ((1U 
                                                     == (IData)(vlSelfRef.rd)) 
                                                    | (5U 
                                                       == (IData)(vlSelfRef.rd)))
                                                    ? 1U
                                                    : 0U), 0U));
        vlSelfRef.pop = 0U;
    } else if (vlSelfRef.jalr) {
        vlSelfRef.push = (1U & VL_BITSEL_IIII(32, (
                                                   ((1U 
                                                     == (IData)(vlSelfRef.rd)) 
                                                    | (5U 
                                                       == (IData)(vlSelfRef.rd)))
                                                    ? 1U
                                                    : 0U), 0U));
        vlSelfRef.pop = ((((1U != (IData)(vlSelfRef.rd)) 
                           & (5U != (IData)(vlSelfRef.rd))) 
                          & ((1U == (IData)(vlSelfRef.rs1)) 
                             | (5U == (IData)(vlSelfRef.rs1)))) 
                         || ((((1U == (IData)(vlSelfRef.rd)) 
                               | (5U == (IData)(vlSelfRef.rd))) 
                              & ((1U == (IData)(vlSelfRef.rs1)) 
                                 | (5U == (IData)(vlSelfRef.rs1)))) 
                             & ((IData)(vlSelfRef.rd) 
                                != (IData)(vlSelfRef.rs1))));
    } else {
        vlSelfRef.push = 0U;
        vlSelfRef.pop = 0U;
    }
    vlSymsp->TOP__core__fetch_stage__ret_addr_s.push 
        = vlSelfRef.push;
    vlSymsp->TOP__core__fetch_stage__ret_addr_s.pop 
        = vlSelfRef.pop;
}

void Vcore_fetch___nba_comb__TOP__core__fetch_stage__2(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___nba_comb__TOP__core__fetch_stage__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_stage__program_counter.exception 
        = vlSelfRef.exception;
    vlSymsp->TOP__core__fetch_stage__history_reg.valid_in 
        = vlSelfRef.valid_in;
    vlSymsp->TOP__core__fetch_stage__pred_buffer.update_valid 
        = vlSelfRef.valid_in;
    vlSymsp->TOP__core__fetch_stage__history_reg.update 
        = vlSelfRef.update;
    vlSymsp->TOP__core__fetch_stage__pred_buffer.update_value 
        = vlSelfRef.update;
    vlSymsp->TOP__core__fetch_stage__ret_addr_s.flush_ptr 
        = vlSelfRef.flush_ptr;
}

void Vcore_fetch___nba_comb__TOP__core__fetch_stage__3(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___nba_comb__TOP__core__fetch_stage__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.index_read = (0x000003ffU & ((IData)(vlSelfRef.history) 
                                           ^ VL_SEL_IIII(32, vlSelfRef.pc, 0U, 10)));
    vlSymsp->TOP__core__fetch_stage__pred_buffer.index_read 
        = vlSelfRef.index_read;
}

void Vcore_fetch___nba_comb__TOP__core__fetch_stage__4(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___nba_comb__TOP__core__fetch_stage__4\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_stage__program_counter.mret 
        = vlSelfRef.mret;
}

void Vcore_fetch___nba_comb__TOP__core__fetch_stage__5(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___nba_comb__TOP__core__fetch_stage__5\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.index_write = (0x000003ffU & ((IData)(vlSelfRef.history) 
                                            ^ VL_SEL_IIII(32, vlSelfRef.committed_pc, 0U, 10)));
    vlSymsp->TOP__core__fetch_stage__pred_buffer.index_write 
        = vlSelfRef.index_write;
}

void Vcore_fetch___nba_comb__TOP__core__fetch_stage__6(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___nba_comb__TOP__core__fetch_stage__6\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prediction = vlSymsp->TOP__core__fetch_stage__pred_buffer.prediction;
}

void Vcore_fetch___nba_comb__TOP__core__fetch_stage__7(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___nba_comb__TOP__core__fetch_stage__7\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_WQ(112, 33, 0x0000002fU, vlSelfRef.pipe_in, 
                    VL_CONCAT_QII(33,32,1, vlSelfRef.instruction, 
                                  (((IData)(vlSelfRef.prediction) 
                                    & (IData)(vlSelfRef.branch)) 
                                   | (IData)(vlSelfRef.jump))));
    VL_ASSIGNSEL_WI(112, 32, 0x00000050U, vlSelfRef.pipe_in, vlSelfRef.pc);
    VL_ASSIGNSEL_WQ(112, 38, 9U, vlSelfRef.pipe_in, 
                    VL_CONCAT_QIQ(38,1,37, (IData)(vlSelfRef.branch), 
                                  VL_CONCAT_QIQ(37,1,36, (IData)(vlSelfRef.jump), 
                                                VL_CONCAT_QII(36,4,32, (IData)(vlSelfRef.ptr), vlSelfRef.newpc))));
    VL_ASSIGNSEL_WI(112, 9, 0U, vlSelfRef.pipe_in, 
                    VL_CONCAT_III(9,8,1, (IData)(vlSelfRef.mcause), (IData)(vlSelfRef.read_exception)));
}

void Vcore_fetch___nba_comb__TOP__core__fetch_stage__8(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___nba_comb__TOP__core__fetch_stage__8\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_stage__program_counter.mispredicted 
        = vlSelfRef.mispredicted;
    vlSymsp->TOP__core__fetch_stage__ret_addr_s.mispredicted 
        = vlSelfRef.mispredicted;
}

void Vcore_fetch___nba_comb__TOP__core__fetch_stage__9(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___nba_comb__TOP__core__fetch_stage__9\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ras_new_pc = vlSymsp->TOP__core__fetch_stage__ret_addr_s.ras_new_pc;
    vlSelfRef.newpc = ((IData)(vlSelfRef.pop) ? vlSelfRef.ras_new_pc
                        : vlSelfRef.pc_update);
    vlSymsp->TOP__core__fetch_stage__program_counter.pc_update 
        = vlSelfRef.newpc;
}
