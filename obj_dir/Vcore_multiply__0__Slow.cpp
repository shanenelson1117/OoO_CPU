// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_multiply___eval_initial__TOP__core__mult_fu(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___eval_initial__TOP__core__mult_fu\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_QI(38, 2, 0U, vlSelfRef.out, 0U);
}

VL_ATTR_COLD void Vcore_multiply___stl_sequent__TOP__core__mult_fu__0(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___stl_sequent__TOP__core__mult_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.P = vlSymsp->TOP__core__mult_fu__multiply_dp.P;
    VL_ASSIGNSEL_QI(38, 4, 0x00000022U, vlSelfRef.out, vlSelfRef.curr_rob);
    vlSelfRef.shiftregs = vlSymsp->TOP__core__mult_fu__multiply_cu.shiftregs;
    vlSelfRef.addregs = vlSymsp->TOP__core__mult_fu__multiply_cu.addregs;
    vlSelfRef.decr_P = vlSymsp->TOP__core__mult_fu__multiply_cu.decr_P;
    vlSelfRef.valid_out = vlSymsp->TOP__core__mult_fu__multiply_cu.valid_out;
    vlSelfRef.ready = vlSymsp->TOP__core__mult_fu__multiply_cu.ready;
    vlSymsp->TOP__core__mult_fu__multiply_cu.P = vlSelfRef.P;
    vlSymsp->TOP__core__mult_fu__multiply_dp.shiftregs 
        = vlSelfRef.shiftregs;
    vlSymsp->TOP__core__mult_fu__multiply_dp.addregs 
        = vlSelfRef.addregs;
    vlSymsp->TOP__core__mult_fu__multiply_dp.decr_P 
        = vlSelfRef.decr_P;
}

VL_ATTR_COLD void Vcore_multiply___stl_sequent__TOP__core__mult_fu__1(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___stl_sequent__TOP__core__mult_fu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__mult_fu__multiply_dp.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__mult_fu__multiply_cu.clk = vlSelfRef.clk;
    vlSelfRef.product_inter = vlSymsp->TOP__core__mult_fu__multiply_dp.product_inter;
    vlSelfRef.result = ((IData)(vlSelfRef.mul_h) ? 
                        VL_SEL_IQII(64, vlSelfRef.product_inter, 0x20U, 32)
                         : VL_SEL_IQII(64, vlSelfRef.product_inter, 0U, 32));
    VL_ASSIGNSEL_QI(38, 32, 2U, vlSelfRef.out, vlSelfRef.result);
}

VL_ATTR_COLD void Vcore_multiply___stl_sequent__TOP__core__mult_fu__2(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___stl_sequent__TOP__core__mult_fu__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__mult_fu__multiply_cu.yumi_in 
        = vlSelfRef.yumi_in;
    vlSymsp->TOP__core__mult_fu__multiply_cu.valid_in 
        = vlSelfRef.valid_in;
    vlSelfRef.multiplicand = vlSelfRef.B;
    vlSelfRef.multiplier = vlSelfRef.A;
    vlSymsp->TOP__core__mult_fu__multiply_dp.multiplicand 
        = vlSelfRef.multiplicand;
    vlSymsp->TOP__core__mult_fu__multiply_dp.multiplier 
        = vlSelfRef.multiplier;
}

VL_ATTR_COLD void Vcore_multiply___stl_sequent__TOP__core__mult_fu__3(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___stl_sequent__TOP__core__mult_fu__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = vlSymsp->TOP__core__mult_fu__multiply_cu.loadregs;
    vlSymsp->TOP__core__mult_fu__multiply_dp.loadregs 
        = vlSelfRef.loadregs;
}

VL_ATTR_COLD void Vcore_multiply___stl_comb__TOP__core__mult_fu__0(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___stl_comb__TOP__core__mult_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__mult_fu__multiply_cu.reset 
        = vlSelfRef.reset;
}

VL_ATTR_COLD void Vcore_multiply___ctor_var_reset(Vcore_multiply* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_multiply___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3969090544990846983ull);
    vlSelf->B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 149303876845869574ull);
    vlSelf->rs_rob_entry = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9763797606826813157ull);
    vlSelf->valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16540271516330450727ull);
    vlSelf->yumi_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4822011186292556654ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->ALUop = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10972201474921426583ull);
    vlSelf->valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8744939437868816662ull);
    vlSelf->ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 898948264233693212ull);
    vlSelf->out = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 7519490245117619040ull);
    vlSelf->multiplier = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10029165460174297562ull);
    vlSelf->multiplicand = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1216806911055910198ull);
    vlSelf->P = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8235454673289795724ull);
    vlSelf->result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16664408842984530663ull);
    vlSelf->product_inter = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15937762519269465245ull);
    vlSelf->loadregs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13881990414504507917ull);
    vlSelf->shiftregs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17384500470360218180ull);
    vlSelf->addregs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1562200488595521135ull);
    vlSelf->decr_P = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7566653787395144752ull);
    vlSelf->mul_h = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 657022178933337105ull);
    vlSelf->curr_rob = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6610471750986501630ull);
    vlSelf->__Vdly__curr_rob = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16000938257677394406ull);
    vlSelf->__Vdly__mul_h = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9076488663188924799ull);
}
