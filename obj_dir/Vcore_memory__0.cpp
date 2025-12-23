// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_memory___ico_sequent__TOP__core__data_memory__0(Vcore_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_memory___ico_sequent__TOP__core__data_memory__0\n"); );
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

void Vcore_memory___ico_sequent__TOP__core__data_memory__1(Vcore_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_memory___ico_sequent__TOP__core__data_memory__1\n"); );
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

void Vcore_memory___nba_sequent__TOP__core__data_memory__0(Vcore_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_memory___nba_sequent__TOP__core__data_memory__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__mem_result_reg = vlSelfRef.mem_result_reg;
    vlSelfRef.__Vdly__mem_rob_entry_reg = vlSelfRef.mem_rob_entry_reg;
    vlSelfRef.__Vdly__mem_valid_reg = vlSelfRef.mem_valid_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__mem_result_reg = 0U;
        vlSelfRef.__Vdly__mem_rob_entry_reg = 0U;
        vlSelfRef.__Vdly__mem_valid_reg = 0U;
    } else if (vlSelfRef.read_enable) {
        vlSelfRef.__Vdly__mem_result_reg = ((2U == 
                                             (7U & 
                                              VL_SEL_IWII(79, vlSelfRef.mem_in, 1U, 3)))
                                             ? ((1U 
                                                 & VL_BITSEL_IWII(79, vlSelfRef.mem_in, 0U))
                                                 ? 
                                                VL_CONCAT_III(32,16,16, 
                                                              (0x0000ffffU 
                                                               & VL_REPLICATE_IOI(1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.read_data, 0x0fU)), 0x00000010U)), 
                                                              (0x0000ffffU 
                                                               & VL_SEL_IIII(32, vlSelfRef.read_data, 0U, 16)))
                                                 : 
                                                VL_EXTEND_II(32,16, 
                                                             (0x0000ffffU 
                                                              & VL_SEL_IIII(32, vlSelfRef.read_data, 0U, 16))))
                                             : ((1U 
                                                 == 
                                                 (7U 
                                                  & VL_SEL_IWII(79, vlSelfRef.mem_in, 1U, 3)))
                                                 ? 
                                                ((1U 
                                                  & VL_BITSEL_IWII(79, vlSelfRef.mem_in, 0U))
                                                  ? 
                                                 VL_CONCAT_III(32,24,8, 
                                                               (0x00ffffffU 
                                                                & VL_REPLICATE_IOI(1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.read_data, 7U)), 0x00000018U)), 
                                                               (0x000000ffU 
                                                                & VL_SEL_IIII(32, vlSelfRef.read_data, 0U, 8)))
                                                  : 
                                                 VL_EXTEND_II(32,8, 
                                                              (0x000000ffU 
                                                               & VL_SEL_IIII(32, vlSelfRef.read_data, 0U, 8))))
                                                 : vlSelfRef.read_data));
        vlSelfRef.__Vdly__mem_rob_entry_reg = (0x0000000fU 
                                               & VL_SEL_IWII(79, vlSelfRef.mem_in, 9U, 4));
        vlSelfRef.__Vdly__mem_valid_reg = 1U;
    } else if (vlSelfRef.yummy_in) {
        vlSelfRef.__Vdly__mem_valid_reg = 0U;
    }
    vlSelfRef.mem_result_reg = vlSelfRef.__Vdly__mem_result_reg;
    vlSelfRef.mem_rob_entry_reg = vlSelfRef.__Vdly__mem_rob_entry_reg;
    vlSelfRef.mem_valid_reg = vlSelfRef.__Vdly__mem_valid_reg;
    VL_ASSIGNSEL_QQ(38, 36, 2U, vlSelfRef.mem_read_out, 
                    VL_CONCAT_QII(36,4,32, (IData)(vlSelfRef.mem_rob_entry_reg), vlSelfRef.mem_result_reg));
    vlSelfRef.valid_out = vlSelfRef.mem_valid_reg;
}

void Vcore_memory___nba_comb__TOP__core__data_memory__0(Vcore_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_memory___nba_comb__TOP__core__data_memory__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.write_enable = (((IData)(vlSelfRef.ROB_head_store) 
                               & (IData)(vlSelfRef.head_ready)) 
                              & (~ (IData)(vlSelfRef.empty)));
    vlSymsp->TOP__core__data_memory__the_mem.write_enable 
        = vlSelfRef.write_enable;
    vlSelfRef.rd_en_rob = vlSelfRef.write_enable;
}

void Vcore_memory___nba_sequent__TOP__core__data_memory__1(Vcore_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_memory___nba_sequent__TOP__core__data_memory__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__the_mem__write_data = VL_SEL_IWII(79, vlSelfRef.mem_in, 0x0000000dU, 32);
    vlSelfRef.__Vcellinp__the_mem__address = VL_SEL_IWII(79, vlSelfRef.mem_in, 0x0000002dU, 32);
    vlSelfRef.__Vcellinp__the_mem__xfer_size = VL_EXTEND_II(4,3, 
                                                            (7U 
                                                             & VL_SEL_IWII(79, vlSelfRef.mem_in, 1U, 3)));
    vlSymsp->TOP__core__data_memory__the_mem.write_data 
        = vlSelfRef.__Vcellinp__the_mem__write_data;
    vlSymsp->TOP__core__data_memory__the_mem.address 
        = vlSelfRef.__Vcellinp__the_mem__address;
    vlSymsp->TOP__core__data_memory__the_mem.xfer_size 
        = vlSelfRef.__Vcellinp__the_mem__xfer_size;
}

void Vcore_memory___nba_comb__TOP__core__data_memory__1(Vcore_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_memory___nba_comb__TOP__core__data_memory__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.read_enable = ((((IData)(vlSelfRef.head_load) 
                               & (IData)(vlSelfRef.head_ready)) 
                              & (~ (IData)(vlSelfRef.empty))) 
                             & (~ (IData)(vlSelfRef.mem_valid_reg)));
    vlSymsp->TOP__core__data_memory__the_mem.read_enable 
        = vlSelfRef.read_enable;
}

void Vcore_memory___nba_comb__TOP__core__data_memory__2(Vcore_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_memory___nba_comb__TOP__core__data_memory__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rd_en = ((IData)(vlSelfRef.read_enable) 
                       | (IData)(vlSelfRef.write_enable));
}

void Vcore_memory___nba_comb__TOP__core__data_memory__3(Vcore_memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcore_memory___nba_comb__TOP__core__data_memory__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.read_data = vlSymsp->TOP__core__data_memory__the_mem.read_data;
}
