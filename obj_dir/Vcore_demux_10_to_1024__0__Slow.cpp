// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

extern const VlWide<32>/*1023:0*/ Vcore__ConstPool__CONST_hd6b7ba52_0;

VL_ATTR_COLD void Vcore_demux_10_to_1024___stl_comb__TOP__core__fetch_stage__pred_buffer__update_valid_demux__0(Vcore_demux_10_to_1024* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_demux_10_to_1024___stl_comb__TOP__core__fetch_stage__pred_buffer__update_valid_demux__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(1024, vlSelfRef.out, Vcore__ConstPool__CONST_hd6b7ba52_0);
    if (vlSelfRef.en) {
        VL_ASSIGNBIT_WO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}

VL_ATTR_COLD void Vcore_demux_10_to_1024___ctor_var_reset(Vcore_demux_10_to_1024* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_demux_10_to_1024___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710216835639188562ull);
    vlSelf->sel = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14660815779230110548ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->out, __VscopeHash, 7519490245117619040ull);
}
