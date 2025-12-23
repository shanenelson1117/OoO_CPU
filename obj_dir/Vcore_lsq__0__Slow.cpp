// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_lsq___stl_sequent__TOP__core__load_store_queue__0(Vcore_lsq* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_lsq___stl_sequent__TOP__core__load_store_queue__0\n"); );
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

VL_ATTR_COLD void Vcore_lsq___ctor_var_reset(Vcore_lsq* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_lsq___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710928637576349896ull);
    vlSelf->rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3814484142505630662ull);
    vlSelf->CDB_in = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 18108829248981814492ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->din, __VscopeHash, 15192908731043726583ull);
    vlSelf->full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6695099141381822181ull);
    vlSelf->head_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17364623833263064885ull);
    vlSelf->head_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2071667241211036398ull);
    vlSelf->empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3016723684638320966ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->dout, __VscopeHash, 11474705599699299244ull);
    vlSelf->wptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1272979440381149364ull);
    vlSelf->rptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5036138671096657607ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(79, vlSelf->lsq_data[__Vi0], __VscopeHash, 9292367379296167330ull);
    }
    vlSelf->unnamedblk1__DOT__i = 0;
    vlSelf->unnamedblk2__DOT__i = 0;
    vlSelf->__Vdly__wptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11981047447061270492ull);
    vlSelf->__Vdly__rptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2954509768789696139ull);
    vlSelf->__VdlyDim0__lsq_data__v0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6997151145946190334ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__VdlyVal__lsq_data__v1, __VscopeHash, 9647937226873273773ull);
    vlSelf->__VdlyDim0__lsq_data__v1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9079161668966720058ull);
    vlSelf->__VdlyDim0__lsq_data__v2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16375852447771099319ull);
    vlSelf->__VdlyVal__lsq_data__v3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15449584851610006086ull);
    vlSelf->__VdlyDim0__lsq_data__v3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18424457361940960545ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__VdlyElem__lsq_data__v3, __VscopeHash, 10655789217187367541ull);
    vlSelf->__VdlyVal__lsq_data__v4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18345072401654338454ull);
    vlSelf->__VdlyDim0__lsq_data__v4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4622907261202479875ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->__VdlyElem__lsq_data__v4, __VscopeHash, 3757649425128058903ull);
    vlSelf->__VdlyDim0__lsq_data__v5 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7798622281607416052ull);
}
