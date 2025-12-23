// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_new_pc___stl_comb__TOP__core__generate_new_pc__0(Vcore_new_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_new_pc___stl_comb__TOP__core__generate_new_pc__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mis_taken = ((IData)(vlSelfRef.commit_taken) 
                           & (~ (IData)(vlSelfRef.commit_result)));
}

VL_ATTR_COLD void Vcore_new_pc___stl_comb__TOP__core__generate_new_pc__1(Vcore_new_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_new_pc___stl_comb__TOP__core__generate_new_pc__1\n"); );
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

VL_ATTR_COLD void Vcore_new_pc___stl_comb__TOP__core__generate_new_pc__2(Vcore_new_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_new_pc___stl_comb__TOP__core__generate_new_pc__2\n"); );
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

VL_ATTR_COLD void Vcore_new_pc___ctor_var_reset(Vcore_new_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_new_pc___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->commit_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13273871951109446755ull);
    vlSelf->commit_imm_se = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10335403197138811143ull);
    vlSelf->jalr_actual_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10465594383078161754ull);
    vlSelf->jalr_taken_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6808209024954878142ull);
    vlSelf->commit_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8379663059651954256ull);
    vlSelf->commit_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8466355976420499118ull);
    vlSelf->commit_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15734581275611539913ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->pipe_in, __VscopeHash, 13001983719627058315ull);
    vlSelf->committed_is_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1602312058810479671ull);
    vlSelf->mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18312463477978689879ull);
    vlSelf->pc_update = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16351754468963950880ull);
    vlSelf->pipe_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10808883026709985768ull);
    vlSelf->instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8876431511369994264ull);
    vlSelf->pipe_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17920259615491450832ull);
    vlSelf->jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8906078629849262824ull);
    vlSelf->branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16985980692193088871ull);
    vlSelf->mis_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4225087780958190900ull);
    vlSelf->pc_pre = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5348164988430128139ull);
    vlSelf->to_be_added = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15166856500715341569ull);
    vlSelf->i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15817570140490810055ull);
}
