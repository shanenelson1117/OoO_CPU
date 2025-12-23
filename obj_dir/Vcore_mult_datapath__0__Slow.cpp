// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_mult_datapath___stl_sequent__TOP__core__mult_fu__multiply_dp__0(Vcore_mult_datapath* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_mult_datapath___stl_sequent__TOP__core__mult_fu__multiply_dp__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.product_inter = VL_CONCAT_QII(64,32,32, vlSelfRef.A, vlSelfRef.Q);
}

VL_ATTR_COLD void Vcore_mult_datapath___ctor_var_reset(Vcore_mult_datapath* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcore_mult_datapath___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->product_inter = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15937762519269465245ull);
    vlSelf->P = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8235454673289795724ull);
    vlSelf->multiplier = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10029165460174297562ull);
    vlSelf->multiplicand = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1216806911055910198ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->loadregs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13881990414504507917ull);
    vlSelf->shiftregs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17384500470360218180ull);
    vlSelf->addregs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1562200488595521135ull);
    vlSelf->decr_P = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7566653787395144752ull);
    vlSelf->Q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13532830657779382464ull);
    vlSelf->A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3969090544990846983ull);
    vlSelf->B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 149303876845869574ull);
    vlSelf->Q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17714545831559622561ull);
    vlSelf->__Vdly__A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 360152082513475535ull);
    vlSelf->__Vdly__Q1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9046898146684485430ull);
    vlSelf->__Vdly__P = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14386235172382505627ull);
    vlSelf->__Vdly__B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5830281796712847197ull);
    vlSelf->__Vdly__Q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7695084684598576365ull);
}
