// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_divide___eval_initial__TOP__core__div_fu(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___eval_initial__TOP__core__div_fu\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_QI(38, 2, 0U, vlSelfRef.out, 0U);
}

VL_ATTR_COLD void Vcore_divide___stl_sequent__TOP__core__div_fu__0(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___stl_sequent__TOP__core__div_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__div_fu__divide_dp.end_msb = vlSelfRef.end_msb;
    vlSymsp->TOP__core__div_fu__divide_dp.sor_msb = vlSelfRef.sor_msb;
    vlSymsp->TOP__core__div_fu__divide_cu.div = vlSelfRef.div;
    vlSelfRef.P = vlSymsp->TOP__core__div_fu__divide_dp.P;
    VL_ASSIGNSEL_QI(38, 4, 0x00000022U, vlSelfRef.out, vlSelfRef.curr_rob);
    vlSymsp->TOP__core__div_fu__divide_cu.P = vlSelfRef.P;
}

VL_ATTR_COLD void Vcore_divide___stl_sequent__TOP__core__div_fu__1(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___stl_sequent__TOP__core__div_fu__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.quotient = vlSymsp->TOP__core__div_fu__divide_dp.quotient;
    vlSelfRef.remainder = vlSymsp->TOP__core__div_fu__divide_dp.remainder;
    vlSelfRef.pass1 = vlSymsp->TOP__core__div_fu__divide_cu.pass1;
    vlSelfRef.pass2 = vlSymsp->TOP__core__div_fu__divide_cu.pass2;
    vlSelfRef.signadj = vlSymsp->TOP__core__div_fu__divide_cu.signadj;
    vlSelfRef.valid_out = vlSymsp->TOP__core__div_fu__divide_cu.valid_out;
    vlSelfRef.ready = vlSymsp->TOP__core__div_fu__divide_cu.ready;
    vlSymsp->TOP__core__div_fu__divide_dp.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__div_fu__divide_cu.clk = vlSelfRef.clk;
    vlSelfRef.result = ((((IData)(vlSelfRef.div) & 
                          (~ (IData)(vlSelfRef.a_lt_b_reg))) 
                         | ((~ (IData)(vlSelfRef.div)) 
                            & (IData)(vlSelfRef.a_lt_b_reg)))
                         ? vlSelfRef.quotient : vlSelfRef.remainder);
    vlSymsp->TOP__core__div_fu__divide_dp.pass1 = vlSelfRef.pass1;
    vlSymsp->TOP__core__div_fu__divide_dp.pass2 = vlSelfRef.pass2;
    vlSymsp->TOP__core__div_fu__divide_dp.signadj = vlSelfRef.signadj;
    VL_ASSIGNSEL_QI(38, 32, 2U, vlSelfRef.out, vlSelfRef.result);
}

VL_ATTR_COLD void Vcore_divide___stl_sequent__TOP__core__div_fu__2(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___stl_sequent__TOP__core__div_fu__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__div_fu__divide_cu.yumi_in = vlSelfRef.yumi_in;
    vlSymsp->TOP__core__div_fu__divide_cu.valid_in 
        = vlSelfRef.valid_in;
    vlSelfRef.abs_sor = ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.ALUop), 0U) 
                                & VL_BITSEL_IIII(32, vlSelfRef.divisor, 0x1fU)))
                          ? ((IData)(1U) + (~ vlSelfRef.divisor))
                          : vlSelfRef.divisor);
    vlSelfRef.abs_end = ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelfRef.ALUop), 0U) 
                                & VL_BITSEL_IIII(32, vlSelfRef.dividend, 0x1fU)))
                          ? ((IData)(1U) + (~ vlSelfRef.dividend))
                          : vlSelfRef.dividend);
    vlSymsp->TOP__core__div_fu__divide_dp.abs_sor = vlSelfRef.abs_sor;
    vlSymsp->TOP__core__div_fu__divide_dp.abs_end = vlSelfRef.abs_end;
    vlSelfRef.a_lt_b = (vlSelfRef.abs_sor > vlSelfRef.abs_end);
    vlSymsp->TOP__core__div_fu__divide_cu.a_lt_b = vlSelfRef.a_lt_b;
}

VL_ATTR_COLD void Vcore_divide___stl_sequent__TOP__core__div_fu__3(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___stl_sequent__TOP__core__div_fu__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.loadregs = vlSymsp->TOP__core__div_fu__divide_cu.loadregs;
    vlSymsp->TOP__core__div_fu__divide_dp.loadregs 
        = vlSelfRef.loadregs;
}

VL_ATTR_COLD void Vcore_divide___stl_comb__TOP__core__div_fu__0(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___stl_comb__TOP__core__div_fu__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__div_fu__divide_cu.reset = vlSelfRef.reset;
}

VL_ATTR_COLD void Vcore_divide___ctor_var_reset(Vcore_divide* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_divide___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16540271516330450727ull);
    vlSelf->yumi_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4822011186292556654ull);
    vlSelf->rs_rob_entry = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9763797606826813157ull);
    vlSelf->ALUop = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10972201474921426583ull);
    vlSelf->valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8744939437868816662ull);
    vlSelf->ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 898948264233693212ull);
    vlSelf->dividend = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9925771335595998127ull);
    vlSelf->divisor = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6342405591792587499ull);
    vlSelf->out = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 7519490245117619040ull);
    vlSelf->a_lt_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11945532711929734261ull);
    vlSelf->loadregs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13881990414504507917ull);
    vlSelf->pass1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3972897820387345291ull);
    vlSelf->pass2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2282646254628436161ull);
    vlSelf->signadj = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11978460928719378633ull);
    vlSelf->div = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3877574633033219427ull);
    vlSelf->a_lt_b_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3723898208536648674ull);
    vlSelf->P = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8235454673289795724ull);
    vlSelf->quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11798559827265539290ull);
    vlSelf->remainder = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9144005291141361444ull);
    vlSelf->result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16664408842984530663ull);
    vlSelf->curr_rob = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6610471750986501630ull);
    vlSelf->sor_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15354797427111989129ull);
    vlSelf->end_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9607316106151372444ull);
    vlSelf->abs_sor = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10161545239073590127ull);
    vlSelf->abs_end = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9697081057044708806ull);
    vlSelf->__Vdly__curr_rob = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16000938257677394406ull);
    vlSelf->__Vdly__div = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3812214668264673889ull);
    vlSelf->__Vdly__sor_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1992651176044067290ull);
    vlSelf->__Vdly__end_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3267166831046725582ull);
    vlSelf->__Vdly__a_lt_b_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12086456881882850746ull);
}
