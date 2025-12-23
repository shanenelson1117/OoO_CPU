// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_cdb_scheduler___stl_sequent__TOP__core__cdb__0(Vcore_cdb_scheduler* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_cdb_scheduler___stl_sequent__TOP__core__cdb__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 4U))) {
        vlSelfRef.new_CDB = vlSelfRef.mem_out;
        vlSelfRef.yummi_in_bus = 0x10U;
    } else if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 5U))) {
        vlSelfRef.new_CDB = vlSelfRef.shift_out;
        vlSelfRef.yummi_in_bus = 0x20U;
    } else if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 3U))) {
        vlSelfRef.new_CDB = vlSelfRef.div_out;
        vlSelfRef.yummi_in_bus = 8U;
    } else if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 2U))) {
        vlSelfRef.new_CDB = vlSelfRef.mult_out;
        vlSelfRef.yummi_in_bus = 4U;
    } else if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 1U))) {
        vlSelfRef.new_CDB = vlSelfRef.adder_1_out;
        vlSelfRef.yummi_in_bus = 2U;
    } else if ((1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.valid_out_bus), 0U))) {
        vlSelfRef.new_CDB = vlSelfRef.adder_0_out;
        vlSelfRef.yummi_in_bus = 1U;
    } else {
        VL_ASSIGNSEL_QQ(38, 37, 1U, vlSelfRef.new_CDB, 0ULL);
        vlSelfRef.yummi_in_bus = 0U;
    }
}

VL_ATTR_COLD void Vcore_cdb_scheduler___ctor_var_reset(Vcore_cdb_scheduler* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_cdb_scheduler___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->valid_out_bus = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1543552888638175929ull);
    vlSelf->adder_0_out = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 12374308787588016583ull);
    vlSelf->adder_1_out = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 14467463255502363008ull);
    vlSelf->mult_out = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 4464085429319171562ull);
    vlSelf->div_out = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 16209886968671507776ull);
    vlSelf->mem_out = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 16908800944026908198ull);
    vlSelf->shift_out = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 6255183185321142622ull);
    vlSelf->new_CDB = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 9209641259306455942ull);
    vlSelf->yummi_in_bus = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3006221001710886709ull);
}
