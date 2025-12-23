// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_jalrq___stl_sequent__TOP__core__indirect_jump_queue__0(Vcore_jalrq* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_jalrq___stl_sequent__TOP__core__indirect_jump_queue__0\n"); );
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

VL_ATTR_COLD void Vcore_jalrq___stl_sequent__TOP__core__indirect_jump_queue__1(Vcore_jalrq* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_jalrq___stl_sequent__TOP__core__indirect_jump_queue__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wr_en = (1U & VL_BITSEL_IWII(81, vlSelfRef.din, 0x00000050U));
}

VL_ATTR_COLD void Vcore_jalrq___ctor_var_reset(Vcore_jalrq* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_jalrq___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3814484142505630662ull);
    vlSelf->CDB_in = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 18108829248981814492ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->din, __VscopeHash, 15192908731043726583ull);
    vlSelf->full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6695099141381822181ull);
    vlSelf->head_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17364623833263064885ull);
    vlSelf->jalr_actual_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10465594383078161754ull);
    vlSelf->jalr_taken_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6808209024954878142ull);
    vlSelf->wptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1272979440381149364ull);
    vlSelf->rptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5036138671096657607ull);
    vlSelf->empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3016723684638320966ull);
    vlSelf->wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710928637576349896ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(81, vlSelf->jalrq_data[__Vi0], __VscopeHash, 7024241640393453970ull);
    }
    vlSelf->unnamedblk1__DOT__i = 0;
    vlSelf->unnamedblk2__DOT__i = 0;
    vlSelf->__Vdly__wptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11981047447061270492ull);
    vlSelf->__Vdly__rptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2954509768789696139ull);
    vlSelf->__VdlyDim0__jalrq_data__v0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10053494734589238148ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->__VdlyVal__jalrq_data__v1, __VscopeHash, 15792604100174969022ull);
    vlSelf->__VdlyDim0__jalrq_data__v1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2655067184284692002ull);
    vlSelf->__VdlyDim0__jalrq_data__v2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 695394282302647229ull);
    vlSelf->__VdlyVal__jalrq_data__v3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15107021638054188058ull);
    vlSelf->__VdlyDim0__jalrq_data__v3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6586329367553073211ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->__VdlyElem__jalrq_data__v3, __VscopeHash, 15626783693156586395ull);
}
