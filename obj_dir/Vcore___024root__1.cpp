// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

extern const VlWide<32>/*1023:0*/ Vcore__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<10>/*319:0*/ Vcore__ConstPool__CONST_hab76c978_0;

void Vcore___024root___nba_sequent__TOP__2(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_sequent__TOP__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ core__DOT__fetch_stage__DOT____VdfgExtracted_h5b55025d__0;
    core__DOT__fetch_stage__DOT____VdfgExtracted_h5b55025d__0 = 0;
    CData/*0:0*/ core__DOT__fetch_stage__DOT____VdfgRegularize_h7b9f36a4_0_0;
    core__DOT__fetch_stage__DOT____VdfgRegularize_h7b9f36a4_0_0 = 0;
    IData/*31:0*/ core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0;
    core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0 = 0;
    CData/*0:0*/ core__DOT__res_sched__DOT____VdfgExtracted_h018ff82f__0;
    core__DOT__res_sched__DOT____VdfgExtracted_h018ff82f__0 = 0;
    CData/*0:0*/ core__DOT__res_sched__DOT____VdfgExtracted_h1374f20a__0;
    core__DOT__res_sched__DOT____VdfgExtracted_h1374f20a__0 = 0;
    // Body
    if ((0x40000000U & vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A)) {
        vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A_temp 
            = ((IData)((vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__temp 
                        >> 0x20U)) + vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__M);
        vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__Q_temp 
            = (((IData)((vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__temp 
                         >> 1U)) << 1U) | (1U & (~ 
                                                 (vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A_temp 
                                                  >> 0x1fU))));
    } else {
        vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A_temp 
            = ((IData)((vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__temp 
                        >> 0x20U)) - vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__M);
        vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__Q_temp 
            = (((IData)((vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__temp 
                         >> 1U)) << 1U) | (1U & (~ 
                                                 (vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A_temp 
                                                  >> 0x1fU))));
    }
    vlSelfRef.core__DOT__cdb__DOT__valid_out_bus = 
        ((((3U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps)) 
           << 5U) | (((IData)(vlSelfRef.core__DOT__data_memory__DOT__mem_valid_reg) 
                      << 4U) | ((5U == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps)) 
                                << 3U))) | (((3U == (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps)) 
                                             << 2U) 
                                            | (((IData)(vlSelfRef.core__DOT____Vcellout__adder_fu_1__valid_out) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.core__DOT____Vcellout__adder_fu_0__valid_out))));
    vlSelfRef.core__DOT__ready_bus = ((((0U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps)) 
                                        << 4U) | ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps)) 
                                                   << 3U) 
                                                  | ((0U 
                                                      == (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps)) 
                                                     << 2U))) 
                                      | (((IData)(vlSelfRef.core__DOT____Vcellout__adder_fu_1__ready) 
                                          << 1U) | (IData)(vlSelfRef.core__DOT____Vcellout__adder_fu_0__ready)));
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[1U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[2U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[3U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[4U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[5U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[6U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[7U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[8U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[9U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
    vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
        = Vcore__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
    if (vlSelfRef.core__DOT__committed_is_branch) {
        vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[(0x0000001fU 
                                                                             & (((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                                                                ^ vlSelfRef.core__DOT__committed_pc) 
                                                                                >> 5U))] 
            = (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[
               (0x0000001fU & (((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                ^ vlSelfRef.core__DOT__committed_pc) 
                               >> 5U))] | ((IData)(1U) 
                                           << (0x0000001fU 
                                               & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                                  ^ vlSelfRef.core__DOT__committed_pc))));
        vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d 
            = (((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____VdfgRegularize_h17208b76_0_0) 
                << 1U) | (IData)(vlSelfRef.core__DOT__commit_result));
    } else {
        vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d 
            = vlSelfRef.core__DOT__fetch_stage__DOT__history;
    }
    vlSelfRef.core__DOT__data_memory__DOT__read_data = 0U;
    if (vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__read_enable) {
        vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i = 0U;
        while ((vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i 
                < (7U & (vlSelfRef.core__DOT__lsq_out[0U] 
                         >> 1U)))) {
            vlSelfRef.core__DOT__data_memory__DOT__read_data 
                = (((~ ((IData)(0x000000ffU) << (0x0000001fU 
                                                 & VL_SHIFTL_III(5,32,32, vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i, 3U)))) 
                    & vlSelfRef.core__DOT__data_memory__DOT__read_data) 
                   | (0x00000000ffffffffULL & (vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__mem
                                               [(0x00007fffU 
                                                 & (vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__aligned_address 
                                                    + vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i))] 
                                               << (0x0000001fU 
                                                   & VL_SHIFTL_III(5,32,32, vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i, 3U)))));
            vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i 
                = ((IData)(1U) + vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i);
        }
    }
    vlSelfRef.core__DOT__rob_read_enable = ((1U & (
                                                   (vlSelfRef.core__DOT__commit_unit__DOT__head[1U] 
                                                    >> 1U) 
                                                   & (~ (IData)(vlSelfRef.core__DOT__commit_unit__DOT__empty)))) 
                                            && ((0U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.core__DOT__commit_unit__DOT__head[1U] 
                                                     >> 2U))) 
                                                || ((1U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.core__DOT__commit_unit__DOT__head[1U] 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.core__DOT__commit_unit__DOT__rd_en_rob)
                                                     : 
                                                    ((1U 
                                                      & (~ 
                                                         vlSelfRef.core__DOT__commit_unit__DOT__head[1U])) 
                                                     || (IData)(vlSelfRef.core__DOT__commit_unit__DOT__jalrq_ready)))));
    core__DOT__fetch_stage__DOT____VdfgRegularize_h7b9f36a4_0_0 
        = ((1U == (0x0000001fU & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                  >> 0x0000000fU))) 
           | (5U == (0x0000001fU & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                    >> 0x0000000fU))));
    core__DOT__fetch_stage__DOT____VdfgExtracted_h5b55025d__0 
        = ((1U == (0x0000001fU & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                  >> 7U))) | (5U == 
                                              (0x0000001fU 
                                               & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                  >> 7U))));
    vlSelfRef.core__DOT__generate_new_pc__DOT____VdfgExtracted_h61815015__0 
        = (((- (IData)((vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                        >> 0x0000001fU))) << 0x0000000dU) 
           | ((((2U & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                       >> 0x0000001eU)) | (1U & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                 >> 7U))) 
               << 0x0000000bU) | ((0x000007e0U & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                  >> 0x00000014U)) 
                                  | (0x0000001eU & 
                                     (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                      >> 7U)))));
    vlSelfRef.core__DOT__generate_new_pc__DOT__pipe_taken 
        = (((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__pred_bus[
             (0x0000001fU & (((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                              ^ vlSelfRef.core__DOT__fetch_stage__DOT__pc) 
                             >> 5U))] >> (0x0000001fU 
                                          & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                             ^ vlSelfRef.core__DOT__fetch_stage__DOT__pc))) 
            & (0x63U == (0x0000007fU & vlSelfRef.core__DOT__fetch_stage__DOT__instruction))) 
           | (0x6fU == (0x0000007fU & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)));
    vlSelfRef.core__DOT__mispredicted = ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0) 
                                         | (IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1));
    if ((0x00000010U & (IData)(vlSelfRef.core__DOT__cdb__DOT__valid_out_bus))) {
        vlSelfRef.core__DOT__yumi_bus = 0x10U;
        vlSelfRef.core__DOT__CDB_out = (((QData)((IData)(vlSelfRef.core__DOT__data_memory__DOT__mem_rob_entry_reg)) 
                                         << 0x00000022U) 
                                        | ((QData)((IData)(vlSelfRef.core__DOT__data_memory__DOT__mem_result_reg)) 
                                           << 2U));
    } else if ((0x00000020U & (IData)(vlSelfRef.core__DOT__cdb__DOT__valid_out_bus))) {
        vlSelfRef.core__DOT__yumi_bus = 0x20U;
        vlSelfRef.core__DOT__CDB_out = (((QData)((IData)(vlSelfRef.core__DOT__shift_fu__DOT__curr_rob)) 
                                         << 0x00000022U) 
                                        | ((QData)((IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_dp__DOT__A)) 
                                           << 2U));
    } else if ((8U & (IData)(vlSelfRef.core__DOT__cdb__DOT__valid_out_bus))) {
        vlSelfRef.core__DOT__yumi_bus = 8U;
        vlSelfRef.core__DOT__CDB_out = (((QData)((IData)(vlSelfRef.core__DOT__div_fu__DOT__curr_rob)) 
                                         << 0x00000022U) 
                                        | ((QData)((IData)(
                                                           ((((~ (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b_reg)) 
                                                              & (IData)(vlSelfRef.core__DOT__div_fu__DOT__div)) 
                                                             | ((~ (IData)(vlSelfRef.core__DOT__div_fu__DOT__div)) 
                                                                & (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b_reg)))
                                                             ? vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__Q
                                                             : vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A))) 
                                           << 2U));
    } else if ((4U & (IData)(vlSelfRef.core__DOT__cdb__DOT__valid_out_bus))) {
        vlSelfRef.core__DOT__yumi_bus = 4U;
        vlSelfRef.core__DOT__CDB_out = (((QData)((IData)(vlSelfRef.core__DOT__mult_fu__DOT__curr_rob)) 
                                         << 0x00000022U) 
                                        | ((QData)((IData)(
                                                           ((IData)(vlSelfRef.core__DOT__mult_fu__DOT__mul_h)
                                                             ? vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__A
                                                             : vlSelfRef.core__DOT__mult_fu__DOT__Q))) 
                                           << 2U));
    } else if ((2U & (IData)(vlSelfRef.core__DOT__cdb__DOT__valid_out_bus))) {
        vlSelfRef.core__DOT__yumi_bus = 2U;
        vlSelfRef.core__DOT__CDB_out = vlSelfRef.core__DOT__out_1;
    } else if ((1U & (IData)(vlSelfRef.core__DOT__cdb__DOT__valid_out_bus))) {
        vlSelfRef.core__DOT__yumi_bus = 1U;
        vlSelfRef.core__DOT__CDB_out = vlSelfRef.core__DOT__out_0;
    } else {
        vlSelfRef.core__DOT__yumi_bus = 0U;
        vlSelfRef.core__DOT__CDB_out = (1ULL & vlSelfRef.core__DOT__CDB_out);
    }
    vlSelfRef.core__DOT__fu_bus[0U] = Vcore__ConstPool__CONST_hab76c978_0[0U];
    vlSelfRef.core__DOT__fu_bus[1U] = Vcore__ConstPool__CONST_hab76c978_0[1U];
    vlSelfRef.core__DOT__fu_bus[2U] = Vcore__ConstPool__CONST_hab76c978_0[2U];
    vlSelfRef.core__DOT__fu_bus[3U] = Vcore__ConstPool__CONST_hab76c978_0[3U];
    vlSelfRef.core__DOT__fu_bus[4U] = Vcore__ConstPool__CONST_hab76c978_0[4U];
    vlSelfRef.core__DOT__fu_bus[5U] = Vcore__ConstPool__CONST_hab76c978_0[5U];
    vlSelfRef.core__DOT__fu_bus[6U] = Vcore__ConstPool__CONST_hab76c978_0[6U];
    vlSelfRef.core__DOT__fu_bus[7U] = Vcore__ConstPool__CONST_hab76c978_0[7U];
    vlSelfRef.core__DOT__fu_bus[8U] = Vcore__ConstPool__CONST_hab76c978_0[8U];
    vlSelfRef.core__DOT__fu_bus[9U] = Vcore__ConstPool__CONST_hab76c978_0[9U];
    vlSelfRef.core__DOT__load = 0U;
    vlSelfRef.core__DOT__branch_type_bus = 0x12U;
    vlSelfRef.core__DOT__ROB_entry_bus = 0U;
    vlSelfRef.core__DOT__valid_in_bus = 0U;
    vlSelfRef.core__DOT__consumed_bus = 0U;
    if ((1U & (IData)(vlSelfRef.core__DOT__ready_bus))) {
        if ((1U & ((vlSelfRef.core__DOT__rs0_data[0U] 
                    >> 1U) & (~ (vlSelfRef.core__DOT__rs0_data[2U] 
                                 >> 9U))))) {
            vlSelfRef.core__DOT__fu_bus[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((2U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (1U & vlSelfRef.core__DOT__rs0_data[0U]));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((0x38U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (7U & (vlSelfRef.core__DOT__rs0_data[2U] 
                          >> 0x0000000aU)));
            vlSelfRef.core__DOT__consumed_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ffff0U 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000000fU 
                                                     & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                        >> 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ffff0U 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000000fU 
                                              & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                 >> 6U)));
        } else if ((1U & ((vlSelfRef.core__DOT__rs1_data[0U] 
                           >> 1U) & (~ (vlSelfRef.core__DOT__rs1_data[2U] 
                                        >> 9U))))) {
            vlSelfRef.core__DOT__fu_bus[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((2U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (1U & vlSelfRef.core__DOT__rs1_data[0U]));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((0x38U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (7U & (vlSelfRef.core__DOT__rs1_data[2U] 
                          >> 0x0000000aU)));
            vlSelfRef.core__DOT__consumed_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ffff0U 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000000fU 
                                                     & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                        >> 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ffff0U 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000000fU 
                                              & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                 >> 6U)));
        } else if ((1U & ((vlSelfRef.core__DOT__rs2_data[0U] 
                           >> 1U) & (~ (vlSelfRef.core__DOT__rs2_data[2U] 
                                        >> 9U))))) {
            vlSelfRef.core__DOT__fu_bus[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((2U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (1U & vlSelfRef.core__DOT__rs2_data[0U]));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((0x38U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (7U & (vlSelfRef.core__DOT__rs2_data[2U] 
                          >> 0x0000000aU)));
            vlSelfRef.core__DOT__consumed_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ffff0U 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000000fU 
                                                     & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                        >> 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ffff0U 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000000fU 
                                              & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                 >> 6U)));
        } else if ((1U & ((vlSelfRef.core__DOT__rs3_data[0U] 
                           >> 1U) & (~ (vlSelfRef.core__DOT__rs3_data[2U] 
                                        >> 9U))))) {
            vlSelfRef.core__DOT__fu_bus[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((2U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (1U & vlSelfRef.core__DOT__rs3_data[0U]));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((0x38U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (7U & (vlSelfRef.core__DOT__rs3_data[2U] 
                          >> 0x0000000aU)));
            vlSelfRef.core__DOT__consumed_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ffff0U 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000000fU 
                                                     & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                        >> 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ffff0U 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000000fU 
                                              & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                 >> 6U)));
        }
    }
    if ((2U & (IData)(vlSelfRef.core__DOT__ready_bus))) {
        if ((1U & (((vlSelfRef.core__DOT__rs3_data[0U] 
                     >> 1U) & (~ (vlSelfRef.core__DOT__rs3_data[2U] 
                                  >> 9U))) & (~ ((IData)(vlSelfRef.core__DOT__consumed_bus) 
                                                 >> 3U))))) {
            vlSelfRef.core__DOT__fu_bus[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((1U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (2U & (vlSelfRef.core__DOT__rs3_data[0U] 
                                                  << 1U)));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (0x00000038U & (vlSelfRef.core__DOT__rs3_data[2U] 
                                   >> 7U)));
            vlSelfRef.core__DOT__consumed_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000fff0fU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000000f0U 
                                                     & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                        << 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000fff0fU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000000f0U 
                                              & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                 >> 2U)));
        } else if ((1U & (((vlSelfRef.core__DOT__rs2_data[0U] 
                            >> 1U) & (~ (vlSelfRef.core__DOT__rs2_data[2U] 
                                         >> 9U))) & 
                          (~ ((IData)(vlSelfRef.core__DOT__consumed_bus) 
                              >> 2U))))) {
            vlSelfRef.core__DOT__fu_bus[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((1U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (2U & (vlSelfRef.core__DOT__rs2_data[0U] 
                                                  << 1U)));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (0x00000038U & (vlSelfRef.core__DOT__rs2_data[2U] 
                                   >> 7U)));
            vlSelfRef.core__DOT__consumed_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000fff0fU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000000f0U 
                                                     & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                        << 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000fff0fU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000000f0U 
                                              & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                 >> 2U)));
        } else if ((1U & (((vlSelfRef.core__DOT__rs1_data[0U] 
                            >> 1U) & (~ (vlSelfRef.core__DOT__rs1_data[2U] 
                                         >> 9U))) & 
                          (~ ((IData)(vlSelfRef.core__DOT__consumed_bus) 
                              >> 1U))))) {
            vlSelfRef.core__DOT__fu_bus[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((1U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (2U & (vlSelfRef.core__DOT__rs1_data[0U] 
                                                  << 1U)));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (0x00000038U & (vlSelfRef.core__DOT__rs1_data[2U] 
                                   >> 7U)));
            vlSelfRef.core__DOT__consumed_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000fff0fU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000000f0U 
                                                     & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                        << 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000fff0fU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000000f0U 
                                              & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                 >> 2U)));
        } else if ((1U & (((vlSelfRef.core__DOT__rs0_data[0U] 
                            >> 1U) & (~ (vlSelfRef.core__DOT__rs0_data[2U] 
                                         >> 9U))) & 
                          (~ (IData)(vlSelfRef.core__DOT__consumed_bus))))) {
            vlSelfRef.core__DOT__fu_bus[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__load = ((1U & (IData)(vlSelfRef.core__DOT__load)) 
                                         | (2U & (vlSelfRef.core__DOT__rs0_data[0U] 
                                                  << 1U)));
            vlSelfRef.core__DOT__branch_type_bus = 
                ((7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)) 
                 | (0x00000038U & (vlSelfRef.core__DOT__rs0_data[2U] 
                                   >> 7U)));
            vlSelfRef.core__DOT__consumed_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000fff0fU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000000f0U 
                                                     & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                        << 2U)));
            vlSelfRef.core__DOT__valid_in_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000fff0fU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000000f0U 
                                              & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                 >> 2U)));
        }
    }
    if ((4U & (IData)(vlSelfRef.core__DOT__ready_bus))) {
        if (((vlSelfRef.core__DOT__rs0_data[0U] >> 1U) 
             & ((0x0cU == (0x0000000fU & (vlSelfRef.core__DOT__rs0_data[2U] 
                                          >> 6U))) 
                | (0x0dU == (0x0000000fU & (vlSelfRef.core__DOT__rs0_data[2U] 
                                            >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ff0ffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x00000f00U 
                                                     & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                        << 6U)));
            vlSelfRef.core__DOT__valid_in_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ff0ffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x00000f00U 
                                              & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                 << 2U)));
        } else if (((vlSelfRef.core__DOT__rs1_data[0U] 
                     >> 1U) & ((0x0cU == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs1_data[2U] 
                                             >> 6U))) 
                               | (0x0dU == (0x0000000fU 
                                            & (vlSelfRef.core__DOT__rs1_data[2U] 
                                               >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ff0ffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x00000f00U 
                                                     & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                        << 6U)));
            vlSelfRef.core__DOT__valid_in_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ff0ffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x00000f00U 
                                              & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                 << 2U)));
        } else if (((vlSelfRef.core__DOT__rs2_data[0U] 
                     >> 1U) & ((0x0cU == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs2_data[2U] 
                                             >> 6U))) 
                               | (0x0dU == (0x0000000fU 
                                            & (vlSelfRef.core__DOT__rs2_data[2U] 
                                               >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ff0ffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x00000f00U 
                                                     & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                        << 6U)));
            vlSelfRef.core__DOT__valid_in_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ff0ffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x00000f00U 
                                              & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                 << 2U)));
        } else if (((vlSelfRef.core__DOT__rs3_data[0U] 
                     >> 1U) & ((0x0cU == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs3_data[2U] 
                                             >> 6U))) 
                               | (0x0dU == (0x0000000fU 
                                            & (vlSelfRef.core__DOT__rs3_data[2U] 
                                               >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000ff0ffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x00000f00U 
                                                     & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                        << 6U)));
            vlSelfRef.core__DOT__valid_in_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000ff0ffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x00000f00U 
                                              & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                 << 2U)));
        }
    }
    if ((8U & (IData)(vlSelfRef.core__DOT__ready_bus))) {
        if (((vlSelfRef.core__DOT__rs0_data[0U] >> 1U) 
             & ((0x0bU == (0x0000000fU & (vlSelfRef.core__DOT__rs0_data[2U] 
                                          >> 6U))) 
                | (0x0aU == (0x0000000fU & (vlSelfRef.core__DOT__rs0_data[2U] 
                                            >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000f0fffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000f000U 
                                                     & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                        << 0x0000000aU)));
            vlSelfRef.core__DOT__valid_in_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000f0fffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000f000U 
                                              & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                 << 6U)));
        } else if (((vlSelfRef.core__DOT__rs1_data[0U] 
                     >> 1U) & ((0x0bU == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs1_data[2U] 
                                             >> 6U))) 
                               | (0x0aU == (0x0000000fU 
                                            & (vlSelfRef.core__DOT__rs1_data[2U] 
                                               >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000f0fffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000f000U 
                                                     & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                        << 0x0000000aU)));
            vlSelfRef.core__DOT__valid_in_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000f0fffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000f000U 
                                              & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                 << 6U)));
        } else if (((vlSelfRef.core__DOT__rs2_data[0U] 
                     >> 1U) & ((0x0bU == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs2_data[2U] 
                                             >> 6U))) 
                               | (0x0aU == (0x0000000fU 
                                            & (vlSelfRef.core__DOT__rs2_data[2U] 
                                               >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000f0fffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000f000U 
                                                     & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                        << 0x0000000aU)));
            vlSelfRef.core__DOT__valid_in_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000f0fffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000f000U 
                                              & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                 << 6U)));
        } else if (((vlSelfRef.core__DOT__rs3_data[0U] 
                     >> 1U) & ((0x0bU == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs3_data[2U] 
                                             >> 6U))) 
                               | (0x0aU == (0x0000000fU 
                                            & (vlSelfRef.core__DOT__rs3_data[2U] 
                                               >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x000f0fffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x0000f000U 
                                                     & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                        << 0x0000000aU)));
            vlSelfRef.core__DOT__valid_in_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x000f0fffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x0000f000U 
                                              & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                 << 6U)));
        }
    }
    if ((0x00000010U & (IData)(vlSelfRef.core__DOT__ready_bus))) {
        if (((vlSelfRef.core__DOT__rs0_data[0U] >> 1U) 
             & (((0x0fU == (0x0000000fU & (vlSelfRef.core__DOT__rs0_data[2U] 
                                           >> 6U))) 
                 | (8U == (0x0000000fU & (vlSelfRef.core__DOT__rs0_data[2U] 
                                          >> 6U)))) 
                | (9U == (0x0000000fU & (vlSelfRef.core__DOT__rs0_data[2U] 
                                         >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs0_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs0_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs0_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs0_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (1U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x0000ffffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000f0000U 
                                                     & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                        << 0x0000000eU)));
            vlSelfRef.core__DOT__valid_in_bus = (0x00000010U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x0000ffffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000f0000U 
                                              & (vlSelfRef.core__DOT__rs0_data[2U] 
                                                 << 0x0000000aU)));
        } else if (((vlSelfRef.core__DOT__rs1_data[0U] 
                     >> 1U) & (((0x0fU == (0x0000000fU 
                                           & (vlSelfRef.core__DOT__rs1_data[2U] 
                                              >> 6U))) 
                                | (8U == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs1_data[2U] 
                                             >> 6U)))) 
                               | (9U == (0x0000000fU 
                                         & (vlSelfRef.core__DOT__rs1_data[2U] 
                                            >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs1_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs1_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs1_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs1_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (2U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x0000ffffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000f0000U 
                                                     & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                        << 0x0000000eU)));
            vlSelfRef.core__DOT__valid_in_bus = (0x00000010U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x0000ffffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000f0000U 
                                              & (vlSelfRef.core__DOT__rs1_data[2U] 
                                                 << 0x0000000aU)));
        } else if (((vlSelfRef.core__DOT__rs2_data[0U] 
                     >> 1U) & (((0x0fU == (0x0000000fU 
                                           & (vlSelfRef.core__DOT__rs2_data[2U] 
                                              >> 6U))) 
                                | (8U == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs2_data[2U] 
                                             >> 6U)))) 
                               | (9U == (0x0000000fU 
                                         & (vlSelfRef.core__DOT__rs2_data[2U] 
                                            >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs2_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs2_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs2_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs2_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (4U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x0000ffffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000f0000U 
                                                     & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                        << 0x0000000eU)));
            vlSelfRef.core__DOT__valid_in_bus = (0x00000010U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x0000ffffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000f0000U 
                                              & (vlSelfRef.core__DOT__rs2_data[2U] 
                                                 << 0x0000000aU)));
        } else if (((vlSelfRef.core__DOT__rs3_data[0U] 
                     >> 1U) & (((0x0fU == (0x0000000fU 
                                           & (vlSelfRef.core__DOT__rs3_data[2U] 
                                              >> 6U))) 
                                | (8U == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__rs3_data[2U] 
                                             >> 6U)))) 
                               | (9U == (0x0000000fU 
                                         & (vlSelfRef.core__DOT__rs3_data[2U] 
                                            >> 6U)))))) {
            vlSelfRef.core__DOT__fu_bus[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                          << 0x0000001eU) 
                                                                         | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                            >> 2U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                             >> 2U))))));
            vlSelfRef.core__DOT__fu_bus[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelfRef.core__DOT__rs3_data[1U] 
                                                                           << 0x0000001eU) 
                                                                          | (vlSelfRef.core__DOT__rs3_data[0U] 
                                                                             >> 2U)))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSelfRef.core__DOT__rs3_data[2U] 
                                                                            << 0x0000001eU) 
                                                                           | (vlSelfRef.core__DOT__rs3_data[1U] 
                                                                              >> 2U))))) 
                                                       >> 0x00000020U));
            vlSelfRef.core__DOT__consumed_bus = (8U 
                                                 | (IData)(vlSelfRef.core__DOT__consumed_bus));
            vlSelfRef.core__DOT__ROB_entry_bus = ((0x0000ffffU 
                                                   & vlSelfRef.core__DOT__ROB_entry_bus) 
                                                  | (0x000f0000U 
                                                     & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                        << 0x0000000eU)));
            vlSelfRef.core__DOT__valid_in_bus = (0x00000010U 
                                                 | (IData)(vlSelfRef.core__DOT__valid_in_bus));
            vlSelfRef.core__DOT__ALU_op = ((0x0000ffffU 
                                            & vlSelfRef.core__DOT__ALU_op) 
                                           | (0x000f0000U 
                                              & (vlSelfRef.core__DOT__rs3_data[2U] 
                                                 << 0x0000000aU)));
        }
    }
    if (vlSelfRef.core__DOT__rob_read_enable) {
        vlSelfRef.core__DOT__commit_unit__DOT__rd = 
            (0x0000001fU & (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                            >> 4U));
        vlSelfRef.core__DOT__commit_unit__DOT__commit_ras_pointer 
            = (0x0000000fU & (vlSelfRef.core__DOT__commit_unit__DOT__head[3U] 
                              >> 4U));
    } else {
        vlSelfRef.core__DOT__commit_unit__DOT__rd = 0U;
        vlSelfRef.core__DOT__commit_unit__DOT__commit_ras_pointer = 0U;
    }
    vlSelfRef.core__DOT__fetch_stage__DOT__push = (
                                                   (0x6fU 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.core__DOT__fetch_stage__DOT__instruction))
                                                    ? (IData)(core__DOT__fetch_stage__DOT____VdfgExtracted_h5b55025d__0)
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                                    && (IData)(core__DOT__fetch_stage__DOT____VdfgExtracted_h5b55025d__0)));
    vlSelfRef.core__DOT__fetch_stage__DOT__pop = ((0x6fU 
                                                   != 
                                                   (0x0000007fU 
                                                    & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                                  && ((0x67U 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                                      && (((1U 
                                                            != 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                                >> 7U))) 
                                                           & ((5U 
                                                               != 
                                                               (0x0000001fU 
                                                                & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                                   >> 7U))) 
                                                              & (IData)(core__DOT__fetch_stage__DOT____VdfgRegularize_h7b9f36a4_0_0))) 
                                                          || ((IData)(core__DOT__fetch_stage__DOT____VdfgExtracted_h5b55025d__0) 
                                                              & ((IData)(core__DOT__fetch_stage__DOT____VdfgRegularize_h7b9f36a4_0_0) 
                                                                 & ((0x0000001fU 
                                                                     & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                                        >> 7U)) 
                                                                    != 
                                                                    (0x0000001fU 
                                                                     & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                                        >> 0x0000000fU))))))));
    vlSelfRef.core__DOT__generate_new_pc__DOT__to_be_added 
        = ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0)
            ? (((~ (IData)(vlSelfRef.core__DOT__commit_result)) 
                & (IData)(vlSelfRef.core__DOT__commit_prediction))
                ? 4U : ((1U & ((vlSelfRef.core__DOT__commit_unit__DOT__head[1U] 
                                >> 1U) & (~ (IData)(vlSelfRef.core__DOT__commit_unit__DOT__empty))))
                         ? ((0U == (3U & (vlSelfRef.core__DOT__commit_unit__DOT__head[1U] 
                                          >> 2U))) ? 
                            ((vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                              << 0x0000001cU) | (vlSelfRef.core__DOT__commit_unit__DOT__head[1U] 
                                                 >> 4U))
                             : 0U) : 0U)) : ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1)
                                              ? vlSelfRef.core__DOT__jalr_actual_address
                                              : (((0x63U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                                  & (IData)(vlSelfRef.core__DOT__generate_new_pc__DOT__pipe_taken))
                                                  ? vlSelfRef.core__DOT__generate_new_pc__DOT____VdfgExtracted_h61815015__0
                                                  : 
                                                 ((0x6fU 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.core__DOT__fetch_stage__DOT__instruction))
                                                   ? 
                                                  ((((0x00000ffeU 
                                                      & ((- (IData)(
                                                                    (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                                     >> 0x0000001fU))) 
                                                         << 1U)) 
                                                     | (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                        >> 0x0000001fU)) 
                                                    << 0x00000014U) 
                                                   | ((((0x000001feU 
                                                         & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                            >> 0x0000000bU)) 
                                                        | (1U 
                                                           & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                              >> 0x00000014U))) 
                                                       << 0x0000000bU) 
                                                      | (0x000007feU 
                                                         & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                            >> 0x00000014U))))
                                                   : 4U))));
    vlSelfRef.core__DOT____Vcellinp__adder_fu_0__reset 
        = ((IData)(vlSelfRef.core__DOT__mispredicted) 
           | (IData)(vlSelfRef.reset));
    vlSelfRef.core__DOT__mult_fu__DOT__loadregs = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps)) 
                                                   & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                                      >> 2U));
    vlSelfRef.core__DOT__div_fu__DOT__loadregs = ((0U 
                                                   == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps)) 
                                                  & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                                     >> 3U));
    if ((0U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))) {
        vlSelfRef.core__DOT__shift_fu__DOT__loadregs 
            = ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
               >> 4U);
        vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ns 
            = ((0x00000010U & (IData)(vlSelfRef.core__DOT__valid_in_bus))
                ? 2U : 0U);
    } else {
        vlSelfRef.core__DOT__shift_fu__DOT__loadregs = 0U;
        if ((2U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))) {
            vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ns 
                = ((1U == vlSelfRef.core__DOT__shift_fu__DOT__P)
                    ? 3U : 2U);
        } else if ((3U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))) {
            vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ns 
                = ((0x00000020U & (IData)(vlSelfRef.core__DOT__yumi_bus))
                    ? 0U : 3U);
        }
    }
    vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ns 
        = ((2U & (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))
            ? ((1U & (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))
                ? ((4U & (IData)(vlSelfRef.core__DOT__yumi_bus))
                    ? 0U : 3U) : ((0U == vlSelfRef.core__DOT__mult_fu__DOT__P)
                                   ? 3U : 1U)) : ((1U 
                                                   & (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.core__DOT__valid_in_bus))
                                                    ? 1U
                                                    : 0U)));
    vlSelfRef.core__DOT__div_fu__DOT__abs_sor = ((IData)(
                                                         ((vlSelfRef.core__DOT__ALU_op 
                                                           >> 0x0000000cU) 
                                                          & (vlSelfRef.core__DOT__fu_bus[7U] 
                                                             >> 0x0000001fU)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelfRef.core__DOT__fu_bus[7U]))
                                                  : 
                                                 vlSelfRef.core__DOT__fu_bus[7U]);
    vlSelfRef.core__DOT__div_fu__DOT__abs_end = ((IData)(
                                                         ((vlSelfRef.core__DOT__ALU_op 
                                                           >> 0x0000000cU) 
                                                          & (vlSelfRef.core__DOT__fu_bus[6U] 
                                                             >> 0x0000001fU)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   vlSelfRef.core__DOT__fu_bus[6U]))
                                                  : 
                                                 vlSelfRef.core__DOT__fu_bus[6U]);
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
        = ((4U & vlSelfRef.core__DOT__ALU_op) ? (~ 
                                                 vlSelfRef.core__DOT__fu_bus[1U])
            : vlSelfRef.core__DOT__fu_bus[1U]);
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
        = ((0x00000040U & vlSelfRef.core__DOT__ALU_op)
            ? (~ vlSelfRef.core__DOT__fu_bus[3U]) : 
           vlSelfRef.core__DOT__fu_bus[3U]);
    vlSelfRef.core__DOT__registers__DOT__enable_bus = 0U;
    if (((IData)(vlSelfRef.core__DOT__RegWrite) & (0U 
                                                   != (IData)(vlSelfRef.core__DOT__commit_unit__DOT__rd)))) {
        vlSelfRef.core__DOT__registers__DOT__enable_bus 
            = (vlSelfRef.core__DOT__registers__DOT__enable_bus 
               | (0x00000000ffffffffULL & ((IData)(1U) 
                                           << (IData)(vlSelfRef.core__DOT__commit_unit__DOT__rd))));
    }
    vlSelfRef.core__DOT__fetch_stage__DOT__newpc = 
        ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pop)
          ? ((IData)(vlSelfRef.reset) ? 0U : ((IData)(vlSelfRef.core__DOT__mispredicted)
                                               ? vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack
                                              [(0x0000000fU 
                                                & ((IData)(vlSelfRef.core__DOT__commit_unit__DOT__commit_ras_pointer) 
                                                   - (IData)(1U)))]
                                               : vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack
                                              [vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp]))
          : (((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0)
               ? vlSelfRef.core__DOT__committed_pc : 
              ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1)
                ? 0U : vlSelfRef.core__DOT__fetch_stage__DOT__pc)) 
             + vlSelfRef.core__DOT__generate_new_pc__DOT__to_be_added));
    if (vlSelfRef.core__DOT__res_sched__DOT__ps) {
        vlSelfRef.core__DOT__res_sched__DOT__curr_branch_pc 
            = ((vlSelfRef.core__DOT__res_sched__DOT__instr_hold[3U] 
                << 0x00000019U) | (vlSelfRef.core__DOT__res_sched__DOT__instr_hold[2U] 
                                   >> 7U));
        vlSelfRef.core__DOT__res_sched__DOT__branch 
            = (1U & (vlSelfRef.core__DOT__res_sched__DOT__instr_hold[1U] 
                     >> 5U));
        vlSelfRef.core__DOT__res_sched__DOT__ins = 
            ((vlSelfRef.core__DOT__res_sched__DOT__instr_hold[2U] 
              << 0x00000019U) | (vlSelfRef.core__DOT__res_sched__DOT__instr_hold[1U] 
                                 >> 7U));
    } else {
        vlSelfRef.core__DOT__res_sched__DOT__curr_branch_pc 
            = ((vlSelfRef.core__DOT__pipe_out[3U] << 0x00000019U) 
               | (vlSelfRef.core__DOT__pipe_out[2U] 
                  >> 7U));
        vlSelfRef.core__DOT__res_sched__DOT__branch 
            = (1U & (vlSelfRef.core__DOT__pipe_out[1U] 
                     >> 5U));
        vlSelfRef.core__DOT__res_sched__DOT__ins = 
            ((vlSelfRef.core__DOT__pipe_out[2U] << 0x00000019U) 
             | (vlSelfRef.core__DOT__pipe_out[1U] >> 7U));
    }
    core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0 
        = (((- (IData)((vlSelfRef.core__DOT__res_sched__DOT__ins 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.core__DOT__res_sched__DOT__ins 
              >> 0x00000014U));
    vlSelfRef.core__DOT__rs1reg_data = vlSelfRef.core__DOT__registers__DOT__RegData
        [(0x0000001fU & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                         >> 0x0000000fU))];
    vlSelfRef.core__DOT__rs2reg_data = vlSelfRef.core__DOT__registers__DOT__RegData
        [(0x0000001fU & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                         >> 0x00000014U))];
    core__DOT__res_sched__DOT____VdfgExtracted_h018ff82f__0 
        = (IData)((0x00005000U == (0x40007000U & vlSelfRef.core__DOT__res_sched__DOT__ins)));
    core__DOT__res_sched__DOT____VdfgExtracted_h1374f20a__0 
        = (IData)((0x40005000U == (0x40007000U & vlSelfRef.core__DOT__res_sched__DOT__ins)));
    vlSelfRef.core__DOT__rs2reg_busy = (1U & vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                        [(0x0000001fU 
                                          & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                             >> 0x00000014U))]);
    vlSelfRef.core__DOT__rs1reg_busy = (1U & vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                        [(0x0000001fU 
                                          & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                             >> 0x0000000fU))]);
    vlSelfRef.core__DOT__rs_dest = ((0U == (0x0000007fU 
                                            & vlSelfRef.core__DOT__res_sched__DOT__ins))
                                     ? 4U : ((2U & 
                                              vlSelfRef.core__DOT__reservation_stations__DOT__rs0__DOT__q_reg[0U])
                                              ? ((2U 
                                                  & vlSelfRef.core__DOT__reservation_stations__DOT__rs1__DOT__q_reg[0U])
                                                  ? 
                                                 ((2U 
                                                   & vlSelfRef.core__DOT__reservation_stations__DOT__rs2__DOT__q_reg[0U])
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.core__DOT__reservation_stations__DOT__rs3__DOT__q_reg[0U])
                                                    ? 5U
                                                    : 3U)
                                                   : 2U)
                                                  : 1U)
                                              : 0U));
    vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_hae399222__0 
        = ((0x37U == (0x0000007fU & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
           | (0x17U == (0x0000007fU & vlSelfRef.core__DOT__res_sched__DOT__ins)));
    vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h221b8606__0 
        = (1U & (((IData)(vlSelfRef.core__DOT__res_sched__DOT__ps)
                   ? (vlSelfRef.core__DOT__res_sched__DOT__instr_hold[1U] 
                      >> 4U) : (vlSelfRef.core__DOT__pipe_out[1U] 
                                >> 4U)) | (0x67U == 
                                           (0x0000007fU 
                                            & vlSelfRef.core__DOT__res_sched__DOT__ins))));
    vlSelfRef.core__DOT__Q_k = (0x0000000fU & (vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                               [(0x0000001fU 
                                                 & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                    >> 0x00000014U))] 
                                               >> 1U));
    vlSelfRef.core__DOT__Q_j = (0x0000000fU & (vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                               [(0x0000001fU 
                                                 & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                    >> 0x0000000fU))] 
                                               >> 1U));
    vlSelfRef.core__DOT__reservation_stations__DOT____VdfgRegularize_h1542825a_0_0 
        = ((IData)(vlSelfRef.core__DOT__mispredicted) 
           | (IData)(vlSelfRef.core__DOT____Vcellinp__adder_fu_0__reset));
    vlSelfRef.core__DOT__div_fu__DOT__a_lt_b = (vlSelfRef.core__DOT__div_fu__DOT__abs_sor 
                                                > vlSelfRef.core__DOT__div_fu__DOT__abs_end);
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1 
        = ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
           >> 0x0000001fU);
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000001eU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000001dU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000001cU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000001bU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000001aU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000019U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000018U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000017U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000016U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000015U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000014U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000013U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000012U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000011U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x00000010U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000000fU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000000eU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000000dU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000000cU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000000bU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 0x0000000aU));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 9U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 8U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 7U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 6U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 5U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 4U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 3U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 2U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 >> 1U));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1 
        = (1U & (vlSelfRef.core__DOT__fu_bus[0U] ^ vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1 
        = ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
           >> 0x0000001fU);
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000001eU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000001dU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000001cU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000001bU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000001aU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000019U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000018U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000017U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000016U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000015U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000014U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000013U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000012U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000011U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x00000010U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000000fU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000000eU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000000dU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000000cU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000000bU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 0x0000000aU));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 9U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 8U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 7U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 6U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 5U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 4U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 3U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 2U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 >> 1U));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1 
        = (1U & (vlSelfRef.core__DOT__fu_bus[2U] ^ vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b));
    vlSelfRef.core__DOT__fetch_stage__DOT__program_counter__DOT__new_pc 
        = (((~ (IData)(vlSelfRef.core__DOT__mispredicted)) 
            & (IData)(vlSelfRef.core__DOT__res_sched__DOT__ps))
            ? vlSelfRef.core__DOT__fetch_stage__DOT__pc
            : vlSelfRef.core__DOT__fetch_stage__DOT__newpc);
    vlSelfRef.core__DOT__stall = (1U & ((((IData)(vlSelfRef.core__DOT__rs_dest) 
                                          >> 2U) & (IData)(vlSelfRef.core__DOT__rs_dest)) 
                                        | ((IData)(vlSelfRef.core__DOT__rob_full) 
                                           | (((IData)(vlSelfRef.core__DOT__lsq_full) 
                                               & ((3U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
                                                  | (0x23U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.core__DOT__res_sched__DOT__ins)))) 
                                              | ((IData)(vlSelfRef.core__DOT__jalrq_full) 
                                                 & (0x67U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.core__DOT__res_sched__DOT__ins)))))));
    vlSelfRef.core__DOT__rs2rob_data = ((vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                         [vlSelfRef.core__DOT__Q_k][2U] 
                                         << 0x0000001cU) 
                                        | (vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                           [vlSelfRef.core__DOT__Q_k][1U] 
                                           >> 4U));
    vlSelfRef.core__DOT__rs2rob_ready = (1U & (vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                               [vlSelfRef.core__DOT__Q_k][1U] 
                                               >> 1U));
    vlSelfRef.core__DOT__rs1rob_data = ((vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                         [vlSelfRef.core__DOT__Q_j][2U] 
                                         << 0x0000001cU) 
                                        | (vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                           [vlSelfRef.core__DOT__Q_j][1U] 
                                           >> 4U));
    vlSelfRef.core__DOT__rs1rob_ready = (1U & (vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                               [vlSelfRef.core__DOT__Q_j][1U] 
                                               >> 1U));
    if ((0x33U == (0x0000007fU & vlSelfRef.core__DOT__res_sched__DOT__ins))) {
        vlSelfRef.core__DOT__res_sched__DOT__alu_op 
            = ((IData)((0x02000000U == (0xfe007000U 
                                        & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                ? 0x0cU : ((IData)((0x02001000U == 
                                    (0xfe007000U & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                            ? 0x0dU : ((IData)((0x02004000U 
                                                == 
                                                (0xfe007000U 
                                                 & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                        ? 0x0bU : ((IData)(
                                                           (0x02007000U 
                                                            == 
                                                            (0xfe007000U 
                                                             & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                                    ? 0x0aU
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             == 
                                                             (0xfe007000U 
                                                              & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                                     ? 0U
                                                     : 
                                                    ((IData)(
                                                             (0x40000000U 
                                                              == 
                                                              (0xfe007000U 
                                                               & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                                      ? 4U
                                                      : 
                                                     ((IData)(
                                                              (0x00004000U 
                                                               == 
                                                               (0xfe007000U 
                                                                & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                                       ? 1U
                                                       : 
                                                      ((IData)(
                                                               (0x00006000U 
                                                                == 
                                                                (0xfe007000U 
                                                                 & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                                        ? 2U
                                                        : 
                                                       ((IData)(
                                                                (0x00007000U 
                                                                 == 
                                                                 (0xfe007000U 
                                                                  & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                                         ? 3U
                                                         : 
                                                        ((IData)(
                                                                 (0x00001000U 
                                                                  == 
                                                                  (0xfe007000U 
                                                                   & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                                          ? 0x0fU
                                                          : 
                                                         ((IData)(
                                                                  (0x00005000U 
                                                                   == 
                                                                   (0xfe007000U 
                                                                    & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                                           ? 8U
                                                           : 
                                                          ((IData)(
                                                                   (0x40005000U 
                                                                    == 
                                                                    (0xfe007000U 
                                                                     & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                                            ? 9U
                                                            : 
                                                           ((IData)(
                                                                    (0x00002000U 
                                                                     == 
                                                                     (0xfe007000U 
                                                                      & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                                             ? 7U
                                                             : 6U)))))))))))));
        vlSelfRef.core__DOT__res_sched__DOT__V_k = 
            (((((IData)(vlSelfRef.core__DOT__Q_k) == 
                (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                        >> 0x00000022U)))) 
               & (0U != (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                                >> 0x00000022U))))) 
              & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))
              ? (IData)((vlSelfRef.core__DOT__CDB_out 
                         >> 2U)) : ((IData)(vlSelfRef.core__DOT__rs2reg_busy)
                                     ? ((IData)(vlSelfRef.core__DOT__rs2rob_ready)
                                         ? vlSelfRef.core__DOT__rs2rob_data
                                         : 0U) : vlSelfRef.core__DOT__rs2reg_data));
        if (((((IData)(vlSelfRef.core__DOT__Q_j) == 
               (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                       >> 0x00000022U)))) 
              & (0U != (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                               >> 0x00000022U))))) 
             & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))) {
            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__V_j 
                = (IData)((vlSelfRef.core__DOT__CDB_out 
                           >> 2U));
        } else if (vlSelfRef.core__DOT__rs1reg_busy) {
            if (vlSelfRef.core__DOT__rs1rob_ready) {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
                vlSelfRef.core__DOT__res_sched__DOT__V_j 
                    = vlSelfRef.core__DOT__rs1rob_data;
            } else {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j 
                    = vlSelfRef.core__DOT__Q_j;
                vlSelfRef.core__DOT__res_sched__DOT__V_j = 0U;
            }
        } else {
            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__V_j 
                = vlSelfRef.core__DOT__rs1reg_data;
        }
    } else if (vlSelfRef.core__DOT__res_sched__DOT__branch) {
        vlSelfRef.core__DOT__res_sched__DOT__alu_op = 4U;
        vlSelfRef.core__DOT__res_sched__DOT__V_k = 
            (((((IData)(vlSelfRef.core__DOT__Q_k) == 
                (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                        >> 0x00000022U)))) 
               & (0U != (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                                >> 0x00000022U))))) 
              & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))
              ? (IData)((vlSelfRef.core__DOT__CDB_out 
                         >> 2U)) : ((IData)(vlSelfRef.core__DOT__rs2reg_busy)
                                     ? ((IData)(vlSelfRef.core__DOT__rs2rob_ready)
                                         ? vlSelfRef.core__DOT__rs2rob_data
                                         : 0U) : vlSelfRef.core__DOT__rs2reg_data));
        if (((((IData)(vlSelfRef.core__DOT__Q_j) == 
               (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                       >> 0x00000022U)))) 
              & (0U != (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                               >> 0x00000022U))))) 
             & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))) {
            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__V_j 
                = (IData)((vlSelfRef.core__DOT__CDB_out 
                           >> 2U));
        } else if (vlSelfRef.core__DOT__rs1reg_busy) {
            if (vlSelfRef.core__DOT__rs1rob_ready) {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
                vlSelfRef.core__DOT__res_sched__DOT__V_j 
                    = vlSelfRef.core__DOT__rs1rob_data;
            } else {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j 
                    = vlSelfRef.core__DOT__Q_j;
                vlSelfRef.core__DOT__res_sched__DOT__V_j = 0U;
            }
        } else {
            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__V_j 
                = vlSelfRef.core__DOT__rs1reg_data;
        }
    } else if ((0x13U == (0x0000007fU & vlSelfRef.core__DOT__res_sched__DOT__ins))) {
        if ((0U == (7U & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                          >> 0x0000000cU)))) {
            vlSelfRef.core__DOT__res_sched__DOT__alu_op = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__V_k 
                = core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0;
        } else if ((4U == (7U & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                 >> 0x0000000cU)))) {
            vlSelfRef.core__DOT__res_sched__DOT__alu_op = 1U;
            vlSelfRef.core__DOT__res_sched__DOT__V_k 
                = core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0;
        } else if ((6U == (7U & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                 >> 0x0000000cU)))) {
            vlSelfRef.core__DOT__res_sched__DOT__alu_op = 2U;
            vlSelfRef.core__DOT__res_sched__DOT__V_k 
                = core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0;
        } else if ((7U == (7U & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                 >> 0x0000000cU)))) {
            vlSelfRef.core__DOT__res_sched__DOT__alu_op = 3U;
            vlSelfRef.core__DOT__res_sched__DOT__V_k 
                = core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0;
        } else if ((1U == (7U & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                 >> 0x0000000cU)))) {
            vlSelfRef.core__DOT__res_sched__DOT__alu_op = 0x0fU;
            vlSelfRef.core__DOT__res_sched__DOT__V_k 
                = (0x0000001fU & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                  >> 0x00000014U));
        } else if (core__DOT__res_sched__DOT____VdfgExtracted_h018ff82f__0) {
            vlSelfRef.core__DOT__res_sched__DOT__alu_op = 8U;
            vlSelfRef.core__DOT__res_sched__DOT__V_k 
                = (0x0000001fU & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                  >> 0x00000014U));
        } else if (core__DOT__res_sched__DOT____VdfgExtracted_h1374f20a__0) {
            vlSelfRef.core__DOT__res_sched__DOT__alu_op = 9U;
            vlSelfRef.core__DOT__res_sched__DOT__V_k 
                = (0x0000001fU & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                  >> 0x00000014U));
        } else {
            vlSelfRef.core__DOT__res_sched__DOT__alu_op 
                = ((2U == (7U & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                 >> 0x0000000cU))) ? 7U
                    : 6U);
            vlSelfRef.core__DOT__res_sched__DOT__V_k 
                = core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0;
        }
        if (((((IData)(vlSelfRef.core__DOT__Q_j) == 
               (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                       >> 0x00000022U)))) 
              & (0U != (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                               >> 0x00000022U))))) 
             & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))) {
            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__V_j 
                = (IData)((vlSelfRef.core__DOT__CDB_out 
                           >> 2U));
        } else if (vlSelfRef.core__DOT__rs1reg_busy) {
            if (vlSelfRef.core__DOT__rs1rob_ready) {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
                vlSelfRef.core__DOT__res_sched__DOT__V_j 
                    = vlSelfRef.core__DOT__rs1rob_data;
            } else {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j 
                    = vlSelfRef.core__DOT__Q_j;
                vlSelfRef.core__DOT__res_sched__DOT__V_j = 0U;
            }
        } else {
            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__V_j 
                = vlSelfRef.core__DOT__rs1reg_data;
        }
    } else {
        vlSelfRef.core__DOT__res_sched__DOT__alu_op = 0U;
        if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h221b8606__0) {
            vlSelfRef.core__DOT__res_sched__DOT__V_k = 4U;
            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__V_j 
                = vlSelfRef.core__DOT__res_sched__DOT__curr_branch_pc;
        } else if ((3U == (0x0000007fU & vlSelfRef.core__DOT__res_sched__DOT__ins))) {
            vlSelfRef.core__DOT__res_sched__DOT__V_k 
                = core__DOT__res_sched__DOT____VdfgExtracted_h461c3afd__0;
            if (((((IData)(vlSelfRef.core__DOT__Q_j) 
                   == (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                              >> 0x00000022U)))) 
                  & (0U != (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                                   >> 0x00000022U))))) 
                 & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))) {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
                vlSelfRef.core__DOT__res_sched__DOT__V_j 
                    = (IData)((vlSelfRef.core__DOT__CDB_out 
                               >> 2U));
            } else if (vlSelfRef.core__DOT__rs1reg_busy) {
                if (vlSelfRef.core__DOT__rs1rob_ready) {
                    vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
                    vlSelfRef.core__DOT__res_sched__DOT__V_j 
                        = vlSelfRef.core__DOT__rs1rob_data;
                } else {
                    vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j 
                        = vlSelfRef.core__DOT__Q_j;
                    vlSelfRef.core__DOT__res_sched__DOT__V_j = 0U;
                }
            } else {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
                vlSelfRef.core__DOT__res_sched__DOT__V_j 
                    = vlSelfRef.core__DOT__rs1reg_data;
            }
        } else if (vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_hae399222__0) {
            vlSelfRef.core__DOT__res_sched__DOT__V_k 
                = (0xfffff000U & vlSelfRef.core__DOT__res_sched__DOT__ins);
            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__V_j 
                = ((0x37U == (0x0000007fU & vlSelfRef.core__DOT__res_sched__DOT__ins))
                    ? 0U : vlSelfRef.core__DOT__res_sched__DOT__curr_branch_pc);
        } else if ((0x23U == (0x0000007fU & vlSelfRef.core__DOT__res_sched__DOT__ins))) {
            vlSelfRef.core__DOT__res_sched__DOT__V_k 
                = (((- (IData)((vlSelfRef.core__DOT__res_sched__DOT__ins 
                                >> 0x0000001fU))) << 0x0000000cU) 
                   | ((0x00000fe0U & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                      >> 0x00000014U)) 
                      | (0x0000001fU & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                        >> 7U))));
            if (((((IData)(vlSelfRef.core__DOT__Q_j) 
                   == (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                              >> 0x00000022U)))) 
                  & (0U != (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                                   >> 0x00000022U))))) 
                 & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))) {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
                vlSelfRef.core__DOT__res_sched__DOT__V_j 
                    = (IData)((vlSelfRef.core__DOT__CDB_out 
                               >> 2U));
            } else if (vlSelfRef.core__DOT__rs1reg_busy) {
                if (vlSelfRef.core__DOT__rs1rob_ready) {
                    vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
                    vlSelfRef.core__DOT__res_sched__DOT__V_j 
                        = vlSelfRef.core__DOT__rs1rob_data;
                } else {
                    vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j 
                        = vlSelfRef.core__DOT__Q_j;
                    vlSelfRef.core__DOT__res_sched__DOT__V_j = 0U;
                }
            } else {
                vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
                vlSelfRef.core__DOT__res_sched__DOT__V_j 
                    = vlSelfRef.core__DOT__rs1reg_data;
            }
        } else {
            vlSelfRef.core__DOT__res_sched__DOT__V_k = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j = 0U;
            vlSelfRef.core__DOT__res_sched__DOT__V_j = 0U;
        }
    }
    vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ns 
        = ((4U & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
            ? ((2U & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                ? 0U : ((1U & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                         ? ((8U & (IData)(vlSelfRef.core__DOT__yumi_bus))
                             ? 0U : 5U) : 5U)) : ((2U 
                                                   & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.core__DOT__div_fu__DOT__div)
                                                     ? 4U
                                                     : 5U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                                                    ? 
                                                   ((0U 
                                                     == vlSelfRef.core__DOT__div_fu__DOT__P)
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b)) 
                                                        & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                                           >> 3U)))
                                                     ? 1U
                                                     : 
                                                    ((((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                                       >> 3U) 
                                                      & (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b))
                                                      ? 5U
                                                      : 0U)))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[0U] & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                 | ((vlSelfRef.core__DOT__ALU_op >> 2U) 
                    & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in 
        = (1U & ((vlSelfRef.core__DOT__fu_bus[2U] & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                 | ((vlSelfRef.core__DOT__ALU_op >> 6U) 
                    & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (((IData)(vlSelfRef.core__DOT__stall) 
                                                 | (0U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                                 ? 0U
                                                 : (IData)(vlSelfRef.core__DOT__ROB_entry));
    if (vlSelfRef.core__DOT__res_sched__DOT__ps) {
        vlSelfRef.core__DOT__res_sched__DOT__ns = 1U;
        if ((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))) {
            vlSelfRef.core__DOT__res_sched__DOT__ns = 0U;
        }
    } else {
        vlSelfRef.core__DOT__res_sched__DOT__ns = 0U;
        if (vlSelfRef.core__DOT__stall) {
            vlSelfRef.core__DOT__res_sched__DOT__ns = 1U;
        }
    }
    if (vlSelfRef.core__DOT__stall) {
        vlSelfRef.core__DOT__lsq_input[0U] = ((0x00001fffU 
                                               & vlSelfRef.core__DOT__lsq_input[0U]) 
                                              | (0x0003e000U 
                                                 & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                    >> 7U)));
        vlSelfRef.core__DOT__lsq_input[1U] = 0U;
        vlSelfRef.core__DOT__lsq_input[2U] = 0U;
        vlSelfRef.core__DOT__lsq_input[0U] = ((0xffffe1ffU 
                                               & vlSelfRef.core__DOT__lsq_input[0U]) 
                                              | ((((IData)(vlSelfRef.core__DOT__stall) 
                                                   | (0U 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.core__DOT__ROB_entry)) 
                                                 << 9U));
        vlSelfRef.core__DOT__lsq_input[0U] = ((0xfffffe0fU 
                                               & vlSelfRef.core__DOT__lsq_input[0U]) 
                                              | ((IData)(vlSelfRef.core__DOT__Q_k) 
                                                 << 4U));
    } else {
        if ((0U == (7U & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                          >> 0x0000000cU)))) {
            vlSelfRef.core__DOT__lsq_input[0U] = (3U 
                                                  | (0xfffffff0U 
                                                     & vlSelfRef.core__DOT__lsq_input[0U]));
        } else if ((1U == (7U & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                 >> 0x0000000cU)))) {
            vlSelfRef.core__DOT__lsq_input[0U] = (5U 
                                                  | (0xfffffff0U 
                                                     & vlSelfRef.core__DOT__lsq_input[0U]));
        } else if ((2U == (7U & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                 >> 0x0000000cU)))) {
            vlSelfRef.core__DOT__lsq_input[0U] = (9U 
                                                  | (0xfffffff0U 
                                                     & vlSelfRef.core__DOT__lsq_input[0U]));
        } else if ((4U == (7U & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                 >> 0x0000000cU)))) {
            vlSelfRef.core__DOT__lsq_input[0U] = (2U 
                                                  | (0xfffffff0U 
                                                     & vlSelfRef.core__DOT__lsq_input[0U]));
        } else if ((5U == (7U & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                 >> 0x0000000cU)))) {
            vlSelfRef.core__DOT__lsq_input[0U] = (4U 
                                                  | (0xfffffff0U 
                                                     & vlSelfRef.core__DOT__lsq_input[0U]));
        }
        if ((3U == (0x0000007fU & vlSelfRef.core__DOT__res_sched__DOT__ins))) {
            vlSelfRef.core__DOT__lsq_input[0U] = (0x00001fffU 
                                                  & vlSelfRef.core__DOT__lsq_input[0U]);
            vlSelfRef.core__DOT__lsq_input[1U] = 0U;
            vlSelfRef.core__DOT__lsq_input[2U] = (0x00004000U 
                                                  & ((~ (IData)(vlSelfRef.core__DOT__stall)) 
                                                     << 0x0000000eU));
            vlSelfRef.core__DOT__lsq_input[0U] = ((0xffffe1ffU 
                                                   & vlSelfRef.core__DOT__lsq_input[0U]) 
                                                  | ((((IData)(vlSelfRef.core__DOT__stall) 
                                                       | (0U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.core__DOT__ROB_entry)) 
                                                     << 9U));
            vlSelfRef.core__DOT__lsq_input[0U] = (0xfffffe0fU 
                                                  & vlSelfRef.core__DOT__lsq_input[0U]);
        } else if ((0x23U == (0x0000007fU & vlSelfRef.core__DOT__res_sched__DOT__ins))) {
            vlSelfRef.core__DOT__lsq_input[1U] = ((0x00001fffU 
                                                   & vlSelfRef.core__DOT__lsq_input[1U]) 
                                                  | ((IData)(
                                                             ((QData)((IData)(
                                                                              (1U 
                                                                               & (~ (IData)(vlSelfRef.core__DOT__stall))))) 
                                                              << 0x00000020U)) 
                                                     << 0x0000000dU));
            vlSelfRef.core__DOT__lsq_input[2U] = (0x00007fffU 
                                                  & (((IData)(
                                                              ((QData)((IData)(
                                                                               (1U 
                                                                                & (~ (IData)(vlSelfRef.core__DOT__stall))))) 
                                                               << 0x00000020U)) 
                                                      >> 0x00000013U) 
                                                     | ((IData)(
                                                                (((QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelfRef.core__DOT__stall))))) 
                                                                  << 0x00000020U) 
                                                                 >> 0x00000020U)) 
                                                        << 0x0000000dU)));
            if (((((0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                           >> 0x00000022U))) 
                   == (IData)(vlSelfRef.core__DOT__Q_k)) 
                  & (0U != (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                                   >> 0x00000022U))))) 
                 & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))) {
                vlSelfRef.core__DOT__lsq_input[0U] 
                    = ((0x00001fffU & vlSelfRef.core__DOT__lsq_input[0U]) 
                       | ((IData)((vlSelfRef.core__DOT__CDB_out 
                                   >> 2U)) << 0x0000000dU));
                vlSelfRef.core__DOT__lsq_input[1U] 
                    = ((0xffffe000U & vlSelfRef.core__DOT__lsq_input[1U]) 
                       | ((IData)((vlSelfRef.core__DOT__CDB_out 
                                   >> 2U)) >> 0x00000013U));
                vlSelfRef.core__DOT__lsq_input[0U] 
                    = (0xffffff0fU & vlSelfRef.core__DOT__lsq_input[0U]);
            } else if (vlSelfRef.core__DOT__rs2reg_busy) {
                if (vlSelfRef.core__DOT__rs2rob_ready) {
                    vlSelfRef.core__DOT__lsq_input[0U] 
                        = ((0x00001fffU & vlSelfRef.core__DOT__lsq_input[0U]) 
                           | (vlSelfRef.core__DOT__rs2rob_data 
                              << 0x0000000dU));
                    vlSelfRef.core__DOT__lsq_input[1U] 
                        = ((0xffffe000U & vlSelfRef.core__DOT__lsq_input[1U]) 
                           | (vlSelfRef.core__DOT__rs2rob_data 
                              >> 0x00000013U));
                    vlSelfRef.core__DOT__lsq_input[0U] 
                        = (0xffffff0fU & vlSelfRef.core__DOT__lsq_input[0U]);
                } else {
                    vlSelfRef.core__DOT__lsq_input[0U] 
                        = (0x00001fffU & vlSelfRef.core__DOT__lsq_input[0U]);
                    vlSelfRef.core__DOT__lsq_input[1U] 
                        = (0xffffe000U & vlSelfRef.core__DOT__lsq_input[1U]);
                    vlSelfRef.core__DOT__lsq_input[0U] 
                        = ((0xffffff0fU & vlSelfRef.core__DOT__lsq_input[0U]) 
                           | ((IData)(vlSelfRef.core__DOT__Q_k) 
                              << 4U));
                }
            } else {
                vlSelfRef.core__DOT__lsq_input[0U] 
                    = ((0x00001fffU & vlSelfRef.core__DOT__lsq_input[0U]) 
                       | (vlSelfRef.core__DOT__rs2reg_data 
                          << 0x0000000dU));
                vlSelfRef.core__DOT__lsq_input[1U] 
                    = ((0xffffe000U & vlSelfRef.core__DOT__lsq_input[1U]) 
                       | (vlSelfRef.core__DOT__rs2reg_data 
                          >> 0x00000013U));
                vlSelfRef.core__DOT__lsq_input[0U] 
                    = (0xffffff0fU & vlSelfRef.core__DOT__lsq_input[0U]);
            }
            vlSelfRef.core__DOT__lsq_input[0U] = ((0xffffe1ffU 
                                                   & vlSelfRef.core__DOT__lsq_input[0U]) 
                                                  | ((((IData)(vlSelfRef.core__DOT__stall) 
                                                       | (0U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.core__DOT__ROB_entry)) 
                                                     << 9U));
            vlSelfRef.core__DOT__lsq_input[0U] = (0xfffffeffU 
                                                  & vlSelfRef.core__DOT__lsq_input[0U]);
        } else {
            vlSelfRef.core__DOT__lsq_input[0U] = ((0x00001fffU 
                                                   & vlSelfRef.core__DOT__lsq_input[0U]) 
                                                  | (0x0003e000U 
                                                     & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                        >> 7U)));
            vlSelfRef.core__DOT__lsq_input[1U] = 0U;
            vlSelfRef.core__DOT__lsq_input[2U] = 0U;
            vlSelfRef.core__DOT__lsq_input[0U] = ((0xffffe1ffU 
                                                   & vlSelfRef.core__DOT__lsq_input[0U]) 
                                                  | ((((IData)(vlSelfRef.core__DOT__stall) 
                                                       | (0U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.core__DOT__res_sched__DOT__ins)))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.core__DOT__ROB_entry)) 
                                                     << 9U));
            vlSelfRef.core__DOT__lsq_input[0U] = ((0xfffffe00U 
                                                   & vlSelfRef.core__DOT__lsq_input[0U]) 
                                                  | ((IData)(vlSelfRef.core__DOT__Q_k) 
                                                     << 4U));
        }
    }
    vlSelfRef.core__DOT__jalrq_input[1U] = ((0x0000ffffU 
                                             & vlSelfRef.core__DOT__jalrq_input[1U]) 
                                            | (((IData)(vlSelfRef.core__DOT__res_sched__DOT__ps)
                                                 ? 
                                                vlSelfRef.core__DOT__res_sched__DOT__instr_hold[0U]
                                                 : 
                                                vlSelfRef.core__DOT__pipe_out[0U]) 
                                               << 0x00000010U));
    vlSelfRef.core__DOT__jalrq_input[2U] = ((0x00010000U 
                                             & vlSelfRef.core__DOT__jalrq_input[2U]) 
                                            | (0x0001ffffU 
                                               & (((IData)(vlSelfRef.core__DOT__res_sched__DOT__ps)
                                                    ? 
                                                   vlSelfRef.core__DOT__res_sched__DOT__instr_hold[0U]
                                                    : 
                                                   vlSelfRef.core__DOT__pipe_out[0U]) 
                                                  >> 0x00000010U)));
    vlSelfRef.core__DOT__jalrq_input[2U] = ((0x0000ffffU 
                                             & vlSelfRef.core__DOT__jalrq_input[2U]) 
                                            | (0x0001ffffU 
                                               & (((0x67U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
                                                   & (~ (IData)(vlSelfRef.core__DOT__stall))) 
                                                  << 0x00000010U)));
    vlSelfRef.core__DOT__jalrq_input[0U] = ((0xffff000fU 
                                             & vlSelfRef.core__DOT__jalrq_input[0U]) 
                                            | (0x0000fff0U 
                                               & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                  >> 0x00000010U)));
    if (((((IData)(vlSelfRef.core__DOT__Q_j) == (0x0000000fU 
                                                 & (IData)(
                                                           (vlSelfRef.core__DOT__CDB_out 
                                                            >> 0x00000022U)))) 
          & (0U != (0x0000000fU & (IData)((vlSelfRef.core__DOT__CDB_out 
                                           >> 0x00000022U))))) 
         & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))) {
        vlSelfRef.core__DOT__jalrq_input[0U] = ((0x0000ffffU 
                                                 & vlSelfRef.core__DOT__jalrq_input[0U]) 
                                                | ((IData)(
                                                           (vlSelfRef.core__DOT__CDB_out 
                                                            >> 2U)) 
                                                   << 0x00000010U));
        vlSelfRef.core__DOT__jalrq_input[1U] = ((0xffff0000U 
                                                 & vlSelfRef.core__DOT__jalrq_input[1U]) 
                                                | ((IData)(
                                                           (vlSelfRef.core__DOT__CDB_out 
                                                            >> 2U)) 
                                                   >> 0x00000010U));
        vlSelfRef.core__DOT__jalrq_input[0U] = (0xfffffff0U 
                                                & vlSelfRef.core__DOT__jalrq_input[0U]);
    } else if (vlSelfRef.core__DOT__rs1reg_busy) {
        if (vlSelfRef.core__DOT__rs1rob_ready) {
            vlSelfRef.core__DOT__jalrq_input[0U] = 
                ((0x0000ffffU & vlSelfRef.core__DOT__jalrq_input[0U]) 
                 | (vlSelfRef.core__DOT__rs1rob_data 
                    << 0x00000010U));
            vlSelfRef.core__DOT__jalrq_input[1U] = 
                ((0xffff0000U & vlSelfRef.core__DOT__jalrq_input[1U]) 
                 | (vlSelfRef.core__DOT__rs1rob_data 
                    >> 0x00000010U));
            vlSelfRef.core__DOT__jalrq_input[0U] = 
                (0xfffffff0U & vlSelfRef.core__DOT__jalrq_input[0U]);
        } else {
            vlSelfRef.core__DOT__jalrq_input[0U] = 
                (0x0000ffffU & vlSelfRef.core__DOT__jalrq_input[0U]);
            vlSelfRef.core__DOT__jalrq_input[1U] = 
                (0xffff0000U & vlSelfRef.core__DOT__jalrq_input[1U]);
            vlSelfRef.core__DOT__jalrq_input[0U] = 
                ((0xfffffff0U & vlSelfRef.core__DOT__jalrq_input[0U]) 
                 | (IData)(vlSelfRef.core__DOT__Q_j));
        }
    } else {
        vlSelfRef.core__DOT__jalrq_input[0U] = ((0x0000ffffU 
                                                 & vlSelfRef.core__DOT__jalrq_input[0U]) 
                                                | (vlSelfRef.core__DOT__rs1reg_data 
                                                   << 0x00000010U));
        vlSelfRef.core__DOT__jalrq_input[1U] = ((0xffff0000U 
                                                 & vlSelfRef.core__DOT__jalrq_input[1U]) 
                                                | (vlSelfRef.core__DOT__rs1reg_data 
                                                   >> 0x00000010U));
        vlSelfRef.core__DOT__jalrq_input[0U] = (0xfffffff0U 
                                                & vlSelfRef.core__DOT__jalrq_input[0U]);
    }
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 1U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 1U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__reorder_buffer__DOT__wr_en 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
           == (IData)(vlSelfRef.core__DOT__reorder_buffer__DOT__wptr));
    vlSelfRef.core__DOT__issue_writes = ((~ (IData)(vlSelfRef.core__DOT__res_sched__DOT__ns)) 
                                         & ((0x33U 
                                             == (0x0000007fU 
                                                 & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
                                            || ((1U 
                                                 & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT__branch))) 
                                                && ((0x13U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
                                                    || ((IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h221b8606__0) 
                                                        || ((3U 
                                                             == 
                                                             (0x0000007fU 
                                                              & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
                                                            || (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_hae399222__0)))))));
    vlSelfRef.core__DOT__rs_input[0U] = ((0xffffe000U 
                                          & vlSelfRef.core__DOT__rs_input[0U]) 
                                         | ((((IData)(vlSelfRef.core__DOT__stall)
                                               ? 0U
                                               : (IData)(vlSelfRef.core__DOT__ROB_entry)) 
                                             << 9U) 
                                            | (((IData)(vlSelfRef.core__DOT__res_sched__DOT__alu_op) 
                                                << 5U) 
                                               | ((((0x33U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.core__DOT__res_sched__DOT__ins))
                                                     ? 2U
                                                     : 
                                                    ((IData)(vlSelfRef.core__DOT__res_sched__DOT__branch)
                                                      ? 
                                                     (7U 
                                                      & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                         >> 0x0000000cU))
                                                      : 2U)) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((~ (IData)(vlSelfRef.core__DOT__stall)) 
                                                         << 1U)) 
                                                     | ((0x33U 
                                                         != 
                                                         (0x0000007fU 
                                                          & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
                                                        && ((1U 
                                                             & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT__branch))) 
                                                            && ((0x13U 
                                                                 != 
                                                                 (0x0000007fU 
                                                                  & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
                                                                && ((1U 
                                                                     & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h221b8606__0))) 
                                                                    && ((3U 
                                                                         == 
                                                                         (0x0000007fU 
                                                                          & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
                                                                        || ((1U 
                                                                             & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_hae399222__0))) 
                                                                            && (0x23U 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.core__DOT__res_sched__DOT__ins)))))))))))));
    vlSelfRef.core__DOT__rs_input[0U] = ((0x00001fffU 
                                          & vlSelfRef.core__DOT__rs_input[0U]) 
                                         | ((IData)(
                                                    (((QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_j)) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_k)))) 
                                            << 0x0000000dU));
    vlSelfRef.core__DOT__rs_input[1U] = (((IData)((
                                                   ((QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_j)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_k)))) 
                                          >> 0x00000013U) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_j)) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_k))) 
                                                     >> 0x00000020U)) 
                                            << 0x0000000dU));
    vlSelfRef.core__DOT__rs_input[2U] = ((0x001fe000U 
                                          & vlSelfRef.core__DOT__rs_input[2U]) 
                                         | (0x001fffffU 
                                            & ((IData)(
                                                       ((((QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_j)) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__V_k))) 
                                                        >> 0x00000020U)) 
                                               >> 0x00000013U)));
    vlSelfRef.core__DOT__rs_input[2U] = ((0x00001fffU 
                                          & vlSelfRef.core__DOT__rs_input[2U]) 
                                         | (0x001fe000U 
                                            & (((IData)(vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j) 
                                                << 0x00000011U) 
                                               | (((0x33U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.core__DOT__res_sched__DOT__ins))
                                                    ? 
                                                   (((((IData)(vlSelfRef.core__DOT__Q_k) 
                                                       == 
                                                       (0x0000000fU 
                                                        & (IData)(
                                                                  (vlSelfRef.core__DOT__CDB_out 
                                                                   >> 0x00000022U)))) 
                                                      & (0U 
                                                         != 
                                                         (0x0000000fU 
                                                          & (IData)(
                                                                    (vlSelfRef.core__DOT__CDB_out 
                                                                     >> 0x00000022U))))) 
                                                     & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelfRef.core__DOT__rs2reg_busy)
                                                      ? 
                                                     ((IData)(vlSelfRef.core__DOT__rs2rob_ready)
                                                       ? 0U
                                                       : (IData)(vlSelfRef.core__DOT__Q_k))
                                                      : 0U))
                                                    : 
                                                   ((IData)(vlSelfRef.core__DOT__res_sched__DOT__branch)
                                                     ? 
                                                    (((((IData)(vlSelfRef.core__DOT__Q_k) 
                                                        == 
                                                        (0x0000000fU 
                                                         & (IData)(
                                                                   (vlSelfRef.core__DOT__CDB_out 
                                                                    >> 0x00000022U)))) 
                                                       & (0U 
                                                          != 
                                                          (0x0000000fU 
                                                           & (IData)(
                                                                     (vlSelfRef.core__DOT__CDB_out 
                                                                      >> 0x00000022U))))) 
                                                      & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelfRef.core__DOT__rs2reg_busy)
                                                       ? 
                                                      ((IData)(vlSelfRef.core__DOT__rs2rob_ready)
                                                        ? 0U
                                                        : (IData)(vlSelfRef.core__DOT__Q_k))
                                                       : 0U))
                                                     : 0U)) 
                                                  << 0x0000000dU))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 2U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 2U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus = 0U;
    if (((IData)(vlSelfRef.core__DOT__issue_writes) 
         & (0U != (0x0000001fU & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                  >> 7U))))) {
        vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
            = (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
               | (0x00000000ffffffffULL & ((IData)(1U) 
                                           << (0x0000001fU 
                                               & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                  >> 7U)))));
    }
    vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus = 0U;
    if ((((~ (((IData)(vlSelfRef.core__DOT__commit_unit__DOT__rd) 
               == (0x0000001fU & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                  >> 7U))) & (IData)(vlSelfRef.core__DOT__issue_writes))) 
          & ((0x0000000fU & (vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                             [vlSelfRef.core__DOT__commit_unit__DOT__rd] 
                             >> 1U)) == ((IData)(vlSelfRef.core__DOT__rob_read_enable)
                                          ? (0x0000000fU 
                                             & (vlSelfRef.core__DOT__commit_unit__DOT__head[3U] 
                                                >> 0x0000000aU))
                                          : 0U))) & 
         (0U != (IData)(vlSelfRef.core__DOT__commit_unit__DOT__rd)))) {
        vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
            = (vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
               | (0x00000000ffffffffULL & ((IData)(1U) 
                                           << (IData)(vlSelfRef.core__DOT__commit_unit__DOT__rd))));
    }
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 3U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 3U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 4U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 4U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 5U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 5U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 6U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 6U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 7U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 7U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 8U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 8U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 9U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 9U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                            & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000000aU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000000aU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000000bU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000000bU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000000cU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000000cU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000000dU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000000dU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000000eU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000000eU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000000fU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000000fU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000010U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000010U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000011U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000011U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000012U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000012U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000013U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000013U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000014U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000014U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000015U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000015U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000016U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000016U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000017U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000017U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000018U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000018U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x00000019U) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x00000019U) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000001aU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000001aU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000001bU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000001bU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000001cU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000001cU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000001dU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000001dU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[0U] 
                   & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                  >> 0x0000001eU) | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in 
        = (1U & (((vlSelfRef.core__DOT__fu_bus[2U] 
                   & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                  >> 0x0000001eU) | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                     & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__carry = (1U 
                                                   & (((vlSelfRef.core__DOT__fu_bus[0U] 
                                                        & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                                       >> 0x0000001fU) 
                                                      | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
                                                         & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_0__DOT__negative 
        = ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
           ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1));
    vlSelfRef.core__DOT__adder_fu_1__DOT__carry = (1U 
                                                   & (((vlSelfRef.core__DOT__fu_bus[2U] 
                                                        & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                                       >> 0x0000001fU) 
                                                      | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
                                                         & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1))));
    vlSelfRef.core__DOT__adder_fu_1__DOT__negative 
        = ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
           ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1));
    vlSelfRef.core__DOT__adder_fu_0__DOT____VdfgRegularize_h58454f79_0_0 
        = ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__negative) 
           ^ ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
              ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__carry)));
    vlSelfRef.core__DOT__adder_fu_0__DOT__s = (((((
                                                   ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__negative) 
                                                      << 3U) 
                                                     | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1)) 
                                                        << 2U)) 
                                                    | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1)) 
                                                        << 1U) 
                                                       | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1)))) 
                                                   << 0x0000000cU) 
                                                  | ((((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1)) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1)) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1)))) 
                                                     << 8U)) 
                                                 | (((((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1)) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1)) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1)))) 
                                                     << 4U) 
                                                    | (((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1)))))) 
                                                << 0x00000010U) 
                                               | ((((((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                                        ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1)) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1)) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1)))) 
                                                    << 0x0000000cU) 
                                                   | ((((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1)))) 
                                                      << 8U)) 
                                                  | (((((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1)))) 
                                                      << 4U) 
                                                     | (((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1)) 
                                                            << 1U) 
                                                           | (1U 
                                                              & ((vlSelfRef.core__DOT__ALU_op 
                                                                  >> 2U) 
                                                                 ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1))))))));
    vlSelfRef.core__DOT__adder_fu_1__DOT____VdfgRegularize_h58454f79_0_0 
        = ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__negative) 
           ^ ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
              ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__carry)));
    vlSelfRef.core__DOT__adder_fu_1__DOT__s = (((((
                                                   ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__negative) 
                                                      << 3U) 
                                                     | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1)) 
                                                        << 2U)) 
                                                    | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1)) 
                                                        << 1U) 
                                                       | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1)))) 
                                                   << 0x0000000cU) 
                                                  | ((((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1)) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1)) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1)))) 
                                                     << 8U)) 
                                                 | (((((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                                         ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1)) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1)) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1)))) 
                                                     << 4U) 
                                                    | (((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1)))))) 
                                                << 0x00000010U) 
                                               | ((((((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                                        ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1)) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1)) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1)))) 
                                                    << 0x0000000cU) 
                                                   | ((((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1)))) 
                                                      << 8U)) 
                                                  | (((((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                                                          ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1)) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                                                            ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1)))) 
                                                      << 4U) 
                                                     | (((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                                                           ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                                                             ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1)) 
                                                            << 1U) 
                                                           | (1U 
                                                              & ((vlSelfRef.core__DOT__ALU_op 
                                                                  >> 6U) 
                                                                 ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1))))))));
}

void Vcore___024root___nba_sequent__TOP__0(Vcore___024root* vlSelf);
void Vcore___024root___nba_sequent__TOP__1(Vcore___024root* vlSelf);
void Vcore___024root___ico_comb__TOP__0(Vcore___024root* vlSelf);

void Vcore___024root___eval_nba(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_nba\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcore___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vcore___024root___nba_sequent__TOP__1(vlSelf);
        Vcore___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcore___024root___ico_comb__TOP__0(vlSelf);
    }
}

void Vcore___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vcore___024root___eval_triggers__act(Vcore___024root* vlSelf);
bool Vcore___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vcore___024root___eval_act(Vcore___024root* vlSelf);

bool Vcore___024root___eval_phase__act(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__act\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vcore___024root___eval_triggers__act(vlSelf);
    Vcore___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcore___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vcore___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vcore___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcore___024root___eval_phase__nba(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__nba\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcore___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcore___024root___eval_nba(vlSelf);
        Vcore___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vcore___024root___eval_phase__ico(Vcore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcore___024root___eval(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcore___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("source/core.sv", 7, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vcore___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcore___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("source/core.sv", 7, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcore___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("source/core.sv", 7, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vcore___024root___eval_phase__act(vlSelf));
    } while (Vcore___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vcore___024root___eval_debug_assertions(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_debug_assertions\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
