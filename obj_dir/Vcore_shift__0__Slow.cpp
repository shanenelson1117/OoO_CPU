// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_shift___eval_initial__TOP__core__shift_fu(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___eval_initial__TOP__core__shift_fu\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_QI(38, 2, 0U, vlSelfRef.out, 0U);
}

VL_ATTR_COLD void Vcore_shift___stl_sequent__TOP__core__shift_fu__0(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___stl_sequent__TOP__core__shift_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__shift_fu__shift_dp.ALUop_reg 
        = vlSelfRef.ALUop_reg;
    vlSelfRef.P = vlSymsp->TOP__core__shift_fu__shift_dp.P;
    VL_ASSIGNSEL_QI(38, 4, 0x00000022U, vlSelfRef.out, vlSelfRef.curr_rob);
    vlSymsp->TOP__core__shift_fu__shift_cu.P = vlSelfRef.P;
}

VL_ATTR_COLD void Vcore_shift___stl_sequent__TOP__core__shift_fu__1(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___stl_sequent__TOP__core__shift_fu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.shiftregs = vlSymsp->TOP__core__shift_fu__shift_cu.shiftregs;
    vlSelfRef.valid_out = vlSymsp->TOP__core__shift_fu__shift_cu.valid_out;
    vlSelfRef.ready = vlSymsp->TOP__core__shift_fu__shift_cu.ready;
    vlSymsp->TOP__core__shift_fu__shift_dp.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__shift_fu__shift_cu.clk = vlSelfRef.clk;
    vlSelfRef.output_inter = vlSymsp->TOP__core__shift_fu__shift_dp.output_inter;
    vlSymsp->TOP__core__shift_fu__shift_dp.shiftregs 
        = vlSelfRef.shiftregs;
    vlSelfRef.result = vlSelfRef.output_inter;
    VL_ASSIGNSEL_QI(38, 32, 2U, vlSelfRef.out, vlSelfRef.result);
}

VL_ATTR_COLD void Vcore_shift___stl_sequent__TOP__core__shift_fu__2(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___stl_sequent__TOP__core__shift_fu__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__shift_fu__shift_cu.yumi_in 
        = vlSelfRef.yumi_in;
    vlSymsp->TOP__core__shift_fu__shift_cu.valid_in 
        = vlSelfRef.valid_in;
    vlSelfRef.shifter = vlSelfRef.B;
    vlSelfRef.shifted = vlSelfRef.A;
    vlSymsp->TOP__core__shift_fu__shift_dp.shifter 
        = vlSelfRef.shifter;
    vlSymsp->TOP__core__shift_fu__shift_dp.shifted 
        = vlSelfRef.shifted;
}

VL_ATTR_COLD void Vcore_shift___stl_sequent__TOP__core__shift_fu__3(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___stl_sequent__TOP__core__shift_fu__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = vlSymsp->TOP__core__shift_fu__shift_cu.loadregs;
    vlSymsp->TOP__core__shift_fu__shift_dp.loadregs 
        = vlSelfRef.loadregs;
}

VL_ATTR_COLD void Vcore_shift___stl_comb__TOP__core__shift_fu__0(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___stl_comb__TOP__core__shift_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__shift_fu__shift_cu.reset = vlSelfRef.reset;
}

VL_ATTR_COLD void Vcore_shift___ctor_var_reset(Vcore_shift* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_shift___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3969090544990846983ull);
    vlSelf->B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 149303876845869574ull);
    vlSelf->rs_rob_entry = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9763797606826813157ull);
    vlSelf->ALUop = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10972201474921426583ull);
    vlSelf->valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16540271516330450727ull);
    vlSelf->yumi_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4822011186292556654ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8744939437868816662ull);
    vlSelf->ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 898948264233693212ull);
    vlSelf->out = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 7519490245117619040ull);
    vlSelf->shifted = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10419509789377397310ull);
    vlSelf->shifter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14187368125885564494ull);
    vlSelf->result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16664408842984530663ull);
    vlSelf->output_inter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10650794221904659284ull);
    vlSelf->loadregs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13881990414504507917ull);
    vlSelf->shiftregs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17384500470360218180ull);
    vlSelf->curr_rob = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6610471750986501630ull);
    vlSelf->ALUop_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14427286620722915864ull);
    vlSelf->P = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8235454673289795724ull);
    vlSelf->__Vdly__curr_rob = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16000938257677394406ull);
    vlSelf->__Vdly__ALUop_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10965827418902732156ull);
}
