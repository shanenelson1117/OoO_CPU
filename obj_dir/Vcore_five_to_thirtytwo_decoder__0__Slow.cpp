// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_five_to_thirtytwo_decoder___stl_comb__TOP__core__registers__regfile_enable_decode__0(Vcore_five_to_thirtytwo_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_five_to_thirtytwo_decoder___stl_comb__TOP__core__registers__regfile_enable_decode__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out = 0U;
    if (((IData)(vlSelfRef.enable) & (0U != (IData)(vlSelfRef.sel)))) {
        VL_ASSIGNBIT_IO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}

VL_ATTR_COLD void Vcore_five_to_thirtytwo_decoder___stl_comb__TOP__core__reg_status_register__enable_decode__0(Vcore_five_to_thirtytwo_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_five_to_thirtytwo_decoder___stl_comb__TOP__core__reg_status_register__enable_decode__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out = 0U;
    if (((IData)(vlSelfRef.enable) & (0U != (IData)(vlSelfRef.sel)))) {
        VL_ASSIGNBIT_IO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}

VL_ATTR_COLD void Vcore_five_to_thirtytwo_decoder___stl_comb__TOP__core__reg_status_register__reset_decode__0(Vcore_five_to_thirtytwo_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_five_to_thirtytwo_decoder___stl_comb__TOP__core__reg_status_register__reset_decode__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out = 0U;
    if (((IData)(vlSelfRef.enable) & (0U != (IData)(vlSelfRef.sel)))) {
        VL_ASSIGNBIT_IO((IData)(vlSelfRef.sel), vlSelfRef.out);
    }
}

VL_ATTR_COLD void Vcore_five_to_thirtytwo_decoder___ctor_var_reset(Vcore_five_to_thirtytwo_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_five_to_thirtytwo_decoder___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->sel = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14660815779230110548ull);
    vlSelf->enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    vlSelf->out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7519490245117619040ull);
}
