// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_pc___stl_sequent__TOP__core__fetch_stage__program_counter__0(Vcore_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_pc___stl_sequent__TOP__core__fetch_stage__program_counter__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_stage__program_counter__inst.address 
        = vlSelfRef.pc;
    vlSymsp->TOP__core__fetch_stage__program_counter__inst.clk 
        = vlSelfRef.clk;
}

VL_ATTR_COLD void Vcore_pc___stl_sequent__TOP__core__fetch_stage__program_counter__1(Vcore_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_pc___stl_sequent__TOP__core__fetch_stage__program_counter__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.read_exception = vlSymsp->TOP__core__fetch_stage__program_counter__inst.exception;
    vlSelfRef.mcause = vlSymsp->TOP__core__fetch_stage__program_counter__inst.mcause;
    vlSelfRef.instruction = vlSymsp->TOP__core__fetch_stage__program_counter__inst.instruction;
}

VL_ATTR_COLD void Vcore_pc___stl_comb__TOP__core__fetch_stage__program_counter__0(Vcore_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_pc___stl_comb__TOP__core__fetch_stage__program_counter__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.new_pc = (((IData)(vlSelfRef.stall) & 
                         (~ (IData)(vlSelfRef.mispredicted)))
                         ? vlSelfRef.pc : vlSelfRef.pc_update);
}

VL_ATTR_COLD void Vcore_pc___ctor_var_reset(Vcore_pc* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcore_pc___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8876431511369994264ull);
    vlSelf->pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211327832146562899ull);
    vlSelf->read_exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1977629851525660436ull);
    vlSelf->mcause = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16155705988360301293ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7179230919112499263ull);
    vlSelf->mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18312463477978689879ull);
    vlSelf->pc_update = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16351754468963950880ull);
    vlSelf->mtvec_ReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5364263975921930868ull);
    vlSelf->mepc_ReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17906630443429346129ull);
    vlSelf->exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 765130616356482916ull);
    vlSelf->mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8098803689761564963ull);
    vlSelf->new_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2091841482614648415ull);
    vlSelf->__Vdly__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11429183334564586508ull);
}
