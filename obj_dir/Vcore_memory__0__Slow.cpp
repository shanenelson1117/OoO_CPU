// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_memory___eval_initial__TOP__core__data_memory(Vcore_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_memory___eval_initial__TOP__core__data_memory\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_QI(38, 2, 0U, vlSelfRef.mem_read_out, 0U);
}

VL_ATTR_COLD void Vcore_memory___stl_sequent__TOP__core__data_memory__0(Vcore_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_memory___stl_sequent__TOP__core__data_memory__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGNSEL_QQ(38, 36, 2U, vlSelfRef.mem_read_out, 
                    VL_CONCAT_QII(36,4,32, (IData)(vlSelfRef.mem_rob_entry_reg), vlSelfRef.mem_result_reg));
    vlSelfRef.valid_out = vlSelfRef.mem_valid_reg;
    vlSymsp->TOP__core__data_memory__the_mem.clk = vlSelfRef.clk;
    vlSelfRef.__Vcellinp__the_mem__write_data = VL_SEL_IWII(79, vlSelfRef.mem_in, 0x0000000dU, 32);
    vlSelfRef.__Vcellinp__the_mem__address = VL_SEL_IWII(79, vlSelfRef.mem_in, 0x0000002dU, 32);
    vlSelfRef.__Vcellinp__the_mem__xfer_size = VL_EXTEND_II(4,3, 
                                                            (7U 
                                                             & VL_SEL_IWII(79, vlSelfRef.mem_in, 1U, 3)));
    vlSelfRef.read_enable = ((((IData)(vlSelfRef.head_load) 
                               & (IData)(vlSelfRef.head_ready)) 
                              & (~ (IData)(vlSelfRef.empty))) 
                             & (~ (IData)(vlSelfRef.mem_valid_reg)));
    vlSymsp->TOP__core__data_memory__the_mem.write_data 
        = vlSelfRef.__Vcellinp__the_mem__write_data;
    vlSymsp->TOP__core__data_memory__the_mem.address 
        = vlSelfRef.__Vcellinp__the_mem__address;
    vlSymsp->TOP__core__data_memory__the_mem.xfer_size 
        = vlSelfRef.__Vcellinp__the_mem__xfer_size;
    vlSymsp->TOP__core__data_memory__the_mem.read_enable 
        = vlSelfRef.read_enable;
}

VL_ATTR_COLD void Vcore_memory___stl_sequent__TOP__core__data_memory__1(Vcore_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_memory___stl_sequent__TOP__core__data_memory__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.write_enable = (((IData)(vlSelfRef.ROB_head_store) 
                               & (IData)(vlSelfRef.head_ready)) 
                              & (~ (IData)(vlSelfRef.empty)));
    vlSelfRef.read_data = vlSymsp->TOP__core__data_memory__the_mem.read_data;
    vlSymsp->TOP__core__data_memory__the_mem.write_enable 
        = vlSelfRef.write_enable;
    vlSelfRef.rd_en = ((IData)(vlSelfRef.read_enable) 
                       | (IData)(vlSelfRef.write_enable));
    vlSelfRef.rd_en_rob = vlSelfRef.write_enable;
}

VL_ATTR_COLD void Vcore_memory___ctor_var_reset(Vcore_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_memory___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->ROB_head_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17200896078419622888ull);
    vlSelf->head_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2071667241211036398ull);
    vlSelf->head_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17364623833263064885ull);
    vlSelf->yummy_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3911004631806781389ull);
    vlSelf->empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3016723684638320966ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->mem_in, __VscopeHash, 18284579671078905405ull);
    vlSelf->mem_read_out = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 3050367696066817906ull);
    vlSelf->rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3814484142505630662ull);
    vlSelf->rd_en_rob = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13288154225850418120ull);
    vlSelf->valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8744939437868816662ull);
    vlSelf->write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3448544431963303041ull);
    vlSelf->read_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6662707938888342393ull);
    vlSelf->mem_result_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2678474743191692408ull);
    vlSelf->read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13838377541112373472ull);
    vlSelf->mem_rob_entry_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4534594936133983507ull);
    vlSelf->mem_valid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17457015393393219696ull);
    vlSelf->__Vcellinp__the_mem__xfer_size = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8827541781229941909ull);
    vlSelf->__Vcellinp__the_mem__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10169747076465347883ull);
    vlSelf->__Vcellinp__the_mem__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3524190300018234317ull);
    vlSelf->__Vdly__mem_result_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10494488719815150073ull);
    vlSelf->__Vdly__mem_rob_entry_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18325336811760977643ull);
    vlSelf->__Vdly__mem_valid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5698847499633110113ull);
}
