// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_fetch___stl_sequent__TOP__core__fetch_stage__0(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___stl_sequent__TOP__core__fetch_stage__0\n"); );
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

VL_ATTR_COLD void Vcore_fetch___stl_sequent__TOP__core__fetch_stage__1(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___stl_sequent__TOP__core__fetch_stage__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.history = vlSymsp->TOP__core__fetch_stage__history_reg.history;
    vlSelfRef.index_read = (0x000003ffU & ((IData)(vlSelfRef.history) 
                                           ^ VL_SEL_IIII(32, vlSelfRef.pc, 0U, 10)));
    vlSymsp->TOP__core__fetch_stage__pred_buffer.index_read 
        = vlSelfRef.index_read;
}

VL_ATTR_COLD void Vcore_fetch___stl_sequent__TOP__core__fetch_stage__2(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___stl_sequent__TOP__core__fetch_stage__2\n"); );
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

VL_ATTR_COLD void Vcore_fetch___stl_comb__TOP__core__fetch_stage__0(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___stl_comb__TOP__core__fetch_stage__0\n"); );
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

VL_ATTR_COLD void Vcore_fetch___stl_comb__TOP__core__fetch_stage__1(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___stl_comb__TOP__core__fetch_stage__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_stage__program_counter.mret 
        = vlSelfRef.mret;
}

VL_ATTR_COLD void Vcore_fetch___stl_comb__TOP__core__fetch_stage__2(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___stl_comb__TOP__core__fetch_stage__2\n"); );
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

VL_ATTR_COLD void Vcore_fetch___stl_comb__TOP__core__fetch_stage__3(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___stl_comb__TOP__core__fetch_stage__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_stage__program_counter.mispredicted 
        = vlSelfRef.mispredicted;
    vlSymsp->TOP__core__fetch_stage__ret_addr_s.mispredicted 
        = vlSelfRef.mispredicted;
}

VL_ATTR_COLD void Vcore_fetch___stl_comb__TOP__core__fetch_stage__4(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___stl_comb__TOP__core__fetch_stage__4\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ras_new_pc = vlSymsp->TOP__core__fetch_stage__ret_addr_s.ras_new_pc;
    vlSelfRef.newpc = ((IData)(vlSelfRef.pop) ? vlSelfRef.ras_new_pc
                        : vlSelfRef.pc_update);
    vlSymsp->TOP__core__fetch_stage__program_counter.pc_update 
        = vlSelfRef.newpc;
}

VL_ATTR_COLD void Vcore_fetch___ctor_var_reset(Vcore_fetch* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_fetch___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12726010985536908150ull);
    vlSelf->valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16540271516330450727ull);
    vlSelf->pc_update = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16351754468963950880ull);
    vlSelf->committed_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2851875357791482293ull);
    vlSelf->stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7179230919112499263ull);
    vlSelf->mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18312463477978689879ull);
    vlSelf->mtvec_ReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5364263975921930868ull);
    vlSelf->mepc_ReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17906630443429346129ull);
    vlSelf->flush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12629206001683931762ull);
    vlSelf->mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8098803689761564963ull);
    vlSelf->exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 765130616356482916ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->pipe_in, __VscopeHash, 13001983719627058315ull);
    vlSelf->pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211327832146562899ull);
    vlSelf->instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8876431511369994264ull);
    vlSelf->newpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7803293785306287321ull);
    vlSelf->branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16985980692193088871ull);
    vlSelf->prediction = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8174343725260504883ull);
    vlSelf->jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8906078629849262824ull);
    vlSelf->jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16244873400837304909ull);
    vlSelf->history = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17152829647071001359ull);
    vlSelf->index_read = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11478123236370168623ull);
    vlSelf->index_write = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9947149057866538891ull);
    vlSelf->read_exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1977629851525660436ull);
    vlSelf->mcause = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16155705988360301293ull);
    vlSelf->opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17409787017080135397ull);
    vlSelf->push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14649745423432011937ull);
    vlSelf->pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10750680354736310321ull);
    vlSelf->ras_new_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14497719160325495026ull);
    vlSelf->ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12774705238978961011ull);
    vlSelf->rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10303652599525973633ull);
    vlSelf->rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10211807078052224816ull);
    vlSelf->__Vcellinp__ret_addr_s__ras_update = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15958957775461506997ull);
}
