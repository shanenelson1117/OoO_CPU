// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_control___stl_sequent__TOP__core__shift_fu__shift_cu__0(Vcore_control* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_control___stl_sequent__TOP__core__shift_fu__shift_cu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.shiftregs = (2U == (IData)(vlSelfRef.ps));
    vlSelfRef.valid_out = (3U == (IData)(vlSelfRef.ps));
    vlSelfRef.ready = (0U == (IData)(vlSelfRef.ps));
}

VL_ATTR_COLD void Vcore_control___stl_sequent__TOP__core__shift_fu__shift_cu__1(Vcore_control* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_control___stl_sequent__TOP__core__shift_fu__shift_cu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = ((0U == (IData)(vlSelfRef.ps)) 
                          & (IData)(vlSelfRef.valid_in));
    vlSelfRef.ns = ((0U == (IData)(vlSelfRef.ps)) ? 
                    ((IData)(vlSelfRef.valid_in) ? 2U
                      : 0U) : ((2U == (IData)(vlSelfRef.ps))
                                ? ((1U == vlSelfRef.P)
                                    ? 3U : 2U) : ((3U 
                                                   == (IData)(vlSelfRef.ps))
                                                   ? 
                                                  ((IData)(vlSelfRef.yumi_in)
                                                    ? 0U
                                                    : 3U)
                                                   : 0U)));
}

VL_ATTR_COLD void Vcore_control___ctor_var_reset(Vcore_control* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_control___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16540271516330450727ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->yumi_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4822011186292556654ull);
    vlSelf->P = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8235454673289795724ull);
    vlSelf->loadregs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13881990414504507917ull);
    vlSelf->shiftregs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17384500470360218180ull);
    vlSelf->valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8744939437868816662ull);
    vlSelf->ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 898948264233693212ull);
    vlSelf->ps = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7100011031478227194ull);
    vlSelf->ns = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8319592636408450617ull);
    vlSelf->__Vdly__ps = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10599617119086246696ull);
}
