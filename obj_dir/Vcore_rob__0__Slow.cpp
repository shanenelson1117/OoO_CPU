// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_rob___stl_sequent__TOP__core__reorder_buffer__0(Vcore_rob* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rob___stl_sequent__TOP__core__reorder_buffer__0\n"); );
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

VL_ATTR_COLD void Vcore_rob___stl_sequent__TOP__core__reorder_buffer__1(Vcore_rob* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rob___stl_sequent__TOP__core__reorder_buffer__1\n"); );
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

VL_ATTR_COLD void Vcore_rob___stl_comb__TOP__core__reorder_buffer__0(Vcore_rob* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rob___stl_comb__TOP__core__reorder_buffer__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_en = ((0x0000000fU & VL_SEL_IWII(163, vlSelfRef.new_entry, 0x0000009fU, 4)) 
                       == (IData)(vlSelfRef.wptr));
}

VL_ATTR_COLD void Vcore_rob___ctor_var_reset(Vcore_rob* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_rob___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    VL_SCOPED_RAND_RESET_W(163, vlSelf->new_entry, __VscopeHash, 4746169181588728890ull);
    vlSelf->CDB_in = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 18108829248981814492ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3814484142505630662ull);
    vlSelf->Q_j = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13101064098374966050ull);
    vlSelf->Q_k = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8213264214307608121ull);
    vlSelf->illegal_access_e = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2103023828628314327ull);
    VL_SCOPED_RAND_RESET_W(163, vlSelf->head, __VscopeHash, 10112112548227665684ull);
    vlSelf->head_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17364623833263064885ull);
    vlSelf->full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6695099141381822181ull);
    vlSelf->empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3016723684638320966ull);
    vlSelf->ROB_head_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17200896078419622888ull);
    vlSelf->ROB_entry = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3172492093111144780ull);
    vlSelf->rs1rob_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2259780007359909577ull);
    vlSelf->rs2rob_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4856465691019389114ull);
    vlSelf->rs1rob_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16314643386973513677ull);
    vlSelf->rs2rob_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5001348478819998569ull);
    vlSelf->wptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1272979440381149364ull);
    vlSelf->rptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5036138671096657607ull);
    vlSelf->wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710928637576349896ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(163, vlSelf->rob_data[__Vi0], __VscopeHash, 3223554696566173329ull);
    }
    vlSelf->unnamedblk1__DOT__i = 0;
    vlSelf->unnamedblk2__DOT__i = 0;
    vlSelf->__Vdly__wptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11981047447061270492ull);
    vlSelf->__Vdly__rptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2954509768789696139ull);
    vlSelf->__VdlyDim0__rob_data__v0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11107177230691571204ull);
    VL_SCOPED_RAND_RESET_W(163, vlSelf->__VdlyVal__rob_data__v1, __VscopeHash, 12699549949732137336ull);
    vlSelf->__VdlyDim0__rob_data__v1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1728090447363948861ull);
    vlSelf->__VdlyVal__rob_data__v2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4366199906468749610ull);
    vlSelf->__VdlyDim0__rob_data__v2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4407898768730375269ull);
    VL_SCOPED_RAND_RESET_W(163, vlSelf->__VdlyElem__rob_data__v2, __VscopeHash, 12301882037081695229ull);
    vlSelf->__VdlyDim0__rob_data__v3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 468464603807250412ull);
    vlSelf->__VdlyVal__rob_data__v4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11235331552517410430ull);
    vlSelf->__VdlyDim0__rob_data__v4 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2346298580825453609ull);
    VL_SCOPED_RAND_RESET_W(163, vlSelf->__VdlyElem__rob_data__v4, __VscopeHash, 7411392105543533805ull);
    vlSelf->__VdlyDim0__rob_data__v5 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15741886853326160437ull);
    vlSelf->__VdlyDim0__rob_data__v6 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18406287576743449492ull);
    vlSelf->__VdlyDim0__rob_data__v7 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5629789894477607123ull);
}
