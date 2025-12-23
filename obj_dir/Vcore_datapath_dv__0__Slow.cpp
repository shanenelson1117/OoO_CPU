// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_datapath_dv___stl_sequent__TOP__core__div_fu__divide_dp__0(Vcore_datapath_dv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_datapath_dv___stl_sequent__TOP__core__div_fu__divide_dp__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.temp = VL_CONCAT_QIQ(64,31,33, (0x7fffffffU 
                                              & VL_SEL_IIII(32, vlSelfRef.A, 0U, 31)), 
                                   VL_CONCAT_QII(33,32,1, vlSelfRef.Q, 0U));
    if ((1U & VL_BITSEL_IIII(32, vlSelfRef.A, 0x1eU))) {
        vlSelfRef.A_temp = (VL_SEL_IQII(64, vlSelfRef.temp, 0x20U, 32) 
                            + vlSelfRef.M);
        vlSelfRef.Q_temp = VL_CONCAT_III(32,31,1, (0x7fffffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.temp, 1U, 31)), 
                                         (1U & (~ VL_BITSEL_IIII(32, vlSelfRef.A_temp, 0x1fU))));
    } else {
        vlSelfRef.A_temp = (VL_SEL_IQII(64, vlSelfRef.temp, 0x20U, 32) 
                            - vlSelfRef.M);
        vlSelfRef.Q_temp = VL_CONCAT_III(32,31,1, (0x7fffffffU 
                                                   & VL_SEL_IQII(64, vlSelfRef.temp, 1U, 31)), 
                                         (1U & (~ VL_BITSEL_IIII(32, vlSelfRef.A_temp, 0x1fU))));
    }
    vlSelfRef.quotient = vlSelfRef.Q;
    vlSelfRef.remainder = vlSelfRef.A;
}

VL_ATTR_COLD void Vcore_datapath_dv___ctor_var_reset(Vcore_datapath_dv* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_datapath_dv___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->abs_sor = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10161545239073590127ull);
    vlSelf->abs_end = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9697081057044708806ull);
    vlSelf->quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11798559827265539290ull);
    vlSelf->P = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8235454673289795724ull);
    vlSelf->remainder = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9144005291141361444ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->loadregs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13881990414504507917ull);
    vlSelf->pass1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3972897820387345291ull);
    vlSelf->pass2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2282646254628436161ull);
    vlSelf->signadj = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11978460928719378633ull);
    vlSelf->sor_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15354797427111989129ull);
    vlSelf->end_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9607316106151372444ull);
    vlSelf->A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3969090544990846983ull);
    vlSelf->M = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10603054956214495369ull);
    vlSelf->Q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17714545831559622561ull);
    vlSelf->A_temp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3807087067111196097ull);
    vlSelf->Q_temp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5335734705881077676ull);
    vlSelf->temp = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7233838040978344170ull);
    vlSelf->__Vdly__A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 360152082513475535ull);
    vlSelf->__Vdly__P = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14386235172382505627ull);
    vlSelf->__Vdly__M = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7818676646084314224ull);
    vlSelf->__Vdly__Q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7695084684598576365ull);
}
