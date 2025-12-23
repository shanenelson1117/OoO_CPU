// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_datapath___stl_sequent__TOP__core__shift_fu__shift_dp__0(Vcore_datapath* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_datapath___stl_sequent__TOP__core__shift_fu__shift_dp__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.output_inter = vlSelfRef.A;
}

VL_ATTR_COLD void Vcore_datapath___ctor_var_reset(Vcore_datapath* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_datapath___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->output_inter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10650794221904659284ull);
    vlSelf->P = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8235454673289795724ull);
    vlSelf->shifter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14187368125885564494ull);
    vlSelf->shifted = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10419509789377397310ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->loadregs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13881990414504507917ull);
    vlSelf->shiftregs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17384500470360218180ull);
    vlSelf->ALUop_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14427286620722915864ull);
    vlSelf->A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3969090544990846983ull);
    vlSelf->__Vdly__A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 360152082513475535ull);
    vlSelf->__Vdly__P = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14386235172382505627ull);
}
