// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_hold___stl_sequent__TOP__core__ins_hold__0(Vcore_hold* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_hold___stl_sequent__TOP__core__ins_hold__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pc_pipe_stall = vlSelfRef.ps;
}

VL_ATTR_COLD void Vcore_hold___stl_sequent__TOP__core__ins_hold__1(Vcore_hold* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_hold___stl_sequent__TOP__core__ins_hold__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_COND_WIWW(112, vlSelfRef.hold_out, (IData)(vlSelfRef.ps), vlSelfRef.instr_hold, vlSelfRef.pipe_out);
    vlSelfRef.rs1 = (0x0000001fU & VL_SEL_IWII(112, vlSelfRef.hold_out, 0U, 5));
}

VL_ATTR_COLD void Vcore_hold___stl_sequent__TOP__core__ins_hold__2(Vcore_hold* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_hold___stl_sequent__TOP__core__ins_hold__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ns = vlSelfRef.ps;
    if (vlSelfRef.ps) {
        if ((1U & (~ (IData)(vlSelfRef.stall)))) {
            vlSelfRef.ns = 0U;
        }
    } else if (vlSelfRef.stall) {
        vlSelfRef.ns = 1U;
    }
}

VL_ATTR_COLD void Vcore_hold___ctor_var_reset(Vcore_hold* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_hold___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->pipe_out, __VscopeHash, 18254688317797318538ull);
    vlSelf->stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7179230919112499263ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->hold_out, __VscopeHash, 6231166209727429881ull);
    vlSelf->pc_pipe_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8130299630537667960ull);
    vlSelf->rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10211807078052224816ull);
    vlSelf->rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 392999376545494891ull);
    vlSelf->ps = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7100011031478227194ull);
    vlSelf->ns = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8319592636408450617ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->instr_hold, __VscopeHash, 14711421977894843300ull);
    vlSelf->__Vdly__ps = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10599617119086246696ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__Vdly__instr_hold, __VscopeHash, 10017389596146059921ull);
}
