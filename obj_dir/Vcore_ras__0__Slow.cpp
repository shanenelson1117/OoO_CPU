// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_ras___stl_sequent__TOP__core__fetch_stage__ret_addr_s__0(Vcore_ras* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ras___stl_sequent__TOP__core__fetch_stage__ret_addr_s__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.empty = (0U == (IData)(vlSelfRef.sp));
    vlSelfRef.full = (0x0fU == (IData)(vlSelfRef.sp));
    vlSelfRef.ptr = vlSelfRef.sp;
}

VL_ATTR_COLD void Vcore_ras___stl_comb__TOP__core__fetch_stage__ret_addr_s__0(Vcore_ras* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ras___stl_comb__TOP__core__fetch_stage__ret_addr_s__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ras_new_pc = ((IData)(vlSelfRef.reset)
                             ? 0U : ((IData)(vlSelfRef.mispredicted)
                                      ? vlSelfRef.__SYM__stack
                                     [(0x0000000fU 
                                       & ((IData)(vlSelfRef.flush_ptr) 
                                          - (IData)(1U)))]
                                      : vlSelfRef.__SYM__stack
                                     [vlSelfRef.sp]));
}

VL_ATTR_COLD void Vcore_ras___ctor_var_reset(Vcore_ras* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_ras___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14649745423432011937ull);
    vlSelf->pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10750680354736310321ull);
    vlSelf->ras_update = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1423091501921817548ull);
    vlSelf->mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18312463477978689879ull);
    vlSelf->flush_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12629206001683931762ull);
    vlSelf->ras_new_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14497719160325495026ull);
    vlSelf->ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12774705238978961011ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__SYM__stack[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1362810647514495845ull);
    }
    vlSelf->sp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8210490988071179358ull);
    vlSelf->full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6695099141381822181ull);
    vlSelf->empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3016723684638320966ull);
    vlSelf->__Vdly__sp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6929336441815112554ull);
    vlSelf->__VdlyVal____SYM__stack__v0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8718393190003732852ull);
    vlSelf->__VdlyDim0____SYM__stack__v0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4748967569636100663ull);
    vlSelf->__VdlySet____SYM__stack__v0 = 0;
    vlSelf->__VdlyVal____SYM__stack__v1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5917263713437843345ull);
    vlSelf->__VdlyDim0____SYM__stack__v1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14186196402932276734ull);
    vlSelf->__VdlySet____SYM__stack__v1 = 0;
}
