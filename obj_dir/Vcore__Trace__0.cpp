// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


void Vcore___024root__trace_chg_0_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcore___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_0\n"); );
    // Body
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vcore___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcore___024root__trace_chg_0_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_0_sub_0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<5>/*159:0*/ __Vtemp_13;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelfRef.core__DOT__generate_new_pc__DOT__pipe_taken)) 
                                  << 0x00000026U) | 
                                 (((QData)((IData)(
                                                   (0x63U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)))) 
                                   << 0x00000025U) 
                                  | (((QData)((IData)(
                                                      (0x6fU 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)))) 
                                      << 0x00000024U) 
                                     | (((QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__newpc)))))));
        __Vtemp_1[1U] = (((IData)((((QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pc)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__instruction)))) 
                          << 7U) | (IData)(((((QData)((IData)(vlSelfRef.core__DOT__generate_new_pc__DOT__pipe_taken)) 
                                              << 0x00000026U) 
                                             | (((QData)((IData)(
                                                                 (0x63U 
                                                                  == 
                                                                  (0x0000007fU 
                                                                   & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)))) 
                                                 << 0x00000025U) 
                                                | (((QData)((IData)(
                                                                    (0x6fU 
                                                                     == 
                                                                     (0x0000007fU 
                                                                      & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)))) 
                                                    << 0x00000024U) 
                                                   | (((QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp)) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__newpc)))))) 
                                            >> 0x00000020U)));
        __Vtemp_1[2U] = (((IData)((((QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pc)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__instruction)))) 
                          >> 0x00000019U) | ((IData)(
                                                     ((((QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pc)) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__instruction))) 
                                                      >> 0x00000020U)) 
                                             << 7U));
        __Vtemp_1[3U] = ((IData)(((((QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pc)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__instruction))) 
                                  >> 0x00000020U)) 
                         >> 0x00000019U);
        bufp->chgWData(oldp+0,(__Vtemp_1),103);
        bufp->chgBit(oldp+4,(vlSelfRef.core__DOT____Vcellinp__adder_fu_0__reset));
        bufp->chgIData(oldp+5,(vlSelfRef.core__DOT__fetch_stage__DOT__newpc),32);
        bufp->chgIData(oldp+6,((((~ (IData)(vlSelfRef.core__DOT__mispredicted)) 
                                 & (IData)(vlSelfRef.core__DOT__res_sched__DOT__ps))
                                 ? vlSelfRef.core__DOT__fetch_stage__DOT__pc
                                 : vlSelfRef.core__DOT__fetch_stage__DOT__newpc)),32);
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelfRef.core__DOT__reservation_stations__DOT____VdfgRegularize_h1542825a_0_0) 
                                    | (IData)(vlSelfRef.core__DOT__consumed_bus)))));
        bufp->chgBit(oldp+8,((1U & ((IData)(vlSelfRef.core__DOT__reservation_stations__DOT____VdfgRegularize_h1542825a_0_0) 
                                    | ((IData)(vlSelfRef.core__DOT__consumed_bus) 
                                       >> 1U)))));
        bufp->chgBit(oldp+9,((1U & ((IData)(vlSelfRef.core__DOT__reservation_stations__DOT____VdfgRegularize_h1542825a_0_0) 
                                    | ((IData)(vlSelfRef.core__DOT__consumed_bus) 
                                       >> 2U)))));
        bufp->chgBit(oldp+10,(((IData)(vlSelfRef.core__DOT__reservation_stations__DOT____VdfgRegularize_h1542825a_0_0) 
                               | ((IData)(vlSelfRef.core__DOT__consumed_bus) 
                                  >> 3U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgWData(oldp+11,(vlSelfRef.core__DOT__pipe_out),103);
        bufp->chgIData(oldp+15,((((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0)
                                   ? vlSelfRef.core__DOT__committed_pc
                                   : ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1)
                                       ? 0U : vlSelfRef.core__DOT__fetch_stage__DOT__pc)) 
                                 + ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0)
                                     ? (((~ (IData)(vlSelfRef.core__DOT__commit_result)) 
                                         & (IData)(vlSelfRef.core__DOT__commit_prediction))
                                         ? 4U : ((1U 
                                                  & ((vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                                      >> 1U) 
                                                     & (~ (IData)(vlSelfRef.core__DOT__commit_unit__DOT__empty))))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                                       >> 2U)))
                                                   ? 
                                                  ((vlSelfRef.core__DOT__commit_unit__DOT__head[3U] 
                                                    << 0x0000001cU) 
                                                   | (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                                      >> 4U))
                                                   : 0U)
                                                  : 0U))
                                     : ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1)
                                         ? vlSelfRef.core__DOT__jalr_actual_address
                                         : (((0x63U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                             & (IData)(vlSelfRef.core__DOT__generate_new_pc__DOT__pipe_taken))
                                             ? (((- (IData)(
                                                            (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                             >> 0x0000001fU))) 
                                                 << 0x0000000dU) 
                                                | ((((2U 
                                                      & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                         >> 0x0000001eU)) 
                                                     | (1U 
                                                        & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                           >> 7U))) 
                                                    << 0x0000000bU) 
                                                   | ((0x000007e0U 
                                                       & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                          >> 0x00000014U)) 
                                                      | (0x0000001eU 
                                                         & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                            >> 7U)))))
                                             : ((0x6fU 
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
                                                 : 4U)))))),32);
        bufp->chgIData(oldp+16,(vlSelfRef.core__DOT__committed_pc),32);
        bufp->chgIData(oldp+17,(((1U & ((vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                         >> 1U) & (~ (IData)(vlSelfRef.core__DOT__commit_unit__DOT__empty))))
                                  ? ((0U == (3U & (
                                                   vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                                   >> 2U)))
                                      ? ((vlSelfRef.core__DOT__commit_unit__DOT__head[3U] 
                                          << 0x0000001cU) 
                                         | (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                            >> 4U))
                                      : 0U) : 0U)),32);
        bufp->chgBit(oldp+18,(vlSelfRef.core__DOT__mispredicted));
        bufp->chgBit(oldp+19,(vlSelfRef.core__DOT__commit_prediction));
        bufp->chgBit(oldp+20,(vlSelfRef.core__DOT__commit_result));
        bufp->chgBit(oldp+21,(vlSelfRef.core__DOT__committed_is_branch));
        bufp->chgBit(oldp+22,(((vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                >> 1U) & ((IData)(vlSelfRef.core__DOT__commit_unit__DOT__jalrq_ready) 
                                          & vlSelfRef.core__DOT__commit_unit__DOT__head[2U]))));
        bufp->chgBit(oldp+23,(vlSelfRef.core__DOT__stall));
        bufp->chgIData(oldp+24,(vlSelfRef.core__DOT__rs1reg_data),32);
        bufp->chgIData(oldp+25,(vlSelfRef.core__DOT__rs2reg_data),32);
        bufp->chgCData(oldp+26,(vlSelfRef.core__DOT__ROB_entry),4);
        bufp->chgCData(oldp+27,(vlSelfRef.core__DOT__Q_j),4);
        bufp->chgCData(oldp+28,(vlSelfRef.core__DOT__Q_k),4);
        bufp->chgBit(oldp+29,(vlSelfRef.core__DOT__rs1reg_busy));
        bufp->chgBit(oldp+30,(vlSelfRef.core__DOT__rs2reg_busy));
        bufp->chgWData(oldp+31,(vlSelfRef.core__DOT__rs_input),85);
        __Vtemp_8[1U] = ((IData)(vlSelfRef.core__DOT__res_sched__DOT__branch)
                          ? ((vlSelfRef.core__DOT__res_sched__DOT__curr_branch_pc 
                              << 3U) | (IData)(((((QData)((IData)(
                                                                  (0x0007ffffU 
                                                                   & (- (IData)(
                                                                                (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                                                >> 0x0000001fU)))))) 
                                                  << 0x00000010U) 
                                                 | (QData)((IData)(
                                                                   ((((0x00000080U 
                                                                       & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                                          >> 0x00000018U)) 
                                                                      | ((0x00000040U 
                                                                          & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                                             >> 1U)) 
                                                                         | (0x0000003fU 
                                                                            & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                                               >> 0x00000019U)))) 
                                                                     << 8U) 
                                                                    | (0x000000f0U 
                                                                       & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                                          >> 4U)))))) 
                                                >> 0x00000020U)))
                          : ((3U == (0x0000007fU & vlSelfRef.core__DOT__res_sched__DOT__ins))
                              ? (0x000000f8U & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                >> 4U))
                              : (0x000000f8U & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                >> 4U))));
        __Vtemp_10[0U] = ((0x23U == (0x0000007fU & vlSelfRef.core__DOT__res_sched__DOT__ins))
                           ? (3U | ((IData)((QData)((IData)(vlSelfRef.core__DOT__rs2reg_data))) 
                                    << 3U)) : ((IData)(vlSelfRef.core__DOT__res_sched__DOT__branch)
                                                ? (IData)(
                                                          (((QData)((IData)(
                                                                            (0x0007ffffU 
                                                                             & (- (IData)(
                                                                                (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                                                >> 0x0000001fU)))))) 
                                                            << 0x00000010U) 
                                                           | (QData)((IData)(
                                                                             ((((0x00000080U 
                                                                                & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                                                >> 0x00000018U)) 
                                                                                | ((0x00000040U 
                                                                                & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                                                >> 1U)) 
                                                                                | (0x0000003fU 
                                                                                & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                                                >> 0x00000019U)))) 
                                                                               << 8U) 
                                                                              | (0x000000f0U 
                                                                                & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                                                >> 4U)))))))
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.core__DOT__res_sched__DOT__ins))
                                                    ? 6U
                                                    : 4U)));
        __Vtemp_12[2U] = ((0xfffffff0U & (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                           << 0x0000000aU) 
                                          | (((0x00000020U 
                                               & (((IData)(vlSelfRef.core__DOT__res_sched__DOT__ps)
                                                    ? 
                                                   (vlSelfRef.core__DOT__res_sched__DOT__instr_hold[1U] 
                                                    >> 6U)
                                                    : 
                                                   (vlSelfRef.core__DOT__pipe_out[1U] 
                                                    >> 6U)) 
                                                  << 5U)) 
                                              | (0x0000000fU 
                                                 & ((IData)(vlSelfRef.core__DOT__res_sched__DOT__ps)
                                                     ? 
                                                    vlSelfRef.core__DOT__res_sched__DOT__instr_hold[1U]
                                                     : 
                                                    vlSelfRef.core__DOT__pipe_out[1U]))) 
                                             << 4U))) 
                          | ((((0x23U == (0x0000007fU 
                                          & vlSelfRef.core__DOT__res_sched__DOT__ins))
                                ? (((IData)((QData)((IData)(vlSelfRef.core__DOT__rs2reg_data))) 
                                    >> 0x0000001dU) 
                                   | ((IData)(((QData)((IData)(vlSelfRef.core__DOT__rs2reg_data)) 
                                               >> 0x00000020U)) 
                                      << 3U)) : __Vtemp_8[1U]) 
                              >> 0x0000001fU) | (((0x23U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.core__DOT__res_sched__DOT__ins))
                                                   ? 
                                                  ((IData)(
                                                           ((QData)((IData)(vlSelfRef.core__DOT__rs2reg_data)) 
                                                            >> 0x00000020U)) 
                                                   >> 0x0000001dU)
                                                   : 
                                                  ((IData)(vlSelfRef.core__DOT__res_sched__DOT__branch)
                                                    ? 
                                                   (vlSelfRef.core__DOT__res_sched__DOT__curr_branch_pc 
                                                    >> 0x0000001dU)
                                                    : 0U)) 
                                                 << 1U)));
        __Vtemp_13[0U] = (IData)((((QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__curr_branch_pc)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__ins))));
        __Vtemp_13[1U] = (IData)(((((QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__curr_branch_pc)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.core__DOT__res_sched__DOT__ins))) 
                                  >> 0x00000020U));
        __Vtemp_13[2U] = ((__Vtemp_10[0U] << 1U) | 
                          (0x67U == (0x0000007fU & vlSelfRef.core__DOT__res_sched__DOT__ins)));
        __Vtemp_13[3U] = ((__Vtemp_10[0U] >> 0x0000001fU) 
                          | (((0x23U == (0x0000007fU 
                                         & vlSelfRef.core__DOT__res_sched__DOT__ins))
                               ? (((IData)((QData)((IData)(vlSelfRef.core__DOT__rs2reg_data))) 
                                   >> 0x0000001dU) 
                                  | ((IData)(((QData)((IData)(vlSelfRef.core__DOT__rs2reg_data)) 
                                              >> 0x00000020U)) 
                                     << 3U)) : __Vtemp_8[1U]) 
                             << 1U));
        __Vtemp_13[4U] = __Vtemp_12[2U];
        bufp->chgWData(oldp+34,(__Vtemp_13),142);
        bufp->chgBit(oldp+39,(vlSelfRef.core__DOT__rob_full));
        bufp->chgBit(oldp+40,(vlSelfRef.core__DOT__commit_unit__DOT__empty));
        bufp->chgCData(oldp+41,((0x0000001fU & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+42,((0x0000001fU & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                >> 0x00000014U))),5);
        bufp->chgBit(oldp+43,(vlSelfRef.core__DOT__issue_writes));
        bufp->chgCData(oldp+44,((0x0000001fU & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                >> 7U))),5);
        bufp->chgCData(oldp+45,(vlSelfRef.core__DOT__rs_dest),3);
        bufp->chgBit(oldp+46,(vlSelfRef.core__DOT__RegWrite));
        bufp->chgIData(oldp+47,(vlSelfRef.core__DOT__WriteData),32);
        bufp->chgQData(oldp+48,(vlSelfRef.core__DOT__CDB_out),38);
        bufp->chgCData(oldp+50,(((((2U & vlSelfRef.core__DOT__reservation_stations__DOT__rs3__DOT__q_reg[0U]) 
                                   | (1U & (vlSelfRef.core__DOT__reservation_stations__DOT__rs2__DOT__q_reg[0U] 
                                            >> 1U))) 
                                  << 2U) | ((2U & vlSelfRef.core__DOT__reservation_stations__DOT__rs1__DOT__q_reg[0U]) 
                                            | (1U & 
                                               (vlSelfRef.core__DOT__reservation_stations__DOT__rs0__DOT__q_reg[0U] 
                                                >> 1U))))),4);
        bufp->chgCData(oldp+51,(vlSelfRef.core__DOT__consumed_bus),4);
        bufp->chgWData(oldp+52,(vlSelfRef.core__DOT__rs0_data),77);
        bufp->chgWData(oldp+55,(vlSelfRef.core__DOT__rs1_data),77);
        bufp->chgWData(oldp+58,(vlSelfRef.core__DOT__rs2_data),77);
        bufp->chgWData(oldp+61,(vlSelfRef.core__DOT__rs3_data),77);
        bufp->chgCData(oldp+64,(vlSelfRef.core__DOT__ready_bus),5);
        bufp->chgIData(oldp+65,(vlSelfRef.core__DOT__ROB_entry_bus),20);
        bufp->chgCData(oldp+66,(vlSelfRef.core__DOT__branch_type_bus),6);
        bufp->chgCData(oldp+67,(vlSelfRef.core__DOT__load),2);
        bufp->chgCData(oldp+68,(vlSelfRef.core__DOT__valid_in_bus),5);
        bufp->chgIData(oldp+69,(vlSelfRef.core__DOT__ALU_op),20);
        bufp->chgWData(oldp+70,(vlSelfRef.core__DOT__fu_bus),320);
        bufp->chgCData(oldp+80,(vlSelfRef.core__DOT__yumi_bus),6);
        bufp->chgQData(oldp+81,(vlSelfRef.core__DOT__out_0),38);
        bufp->chgQData(oldp+83,(vlSelfRef.core__DOT__out_1),38);
        bufp->chgQData(oldp+85,((((QData)((IData)(vlSelfRef.core__DOT__mult_fu__DOT__curr_rob)) 
                                  << 0x00000022U) | 
                                 ((QData)((IData)(((IData)(vlSelfRef.core__DOT__mult_fu__DOT__mul_h)
                                                    ? vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__A
                                                    : vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__Q))) 
                                  << 2U))),38);
        bufp->chgQData(oldp+87,((((QData)((IData)(vlSelfRef.core__DOT__div_fu__DOT__curr_rob)) 
                                  << 0x00000022U) | 
                                 ((QData)((IData)((
                                                   (((~ (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b_reg)) 
                                                     & (IData)(vlSelfRef.core__DOT__div_fu__DOT__div)) 
                                                    | ((~ (IData)(vlSelfRef.core__DOT__div_fu__DOT__div)) 
                                                       & (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b_reg)))
                                                    ? vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__Q
                                                    : vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A))) 
                                  << 2U))),38);
        bufp->chgCData(oldp+89,(vlSelfRef.core__DOT__cdb__DOT__valid_out_bus),6);
        bufp->chgQData(oldp+90,((((QData)((IData)(vlSelfRef.core__DOT__data_memory__DOT__mem_rob_entry_reg)) 
                                  << 0x00000022U) | 
                                 ((QData)((IData)(vlSelfRef.core__DOT__data_memory__DOT__mem_result_reg)) 
                                  << 2U))),38);
        bufp->chgWData(oldp+92,(vlSelfRef.core__DOT__lsq_input),79);
        bufp->chgBit(oldp+95,((IData)((0U != (0x6000U 
                                              & vlSelfRef.core__DOT__lsq_input[2U])))));
        bufp->chgBit(oldp+96,(vlSelfRef.core__DOT__lsq_full));
        bufp->chgBit(oldp+97,(((IData)(vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__read_enable) 
                               | (IData)(vlSelfRef.core__DOT__commit_unit__DOT__rd_en_rob))));
        bufp->chgBit(oldp+98,((1U == (3U & (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                            >> 2U)))));
        bufp->chgBit(oldp+99,(vlSelfRef.core__DOT__head_ready));
        bufp->chgBit(oldp+100,((1U & (vlSelfRef.core__DOT__lsq_out[2U] 
                                      >> 0x0000000eU))));
        bufp->chgWData(oldp+101,(vlSelfRef.core__DOT__lsq_out),79);
        bufp->chgBit(oldp+104,(vlSelfRef.core__DOT__commit_unit__DOT__rd_en_rob));
        bufp->chgBit(oldp+105,(vlSelfRef.core__DOT__rob_read_enable));
        bufp->chgWData(oldp+106,(vlSelfRef.core__DOT__commit_unit__DOT__head),142);
        bufp->chgBit(oldp+111,((1U & (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                      >> 1U))));
        bufp->chgCData(oldp+112,(((IData)(vlSelfRef.core__DOT__rob_read_enable)
                                   ? (0x0000000fU & 
                                      (vlSelfRef.core__DOT__commit_unit__DOT__head[4U] 
                                       >> 0x0000000aU))
                                   : 0U)),4);
        bufp->chgBit(oldp+113,(((1U & ((vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                        >> 1U) & (~ (IData)(vlSelfRef.core__DOT__commit_unit__DOT__empty)))) 
                                && ((0U == (3U & (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                                  >> 2U))) 
                                    || ((1U != (3U 
                                                & (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                                   >> 2U))) 
                                        || (IData)(vlSelfRef.core__DOT__commit_unit__DOT__rd_en_rob))))));
        bufp->chgBit(oldp+114,(vlSelfRef.core__DOT__lsq_empty));
        bufp->chgBit(oldp+115,(vlSelfRef.core__DOT__res_sched__DOT__ps));
        bufp->chgQData(oldp+116,((((QData)((IData)(vlSelfRef.core__DOT__shift_fu__DOT__curr_rob)) 
                                   << 0x00000022U) 
                                  | ((QData)((IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_dp__DOT__A)) 
                                     << 2U))),38);
        bufp->chgBit(oldp+118,(((vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                 >> 1U) & ((~ (IData)(vlSelfRef.core__DOT__commit_unit__DOT__empty)) 
                                           & (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                              & (IData)(vlSelfRef.core__DOT__commit_unit__DOT__jalrq_ready))))));
        bufp->chgBit(oldp+119,(vlSelfRef.core__DOT__commit_unit__DOT__jalrq_ready));
        bufp->chgIData(oldp+120,(vlSelfRef.core__DOT__jalr_actual_address),32);
        bufp->chgIData(oldp+121,(((vlSelfRef.core__DOT__indirect_jump_queue__DOT__jalrq_data
                                   [vlSelfRef.core__DOT__indirect_jump_queue__DOT__rptr][2U] 
                                   << 0x00000010U) 
                                  | (vlSelfRef.core__DOT__indirect_jump_queue__DOT__jalrq_data
                                     [vlSelfRef.core__DOT__indirect_jump_queue__DOT__rptr][1U] 
                                     >> 0x00000010U))),32);
        bufp->chgBit(oldp+122,(vlSelfRef.core__DOT__jalrq_full));
        bufp->chgWData(oldp+123,(vlSelfRef.core__DOT__jalrq_input),81);
        bufp->chgCData(oldp+126,(vlSelfRef.core__DOT__commit_unit__DOT__commit_ras_pointer),4);
        bufp->chgIData(oldp+127,(vlSelfRef.core__DOT__rs1rob_data),32);
        bufp->chgIData(oldp+128,(vlSelfRef.core__DOT__rs2rob_data),32);
        bufp->chgBit(oldp+129,(vlSelfRef.core__DOT__rs1rob_ready));
        bufp->chgBit(oldp+130,(vlSelfRef.core__DOT__rs2rob_ready));
        bufp->chgBit(oldp+131,((1U & (IData)(vlSelfRef.core__DOT__valid_in_bus))));
        bufp->chgBit(oldp+132,((1U & (IData)(vlSelfRef.core__DOT__yumi_bus))));
        bufp->chgBit(oldp+133,((1U & (IData)(vlSelfRef.core__DOT__load))));
        bufp->chgCData(oldp+134,((0x0000000fU & vlSelfRef.core__DOT__ALU_op)),4);
        bufp->chgCData(oldp+135,((0x0000000fU & vlSelfRef.core__DOT__ROB_entry_bus)),4);
        bufp->chgIData(oldp+136,(vlSelfRef.core__DOT__fu_bus[0U]),32);
        bufp->chgIData(oldp+137,(vlSelfRef.core__DOT__fu_bus[1U]),32);
        bufp->chgCData(oldp+138,((7U & (IData)(vlSelfRef.core__DOT__branch_type_bus))),3);
        bufp->chgBit(oldp+139,(vlSelfRef.core__DOT____Vcellout__adder_fu_0__valid_out));
        bufp->chgBit(oldp+140,(vlSelfRef.core__DOT____Vcellout__adder_fu_0__ready));
        bufp->chgIData(oldp+141,(vlSelfRef.core__DOT__adder_fu_0__DOT__s),32);
        bufp->chgIData(oldp+142,(((7U == (0x0000000fU 
                                          & vlSelfRef.core__DOT__ALU_op))
                                   ? ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT____VdfgRegularize_h58454f79_0_0)
                                       ? 1U : 0U) : 
                                  ((6U == (0x0000000fU 
                                           & vlSelfRef.core__DOT__ALU_op))
                                    ? ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__carry)
                                        ? 0U : 1U) : 
                                   ((1U == (0x0000000fU 
                                            & vlSelfRef.core__DOT__ALU_op))
                                     ? (vlSelfRef.core__DOT__fu_bus[0U] 
                                        ^ vlSelfRef.core__DOT__fu_bus[1U])
                                     : ((2U == (0x0000000fU 
                                                & vlSelfRef.core__DOT__ALU_op))
                                         ? (vlSelfRef.core__DOT__fu_bus[0U] 
                                            | vlSelfRef.core__DOT__fu_bus[1U])
                                         : ((3U == 
                                             (0x0000000fU 
                                              & vlSelfRef.core__DOT__ALU_op))
                                             ? (vlSelfRef.core__DOT__fu_bus[0U] 
                                                & vlSelfRef.core__DOT__fu_bus[1U])
                                             : vlSelfRef.core__DOT__adder_fu_0__DOT__s)))))),32);
        bufp->chgBit(oldp+143,((0U == vlSelfRef.core__DOT__adder_fu_0__DOT__s)));
        bufp->chgBit(oldp+144,(vlSelfRef.core__DOT__adder_fu_0__DOT__negative));
        bufp->chgBit(oldp+145,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__carry))));
        bufp->chgBit(oldp+146,((1U & (vlSelfRef.core__DOT__ALU_op 
                                      >> 2U))));
        bufp->chgBit(oldp+147,(vlSelfRef.core__DOT__adder_fu_0__DOT__carry));
        bufp->chgBit(oldp+148,((((0U != vlSelfRef.core__DOT__adder_fu_0__DOT__s) 
                                 & (1U == (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)))) 
                                | (((0U == (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus))) 
                                    & (0U == vlSelfRef.core__DOT__adder_fu_0__DOT__s)) 
                                   | (((4U == (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus))) 
                                       & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT____VdfgRegularize_h58454f79_0_0)) 
                                      | (((~ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT____VdfgRegularize_h58454f79_0_0)) 
                                          & (5U == 
                                             (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)))) 
                                         | (((~ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__carry)) 
                                             & (6U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelfRef.core__DOT__branch_type_bus)))) 
                                            | ((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelfRef.core__DOT__branch_type_bus))) 
                                               & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__carry)))))))));
        bufp->chgBit(oldp+149,(vlSelfRef.core__DOT__adder_fu_0__DOT__b_taken));
        bufp->chgBit(oldp+150,(vlSelfRef.core__DOT__adder_fu_0__DOT__load_step1));
        bufp->chgBit(oldp+151,((1U == (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)))));
        bufp->chgBit(oldp+152,((0U == (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)))));
        bufp->chgBit(oldp+153,((4U == (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)))));
        bufp->chgBit(oldp+154,((5U == (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)))));
        bufp->chgBit(oldp+155,((6U == (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)))));
        bufp->chgBit(oldp+156,((7U == (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)))));
        bufp->chgCData(oldp+157,(vlSelfRef.core__DOT__adder_fu_0__DOT__curr_rob),4);
        bufp->chgQData(oldp+158,((((QData)((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__carry)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (((((((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
                                                            << 3U) 
                                                           | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                                              << 2U)) 
                                                          | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in))) 
                                                         << 0x0000000cU) 
                                                        | (((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in))) 
                                                           << 8U)) 
                                                       | ((((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in))) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in))))) 
                                                      << 0x00000010U) 
                                                     | (((((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in))) 
                                                          << 0x0000000cU) 
                                                         | (((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in))) 
                                                            << 8U)) 
                                                        | ((((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in))) 
                                                            << 4U) 
                                                           | ((((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                                                                << 3U) 
                                                               | ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                                                                  << 2U)) 
                                                              | (((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (vlSelfRef.core__DOT__ALU_op 
                                                                       >> 2U))))))))))),33);
        bufp->chgIData(oldp+160,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b),32);
        bufp->chgBit(oldp+161,((1U & vlSelfRef.core__DOT__fu_bus[0U])));
        bufp->chgBit(oldp+162,((1U & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b)));
        bufp->chgBit(oldp+163,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+164,((1U & ((vlSelfRef.core__DOT__ALU_op 
                                       >> 2U) ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1)))));
        bufp->chgBit(oldp+165,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+166,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b))));
        bufp->chgBit(oldp+167,(((vlSelfRef.core__DOT__ALU_op 
                                 >> 2U) & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+168,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+169,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+170,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+171,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+172,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+173,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+174,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+175,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+176,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+177,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+178,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+179,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+180,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+181,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+182,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+183,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+184,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+185,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+186,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+187,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+188,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+189,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+190,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+191,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+192,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+193,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+194,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+195,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+196,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+197,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+198,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+199,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+200,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+201,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+202,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+203,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+204,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+205,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+206,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+207,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+208,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+209,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+210,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+211,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+212,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+213,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+214,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+215,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+216,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+217,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+218,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+219,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+220,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+221,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+222,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+223,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+224,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+225,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+226,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+227,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+228,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+229,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+230,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+231,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+232,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000013U))));
        bufp->chgBit(oldp+233,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000013U))));
        bufp->chgBit(oldp+234,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+235,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+236,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+237,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000013U))));
        bufp->chgBit(oldp+238,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+239,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+240,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 1U))));
        bufp->chgBit(oldp+241,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+242,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+243,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+244,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 1U))));
        bufp->chgBit(oldp+245,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+246,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000014U))));
        bufp->chgBit(oldp+247,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000014U))));
        bufp->chgBit(oldp+248,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+249,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+250,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+251,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000014U))));
        bufp->chgBit(oldp+252,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+253,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+254,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+255,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+256,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+257,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+258,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+259,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+260,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+261,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+262,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+263,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+264,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+265,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+266,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+267,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000017U))));
        bufp->chgBit(oldp+268,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000017U))));
        bufp->chgBit(oldp+269,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+270,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+271,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+272,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000017U))));
        bufp->chgBit(oldp+273,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+274,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000018U))));
        bufp->chgBit(oldp+275,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000018U))));
        bufp->chgBit(oldp+276,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+277,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+278,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+279,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000018U))));
        bufp->chgBit(oldp+280,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+281,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000019U))));
        bufp->chgBit(oldp+282,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000019U))));
        bufp->chgBit(oldp+283,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+284,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+285,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+286,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000019U))));
        bufp->chgBit(oldp+287,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+288,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000001aU))));
        bufp->chgBit(oldp+289,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000001aU))));
        bufp->chgBit(oldp+290,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+291,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+292,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+293,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000001aU))));
        bufp->chgBit(oldp+294,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+295,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000001bU))));
        bufp->chgBit(oldp+296,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000001bU))));
        bufp->chgBit(oldp+297,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+298,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+299,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+300,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000001bU))));
        bufp->chgBit(oldp+301,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+302,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000001cU))));
        bufp->chgBit(oldp+303,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000001cU))));
        bufp->chgBit(oldp+304,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+305,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+306,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+307,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000001cU))));
        bufp->chgBit(oldp+308,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+309,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+310,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+311,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+312,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+313,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+314,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+315,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+316,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+317,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 2U))));
        bufp->chgBit(oldp+318,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+319,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+320,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+321,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 2U))));
        bufp->chgBit(oldp+322,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+323,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+324,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+325,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+326,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+327,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+328,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+329,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+330,((vlSelfRef.core__DOT__fu_bus[0U] 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+331,((vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+332,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+333,(((vlSelfRef.core__DOT__fu_bus[0U] 
                                 & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+334,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+335,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+336,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 3U))));
        bufp->chgBit(oldp+337,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+338,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+339,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+340,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 3U))));
        bufp->chgBit(oldp+341,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+342,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+343,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 4U))));
        bufp->chgBit(oldp+344,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+345,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+346,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+347,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 4U))));
        bufp->chgBit(oldp+348,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+349,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+350,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 5U))));
        bufp->chgBit(oldp+351,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+352,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+353,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+354,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 5U))));
        bufp->chgBit(oldp+355,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+356,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+357,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 6U))));
        bufp->chgBit(oldp+358,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+359,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+360,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+361,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 6U))));
        bufp->chgBit(oldp+362,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+363,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+364,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 7U))));
        bufp->chgBit(oldp+365,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+366,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+367,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+368,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 7U))));
        bufp->chgBit(oldp+369,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+370,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+371,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 8U))));
        bufp->chgBit(oldp+372,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+373,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+374,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+375,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 8U))));
        bufp->chgBit(oldp+376,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+377,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+378,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 9U))));
        bufp->chgBit(oldp+379,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+380,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+381,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 9U))));
        bufp->chgBit(oldp+382,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+383,((1U & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                      >> 1U))));
        bufp->chgBit(oldp+384,((1U & ((IData)(vlSelfRef.core__DOT__yumi_bus) 
                                      >> 1U))));
        bufp->chgBit(oldp+385,((1U & ((IData)(vlSelfRef.core__DOT__load) 
                                      >> 1U))));
        bufp->chgCData(oldp+386,((0x0000000fU & (vlSelfRef.core__DOT__ALU_op 
                                                 >> 4U))),4);
        bufp->chgCData(oldp+387,((0x0000000fU & (vlSelfRef.core__DOT__ROB_entry_bus 
                                                 >> 4U))),4);
        bufp->chgIData(oldp+388,(vlSelfRef.core__DOT__fu_bus[2U]),32);
        bufp->chgIData(oldp+389,(vlSelfRef.core__DOT__fu_bus[3U]),32);
        bufp->chgCData(oldp+390,((7U & ((IData)(vlSelfRef.core__DOT__branch_type_bus) 
                                        >> 3U))),3);
        bufp->chgBit(oldp+391,(vlSelfRef.core__DOT____Vcellout__adder_fu_1__valid_out));
        bufp->chgBit(oldp+392,(vlSelfRef.core__DOT____Vcellout__adder_fu_1__ready));
        bufp->chgIData(oldp+393,(vlSelfRef.core__DOT__adder_fu_1__DOT__s),32);
        bufp->chgIData(oldp+394,(((7U == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__ALU_op 
                                             >> 4U)))
                                   ? ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT____VdfgRegularize_h58454f79_0_0)
                                       ? 1U : 0U) : 
                                  ((6U == (0x0000000fU 
                                           & (vlSelfRef.core__DOT__ALU_op 
                                              >> 4U)))
                                    ? ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__carry)
                                        ? 0U : 1U) : 
                                   ((1U == (0x0000000fU 
                                            & (vlSelfRef.core__DOT__ALU_op 
                                               >> 4U)))
                                     ? (vlSelfRef.core__DOT__fu_bus[2U] 
                                        ^ vlSelfRef.core__DOT__fu_bus[3U])
                                     : ((2U == (0x0000000fU 
                                                & (vlSelfRef.core__DOT__ALU_op 
                                                   >> 4U)))
                                         ? (vlSelfRef.core__DOT__fu_bus[2U] 
                                            | vlSelfRef.core__DOT__fu_bus[3U])
                                         : ((3U == 
                                             (0x0000000fU 
                                              & (vlSelfRef.core__DOT__ALU_op 
                                                 >> 4U)))
                                             ? (vlSelfRef.core__DOT__fu_bus[2U] 
                                                & vlSelfRef.core__DOT__fu_bus[3U])
                                             : vlSelfRef.core__DOT__adder_fu_1__DOT__s)))))),32);
        bufp->chgBit(oldp+395,((0U == vlSelfRef.core__DOT__adder_fu_1__DOT__s)));
        bufp->chgBit(oldp+396,(vlSelfRef.core__DOT__adder_fu_1__DOT__negative));
        bufp->chgBit(oldp+397,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__carry))));
        bufp->chgBit(oldp+398,((1U & (vlSelfRef.core__DOT__ALU_op 
                                      >> 6U))));
        bufp->chgBit(oldp+399,(vlSelfRef.core__DOT__adder_fu_1__DOT__carry));
        bufp->chgBit(oldp+400,(((IData)(((8U == (0x38U 
                                                 & (IData)(vlSelfRef.core__DOT__branch_type_bus))) 
                                         & (0U != vlSelfRef.core__DOT__adder_fu_1__DOT__s))) 
                                | ((IData)(((0U == 
                                             (0x38U 
                                              & (IData)(vlSelfRef.core__DOT__branch_type_bus))) 
                                            & (0U == vlSelfRef.core__DOT__adder_fu_1__DOT__s))) 
                                   | ((IData)(((0x20U 
                                                == 
                                                (0x38U 
                                                 & (IData)(vlSelfRef.core__DOT__branch_type_bus))) 
                                               & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT____VdfgRegularize_h58454f79_0_0))) 
                                      | (((~ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT____VdfgRegularize_h58454f79_0_0)) 
                                          & (0x28U 
                                             == (0x38U 
                                                 & (IData)(vlSelfRef.core__DOT__branch_type_bus)))) 
                                         | (((~ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__carry)) 
                                             & (0x30U 
                                                == 
                                                (0x38U 
                                                 & (IData)(vlSelfRef.core__DOT__branch_type_bus)))) 
                                            | (IData)(
                                                      ((0x38U 
                                                        == 
                                                        (0x38U 
                                                         & (IData)(vlSelfRef.core__DOT__branch_type_bus))) 
                                                       & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__carry))))))))));
        bufp->chgBit(oldp+401,(vlSelfRef.core__DOT__adder_fu_1__DOT__b_taken));
        bufp->chgBit(oldp+402,(vlSelfRef.core__DOT__adder_fu_1__DOT__load_step1));
        bufp->chgBit(oldp+403,((1U == (7U & ((IData)(vlSelfRef.core__DOT__branch_type_bus) 
                                             >> 3U)))));
        bufp->chgBit(oldp+404,((0U == (7U & ((IData)(vlSelfRef.core__DOT__branch_type_bus) 
                                             >> 3U)))));
        bufp->chgBit(oldp+405,((4U == (7U & ((IData)(vlSelfRef.core__DOT__branch_type_bus) 
                                             >> 3U)))));
        bufp->chgBit(oldp+406,((5U == (7U & ((IData)(vlSelfRef.core__DOT__branch_type_bus) 
                                             >> 3U)))));
        bufp->chgBit(oldp+407,((6U == (7U & ((IData)(vlSelfRef.core__DOT__branch_type_bus) 
                                             >> 3U)))));
        bufp->chgBit(oldp+408,((7U == (7U & ((IData)(vlSelfRef.core__DOT__branch_type_bus) 
                                             >> 3U)))));
        bufp->chgCData(oldp+409,(vlSelfRef.core__DOT__adder_fu_1__DOT__curr_rob),4);
        bufp->chgQData(oldp+410,((((QData)((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__carry)) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    (((((((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
                                                            << 3U) 
                                                           | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                                              << 2U)) 
                                                          | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in))) 
                                                         << 0x0000000cU) 
                                                        | (((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in))) 
                                                           << 8U)) 
                                                       | ((((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in))) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in))))) 
                                                      << 0x00000010U) 
                                                     | (((((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in))) 
                                                          << 0x0000000cU) 
                                                         | (((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in))) 
                                                            << 8U)) 
                                                        | ((((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in))) 
                                                            << 4U) 
                                                           | ((((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                                                                << 3U) 
                                                               | ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                                                                  << 2U)) 
                                                              | (((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (vlSelfRef.core__DOT__ALU_op 
                                                                       >> 6U))))))))))),33);
        bufp->chgIData(oldp+412,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b),32);
        bufp->chgBit(oldp+413,((1U & vlSelfRef.core__DOT__fu_bus[2U])));
        bufp->chgBit(oldp+414,((1U & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b)));
        bufp->chgBit(oldp+415,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+416,((1U & ((vlSelfRef.core__DOT__ALU_op 
                                       >> 6U) ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1)))));
        bufp->chgBit(oldp+417,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+418,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b))));
        bufp->chgBit(oldp+419,(((vlSelfRef.core__DOT__ALU_op 
                                 >> 6U) & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+420,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+421,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+422,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+423,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+424,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+425,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+426,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+427,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+428,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+429,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+430,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+431,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+432,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+433,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+434,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+435,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+436,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+437,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+438,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+439,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+440,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+441,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+442,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+443,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+444,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+445,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+446,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+447,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+448,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+449,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+450,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+451,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+452,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+453,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+454,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+455,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+456,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+457,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+458,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+459,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+460,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+461,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+462,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+463,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+464,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+465,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+466,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+467,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+468,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+469,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+470,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+471,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+472,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+473,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+474,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+475,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+476,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+477,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+478,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+479,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+480,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+481,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+482,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+483,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+484,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000013U))));
        bufp->chgBit(oldp+485,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000013U))));
        bufp->chgBit(oldp+486,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+487,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+488,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+489,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000013U))));
        bufp->chgBit(oldp+490,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+491,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 1U))));
        bufp->chgBit(oldp+492,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 1U))));
        bufp->chgBit(oldp+493,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+494,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+495,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+496,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 1U))));
        bufp->chgBit(oldp+497,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+498,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000014U))));
        bufp->chgBit(oldp+499,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000014U))));
        bufp->chgBit(oldp+500,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+501,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+502,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+503,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000014U))));
        bufp->chgBit(oldp+504,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+505,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+506,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+507,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+508,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+509,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+510,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+511,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+512,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+513,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+514,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+515,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+516,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+517,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+518,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+519,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000017U))));
        bufp->chgBit(oldp+520,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000017U))));
        bufp->chgBit(oldp+521,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+522,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+523,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+524,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000017U))));
        bufp->chgBit(oldp+525,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+526,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000018U))));
        bufp->chgBit(oldp+527,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000018U))));
        bufp->chgBit(oldp+528,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+529,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+530,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+531,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000018U))));
        bufp->chgBit(oldp+532,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+533,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000019U))));
        bufp->chgBit(oldp+534,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000019U))));
        bufp->chgBit(oldp+535,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+536,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+537,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+538,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000019U))));
        bufp->chgBit(oldp+539,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+540,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000001aU))));
        bufp->chgBit(oldp+541,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000001aU))));
        bufp->chgBit(oldp+542,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+543,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+544,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+545,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000001aU))));
        bufp->chgBit(oldp+546,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+547,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000001bU))));
        bufp->chgBit(oldp+548,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000001bU))));
        bufp->chgBit(oldp+549,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+550,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+551,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+552,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000001bU))));
        bufp->chgBit(oldp+553,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+554,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000001cU))));
        bufp->chgBit(oldp+555,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000001cU))));
        bufp->chgBit(oldp+556,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+557,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+558,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+559,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000001cU))));
        bufp->chgBit(oldp+560,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+561,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+562,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+563,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+564,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+565,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+566,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+567,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+568,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 2U))));
        bufp->chgBit(oldp+569,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 2U))));
        bufp->chgBit(oldp+570,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+571,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+572,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+573,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 2U))));
        bufp->chgBit(oldp+574,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+575,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+576,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+577,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+578,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+579,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+580,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+581,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+582,((vlSelfRef.core__DOT__fu_bus[2U] 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+583,((vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+584,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+585,(((vlSelfRef.core__DOT__fu_bus[2U] 
                                 & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+586,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+587,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 3U))));
        bufp->chgBit(oldp+588,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 3U))));
        bufp->chgBit(oldp+589,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+590,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+591,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+592,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 3U))));
        bufp->chgBit(oldp+593,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+594,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 4U))));
        bufp->chgBit(oldp+595,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 4U))));
        bufp->chgBit(oldp+596,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+597,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+598,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+599,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 4U))));
        bufp->chgBit(oldp+600,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+601,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 5U))));
        bufp->chgBit(oldp+602,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 5U))));
        bufp->chgBit(oldp+603,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+604,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+605,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+606,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 5U))));
        bufp->chgBit(oldp+607,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+608,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 6U))));
        bufp->chgBit(oldp+609,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 6U))));
        bufp->chgBit(oldp+610,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+611,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+612,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+613,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 6U))));
        bufp->chgBit(oldp+614,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+615,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 7U))));
        bufp->chgBit(oldp+616,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 7U))));
        bufp->chgBit(oldp+617,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+618,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+619,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+620,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 7U))));
        bufp->chgBit(oldp+621,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+622,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 8U))));
        bufp->chgBit(oldp+623,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 8U))));
        bufp->chgBit(oldp+624,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+625,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+626,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+627,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 8U))));
        bufp->chgBit(oldp+628,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+629,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 9U))));
        bufp->chgBit(oldp+630,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 9U))));
        bufp->chgBit(oldp+631,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+632,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+633,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 9U))));
        bufp->chgBit(oldp+634,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+635,((1U & ((IData)(vlSelfRef.core__DOT__yumi_bus) 
                                      >> 4U))));
        bufp->chgBit(oldp+636,(vlSelfRef.core__DOT__data_memory__DOT__mem_valid_reg));
        bufp->chgBit(oldp+637,(vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__read_enable));
        bufp->chgIData(oldp+638,(vlSelfRef.core__DOT__data_memory__DOT__mem_result_reg),32);
        bufp->chgIData(oldp+639,(vlSelfRef.core__DOT__data_memory__DOT__read_data),32);
        bufp->chgCData(oldp+640,(vlSelfRef.core__DOT__data_memory__DOT__mem_rob_entry_reg),4);
        bufp->chgIData(oldp+641,(((vlSelfRef.core__DOT__lsq_out[2U] 
                                   << 0x00000013U) 
                                  | (vlSelfRef.core__DOT__lsq_out[1U] 
                                     >> 0x0000000dU))),32);
        bufp->chgIData(oldp+642,(((vlSelfRef.core__DOT__lsq_out[1U] 
                                   << 0x00000013U) 
                                  | (vlSelfRef.core__DOT__lsq_out[0U] 
                                     >> 0x0000000dU))),32);
        bufp->chgCData(oldp+643,((7U & (vlSelfRef.core__DOT__lsq_out[0U] 
                                        >> 1U))),4);
        bufp->chgIData(oldp+644,(vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__aligned_address),32);
        bufp->chgIData(oldp+645,(vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i),32);
        bufp->chgIData(oldp+646,(vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__j),32);
        bufp->chgBit(oldp+647,((1U & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                      >> 3U))));
        bufp->chgBit(oldp+648,((1U & ((IData)(vlSelfRef.core__DOT__yumi_bus) 
                                      >> 3U))));
        bufp->chgCData(oldp+649,((0x0000000fU & (vlSelfRef.core__DOT__ROB_entry_bus 
                                                 >> 0x0000000cU))),4);
        bufp->chgCData(oldp+650,((0x0000000fU & (vlSelfRef.core__DOT__ALU_op 
                                                 >> 0x0000000cU))),4);
        bufp->chgBit(oldp+651,((5U == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))));
        bufp->chgBit(oldp+652,((0U == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))));
        bufp->chgIData(oldp+653,(vlSelfRef.core__DOT__fu_bus[6U]),32);
        bufp->chgIData(oldp+654,(vlSelfRef.core__DOT__fu_bus[7U]),32);
        bufp->chgBit(oldp+655,(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b));
        bufp->chgBit(oldp+656,(vlSelfRef.core__DOT__div_fu__DOT__loadregs));
        bufp->chgBit(oldp+657,((1U == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))));
        bufp->chgBit(oldp+658,((2U == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))));
        bufp->chgBit(oldp+659,((4U == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))));
        bufp->chgBit(oldp+660,(vlSelfRef.core__DOT__div_fu__DOT__div));
        bufp->chgBit(oldp+661,(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b_reg));
        bufp->chgIData(oldp+662,(vlSelfRef.core__DOT__div_fu__DOT__P),32);
        bufp->chgIData(oldp+663,(vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__Q),32);
        bufp->chgIData(oldp+664,(vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A),32);
        bufp->chgIData(oldp+665,(((((~ (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b_reg)) 
                                    & (IData)(vlSelfRef.core__DOT__div_fu__DOT__div)) 
                                   | ((~ (IData)(vlSelfRef.core__DOT__div_fu__DOT__div)) 
                                      & (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b_reg)))
                                   ? vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__Q
                                   : vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A)),32);
        bufp->chgCData(oldp+666,(vlSelfRef.core__DOT__div_fu__DOT__curr_rob),4);
        bufp->chgBit(oldp+667,(vlSelfRef.core__DOT__div_fu__DOT__sor_msb));
        bufp->chgBit(oldp+668,(vlSelfRef.core__DOT__div_fu__DOT__end_msb));
        bufp->chgIData(oldp+669,(vlSelfRef.core__DOT__div_fu__DOT__abs_sor),32);
        bufp->chgIData(oldp+670,(vlSelfRef.core__DOT__div_fu__DOT__abs_end),32);
        bufp->chgCData(oldp+671,(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps),3);
        bufp->chgCData(oldp+672,(((4U & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                                   ? ((2U & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                                                ? (
                                                   (8U 
                                                    & (IData)(vlSelfRef.core__DOT__yumi_bus))
                                                    ? 0U
                                                    : 5U)
                                                : 5U))
                                   : ((2U & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                                       ? ((1U & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                                           ? 0U : ((IData)(vlSelfRef.core__DOT__div_fu__DOT__div)
                                                    ? 4U
                                                    : 5U))
                                       : ((1U & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
                                           ? ((0U == vlSelfRef.core__DOT__div_fu__DOT__P)
                                               ? 2U
                                               : 1U)
                                           : ((1U & 
                                               ((~ (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b)) 
                                                & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                                   >> 3U)))
                                               ? 1U
                                               : ((
                                                   ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                                    >> 3U) 
                                                   & (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b))
                                                   ? 5U
                                                   : 0U)))))),3);
        bufp->chgIData(oldp+673,(vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__M),32);
        bufp->chgIData(oldp+674,(vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A_temp),32);
        bufp->chgIData(oldp+675,(vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__Q_temp),32);
        bufp->chgQData(oldp+676,(vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__temp),64);
        bufp->chgIData(oldp+678,(vlSelfRef.core__DOT__fetch_stage__DOT__pc),32);
        bufp->chgIData(oldp+679,(vlSelfRef.core__DOT__fetch_stage__DOT__instruction),32);
        bufp->chgBit(oldp+680,((0x63U == (0x0000007fU 
                                          & vlSelfRef.core__DOT__fetch_stage__DOT__instruction))));
        bufp->chgBit(oldp+681,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__pred_bus[
                                      (0x0000001fU 
                                       & (((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                           ^ vlSelfRef.core__DOT__fetch_stage__DOT__pc) 
                                          >> 5U))] 
                                      >> (0x0000001fU 
                                          & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                             ^ vlSelfRef.core__DOT__fetch_stage__DOT__pc))))));
        bufp->chgBit(oldp+682,((0x6fU == (0x0000007fU 
                                          & vlSelfRef.core__DOT__fetch_stage__DOT__instruction))));
        bufp->chgBit(oldp+683,((0x67U == (0x0000007fU 
                                          & vlSelfRef.core__DOT__fetch_stage__DOT__instruction))));
        bufp->chgSData(oldp+684,(vlSelfRef.core__DOT__fetch_stage__DOT__history),10);
        bufp->chgSData(oldp+685,((0x000003ffU & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                                 ^ vlSelfRef.core__DOT__fetch_stage__DOT__pc))),10);
        bufp->chgSData(oldp+686,((0x000003ffU & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                                 ^ vlSelfRef.core__DOT__committed_pc))),10);
        bufp->chgCData(oldp+687,((0x0000007fU & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)),7);
        bufp->chgBit(oldp+688,(vlSelfRef.core__DOT__fetch_stage__DOT__push));
        bufp->chgBit(oldp+689,(vlSelfRef.core__DOT__fetch_stage__DOT__pop));
        bufp->chgCData(oldp+690,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp),4);
        bufp->chgCData(oldp+691,((0x0000001fU & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+692,((0x0000001fU & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                 >> 0x0000000fU))),5);
        bufp->chgSData(oldp+693,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d),10);
        bufp->chgBit(oldp+694,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__0__KET____DOT__biti__q));
        bufp->chgBit(oldp+695,((1U & (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d))));
        bufp->chgBit(oldp+696,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__1__KET____DOT__biti__q));
        bufp->chgBit(oldp+697,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 1U))));
        bufp->chgBit(oldp+698,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__2__KET____DOT__biti__q));
        bufp->chgBit(oldp+699,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 2U))));
        bufp->chgBit(oldp+700,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__3__KET____DOT__biti__q));
        bufp->chgBit(oldp+701,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 3U))));
        bufp->chgBit(oldp+702,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__4__KET____DOT__biti__q));
        bufp->chgBit(oldp+703,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 4U))));
        bufp->chgBit(oldp+704,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__5__KET____DOT__biti__q));
        bufp->chgBit(oldp+705,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 5U))));
        bufp->chgBit(oldp+706,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__6__KET____DOT__biti__q));
        bufp->chgBit(oldp+707,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 6U))));
        bufp->chgBit(oldp+708,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__7__KET____DOT__biti__q));
        bufp->chgBit(oldp+709,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 7U))));
        bufp->chgBit(oldp+710,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__8__KET____DOT__biti__q));
        bufp->chgBit(oldp+711,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 8U))));
        bufp->chgBit(oldp+712,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__9__KET____DOT__biti__q));
        bufp->chgBit(oldp+713,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 9U))));
        bufp->chgWData(oldp+714,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus),1024);
        bufp->chgWData(oldp+746,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__pred_bus),1024);
        bufp->chgBit(oldp+778,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__0__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+779,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U])));
        bufp->chgCData(oldp+780,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__0__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+781,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__0__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+782,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1000__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+783,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 8U))));
        bufp->chgCData(oldp+784,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1000__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+785,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1000__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+786,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1001__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+787,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 9U))));
        bufp->chgCData(oldp+788,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1001__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+789,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1001__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+790,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1002__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+791,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+792,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1002__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+793,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1002__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+794,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1003__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+795,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000000bU))));
        bufp->chgCData(oldp+796,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1003__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+797,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1003__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+798,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1004__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+799,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000000cU))));
        bufp->chgCData(oldp+800,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1004__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+801,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1004__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+802,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1005__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+803,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000000dU))));
        bufp->chgCData(oldp+804,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1005__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+805,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1005__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+806,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1006__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+807,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000000eU))));
        bufp->chgCData(oldp+808,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1006__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+809,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1006__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+810,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1007__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+811,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000000fU))));
        bufp->chgCData(oldp+812,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1007__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+813,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1007__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+814,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1008__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+815,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000010U))));
        bufp->chgCData(oldp+816,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1008__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+817,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1008__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+818,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1009__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+819,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+820,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1009__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+821,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1009__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+822,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__100__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+823,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 4U))));
        bufp->chgCData(oldp+824,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__100__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+825,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__100__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+826,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1010__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+827,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000012U))));
        bufp->chgCData(oldp+828,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1010__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+829,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1010__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+830,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1011__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+831,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000013U))));
        bufp->chgCData(oldp+832,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1011__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+833,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1011__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+834,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1012__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+835,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000014U))));
        bufp->chgCData(oldp+836,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1012__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+837,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1012__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+838,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1013__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+839,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000015U))));
        bufp->chgCData(oldp+840,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1013__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+841,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1013__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+842,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1014__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+843,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000016U))));
        bufp->chgCData(oldp+844,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1014__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+845,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1014__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+846,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1015__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+847,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000017U))));
        bufp->chgCData(oldp+848,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1015__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+849,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1015__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+850,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1016__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+851,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000018U))));
        bufp->chgCData(oldp+852,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1016__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+853,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1016__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+854,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1017__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+855,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000019U))));
        bufp->chgCData(oldp+856,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1017__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+857,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1017__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+858,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1018__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+859,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000001aU))));
        bufp->chgCData(oldp+860,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1018__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+861,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1018__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+862,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1019__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+863,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000001bU))));
        bufp->chgCData(oldp+864,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1019__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+865,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1019__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+866,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__101__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+867,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 5U))));
        bufp->chgCData(oldp+868,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__101__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+869,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__101__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+870,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1020__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+871,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000001cU))));
        bufp->chgCData(oldp+872,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1020__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+873,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1020__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+874,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1021__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+875,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000001dU))));
        bufp->chgCData(oldp+876,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1021__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+877,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1021__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+878,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1022__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+879,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000001eU))));
        bufp->chgCData(oldp+880,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1022__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+881,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1022__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+882,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1023__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+883,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                >> 0x0000001fU)));
        bufp->chgCData(oldp+884,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1023__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+885,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1023__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+886,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__102__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+887,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 6U))));
        bufp->chgCData(oldp+888,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__102__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+889,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__102__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+890,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__103__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+891,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 7U))));
        bufp->chgCData(oldp+892,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__103__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+893,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__103__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+894,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__104__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+895,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 8U))));
        bufp->chgCData(oldp+896,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__104__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+897,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__104__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+898,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__105__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+899,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 9U))));
        bufp->chgCData(oldp+900,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__105__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+901,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__105__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+902,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__106__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+903,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+904,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__106__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+905,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__106__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+906,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__107__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+907,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000000bU))));
        bufp->chgCData(oldp+908,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__107__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+909,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__107__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+910,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__108__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+911,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000000cU))));
        bufp->chgCData(oldp+912,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__108__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+913,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__108__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+914,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__109__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+915,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000000dU))));
        bufp->chgCData(oldp+916,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__109__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+917,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__109__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+918,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__10__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+919,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+920,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__10__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+921,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__10__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+922,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__110__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+923,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000000eU))));
        bufp->chgCData(oldp+924,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__110__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+925,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__110__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+926,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__111__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+927,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000000fU))));
        bufp->chgCData(oldp+928,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__111__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+929,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__111__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+930,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__112__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+931,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x00000010U))));
        bufp->chgCData(oldp+932,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__112__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+933,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__112__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+934,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__113__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+935,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+936,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__113__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+937,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__113__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+938,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__114__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+939,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x00000012U))));
        bufp->chgCData(oldp+940,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__114__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+941,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__114__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+942,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__115__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+943,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x00000013U))));
        bufp->chgCData(oldp+944,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__115__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+945,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__115__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+946,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__116__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+947,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x00000014U))));
        bufp->chgCData(oldp+948,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__116__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+949,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__116__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+950,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__117__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+951,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x00000015U))));
        bufp->chgCData(oldp+952,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__117__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+953,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__117__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+954,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__118__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+955,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x00000016U))));
        bufp->chgCData(oldp+956,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__118__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+957,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__118__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+958,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__119__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+959,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x00000017U))));
        bufp->chgCData(oldp+960,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__119__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+961,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__119__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+962,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__11__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+963,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                      >> 0x0000000bU))));
        bufp->chgCData(oldp+964,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__11__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+965,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__11__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+966,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__120__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+967,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x00000018U))));
        bufp->chgCData(oldp+968,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__120__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+969,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__120__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+970,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__121__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+971,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x00000019U))));
        bufp->chgCData(oldp+972,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__121__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+973,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__121__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+974,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__122__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+975,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000001aU))));
        bufp->chgCData(oldp+976,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__122__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+977,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__122__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+978,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__123__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+979,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000001bU))));
        bufp->chgCData(oldp+980,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__123__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+981,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__123__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+982,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__124__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+983,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000001cU))));
        bufp->chgCData(oldp+984,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__124__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+985,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__124__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+986,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__125__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+987,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000001dU))));
        bufp->chgCData(oldp+988,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__125__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+989,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__125__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+990,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__126__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+991,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000001eU))));
        bufp->chgCData(oldp+992,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__126__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+993,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__126__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+994,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__127__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+995,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                >> 0x0000001fU)));
        bufp->chgCData(oldp+996,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__127__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+997,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__127__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+998,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__128__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+999,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U])));
        bufp->chgCData(oldp+1000,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__128__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1001,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__128__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1002,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__129__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1003,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1004,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__129__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1005,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__129__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1006,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__12__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1007,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1008,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__12__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1009,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__12__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1010,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__130__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1011,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1012,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__130__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1013,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__130__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1014,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__131__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1015,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 3U))));
        bufp->chgCData(oldp+1016,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__131__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1017,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__131__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1018,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__132__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1019,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 4U))));
        bufp->chgCData(oldp+1020,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__132__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1021,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__132__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1022,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__133__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1023,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 5U))));
        bufp->chgCData(oldp+1024,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__133__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1025,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__133__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1026,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__134__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1027,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1028,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__134__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1029,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__134__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1030,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__135__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1031,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1032,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__135__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1033,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__135__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1034,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__136__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1035,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 8U))));
        bufp->chgCData(oldp+1036,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__136__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1037,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__136__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1038,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__137__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1039,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1040,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__137__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1041,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__137__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1042,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__138__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1043,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1044,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__138__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1045,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__138__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1046,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__139__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1047,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+1048,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__139__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1049,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__139__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1050,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__13__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1051,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1052,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__13__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1053,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__13__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1054,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__140__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1055,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1056,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__140__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1057,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__140__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1058,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__141__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1059,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1060,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__141__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1061,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__141__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1062,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__142__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1063,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1064,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__142__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1065,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__142__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1066,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__143__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1067,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1068,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__143__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1069,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__143__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1070,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__144__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1071,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1072,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__144__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1073,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__144__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1074,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__145__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1075,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1076,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__145__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1077,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__145__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1078,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__146__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1079,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1080,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__146__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1081,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__146__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1082,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__147__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1083,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1084,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__147__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1085,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__147__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1086,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__148__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1087,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1088,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__148__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1089,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__148__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1090,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__149__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1091,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1092,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__149__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1093,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__149__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1094,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__14__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1095,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1096,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__14__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1097,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__14__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1098,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__150__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1099,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1100,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__150__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1101,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__150__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1102,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__151__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1103,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1104,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__151__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1105,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__151__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1106,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__152__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1107,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1108,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__152__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1109,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__152__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1110,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__153__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1111,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1112,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__153__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1113,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__153__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1114,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__154__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1115,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1116,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__154__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1117,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__154__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1118,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__155__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1119,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1120,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__155__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1121,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__155__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1122,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__156__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1123,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1124,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__156__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1125,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__156__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1126,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__157__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1127,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1128,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__157__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1129,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__157__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1130,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__158__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1131,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1132,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__158__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1133,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__158__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1134,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__159__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1135,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1136,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__159__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1137,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__159__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1138,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__15__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1139,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1140,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__15__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1141,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__15__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1142,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__160__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1143,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U])));
        bufp->chgCData(oldp+1144,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__160__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1145,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__160__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1146,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__161__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1147,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1148,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__161__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1149,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__161__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1150,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__162__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1151,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1152,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__162__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1153,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__162__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1154,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__163__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1155,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 3U))));
        bufp->chgCData(oldp+1156,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__163__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1157,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__163__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1158,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__164__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1159,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 4U))));
        bufp->chgCData(oldp+1160,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__164__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1161,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__164__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1162,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__165__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1163,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 5U))));
        bufp->chgCData(oldp+1164,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__165__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1165,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__165__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1166,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__166__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1167,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1168,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__166__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1169,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__166__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1170,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__167__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1171,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1172,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__167__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1173,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__167__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1174,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__168__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1175,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 8U))));
        bufp->chgCData(oldp+1176,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__168__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1177,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__168__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1178,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__169__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1179,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1180,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__169__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1181,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__169__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1182,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__16__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1183,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1184,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__16__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1185,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__16__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1186,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__170__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1187,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1188,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__170__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1189,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__170__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1190,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__171__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1191,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+1192,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__171__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1193,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__171__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1194,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__172__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1195,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1196,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__172__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1197,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__172__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1198,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__173__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1199,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1200,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__173__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1201,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__173__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1202,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__174__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1203,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1204,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__174__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1205,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__174__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1206,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__175__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1207,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1208,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__175__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1209,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__175__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1210,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__176__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1211,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1212,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__176__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1213,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__176__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1214,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__177__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1215,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1216,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__177__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1217,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__177__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1218,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__178__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1219,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1220,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__178__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1221,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__178__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1222,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__179__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1223,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1224,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__179__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1225,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__179__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1226,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__17__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1227,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1228,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__17__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1229,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__17__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1230,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__180__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1231,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1232,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__180__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1233,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__180__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1234,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__181__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1235,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1236,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__181__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1237,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__181__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1238,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__182__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1239,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1240,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__182__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1241,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__182__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1242,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__183__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1243,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1244,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__183__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1245,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__183__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1246,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__184__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1247,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1248,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__184__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1249,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__184__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1250,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__185__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1251,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1252,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__185__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1253,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__185__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1254,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__186__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1255,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1256,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__186__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1257,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__186__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1258,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__187__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1259,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1260,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__187__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1261,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__187__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1262,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__188__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1263,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1264,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__188__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1265,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__188__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1266,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__189__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1267,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1268,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__189__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1269,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__189__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1270,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__18__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1271,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1272,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__18__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1273,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__18__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1274,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__190__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1275,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1276,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__190__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1277,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__190__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1278,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__191__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1279,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1280,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__191__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1281,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__191__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1282,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__192__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1283,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U])));
        bufp->chgCData(oldp+1284,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__192__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1285,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__192__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1286,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__193__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1287,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1288,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__193__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1289,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__193__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1290,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__194__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1291,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1292,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__194__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1293,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__194__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1294,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__195__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1295,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 3U))));
        bufp->chgCData(oldp+1296,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__195__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1297,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__195__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1298,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__196__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1299,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 4U))));
        bufp->chgCData(oldp+1300,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__196__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1301,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__196__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1302,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__197__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1303,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 5U))));
        bufp->chgCData(oldp+1304,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__197__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1305,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__197__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1306,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__198__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1307,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1308,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__198__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1309,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__198__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1310,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__199__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1311,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1312,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__199__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1313,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__199__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1314,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__19__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1315,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1316,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__19__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1317,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__19__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1318,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1319,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1320,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1321,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1322,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__200__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1323,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 8U))));
        bufp->chgCData(oldp+1324,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__200__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1325,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__200__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1326,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__201__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1327,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1328,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__201__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1329,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__201__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1330,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__202__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1331,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1332,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__202__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1333,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__202__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1334,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__203__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1335,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+1336,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__203__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1337,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__203__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1338,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__204__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1339,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1340,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__204__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1341,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__204__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1342,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__205__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1343,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1344,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__205__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1345,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__205__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1346,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__206__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1347,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1348,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__206__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1349,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__206__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1350,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__207__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1351,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1352,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__207__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1353,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__207__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1354,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__208__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1355,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1356,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__208__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1357,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__208__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1358,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__209__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1359,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1360,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__209__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1361,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__209__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1362,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__20__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1363,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1364,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__20__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1365,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__20__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1366,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__210__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1367,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1368,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__210__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1369,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__210__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1370,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__211__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1371,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1372,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__211__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1373,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__211__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1374,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__212__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1375,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1376,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__212__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1377,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__212__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1378,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__213__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1379,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1380,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__213__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1381,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__213__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1382,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__214__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1383,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1384,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__214__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1385,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__214__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1386,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__215__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1387,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1388,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__215__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1389,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__215__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1390,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__216__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1391,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1392,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__216__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1393,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__216__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1394,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__217__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1395,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1396,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__217__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1397,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__217__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1398,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__218__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1399,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1400,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__218__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1401,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__218__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1402,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__219__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1403,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1404,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__219__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1405,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__219__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1406,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__21__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1407,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1408,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__21__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1409,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__21__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1410,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__220__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1411,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1412,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__220__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1413,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__220__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1414,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__221__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1415,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1416,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__221__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1417,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__221__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1418,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__222__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1419,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1420,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__222__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1421,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__222__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1422,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__223__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1423,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1424,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__223__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1425,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__223__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1426,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__224__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1427,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U])));
        bufp->chgCData(oldp+1428,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__224__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1429,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__224__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1430,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__225__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1431,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1432,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__225__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1433,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__225__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1434,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__226__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1435,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1436,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__226__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1437,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__226__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1438,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__227__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1439,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 3U))));
        bufp->chgCData(oldp+1440,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__227__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1441,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__227__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1442,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__228__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1443,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 4U))));
        bufp->chgCData(oldp+1444,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__228__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1445,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__228__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1446,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__229__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1447,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 5U))));
        bufp->chgCData(oldp+1448,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__229__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1449,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__229__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1450,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__22__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1451,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1452,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__22__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1453,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__22__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1454,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__230__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1455,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1456,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__230__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1457,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__230__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1458,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__231__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1459,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1460,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__231__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1461,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__231__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1462,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__232__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1463,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 8U))));
        bufp->chgCData(oldp+1464,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__232__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1465,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__232__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1466,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__233__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1467,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1468,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__233__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1469,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__233__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1470,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__234__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1471,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1472,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__234__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1473,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__234__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1474,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__235__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1475,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+1476,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__235__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1477,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__235__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1478,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__236__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1479,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1480,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__236__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1481,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__236__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1482,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__237__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1483,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1484,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__237__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1485,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__237__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1486,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__238__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1487,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1488,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__238__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1489,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__238__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1490,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__239__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1491,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1492,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__239__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1493,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__239__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1494,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__23__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1495,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1496,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__23__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1497,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__23__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1498,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__240__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1499,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1500,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__240__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1501,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__240__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1502,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__241__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1503,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1504,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__241__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1505,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__241__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1506,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__242__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1507,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1508,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__242__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1509,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__242__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1510,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__243__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1511,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1512,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__243__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1513,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__243__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1514,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__244__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1515,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1516,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__244__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1517,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__244__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1518,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__245__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1519,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1520,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__245__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1521,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__245__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1522,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__246__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1523,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1524,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__246__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1525,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__246__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1526,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__247__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1527,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1528,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__247__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1529,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__247__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1530,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__248__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1531,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1532,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__248__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1533,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__248__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1534,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__249__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1535,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1536,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__249__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1537,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__249__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1538,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__24__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1539,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1540,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__24__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1541,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__24__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1542,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__250__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1543,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1544,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__250__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1545,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__250__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1546,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__251__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1547,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1548,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__251__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1549,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__251__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1550,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__252__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1551,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1552,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__252__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1553,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__252__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1554,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__253__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1555,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1556,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__253__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1557,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__253__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1558,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__254__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1559,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1560,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__254__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1561,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__254__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1562,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__255__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1563,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1564,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__255__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1565,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__255__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1566,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__256__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1567,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U])));
        bufp->chgCData(oldp+1568,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__256__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1569,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__256__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1570,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__257__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1571,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1572,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__257__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1573,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__257__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1574,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__258__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1575,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1576,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__258__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1577,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__258__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1578,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__259__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1579,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 3U))));
        bufp->chgCData(oldp+1580,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__259__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1581,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__259__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1582,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__25__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1583,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1584,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__25__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1585,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__25__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1586,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__260__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1587,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 4U))));
        bufp->chgCData(oldp+1588,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__260__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1589,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__260__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1590,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__261__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1591,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 5U))));
        bufp->chgCData(oldp+1592,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__261__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1593,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__261__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1594,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__262__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1595,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1596,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__262__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1597,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__262__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1598,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__263__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1599,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1600,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__263__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1601,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__263__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1602,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__264__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1603,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 8U))));
        bufp->chgCData(oldp+1604,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__264__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1605,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__264__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1606,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__265__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1607,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1608,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__265__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1609,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__265__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1610,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__266__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1611,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1612,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__266__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1613,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__266__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1614,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__267__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1615,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+1616,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__267__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1617,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__267__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1618,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__268__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1619,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1620,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__268__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1621,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__268__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1622,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__269__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1623,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1624,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__269__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1625,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__269__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1626,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__26__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1627,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1628,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__26__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1629,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__26__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1630,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__270__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1631,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1632,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__270__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1633,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__270__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1634,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__271__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1635,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1636,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__271__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1637,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__271__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1638,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__272__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1639,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1640,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__272__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1641,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__272__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1642,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__273__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1643,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1644,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__273__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1645,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__273__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1646,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__274__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1647,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1648,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__274__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1649,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__274__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1650,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__275__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1651,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1652,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__275__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1653,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__275__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1654,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__276__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1655,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1656,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__276__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1657,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__276__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1658,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__277__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1659,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1660,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__277__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1661,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__277__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1662,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__278__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1663,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1664,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__278__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1665,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__278__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1666,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__279__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1667,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1668,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__279__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1669,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__279__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1670,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__27__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1671,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1672,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__27__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1673,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__27__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1674,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__280__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1675,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1676,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__280__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1677,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__280__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1678,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__281__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1679,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1680,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__281__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1681,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__281__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1682,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__282__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1683,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1684,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__282__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1685,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__282__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1686,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__283__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1687,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1688,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__283__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1689,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__283__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1690,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__284__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1691,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1692,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__284__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1693,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__284__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1694,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__285__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1695,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1696,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__285__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1697,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__285__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1698,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__286__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1699,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1700,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__286__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1701,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__286__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1702,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__287__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1703,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1704,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__287__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1705,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__287__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1706,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__288__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1707,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U])));
        bufp->chgCData(oldp+1708,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__288__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1709,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__288__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1710,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__289__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1711,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1712,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__289__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1713,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__289__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1714,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__28__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1715,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1716,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__28__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1717,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__28__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1718,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__290__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1719,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1720,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__290__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1721,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__290__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1722,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__291__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1723,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 3U))));
        bufp->chgCData(oldp+1724,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__291__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1725,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__291__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1726,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__292__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1727,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 4U))));
        bufp->chgCData(oldp+1728,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__292__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1729,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__292__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1730,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__293__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1731,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 5U))));
        bufp->chgCData(oldp+1732,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__293__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1733,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__293__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1734,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__294__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1735,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1736,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__294__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1737,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__294__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1738,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__295__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1739,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1740,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__295__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1741,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__295__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1742,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__296__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1743,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 8U))));
        bufp->chgCData(oldp+1744,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__296__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1745,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__296__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1746,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__297__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1747,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1748,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__297__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1749,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__297__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1750,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__298__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1751,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1752,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__298__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1753,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__298__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1754,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__299__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1755,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+1756,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__299__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1757,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__299__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1758,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__29__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1759,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1760,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__29__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1761,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__29__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1762,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__2__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1763,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1764,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__2__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1765,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__2__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1766,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__300__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1767,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1768,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__300__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1769,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__300__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1770,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__301__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1771,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1772,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__301__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1773,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__301__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1774,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__302__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1775,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1776,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__302__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1777,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__302__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1778,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__303__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1779,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1780,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__303__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1781,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__303__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1782,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__304__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1783,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1784,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__304__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1785,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__304__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1786,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__305__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1787,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1788,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__305__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1789,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__305__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1790,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__306__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1791,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1792,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__306__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1793,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__306__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1794,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__307__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1795,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1796,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__307__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1797,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__307__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1798,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__308__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1799,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1800,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__308__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1801,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__308__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1802,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__309__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1803,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1804,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__309__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1805,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__309__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1806,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__30__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1807,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1808,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__30__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1809,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__30__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1810,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__310__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1811,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1812,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__310__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1813,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__310__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1814,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__311__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1815,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1816,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__311__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1817,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__311__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1818,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__312__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1819,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1820,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__312__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1821,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__312__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1822,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__313__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1823,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1824,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__313__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1825,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__313__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1826,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__314__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1827,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1828,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__314__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1829,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__314__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1830,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__315__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1831,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1832,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__315__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1833,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__315__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1834,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__316__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1835,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1836,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__316__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1837,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__316__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1838,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__317__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1839,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1840,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__317__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1841,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__317__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1842,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__318__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1843,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1844,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__318__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1845,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__318__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1846,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__319__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1847,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1848,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__319__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1849,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__319__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1850,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__31__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1851,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1852,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__31__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1853,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__31__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1854,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__320__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1855,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU])));
        bufp->chgCData(oldp+1856,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__320__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1857,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__320__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1858,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__321__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1859,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 1U))));
        bufp->chgCData(oldp+1860,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__321__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1861,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__321__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1862,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__322__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1863,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 2U))));
        bufp->chgCData(oldp+1864,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__322__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1865,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__322__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1866,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__323__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1867,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 3U))));
        bufp->chgCData(oldp+1868,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__323__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1869,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__323__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1870,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__324__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1871,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 4U))));
        bufp->chgCData(oldp+1872,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__324__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1873,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__324__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1874,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__325__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1875,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 5U))));
        bufp->chgCData(oldp+1876,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__325__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1877,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__325__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1878,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__326__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1879,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 6U))));
        bufp->chgCData(oldp+1880,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__326__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1881,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__326__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1882,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__327__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1883,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 7U))));
        bufp->chgCData(oldp+1884,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__327__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1885,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__327__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1886,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__328__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1887,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 8U))));
        bufp->chgCData(oldp+1888,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__328__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1889,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__328__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1890,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__329__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1891,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 9U))));
        bufp->chgCData(oldp+1892,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__329__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1893,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__329__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1894,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__32__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1895,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U])));
        bufp->chgCData(oldp+1896,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__32__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1897,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__32__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1898,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__330__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1899,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1900,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__330__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1901,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__330__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1902,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__331__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1903,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+1904,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__331__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1905,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__331__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1906,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__332__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1907,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1908,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__332__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1909,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__332__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1910,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__333__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1911,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1912,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__333__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1913,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__333__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1914,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__334__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1915,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1916,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__334__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1917,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__334__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1918,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__335__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1919,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1920,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__335__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1921,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__335__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1922,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__336__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1923,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1924,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__336__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1925,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__336__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1926,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__337__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1927,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1928,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__337__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1929,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__337__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1930,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__338__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1931,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1932,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__338__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1933,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__338__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1934,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__339__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1935,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1936,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__339__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1937,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__339__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1938,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__33__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1939,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1940,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__33__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1941,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__33__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1942,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__340__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1943,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1944,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__340__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1945,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__340__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1946,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__341__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1947,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1948,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__341__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1949,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__341__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1950,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__342__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1951,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1952,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__342__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1953,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__342__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1954,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__343__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1955,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1956,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__343__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1957,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__343__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1958,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__344__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1959,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1960,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__344__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1961,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__344__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1962,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__345__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1963,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1964,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__345__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1965,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__345__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1966,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__346__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1967,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1968,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__346__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1969,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__346__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1970,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__347__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1971,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1972,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__347__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1973,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__347__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1974,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__348__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1975,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1976,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__348__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1977,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__348__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1978,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__349__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1979,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1980,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__349__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1981,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__349__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1982,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__34__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1983,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1984,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__34__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1985,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__34__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1986,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__350__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1987,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1988,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__350__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1989,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__350__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1990,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__351__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1991,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1992,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__351__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1993,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__351__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1994,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__352__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1995,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU])));
        bufp->chgCData(oldp+1996,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__352__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1997,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__352__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1998,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__353__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1999,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 1U))));
        bufp->chgCData(oldp+2000,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__353__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2001,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__353__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2002,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__354__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2003,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 2U))));
        bufp->chgCData(oldp+2004,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__354__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2005,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__354__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2006,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__355__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2007,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 3U))));
        bufp->chgCData(oldp+2008,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__355__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2009,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__355__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2010,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__356__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2011,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 4U))));
        bufp->chgCData(oldp+2012,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__356__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2013,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__356__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2014,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__357__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2015,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 5U))));
        bufp->chgCData(oldp+2016,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__357__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2017,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__357__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2018,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__358__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2019,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 6U))));
        bufp->chgCData(oldp+2020,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__358__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2021,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__358__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2022,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__359__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2023,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 7U))));
        bufp->chgCData(oldp+2024,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__359__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2025,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__359__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2026,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__35__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2027,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 3U))));
        bufp->chgCData(oldp+2028,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__35__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2029,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__35__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2030,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__360__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2031,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 8U))));
        bufp->chgCData(oldp+2032,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__360__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2033,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__360__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2034,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__361__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2035,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 9U))));
        bufp->chgCData(oldp+2036,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__361__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2037,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__361__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2038,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__362__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2039,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2040,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__362__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2041,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__362__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2042,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__363__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2043,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2044,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__363__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2045,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__363__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2046,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__364__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2047,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2048,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__364__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2049,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__364__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2050,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__365__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2051,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2052,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__365__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2053,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__365__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2054,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__366__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2055,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2056,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__366__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2057,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__366__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2058,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__367__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2059,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2060,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__367__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2061,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__367__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2062,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__368__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2063,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2064,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__368__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2065,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__368__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2066,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__369__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2067,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2068,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__369__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2069,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__369__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2070,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__36__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2071,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 4U))));
        bufp->chgCData(oldp+2072,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__36__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2073,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__36__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2074,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__370__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2075,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2076,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__370__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2077,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__370__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2078,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__371__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2079,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2080,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__371__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2081,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__371__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2082,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__372__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2083,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2084,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__372__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2085,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__372__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2086,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__373__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2087,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2088,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__373__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2089,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__373__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2090,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__374__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2091,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2092,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__374__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2093,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__374__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2094,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__375__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2095,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2096,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__375__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2097,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__375__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2098,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__376__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2099,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+2100,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__376__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2101,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__376__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2102,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__377__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2103,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+2104,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__377__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2105,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__377__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2106,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__378__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2107,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+2108,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__378__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2109,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__378__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2110,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__379__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2111,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+2112,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__379__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2113,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__379__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2114,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__37__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2115,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 5U))));
        bufp->chgCData(oldp+2116,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__37__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2117,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__37__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2118,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__380__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2119,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+2120,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__380__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2121,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__380__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2122,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__381__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2123,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+2124,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__381__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2125,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__381__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2126,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__382__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2127,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+2128,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__382__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2129,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__382__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2130,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__383__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2131,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+2132,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__383__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2133,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__383__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2134,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__384__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2135,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU])));
        bufp->chgCData(oldp+2136,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__384__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2137,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__384__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2138,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__385__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2139,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 1U))));
        bufp->chgCData(oldp+2140,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__385__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2141,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__385__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2142,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__386__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2143,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 2U))));
        bufp->chgCData(oldp+2144,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__386__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2145,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__386__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2146,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__387__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2147,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 3U))));
        bufp->chgCData(oldp+2148,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__387__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2149,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__387__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2150,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__388__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2151,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 4U))));
        bufp->chgCData(oldp+2152,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__388__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2153,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__388__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2154,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__389__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2155,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 5U))));
        bufp->chgCData(oldp+2156,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__389__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2157,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__389__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2158,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__38__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2159,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 6U))));
        bufp->chgCData(oldp+2160,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__38__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2161,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__38__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2162,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__390__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2163,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 6U))));
        bufp->chgCData(oldp+2164,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__390__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2165,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__390__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2166,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__391__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2167,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 7U))));
        bufp->chgCData(oldp+2168,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__391__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2169,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__391__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2170,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__392__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2171,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 8U))));
        bufp->chgCData(oldp+2172,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__392__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2173,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__392__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2174,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__393__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2175,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 9U))));
        bufp->chgCData(oldp+2176,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__393__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2177,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__393__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2178,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__394__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2179,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2180,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__394__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2181,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__394__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2182,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__395__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2183,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2184,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__395__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2185,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__395__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2186,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__396__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2187,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2188,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__396__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2189,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__396__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2190,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__397__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2191,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2192,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__397__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2193,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__397__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2194,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__398__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2195,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2196,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__398__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2197,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__398__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2198,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__399__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2199,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2200,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__399__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2201,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__399__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2202,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__39__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2203,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 7U))));
        bufp->chgCData(oldp+2204,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__39__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2205,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__39__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2206,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__3__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2207,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 3U))));
        bufp->chgCData(oldp+2208,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__3__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2209,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__3__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2210,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__400__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2211,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2212,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__400__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2213,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__400__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2214,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__401__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2215,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2216,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__401__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2217,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__401__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2218,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__402__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2219,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2220,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__402__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2221,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__402__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2222,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__403__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2223,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2224,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__403__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2225,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__403__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2226,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__404__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2227,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2228,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__404__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2229,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__404__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2230,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__405__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2231,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2232,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__405__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2233,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__405__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2234,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__406__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2235,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2236,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__406__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2237,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__406__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2238,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__407__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2239,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2240,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__407__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2241,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__407__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2242,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__408__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2243,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+2244,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__408__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2245,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__408__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2246,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__409__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2247,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+2248,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__409__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2249,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__409__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2250,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__40__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2251,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 8U))));
        bufp->chgCData(oldp+2252,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__40__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2253,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__40__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2254,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__410__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2255,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+2256,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__410__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2257,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__410__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2258,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__411__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2259,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+2260,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__411__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2261,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__411__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2262,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__412__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2263,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+2264,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__412__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2265,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__412__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2266,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__413__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2267,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+2268,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__413__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2269,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__413__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2270,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__414__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2271,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+2272,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__414__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2273,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__414__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2274,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__415__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2275,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+2276,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__415__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2277,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__415__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2278,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__416__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2279,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU])));
        bufp->chgCData(oldp+2280,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__416__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2281,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__416__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2282,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__417__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2283,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 1U))));
        bufp->chgCData(oldp+2284,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__417__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2285,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__417__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2286,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__418__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2287,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 2U))));
        bufp->chgCData(oldp+2288,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__418__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2289,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__418__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2290,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__419__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2291,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 3U))));
        bufp->chgCData(oldp+2292,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__419__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2293,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__419__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2294,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__41__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2295,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 9U))));
        bufp->chgCData(oldp+2296,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__41__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2297,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__41__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2298,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__420__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2299,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 4U))));
        bufp->chgCData(oldp+2300,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__420__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2301,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__420__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2302,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__421__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2303,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 5U))));
        bufp->chgCData(oldp+2304,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__421__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2305,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__421__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2306,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__422__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2307,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 6U))));
        bufp->chgCData(oldp+2308,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__422__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2309,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__422__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2310,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__423__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2311,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 7U))));
        bufp->chgCData(oldp+2312,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__423__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2313,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__423__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2314,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__424__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2315,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 8U))));
        bufp->chgCData(oldp+2316,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__424__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2317,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__424__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2318,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__425__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2319,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 9U))));
        bufp->chgCData(oldp+2320,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__425__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2321,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__425__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2322,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__426__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2323,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2324,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__426__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2325,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__426__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2326,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__427__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2327,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2328,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__427__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2329,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__427__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2330,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__428__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2331,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2332,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__428__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2333,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__428__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2334,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__429__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2335,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2336,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__429__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2337,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__429__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2338,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__42__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2339,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2340,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__42__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2341,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__42__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2342,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__430__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2343,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2344,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__430__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2345,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__430__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2346,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__431__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2347,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2348,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__431__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2349,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__431__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2350,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__432__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2351,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2352,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__432__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2353,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__432__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2354,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__433__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2355,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2356,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__433__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2357,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__433__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2358,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__434__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2359,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2360,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__434__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2361,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__434__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2362,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__435__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2363,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2364,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__435__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2365,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__435__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2366,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__436__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2367,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2368,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__436__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2369,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__436__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2370,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__437__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2371,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2372,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__437__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2373,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__437__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2374,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__438__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2375,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2376,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__438__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2377,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__438__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2378,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__439__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2379,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2380,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__439__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2381,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__439__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2382,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__43__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2383,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2384,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__43__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2385,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__43__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2386,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__440__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2387,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+2388,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__440__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2389,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__440__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2390,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__441__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2391,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+2392,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__441__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2393,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__441__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2394,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__442__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2395,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+2396,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__442__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2397,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__442__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2398,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__443__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2399,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+2400,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__443__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2401,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__443__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2402,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__444__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2403,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+2404,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__444__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2405,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__444__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2406,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__445__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2407,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+2408,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__445__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2409,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__445__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2410,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__446__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2411,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+2412,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__446__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2413,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__446__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2414,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__447__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2415,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+2416,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__447__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2417,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__447__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2418,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__448__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2419,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU])));
        bufp->chgCData(oldp+2420,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__448__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2421,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__448__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2422,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__449__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2423,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 1U))));
        bufp->chgCData(oldp+2424,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__449__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2425,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__449__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2426,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__44__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2427,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2428,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__44__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2429,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__44__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2430,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__450__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2431,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 2U))));
        bufp->chgCData(oldp+2432,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__450__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2433,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__450__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2434,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__451__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2435,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 3U))));
        bufp->chgCData(oldp+2436,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__451__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2437,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__451__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2438,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__452__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2439,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 4U))));
        bufp->chgCData(oldp+2440,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__452__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2441,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__452__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2442,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__453__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2443,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 5U))));
        bufp->chgCData(oldp+2444,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__453__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2445,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__453__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2446,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__454__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2447,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 6U))));
        bufp->chgCData(oldp+2448,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__454__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2449,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__454__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2450,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__455__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2451,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 7U))));
        bufp->chgCData(oldp+2452,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__455__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2453,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__455__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2454,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__456__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2455,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 8U))));
        bufp->chgCData(oldp+2456,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__456__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2457,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__456__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2458,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__457__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2459,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 9U))));
        bufp->chgCData(oldp+2460,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__457__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2461,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__457__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2462,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__458__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2463,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2464,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__458__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2465,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__458__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2466,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__459__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2467,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2468,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__459__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2469,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__459__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2470,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__45__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2471,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2472,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__45__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2473,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__45__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2474,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__460__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2475,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2476,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__460__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2477,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__460__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2478,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__461__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2479,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2480,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__461__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2481,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__461__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2482,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__462__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2483,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2484,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__462__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2485,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__462__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2486,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__463__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2487,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2488,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__463__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2489,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__463__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2490,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__464__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2491,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2492,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__464__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2493,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__464__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2494,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__465__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2495,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2496,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__465__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2497,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__465__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2498,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__466__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2499,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2500,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__466__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2501,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__466__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2502,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__467__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2503,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2504,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__467__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2505,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__467__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2506,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__468__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2507,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2508,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__468__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2509,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__468__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2510,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__469__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2511,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2512,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__469__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2513,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__469__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2514,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__46__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2515,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2516,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__46__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2517,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__46__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2518,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__470__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2519,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2520,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__470__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2521,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__470__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2522,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__471__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2523,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2524,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__471__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2525,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__471__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2526,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__472__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2527,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+2528,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__472__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2529,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__472__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2530,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__473__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2531,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+2532,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__473__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2533,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__473__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2534,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__474__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2535,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+2536,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__474__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2537,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__474__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2538,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__475__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2539,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+2540,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__475__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2541,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__475__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2542,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__476__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2543,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+2544,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__476__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2545,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__476__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2546,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__477__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2547,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+2548,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__477__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2549,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__477__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2550,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__478__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2551,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+2552,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__478__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2553,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__478__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2554,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__479__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2555,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+2556,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__479__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2557,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__479__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2558,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__47__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2559,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2560,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__47__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2561,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__47__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2562,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__480__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2563,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU])));
        bufp->chgCData(oldp+2564,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__480__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2565,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__480__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2566,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__481__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2567,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 1U))));
        bufp->chgCData(oldp+2568,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__481__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2569,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__481__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2570,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__482__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2571,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 2U))));
        bufp->chgCData(oldp+2572,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__482__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2573,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__482__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2574,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__483__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2575,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 3U))));
        bufp->chgCData(oldp+2576,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__483__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2577,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__483__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2578,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__484__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2579,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 4U))));
        bufp->chgCData(oldp+2580,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__484__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2581,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__484__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2582,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__485__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2583,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 5U))));
        bufp->chgCData(oldp+2584,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__485__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2585,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__485__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2586,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__486__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2587,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 6U))));
        bufp->chgCData(oldp+2588,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__486__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2589,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__486__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2590,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__487__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2591,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 7U))));
        bufp->chgCData(oldp+2592,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__487__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2593,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__487__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2594,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__488__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2595,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 8U))));
        bufp->chgCData(oldp+2596,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__488__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2597,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__488__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2598,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__489__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2599,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 9U))));
        bufp->chgCData(oldp+2600,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__489__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2601,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__489__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2602,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__48__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2603,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2604,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__48__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2605,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__48__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2606,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__490__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2607,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2608,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__490__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2609,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__490__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2610,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__491__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2611,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2612,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__491__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2613,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__491__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2614,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__492__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2615,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2616,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__492__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2617,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__492__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2618,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__493__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2619,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2620,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__493__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2621,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__493__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2622,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__494__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2623,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2624,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__494__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2625,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__494__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2626,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__495__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2627,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2628,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__495__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2629,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__495__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2630,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__496__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2631,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2632,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__496__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2633,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__496__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2634,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__497__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2635,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2636,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__497__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2637,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__497__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2638,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__498__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2639,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2640,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__498__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2641,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__498__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2642,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__499__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2643,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2644,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__499__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2645,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__499__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2646,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__49__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2647,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2648,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__49__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2649,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__49__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2650,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__4__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2651,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 4U))));
        bufp->chgCData(oldp+2652,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__4__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2653,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__4__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2654,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__500__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2655,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2656,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__500__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2657,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__500__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2658,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__501__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2659,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2660,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__501__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2661,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__501__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2662,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__502__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2663,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2664,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__502__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2665,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__502__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2666,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__503__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2667,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2668,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__503__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2669,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__503__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2670,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__504__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2671,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+2672,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__504__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2673,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__504__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2674,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__505__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2675,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+2676,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__505__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2677,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__505__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2678,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__506__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2679,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+2680,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__506__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2681,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__506__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2682,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__507__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2683,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+2684,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__507__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2685,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__507__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2686,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__508__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2687,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+2688,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__508__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2689,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__508__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2690,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__509__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2691,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+2692,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__509__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2693,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__509__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2694,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__50__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2695,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2696,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__50__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2697,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__50__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2698,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__510__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2699,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+2700,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__510__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2701,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__510__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2702,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__511__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2703,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+2704,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__511__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2705,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__511__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2706,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__512__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2707,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U])));
        bufp->chgCData(oldp+2708,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__512__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2709,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__512__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2710,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__513__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2711,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 1U))));
        bufp->chgCData(oldp+2712,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__513__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2713,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__513__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2714,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__514__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2715,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 2U))));
        bufp->chgCData(oldp+2716,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__514__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2717,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__514__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2718,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__515__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2719,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 3U))));
        bufp->chgCData(oldp+2720,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__515__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2721,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__515__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2722,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__516__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2723,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 4U))));
        bufp->chgCData(oldp+2724,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__516__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2725,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__516__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2726,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__517__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2727,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 5U))));
        bufp->chgCData(oldp+2728,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__517__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2729,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__517__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2730,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__518__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2731,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 6U))));
        bufp->chgCData(oldp+2732,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__518__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2733,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__518__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2734,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__519__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2735,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 7U))));
        bufp->chgCData(oldp+2736,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__519__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2737,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__519__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2738,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__51__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2739,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2740,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__51__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2741,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__51__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2742,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__520__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2743,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 8U))));
        bufp->chgCData(oldp+2744,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__520__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2745,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__520__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2746,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__521__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2747,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 9U))));
        bufp->chgCData(oldp+2748,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__521__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2749,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__521__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2750,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__522__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2751,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2752,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__522__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2753,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__522__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2754,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__523__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2755,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2756,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__523__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2757,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__523__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2758,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__524__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2759,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2760,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__524__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2761,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__524__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2762,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__525__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2763,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2764,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__525__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2765,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__525__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2766,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__526__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2767,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2768,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__526__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2769,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__526__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2770,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__527__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2771,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2772,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__527__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2773,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__527__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2774,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__528__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2775,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2776,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__528__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2777,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__528__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2778,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__529__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2779,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2780,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__529__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2781,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__529__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2782,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__52__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2783,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2784,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__52__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2785,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__52__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2786,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__530__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2787,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2788,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__530__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2789,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__530__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2790,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__531__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2791,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2792,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__531__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2793,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__531__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2794,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__532__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2795,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2796,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__532__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2797,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__532__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2798,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__533__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2799,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2800,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__533__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2801,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__533__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2802,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__534__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2803,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2804,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__534__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2805,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__534__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2806,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__535__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2807,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2808,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__535__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2809,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__535__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2810,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__536__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2811,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+2812,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__536__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2813,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__536__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2814,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__537__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2815,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+2816,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__537__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2817,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__537__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2818,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__538__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2819,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+2820,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__538__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2821,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__538__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2822,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__539__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2823,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+2824,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__539__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2825,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__539__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2826,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__53__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2827,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2828,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__53__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2829,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__53__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2830,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__540__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2831,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+2832,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__540__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2833,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__540__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2834,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__541__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2835,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+2836,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__541__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2837,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__541__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2838,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__542__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2839,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+2840,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__542__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2841,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__542__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2842,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__543__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2843,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+2844,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__543__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2845,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__543__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2846,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__544__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2847,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U])));
        bufp->chgCData(oldp+2848,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__544__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2849,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__544__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2850,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__545__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2851,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 1U))));
        bufp->chgCData(oldp+2852,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__545__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2853,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__545__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2854,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__546__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2855,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 2U))));
        bufp->chgCData(oldp+2856,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__546__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2857,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__546__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2858,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__547__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2859,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 3U))));
        bufp->chgCData(oldp+2860,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__547__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2861,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__547__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2862,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__548__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2863,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 4U))));
        bufp->chgCData(oldp+2864,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__548__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2865,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__548__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2866,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__549__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2867,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 5U))));
        bufp->chgCData(oldp+2868,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__549__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2869,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__549__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2870,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__54__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2871,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2872,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__54__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2873,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__54__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2874,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__550__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2875,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 6U))));
        bufp->chgCData(oldp+2876,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__550__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2877,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__550__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2878,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__551__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2879,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 7U))));
        bufp->chgCData(oldp+2880,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__551__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2881,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__551__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2882,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__552__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2883,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 8U))));
        bufp->chgCData(oldp+2884,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__552__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2885,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__552__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2886,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__553__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2887,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 9U))));
        bufp->chgCData(oldp+2888,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__553__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2889,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__553__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2890,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__554__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2891,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2892,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__554__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2893,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__554__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2894,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__555__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2895,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2896,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__555__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2897,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__555__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2898,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__556__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2899,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2900,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__556__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2901,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__556__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2902,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__557__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2903,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2904,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__557__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2905,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__557__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2906,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__558__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2907,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2908,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__558__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2909,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__558__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2910,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__559__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2911,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2912,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__559__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2913,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__559__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2914,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__55__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2915,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2916,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__55__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2917,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__55__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2918,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__560__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2919,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2920,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__560__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2921,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__560__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2922,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__561__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2923,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2924,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__561__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2925,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__561__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2926,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__562__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2927,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2928,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__562__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2929,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__562__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2930,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__563__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2931,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2932,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__563__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2933,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__563__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2934,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__564__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2935,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2936,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__564__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2937,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__564__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2938,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__565__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2939,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2940,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__565__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2941,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__565__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2942,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__566__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2943,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2944,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__566__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2945,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__566__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2946,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__567__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2947,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2948,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__567__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2949,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__567__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2950,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__568__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2951,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+2952,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__568__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2953,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__568__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2954,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__569__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2955,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+2956,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__569__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2957,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__569__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2958,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__56__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2959,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+2960,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__56__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2961,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__56__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2962,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__570__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2963,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+2964,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__570__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2965,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__570__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2966,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__571__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2967,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+2968,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__571__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2969,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__571__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2970,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__572__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2971,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+2972,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__572__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2973,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__572__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2974,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__573__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2975,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+2976,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__573__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2977,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__573__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2978,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__574__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2979,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+2980,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__574__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2981,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__574__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2982,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__575__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2983,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+2984,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__575__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2985,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__575__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2986,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__576__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2987,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U])));
        bufp->chgCData(oldp+2988,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__576__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2989,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__576__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2990,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__577__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2991,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 1U))));
        bufp->chgCData(oldp+2992,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__577__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2993,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__577__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2994,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__578__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2995,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 2U))));
        bufp->chgCData(oldp+2996,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__578__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2997,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__578__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2998,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__579__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2999,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3000,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__579__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3001,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__579__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3002,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__57__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3003,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3004,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__57__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3005,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__57__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3006,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__580__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3007,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3008,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__580__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3009,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__580__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3010,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__581__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3011,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3012,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__581__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3013,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__581__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3014,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__582__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3015,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3016,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__582__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3017,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__582__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3018,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__583__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3019,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3020,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__583__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3021,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__583__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3022,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__584__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3023,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3024,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__584__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3025,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__584__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3026,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__585__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3027,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3028,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__585__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3029,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__585__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3030,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__586__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3031,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3032,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__586__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3033,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__586__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3034,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__587__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3035,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3036,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__587__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3037,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__587__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3038,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__588__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3039,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3040,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__588__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3041,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__588__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3042,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__589__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3043,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3044,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__589__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3045,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__589__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3046,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__58__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3047,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3048,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__58__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3049,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__58__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3050,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__590__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3051,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+3052,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__590__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3053,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__590__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3054,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__591__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3055,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+3056,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__591__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3057,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__591__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3058,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__592__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3059,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+3060,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__592__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3061,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__592__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3062,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__593__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3063,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+3064,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__593__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3065,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__593__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3066,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__594__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3067,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+3068,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__594__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3069,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__594__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3070,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__595__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3071,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+3072,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__595__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3073,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__595__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3074,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__596__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3075,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+3076,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__596__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3077,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__596__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3078,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__597__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3079,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+3080,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__597__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3081,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__597__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3082,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__598__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3083,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+3084,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__598__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3085,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__598__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3086,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__599__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3087,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+3088,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__599__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3089,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__599__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3090,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__59__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3091,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3092,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__59__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3093,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__59__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3094,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__5__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3095,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3096,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__5__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3097,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__5__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3098,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__600__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3099,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+3100,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__600__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3101,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__600__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3102,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__601__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3103,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3104,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__601__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3105,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__601__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3106,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__602__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3107,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3108,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__602__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3109,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__602__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3110,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__603__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3111,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3112,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__603__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3113,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__603__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3114,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__604__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3115,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3116,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__604__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3117,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__604__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3118,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__605__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3119,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3120,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__605__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3121,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__605__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3122,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__606__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3123,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3124,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__606__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3125,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__606__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3126,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__607__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3127,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3128,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__607__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3129,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__607__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3130,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__608__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3131,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U])));
        bufp->chgCData(oldp+3132,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__608__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3133,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__608__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3134,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__609__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3135,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3136,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__609__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3137,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__609__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3138,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__60__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3139,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3140,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__60__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3141,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__60__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3142,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__610__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3143,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3144,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__610__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3145,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__610__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3146,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__611__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3147,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3148,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__611__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3149,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__611__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3150,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__612__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3151,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3152,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__612__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3153,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__612__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3154,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__613__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3155,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3156,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__613__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3157,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__613__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3158,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__614__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3159,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3160,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__614__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3161,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__614__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3162,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__615__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3163,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3164,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__615__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3165,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__615__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3166,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__616__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3167,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3168,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__616__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3169,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__616__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3170,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__617__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3171,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3172,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__617__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3173,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__617__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3174,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__618__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3175,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3176,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__618__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3177,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__618__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3178,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__619__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3179,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3180,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__619__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3181,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__619__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3182,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__61__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3183,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3184,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__61__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3185,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__61__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3186,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__620__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3187,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3188,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__620__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3189,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__620__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3190,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__621__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3191,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3192,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__621__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3193,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__621__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3194,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__622__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3195,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+3196,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__622__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3197,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__622__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3198,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__623__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3199,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+3200,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__623__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3201,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__623__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3202,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__624__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3203,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+3204,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__624__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3205,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__624__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3206,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__625__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3207,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+3208,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__625__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3209,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__625__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3210,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__626__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3211,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+3212,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__626__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3213,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__626__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3214,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__627__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3215,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+3216,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__627__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3217,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__627__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3218,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__628__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3219,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+3220,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__628__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3221,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__628__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3222,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__629__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3223,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+3224,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__629__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3225,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__629__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3226,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__62__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3227,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3228,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__62__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3229,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__62__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3230,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__630__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3231,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+3232,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__630__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3233,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__630__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3234,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__631__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3235,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+3236,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__631__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3237,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__631__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3238,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__632__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3239,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+3240,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__632__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3241,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__632__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3242,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__633__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3243,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3244,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__633__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3245,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__633__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3246,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__634__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3247,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3248,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__634__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3249,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__634__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3250,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__635__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3251,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3252,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__635__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3253,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__635__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3254,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__636__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3255,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3256,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__636__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3257,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__636__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3258,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__637__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3259,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3260,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__637__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3261,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__637__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3262,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__638__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3263,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3264,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__638__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3265,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__638__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3266,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__639__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3267,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3268,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__639__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3269,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__639__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3270,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__63__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3271,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3272,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__63__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3273,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__63__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3274,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__640__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3275,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U])));
        bufp->chgCData(oldp+3276,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__640__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3277,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__640__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3278,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__641__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3279,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3280,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__641__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3281,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__641__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3282,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__642__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3283,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3284,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__642__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3285,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__642__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3286,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__643__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3287,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3288,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__643__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3289,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__643__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3290,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__644__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3291,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3292,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__644__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3293,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__644__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3294,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__645__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3295,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3296,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__645__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3297,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__645__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3298,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__646__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3299,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3300,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__646__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3301,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__646__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3302,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__647__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3303,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3304,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__647__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3305,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__647__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3306,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__648__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3307,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3308,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__648__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3309,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__648__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3310,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__649__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3311,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3312,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__649__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3313,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__649__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3314,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__64__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3315,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U])));
        bufp->chgCData(oldp+3316,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__64__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3317,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__64__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3318,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__650__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3319,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3320,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__650__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3321,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__650__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3322,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__651__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3323,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3324,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__651__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3325,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__651__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3326,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__652__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3327,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3328,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__652__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3329,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__652__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3330,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__653__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3331,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3332,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__653__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3333,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__653__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3334,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__654__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3335,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+3336,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__654__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3337,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__654__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3338,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__655__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3339,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+3340,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__655__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3341,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__655__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3342,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__656__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3343,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+3344,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__656__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3345,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__656__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3346,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__657__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3347,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+3348,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__657__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3349,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__657__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3350,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__658__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3351,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+3352,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__658__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3353,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__658__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3354,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__659__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3355,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+3356,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__659__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3357,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__659__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3358,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__65__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3359,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3360,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__65__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3361,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__65__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3362,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__660__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3363,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+3364,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__660__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3365,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__660__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3366,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__661__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3367,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+3368,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__661__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3369,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__661__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3370,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__662__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3371,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+3372,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__662__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3373,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__662__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3374,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__663__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3375,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+3376,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__663__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3377,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__663__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3378,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__664__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3379,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+3380,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__664__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3381,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__664__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3382,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__665__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3383,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3384,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__665__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3385,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__665__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3386,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__666__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3387,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3388,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__666__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3389,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__666__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3390,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__667__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3391,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3392,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__667__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3393,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__667__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3394,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__668__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3395,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3396,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__668__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3397,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__668__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3398,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__669__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3399,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3400,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__669__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3401,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__669__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3402,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__66__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3403,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3404,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__66__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3405,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__66__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3406,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__670__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3407,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3408,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__670__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3409,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__670__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3410,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__671__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3411,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3412,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__671__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3413,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__671__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3414,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__672__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3415,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U])));
        bufp->chgCData(oldp+3416,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__672__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3417,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__672__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3418,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__673__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3419,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3420,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__673__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3421,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__673__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3422,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__674__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3423,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3424,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__674__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3425,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__674__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3426,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__675__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3427,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3428,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__675__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3429,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__675__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3430,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__676__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3431,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3432,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__676__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3433,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__676__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3434,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__677__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3435,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3436,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__677__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3437,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__677__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3438,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__678__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3439,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3440,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__678__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3441,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__678__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3442,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__679__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3443,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3444,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__679__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3445,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__679__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3446,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__67__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3447,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3448,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__67__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3449,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__67__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3450,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__680__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3451,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3452,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__680__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3453,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__680__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3454,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__681__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3455,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3456,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__681__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3457,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__681__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3458,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__682__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3459,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3460,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__682__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3461,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__682__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3462,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__683__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3463,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3464,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__683__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3465,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__683__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3466,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__684__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3467,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3468,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__684__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3469,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__684__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3470,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__685__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3471,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3472,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__685__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3473,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__685__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3474,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__686__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3475,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+3476,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__686__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3477,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__686__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3478,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__687__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3479,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+3480,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__687__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3481,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__687__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3482,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__688__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3483,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+3484,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__688__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3485,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__688__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3486,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__689__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3487,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+3488,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__689__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3489,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__689__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3490,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__68__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3491,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3492,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__68__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3493,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__68__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3494,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__690__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3495,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+3496,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__690__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3497,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__690__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3498,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__691__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3499,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+3500,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__691__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3501,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__691__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3502,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__692__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3503,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+3504,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__692__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3505,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__692__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3506,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__693__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3507,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+3508,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__693__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3509,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__693__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3510,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__694__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3511,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+3512,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__694__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3513,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__694__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3514,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__695__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3515,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+3516,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__695__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3517,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__695__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3518,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__696__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3519,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+3520,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__696__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3521,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__696__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3522,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__697__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3523,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3524,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__697__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3525,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__697__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3526,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__698__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3527,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3528,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__698__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3529,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__698__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3530,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__699__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3531,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3532,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__699__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3533,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__699__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3534,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__69__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3535,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3536,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__69__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3537,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__69__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3538,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__6__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3539,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3540,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__6__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3541,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__6__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3542,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__700__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3543,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3544,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__700__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3545,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__700__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3546,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__701__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3547,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3548,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__701__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3549,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__701__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3550,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__702__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3551,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3552,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__702__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3553,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__702__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3554,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__703__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3555,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3556,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__703__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3557,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__703__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3558,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__704__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3559,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U])));
        bufp->chgCData(oldp+3560,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__704__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3561,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__704__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3562,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__705__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3563,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3564,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__705__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3565,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__705__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3566,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__706__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3567,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3568,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__706__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3569,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__706__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3570,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__707__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3571,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3572,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__707__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3573,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__707__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3574,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__708__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3575,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3576,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__708__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3577,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__708__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3578,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__709__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3579,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3580,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__709__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3581,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__709__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3582,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__70__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3583,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3584,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__70__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3585,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__70__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3586,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__710__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3587,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3588,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__710__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3589,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__710__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3590,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__711__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3591,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3592,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__711__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3593,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__711__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3594,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__712__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3595,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3596,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__712__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3597,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__712__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3598,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__713__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3599,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3600,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__713__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3601,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__713__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3602,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__714__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3603,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3604,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__714__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3605,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__714__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3606,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__715__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3607,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3608,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__715__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3609,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__715__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3610,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__716__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3611,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3612,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__716__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3613,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__716__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3614,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__717__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3615,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3616,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__717__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3617,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__717__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3618,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__718__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3619,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+3620,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__718__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3621,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__718__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3622,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__719__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3623,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+3624,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__719__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3625,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__719__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3626,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__71__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3627,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3628,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__71__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3629,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__71__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3630,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__720__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3631,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+3632,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__720__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3633,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__720__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3634,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__721__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3635,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+3636,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__721__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3637,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__721__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3638,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__722__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3639,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+3640,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__722__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3641,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__722__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3642,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__723__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3643,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+3644,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__723__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3645,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__723__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3646,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__724__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3647,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+3648,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__724__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3649,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__724__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3650,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__725__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3651,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+3652,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__725__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3653,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__725__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3654,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__726__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3655,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+3656,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__726__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3657,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__726__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3658,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__727__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3659,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+3660,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__727__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3661,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__727__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3662,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__728__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3663,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+3664,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__728__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3665,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__728__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3666,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__729__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3667,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3668,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__729__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3669,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__729__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3670,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__72__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3671,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3672,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__72__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3673,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__72__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3674,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__730__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3675,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3676,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__730__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3677,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__730__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3678,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__731__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3679,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3680,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__731__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3681,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__731__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3682,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__732__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3683,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3684,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__732__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3685,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__732__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3686,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__733__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3687,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3688,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__733__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3689,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__733__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3690,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__734__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3691,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3692,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__734__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3693,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__734__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3694,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__735__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3695,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3696,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__735__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3697,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__735__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3698,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__736__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3699,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U])));
        bufp->chgCData(oldp+3700,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__736__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3701,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__736__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3702,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__737__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3703,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3704,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__737__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3705,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__737__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3706,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__738__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3707,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3708,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__738__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3709,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__738__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3710,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__739__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3711,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3712,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__739__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3713,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__739__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3714,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__73__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3715,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3716,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__73__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3717,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__73__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3718,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__740__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3719,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3720,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__740__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3721,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__740__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3722,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__741__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3723,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3724,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__741__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3725,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__741__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3726,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__742__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3727,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3728,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__742__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3729,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__742__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3730,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__743__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3731,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3732,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__743__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3733,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__743__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3734,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__744__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3735,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3736,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__744__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3737,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__744__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3738,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__745__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3739,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3740,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__745__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3741,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__745__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3742,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__746__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3743,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3744,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__746__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3745,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__746__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3746,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__747__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3747,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3748,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__747__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3749,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__747__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3750,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__748__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3751,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3752,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__748__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3753,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__748__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3754,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__749__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3755,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3756,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__749__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3757,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__749__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3758,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__74__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3759,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3760,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__74__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3761,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__74__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3762,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__750__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3763,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+3764,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__750__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3765,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__750__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3766,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__751__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3767,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+3768,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__751__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3769,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__751__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3770,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__752__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3771,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+3772,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__752__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3773,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__752__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3774,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__753__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3775,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+3776,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__753__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3777,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__753__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3778,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__754__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3779,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+3780,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__754__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3781,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__754__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3782,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__755__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3783,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+3784,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__755__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3785,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__755__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3786,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__756__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3787,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+3788,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__756__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3789,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__756__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3790,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__757__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3791,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+3792,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__757__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3793,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__757__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3794,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__758__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3795,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+3796,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__758__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3797,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__758__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3798,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__759__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3799,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+3800,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__759__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3801,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__759__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3802,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__75__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3803,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3804,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__75__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3805,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__75__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3806,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__760__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3807,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+3808,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__760__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3809,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__760__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3810,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__761__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3811,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3812,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__761__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3813,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__761__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3814,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__762__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3815,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3816,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__762__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3817,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__762__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3818,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__763__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3819,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3820,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__763__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3821,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__763__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3822,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__764__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3823,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3824,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__764__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3825,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__764__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3826,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__765__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3827,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3828,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__765__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3829,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__765__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3830,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__766__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3831,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3832,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__766__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3833,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__766__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3834,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__767__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3835,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3836,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__767__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3837,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__767__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3838,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__768__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3839,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U])));
        bufp->chgCData(oldp+3840,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__768__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3841,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__768__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3842,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__769__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3843,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3844,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__769__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3845,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__769__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3846,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__76__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3847,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3848,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__76__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3849,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__76__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3850,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__770__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3851,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3852,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__770__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3853,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__770__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3854,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__771__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3855,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3856,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__771__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3857,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__771__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3858,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__772__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3859,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3860,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__772__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3861,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__772__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3862,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__773__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3863,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3864,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__773__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3865,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__773__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3866,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__774__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3867,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3868,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__774__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3869,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__774__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3870,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__775__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3871,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3872,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__775__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3873,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__775__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3874,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__776__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3875,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3876,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__776__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3877,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__776__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3878,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__777__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3879,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3880,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__777__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3881,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__777__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3882,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__778__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3883,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3884,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__778__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3885,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__778__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3886,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__779__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3887,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3888,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__779__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3889,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__779__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3890,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__77__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3891,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3892,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__77__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3893,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__77__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3894,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__780__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3895,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3896,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__780__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3897,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__780__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3898,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__781__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3899,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3900,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__781__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3901,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__781__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3902,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__782__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3903,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+3904,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__782__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3905,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__782__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3906,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__783__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3907,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+3908,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__783__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3909,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__783__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3910,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__784__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3911,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+3912,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__784__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3913,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__784__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3914,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__785__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3915,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+3916,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__785__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3917,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__785__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3918,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__786__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3919,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+3920,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__786__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3921,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__786__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3922,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__787__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3923,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+3924,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__787__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3925,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__787__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3926,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__788__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3927,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+3928,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__788__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3929,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__788__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3930,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__789__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3931,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+3932,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__789__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3933,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__789__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3934,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__78__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3935,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+3936,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__78__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3937,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__78__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3938,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__790__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3939,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+3940,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__790__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3941,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__790__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3942,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__791__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3943,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+3944,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__791__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3945,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__791__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3946,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__792__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3947,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+3948,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__792__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3949,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__792__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3950,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__793__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3951,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3952,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__793__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3953,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__793__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3954,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__794__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3955,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3956,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__794__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3957,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__794__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3958,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__795__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3959,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3960,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__795__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3961,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__795__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3962,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__796__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3963,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3964,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__796__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3965,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__796__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3966,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__797__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3967,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3968,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__797__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3969,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__797__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3970,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__798__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3971,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3972,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__798__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3973,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__798__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3974,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__799__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3975,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3976,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__799__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3977,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__799__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3978,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__79__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3979,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+3980,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__79__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3981,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__79__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3982,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__7__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3983,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3984,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__7__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3985,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__7__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3986,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__800__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3987,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U])));
        bufp->chgCData(oldp+3988,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__800__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3989,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__800__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3990,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__801__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3991,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3992,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__801__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3993,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__801__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3994,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__802__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3995,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3996,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__802__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3997,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__802__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3998,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__803__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3999,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 3U))));
        bufp->chgCData(oldp+4000,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__803__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4001,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__803__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4002,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__804__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4003,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 4U))));
        bufp->chgCData(oldp+4004,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__804__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4005,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__804__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4006,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__805__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4007,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 5U))));
        bufp->chgCData(oldp+4008,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__805__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4009,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__805__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4010,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__806__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4011,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 6U))));
        bufp->chgCData(oldp+4012,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__806__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4013,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__806__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4014,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__807__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4015,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 7U))));
        bufp->chgCData(oldp+4016,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__807__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4017,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__807__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4018,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__808__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4019,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 8U))));
        bufp->chgCData(oldp+4020,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__808__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4021,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__808__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4022,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__809__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4023,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 9U))));
        bufp->chgCData(oldp+4024,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__809__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4025,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__809__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4026,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__80__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4027,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+4028,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__80__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4029,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__80__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4030,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__810__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4031,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+4032,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__810__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4033,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__810__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4034,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__811__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4035,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+4036,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__811__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4037,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__811__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4038,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__812__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4039,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+4040,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__812__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4041,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__812__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4042,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__813__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4043,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+4044,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__813__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4045,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__813__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4046,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__814__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4047,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+4048,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__814__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4049,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__814__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4050,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__815__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4051,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+4052,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__815__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4053,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__815__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4054,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__816__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4055,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+4056,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__816__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4057,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__816__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4058,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__817__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4059,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+4060,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__817__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4061,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__817__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4062,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__818__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4063,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+4064,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__818__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4065,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__818__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4066,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__819__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4067,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+4068,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__819__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4069,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__819__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4070,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__81__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4071,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+4072,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__81__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4073,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__81__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4074,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__820__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4075,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+4076,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__820__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4077,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__820__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4078,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__821__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4079,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+4080,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__821__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4081,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__821__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4082,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__822__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4083,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+4084,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__822__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4085,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__822__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4086,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__823__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4087,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+4088,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__823__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4089,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__823__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4090,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__824__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4091,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+4092,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__824__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4093,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__824__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4094,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__825__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4095,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+4096,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__825__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4097,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__825__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4098,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__826__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4099,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+4100,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__826__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4101,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__826__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4102,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__827__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4103,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+4104,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__827__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4105,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__827__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4106,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__828__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4107,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+4108,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__828__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4109,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__828__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4110,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__829__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4111,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+4112,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__829__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4113,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__829__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4114,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__82__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4115,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+4116,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__82__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4117,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__82__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4118,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__830__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4119,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+4120,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__830__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4121,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__830__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4122,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__831__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4123,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+4124,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__831__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4125,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__831__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4126,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__832__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4127,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU])));
        bufp->chgCData(oldp+4128,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__832__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4129,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__832__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4130,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__833__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4131,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 1U))));
        bufp->chgCData(oldp+4132,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__833__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4133,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__833__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4134,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__834__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4135,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 2U))));
        bufp->chgCData(oldp+4136,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__834__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4137,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__834__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4138,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__835__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4139,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 3U))));
        bufp->chgCData(oldp+4140,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__835__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4141,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__835__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4142,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__836__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4143,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 4U))));
        bufp->chgCData(oldp+4144,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__836__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4145,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__836__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4146,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__837__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4147,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 5U))));
        bufp->chgCData(oldp+4148,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__837__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4149,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__837__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4150,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__838__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4151,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 6U))));
        bufp->chgCData(oldp+4152,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__838__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4153,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__838__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4154,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__839__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4155,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 7U))));
        bufp->chgCData(oldp+4156,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__839__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4157,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__839__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4158,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__83__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4159,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+4160,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__83__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4161,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__83__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4162,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__840__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4163,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 8U))));
        bufp->chgCData(oldp+4164,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__840__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4165,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__840__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4166,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__841__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4167,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 9U))));
        bufp->chgCData(oldp+4168,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__841__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4169,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__841__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4170,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__842__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4171,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+4172,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__842__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4173,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__842__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4174,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__843__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4175,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+4176,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__843__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4177,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__843__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4178,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__844__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4179,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+4180,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__844__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4181,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__844__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4182,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__845__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4183,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+4184,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__845__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4185,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__845__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4186,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__846__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4187,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+4188,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__846__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4189,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__846__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4190,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__847__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4191,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+4192,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__847__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4193,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__847__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4194,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__848__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4195,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+4196,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__848__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4197,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__848__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4198,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__849__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4199,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+4200,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__849__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4201,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__849__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4202,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__84__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4203,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+4204,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__84__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4205,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__84__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4206,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__850__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4207,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+4208,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__850__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4209,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__850__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4210,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__851__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4211,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+4212,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__851__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4213,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__851__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4214,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__852__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4215,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+4216,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__852__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4217,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__852__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4218,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__853__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4219,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+4220,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__853__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4221,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__853__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4222,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__854__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4223,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+4224,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__854__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4225,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__854__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4226,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__855__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4227,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+4228,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__855__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4229,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__855__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4230,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__856__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4231,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+4232,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__856__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4233,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__856__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4234,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__857__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4235,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+4236,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__857__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4237,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__857__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4238,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__858__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4239,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+4240,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__858__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4241,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__858__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4242,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__859__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4243,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+4244,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__859__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4245,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__859__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4246,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__85__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4247,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+4248,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__85__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4249,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__85__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4250,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__860__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4251,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+4252,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__860__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4253,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__860__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4254,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__861__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4255,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+4256,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__861__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4257,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__861__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4258,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__862__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4259,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+4260,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__862__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4261,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__862__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4262,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__863__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4263,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+4264,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__863__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4265,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__863__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4266,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__864__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4267,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU])));
        bufp->chgCData(oldp+4268,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__864__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4269,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__864__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4270,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__865__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4271,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 1U))));
        bufp->chgCData(oldp+4272,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__865__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4273,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__865__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4274,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__866__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4275,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 2U))));
        bufp->chgCData(oldp+4276,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__866__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4277,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__866__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4278,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__867__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4279,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 3U))));
        bufp->chgCData(oldp+4280,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__867__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4281,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__867__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4282,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__868__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4283,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 4U))));
        bufp->chgCData(oldp+4284,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__868__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4285,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__868__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4286,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__869__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4287,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 5U))));
        bufp->chgCData(oldp+4288,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__869__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4289,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__869__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4290,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__86__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4291,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+4292,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__86__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4293,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__86__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4294,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__870__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4295,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 6U))));
        bufp->chgCData(oldp+4296,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__870__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4297,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__870__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4298,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__871__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4299,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 7U))));
        bufp->chgCData(oldp+4300,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__871__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4301,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__871__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4302,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__872__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4303,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 8U))));
        bufp->chgCData(oldp+4304,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__872__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4305,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__872__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4306,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__873__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4307,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 9U))));
        bufp->chgCData(oldp+4308,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__873__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4309,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__873__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4310,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__874__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4311,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+4312,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__874__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4313,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__874__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4314,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__875__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4315,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+4316,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__875__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4317,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__875__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4318,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__876__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4319,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+4320,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__876__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4321,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__876__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4322,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__877__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4323,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+4324,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__877__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4325,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__877__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4326,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__878__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4327,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+4328,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__878__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4329,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__878__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4330,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__879__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4331,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+4332,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__879__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4333,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__879__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4334,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__87__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4335,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+4336,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__87__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4337,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__87__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4338,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__880__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4339,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+4340,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__880__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4341,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__880__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4342,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__881__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4343,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+4344,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__881__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4345,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__881__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4346,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__882__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4347,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+4348,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__882__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4349,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__882__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4350,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__883__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4351,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+4352,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__883__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4353,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__883__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4354,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__884__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4355,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+4356,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__884__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4357,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__884__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4358,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__885__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4359,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+4360,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__885__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4361,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__885__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4362,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__886__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4363,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+4364,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__886__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4365,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__886__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4366,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__887__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4367,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+4368,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__887__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4369,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__887__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4370,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__888__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4371,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+4372,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__888__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4373,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__888__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4374,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__889__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4375,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+4376,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__889__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4377,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__889__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4378,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__88__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4379,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+4380,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__88__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4381,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__88__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4382,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__890__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4383,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+4384,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__890__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4385,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__890__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4386,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__891__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4387,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+4388,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__891__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4389,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__891__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4390,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__892__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4391,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+4392,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__892__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4393,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__892__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4394,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__893__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4395,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+4396,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__893__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4397,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__893__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4398,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__894__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4399,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+4400,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__894__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4401,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__894__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4402,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__895__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4403,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+4404,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__895__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4405,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__895__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4406,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__896__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4407,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU])));
        bufp->chgCData(oldp+4408,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__896__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4409,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__896__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4410,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__897__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4411,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 1U))));
        bufp->chgCData(oldp+4412,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__897__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4413,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__897__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4414,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__898__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4415,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 2U))));
        bufp->chgCData(oldp+4416,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__898__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4417,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__898__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4418,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__899__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4419,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 3U))));
        bufp->chgCData(oldp+4420,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__899__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4421,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__899__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4422,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__89__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4423,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+4424,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__89__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4425,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__89__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4426,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__8__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4427,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 8U))));
        bufp->chgCData(oldp+4428,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__8__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4429,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__8__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4430,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__900__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4431,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 4U))));
        bufp->chgCData(oldp+4432,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__900__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4433,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__900__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4434,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__901__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4435,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 5U))));
        bufp->chgCData(oldp+4436,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__901__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4437,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__901__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4438,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__902__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4439,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 6U))));
        bufp->chgCData(oldp+4440,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__902__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4441,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__902__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4442,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__903__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4443,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 7U))));
        bufp->chgCData(oldp+4444,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__903__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4445,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__903__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4446,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__904__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4447,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 8U))));
        bufp->chgCData(oldp+4448,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__904__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4449,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__904__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4450,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__905__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4451,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 9U))));
        bufp->chgCData(oldp+4452,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__905__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4453,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__905__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4454,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__906__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4455,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+4456,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__906__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4457,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__906__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4458,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__907__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4459,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+4460,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__907__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4461,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__907__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4462,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__908__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4463,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+4464,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__908__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4465,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__908__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4466,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__909__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4467,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+4468,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__909__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4469,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__909__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4470,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__90__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4471,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+4472,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__90__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4473,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__90__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4474,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__910__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4475,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+4476,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__910__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4477,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__910__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4478,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__911__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4479,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+4480,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__911__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4481,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__911__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4482,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__912__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4483,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+4484,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__912__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4485,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__912__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4486,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__913__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4487,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+4488,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__913__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4489,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__913__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4490,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__914__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4491,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+4492,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__914__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4493,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__914__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4494,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__915__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4495,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+4496,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__915__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4497,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__915__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4498,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__916__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4499,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+4500,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__916__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4501,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__916__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4502,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__917__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4503,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+4504,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__917__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4505,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__917__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4506,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__918__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4507,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+4508,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__918__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4509,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__918__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4510,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__919__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4511,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+4512,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__919__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4513,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__919__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4514,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__91__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4515,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+4516,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__91__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4517,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__91__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4518,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__920__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4519,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+4520,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__920__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4521,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__920__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4522,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__921__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4523,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+4524,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__921__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4525,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__921__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4526,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__922__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4527,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+4528,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__922__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4529,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__922__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4530,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__923__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4531,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+4532,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__923__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4533,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__923__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4534,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__924__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4535,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+4536,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__924__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4537,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__924__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4538,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__925__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4539,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+4540,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__925__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4541,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__925__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4542,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__926__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4543,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+4544,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__926__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4545,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__926__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4546,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__927__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4547,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+4548,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__927__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4549,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__927__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4550,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__928__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4551,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU])));
        bufp->chgCData(oldp+4552,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__928__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4553,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__928__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4554,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__929__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4555,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 1U))));
        bufp->chgCData(oldp+4556,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__929__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4557,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__929__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4558,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__92__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4559,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+4560,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__92__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4561,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__92__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4562,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__930__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4563,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 2U))));
        bufp->chgCData(oldp+4564,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__930__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4565,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__930__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4566,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__931__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4567,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 3U))));
        bufp->chgCData(oldp+4568,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__931__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4569,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__931__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4570,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__932__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4571,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 4U))));
        bufp->chgCData(oldp+4572,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__932__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4573,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__932__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4574,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__933__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4575,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 5U))));
        bufp->chgCData(oldp+4576,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__933__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4577,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__933__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4578,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__934__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4579,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 6U))));
        bufp->chgCData(oldp+4580,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__934__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4581,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__934__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4582,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__935__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4583,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 7U))));
        bufp->chgCData(oldp+4584,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__935__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4585,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__935__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4586,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__936__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4587,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 8U))));
        bufp->chgCData(oldp+4588,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__936__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4589,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__936__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4590,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__937__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4591,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 9U))));
        bufp->chgCData(oldp+4592,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__937__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4593,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__937__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4594,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__938__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4595,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+4596,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__938__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4597,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__938__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4598,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__939__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4599,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+4600,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__939__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4601,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__939__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4602,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__93__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4603,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+4604,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__93__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4605,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__93__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4606,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__940__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4607,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+4608,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__940__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4609,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__940__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4610,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__941__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4611,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+4612,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__941__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4613,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__941__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4614,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__942__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4615,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+4616,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__942__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4617,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__942__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4618,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__943__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4619,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+4620,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__943__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4621,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__943__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4622,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__944__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4623,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+4624,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__944__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4625,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__944__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4626,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__945__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4627,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+4628,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__945__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4629,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__945__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4630,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__946__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4631,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+4632,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__946__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4633,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__946__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4634,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__947__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4635,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+4636,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__947__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4637,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__947__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4638,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__948__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4639,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+4640,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__948__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4641,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__948__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4642,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__949__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4643,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+4644,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__949__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4645,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__949__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4646,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__94__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4647,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+4648,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__94__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4649,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__94__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4650,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__950__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4651,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+4652,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__950__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4653,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__950__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4654,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__951__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4655,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+4656,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__951__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4657,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__951__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4658,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__952__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4659,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+4660,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__952__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4661,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__952__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4662,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__953__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4663,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+4664,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__953__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4665,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__953__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4666,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__954__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4667,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+4668,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__954__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4669,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__954__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4670,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__955__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4671,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+4672,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__955__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4673,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__955__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4674,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__956__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4675,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+4676,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__956__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4677,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__956__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4678,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__957__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4679,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+4680,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__957__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4681,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__957__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4682,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__958__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4683,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+4684,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__958__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4685,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__958__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4686,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__959__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4687,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+4688,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__959__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4689,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__959__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4690,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__95__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4691,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+4692,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__95__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4693,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__95__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4694,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__960__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4695,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU])));
        bufp->chgCData(oldp+4696,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__960__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4697,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__960__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4698,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__961__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4699,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 1U))));
        bufp->chgCData(oldp+4700,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__961__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4701,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__961__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4702,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__962__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4703,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 2U))));
        bufp->chgCData(oldp+4704,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__962__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4705,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__962__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4706,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__963__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4707,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 3U))));
        bufp->chgCData(oldp+4708,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__963__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4709,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__963__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4710,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__964__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4711,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 4U))));
        bufp->chgCData(oldp+4712,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__964__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4713,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__964__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4714,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__965__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4715,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 5U))));
        bufp->chgCData(oldp+4716,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__965__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4717,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__965__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4718,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__966__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4719,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 6U))));
        bufp->chgCData(oldp+4720,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__966__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4721,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__966__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4722,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__967__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4723,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 7U))));
        bufp->chgCData(oldp+4724,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__967__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4725,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__967__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4726,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__968__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4727,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 8U))));
        bufp->chgCData(oldp+4728,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__968__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4729,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__968__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4730,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__969__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4731,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 9U))));
        bufp->chgCData(oldp+4732,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__969__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4733,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__969__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4734,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__96__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4735,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U])));
        bufp->chgCData(oldp+4736,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__96__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4737,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__96__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4738,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__970__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4739,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+4740,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__970__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4741,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__970__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4742,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__971__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4743,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+4744,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__971__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4745,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__971__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4746,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__972__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4747,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+4748,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__972__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4749,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__972__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4750,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__973__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4751,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+4752,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__973__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4753,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__973__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4754,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__974__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4755,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+4756,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__974__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4757,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__974__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4758,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__975__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4759,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+4760,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__975__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4761,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__975__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4762,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__976__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4763,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+4764,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__976__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4765,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__976__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4766,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__977__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4767,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+4768,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__977__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4769,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__977__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4770,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__978__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4771,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+4772,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__978__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4773,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__978__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4774,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__979__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4775,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+4776,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__979__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4777,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__979__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4778,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__97__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4779,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 1U))));
        bufp->chgCData(oldp+4780,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__97__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4781,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__97__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4782,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__980__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4783,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+4784,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__980__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4785,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__980__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4786,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__981__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4787,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+4788,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__981__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4789,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__981__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4790,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__982__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4791,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+4792,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__982__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4793,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__982__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4794,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__983__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4795,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+4796,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__983__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4797,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__983__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4798,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__984__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4799,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+4800,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__984__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4801,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__984__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4802,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__985__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4803,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+4804,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__985__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4805,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__985__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4806,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__986__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4807,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+4808,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__986__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4809,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__986__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4810,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__987__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4811,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+4812,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__987__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4813,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__987__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4814,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__988__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4815,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+4816,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__988__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4817,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__988__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4818,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__989__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4819,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+4820,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__989__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4821,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__989__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4822,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__98__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4823,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 2U))));
        bufp->chgCData(oldp+4824,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__98__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4825,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__98__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4826,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__990__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4827,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+4828,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__990__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4829,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__990__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4830,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__991__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4831,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+4832,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__991__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4833,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__991__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4834,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__992__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4835,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU])));
        bufp->chgCData(oldp+4836,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__992__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4837,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__992__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4838,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__993__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4839,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                       >> 1U))));
        bufp->chgCData(oldp+4840,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__993__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4841,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__993__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4842,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__994__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4843,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                       >> 2U))));
        bufp->chgCData(oldp+4844,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__994__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4845,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__994__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4846,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__995__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4847,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                       >> 3U))));
        bufp->chgCData(oldp+4848,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__995__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4849,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__995__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4850,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__996__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4851,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                       >> 4U))));
        bufp->chgCData(oldp+4852,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__996__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4853,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__996__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4854,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__997__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4855,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                       >> 5U))));
        bufp->chgCData(oldp+4856,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__997__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4857,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__997__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4858,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__998__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4859,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                       >> 6U))));
        bufp->chgCData(oldp+4860,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__998__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4861,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__998__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4862,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__999__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4863,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                       >> 7U))));
        bufp->chgCData(oldp+4864,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__999__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4865,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__999__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4866,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__99__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4867,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 3U))));
        bufp->chgCData(oldp+4868,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__99__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4869,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__99__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4870,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__9__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4871,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 9U))));
        bufp->chgCData(oldp+4872,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__9__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4873,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__9__KET____DOT__fsm__DOT__ns),2);
        bufp->chgIData(oldp+4874,(((IData)(4U) + vlSelfRef.core__DOT__fetch_stage__DOT__pc)),32);
        bufp->chgIData(oldp+4875,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[0]),32);
        bufp->chgIData(oldp+4876,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[1]),32);
        bufp->chgIData(oldp+4877,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[2]),32);
        bufp->chgIData(oldp+4878,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[3]),32);
        bufp->chgIData(oldp+4879,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[4]),32);
        bufp->chgIData(oldp+4880,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[5]),32);
        bufp->chgIData(oldp+4881,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[6]),32);
        bufp->chgIData(oldp+4882,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[7]),32);
        bufp->chgIData(oldp+4883,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[8]),32);
        bufp->chgIData(oldp+4884,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[9]),32);
        bufp->chgIData(oldp+4885,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[10]),32);
        bufp->chgIData(oldp+4886,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[11]),32);
        bufp->chgIData(oldp+4887,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[12]),32);
        bufp->chgIData(oldp+4888,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[13]),32);
        bufp->chgIData(oldp+4889,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[14]),32);
        bufp->chgIData(oldp+4890,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack[15]),32);
        bufp->chgBit(oldp+4891,((0x0fU == (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp))));
        bufp->chgBit(oldp+4892,((0U == (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp))));
        bufp->chgBit(oldp+4893,(vlSelfRef.core__DOT__generate_new_pc__DOT__pipe_taken));
        bufp->chgBit(oldp+4894,(((~ (IData)(vlSelfRef.core__DOT__commit_result)) 
                                 & (IData)(vlSelfRef.core__DOT__commit_prediction))));
        bufp->chgIData(oldp+4895,(((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0)
                                    ? vlSelfRef.core__DOT__committed_pc
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1)
                                        ? 0U : vlSelfRef.core__DOT__fetch_stage__DOT__pc))),32);
        bufp->chgIData(oldp+4896,(((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0)
                                    ? (((~ (IData)(vlSelfRef.core__DOT__commit_result)) 
                                        & (IData)(vlSelfRef.core__DOT__commit_prediction))
                                        ? 4U : ((1U 
                                                 & ((vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                                     >> 1U) 
                                                    & (~ (IData)(vlSelfRef.core__DOT__commit_unit__DOT__empty))))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                                      >> 2U)))
                                                  ? 
                                                 ((vlSelfRef.core__DOT__commit_unit__DOT__head[3U] 
                                                   << 0x0000001cU) 
                                                  | (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                                     >> 4U))
                                                  : 0U)
                                                 : 0U))
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1)
                                        ? vlSelfRef.core__DOT__jalr_actual_address
                                        : (((0x63U 
                                             == (0x0000007fU 
                                                 & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                            & (IData)(vlSelfRef.core__DOT__generate_new_pc__DOT__pipe_taken))
                                            ? (((- (IData)(
                                                           (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                            >> 0x0000001fU))) 
                                                << 0x0000000dU) 
                                               | ((((2U 
                                                     & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                        >> 0x0000001eU)) 
                                                    | (1U 
                                                       & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                          >> 7U))) 
                                                   << 0x0000000bU) 
                                                  | ((0x000007e0U 
                                                      & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                         >> 0x00000014U)) 
                                                     | (0x0000001eU 
                                                        & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                           >> 7U)))))
                                            : ((0x6fU 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.core__DOT__fetch_stage__DOT__instruction))
                                                ? (
                                                   (((0x00000ffeU 
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
                                                : 4U))))),32);
        bufp->chgCData(oldp+4897,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__wptr),2);
        bufp->chgCData(oldp+4898,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__rptr),2);
        bufp->chgBit(oldp+4899,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__empty));
        bufp->chgBit(oldp+4900,((1U & (vlSelfRef.core__DOT__jalrq_input[2U] 
                                       >> 0x00000010U))));
        bufp->chgWData(oldp+4901,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__jalrq_data
                                  [0U]),81);
        bufp->chgWData(oldp+4904,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__jalrq_data
                                  [1U]),81);
        bufp->chgWData(oldp+4907,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__jalrq_data
                                  [2U]),81);
        bufp->chgWData(oldp+4910,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__jalrq_data
                                  [3U]),81);
        bufp->chgIData(oldp+4913,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+4914,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+4915,(vlSelfRef.core__DOT__load_store_queue__DOT__wptr),2);
        bufp->chgCData(oldp+4916,(vlSelfRef.core__DOT__load_store_queue__DOT__rptr),2);
        bufp->chgWData(oldp+4917,(vlSelfRef.core__DOT__load_store_queue__DOT__lsq_data
                                  [0U]),79);
        bufp->chgWData(oldp+4920,(vlSelfRef.core__DOT__load_store_queue__DOT__lsq_data
                                  [1U]),79);
        bufp->chgWData(oldp+4923,(vlSelfRef.core__DOT__load_store_queue__DOT__lsq_data
                                  [2U]),79);
        bufp->chgWData(oldp+4926,(vlSelfRef.core__DOT__load_store_queue__DOT__lsq_data
                                  [3U]),79);
        bufp->chgIData(oldp+4929,(vlSelfRef.core__DOT__load_store_queue__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+4930,(vlSelfRef.core__DOT__load_store_queue__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+4931,(vlSelfRef.core__DOT__fu_bus[4U]),32);
        bufp->chgIData(oldp+4932,(vlSelfRef.core__DOT__fu_bus[5U]),32);
        bufp->chgCData(oldp+4933,((0x0000000fU & (vlSelfRef.core__DOT__ROB_entry_bus 
                                                  >> 8U))),4);
        bufp->chgBit(oldp+4934,((1U & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                       >> 2U))));
        bufp->chgBit(oldp+4935,((1U & ((IData)(vlSelfRef.core__DOT__yumi_bus) 
                                       >> 2U))));
        bufp->chgCData(oldp+4936,((0x0000000fU & (vlSelfRef.core__DOT__ALU_op 
                                                  >> 8U))),4);
        bufp->chgBit(oldp+4937,((3U == (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))));
        bufp->chgBit(oldp+4938,((0U == (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))));
        bufp->chgIData(oldp+4939,(vlSelfRef.core__DOT__mult_fu__DOT__P),32);
        bufp->chgIData(oldp+4940,(((IData)(vlSelfRef.core__DOT__mult_fu__DOT__mul_h)
                                    ? vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__A
                                    : vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__Q)),32);
        bufp->chgQData(oldp+4941,((((QData)((IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__A)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__Q)))),64);
        bufp->chgBit(oldp+4943,(vlSelfRef.core__DOT__mult_fu__DOT__loadregs));
        bufp->chgBit(oldp+4944,((2U == (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))));
        bufp->chgBit(oldp+4945,((1U == (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))));
        bufp->chgBit(oldp+4946,(vlSelfRef.core__DOT__mult_fu__DOT__mul_h));
        bufp->chgCData(oldp+4947,(vlSelfRef.core__DOT__mult_fu__DOT__curr_rob),4);
        bufp->chgCData(oldp+4948,(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps),2);
        bufp->chgCData(oldp+4949,(((2U & (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))
                                    ? ((1U & (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))
                                        ? ((4U & (IData)(vlSelfRef.core__DOT__yumi_bus))
                                            ? 0U : 3U)
                                        : ((0U == vlSelfRef.core__DOT__mult_fu__DOT__P)
                                            ? 3U : 1U))
                                    : ((1U & (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))
                                        ? 2U : ((4U 
                                                 & (IData)(vlSelfRef.core__DOT__valid_in_bus))
                                                 ? 1U
                                                 : 0U)))),2);
        bufp->chgBit(oldp+4950,(vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__Q1));
        bufp->chgIData(oldp+4951,(vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__A),32);
        bufp->chgIData(oldp+4952,(vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__B),32);
        bufp->chgIData(oldp+4953,(vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__Q),32);
        bufp->chgCData(oldp+4954,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0U]),5);
        bufp->chgCData(oldp+4955,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [1U]),5);
        bufp->chgCData(oldp+4956,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [2U]),5);
        bufp->chgCData(oldp+4957,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [3U]),5);
        bufp->chgCData(oldp+4958,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [4U]),5);
        bufp->chgCData(oldp+4959,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [5U]),5);
        bufp->chgCData(oldp+4960,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [6U]),5);
        bufp->chgCData(oldp+4961,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [7U]),5);
        bufp->chgCData(oldp+4962,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [8U]),5);
        bufp->chgCData(oldp+4963,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [9U]),5);
        bufp->chgCData(oldp+4964,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000000aU]),5);
        bufp->chgCData(oldp+4965,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000000bU]),5);
        bufp->chgCData(oldp+4966,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000000cU]),5);
        bufp->chgCData(oldp+4967,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000000dU]),5);
        bufp->chgCData(oldp+4968,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000000eU]),5);
        bufp->chgCData(oldp+4969,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000000fU]),5);
        bufp->chgCData(oldp+4970,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000010U]),5);
        bufp->chgCData(oldp+4971,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000011U]),5);
        bufp->chgCData(oldp+4972,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000012U]),5);
        bufp->chgCData(oldp+4973,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000013U]),5);
        bufp->chgCData(oldp+4974,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000014U]),5);
        bufp->chgCData(oldp+4975,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000015U]),5);
        bufp->chgCData(oldp+4976,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000016U]),5);
        bufp->chgCData(oldp+4977,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000017U]),5);
        bufp->chgCData(oldp+4978,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000018U]),5);
        bufp->chgCData(oldp+4979,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000019U]),5);
        bufp->chgCData(oldp+4980,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000001aU]),5);
        bufp->chgCData(oldp+4981,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000001bU]),5);
        bufp->chgCData(oldp+4982,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000001cU]),5);
        bufp->chgCData(oldp+4983,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000001dU]),5);
        bufp->chgCData(oldp+4984,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000001eU]),5);
        bufp->chgCData(oldp+4985,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000001fU]),5);
        bufp->chgCData(oldp+4986,((1U | ((IData)(vlSelfRef.core__DOT__ROB_entry) 
                                         << 1U))),5);
        bufp->chgIData(oldp+4987,(vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus),32);
        bufp->chgIData(oldp+4988,(vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus),32);
        bufp->chgBit(oldp+4989,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000000aU))));
        bufp->chgBit(oldp+4990,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000000aU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+4991,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__10__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+4992,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000000bU))));
        bufp->chgBit(oldp+4993,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000000bU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+4994,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__11__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+4995,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000000cU))));
        bufp->chgBit(oldp+4996,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000000cU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+4997,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__12__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+4998,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000000dU))));
        bufp->chgBit(oldp+4999,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000000dU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5000,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__13__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5001,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000000eU))));
        bufp->chgBit(oldp+5002,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000000eU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5003,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__14__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5004,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000000fU))));
        bufp->chgBit(oldp+5005,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000000fU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5006,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__15__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5007,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000010U))));
        bufp->chgBit(oldp+5008,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000010U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5009,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__16__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5010,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000011U))));
        bufp->chgBit(oldp+5011,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000011U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5012,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__17__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5013,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000012U))));
        bufp->chgBit(oldp+5014,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000012U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5015,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__18__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5016,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000013U))));
        bufp->chgBit(oldp+5017,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000013U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5018,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__19__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5019,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 1U))));
        bufp->chgBit(oldp+5020,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 1U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5021,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__1__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5022,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000014U))));
        bufp->chgBit(oldp+5023,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000014U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5024,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__20__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5025,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000015U))));
        bufp->chgBit(oldp+5026,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000015U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5027,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__21__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5028,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000016U))));
        bufp->chgBit(oldp+5029,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000016U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5030,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__22__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5031,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000017U))));
        bufp->chgBit(oldp+5032,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000017U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5033,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__23__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5034,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000018U))));
        bufp->chgBit(oldp+5035,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000018U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5036,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__24__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5037,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000019U))));
        bufp->chgBit(oldp+5038,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000019U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5039,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__25__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5040,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000001aU))));
        bufp->chgBit(oldp+5041,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000001aU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5042,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__26__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5043,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000001bU))));
        bufp->chgBit(oldp+5044,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000001bU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5045,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__27__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5046,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000001cU))));
        bufp->chgBit(oldp+5047,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000001cU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5048,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__28__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5049,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000001dU))));
        bufp->chgBit(oldp+5050,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000001dU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5051,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__29__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5052,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 2U))));
        bufp->chgBit(oldp+5053,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 2U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5054,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__2__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5055,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000001eU))));
        bufp->chgBit(oldp+5056,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000001eU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5057,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__30__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5058,((vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                 >> 0x0000001fU)));
        bufp->chgBit(oldp+5059,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000001fU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5060,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__31__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5061,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 3U))));
        bufp->chgBit(oldp+5062,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 3U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5063,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__3__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5064,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 4U))));
        bufp->chgBit(oldp+5065,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 4U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5066,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__4__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5067,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 5U))));
        bufp->chgBit(oldp+5068,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 5U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5069,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__5__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5070,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 6U))));
        bufp->chgBit(oldp+5071,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 6U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5072,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__6__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5073,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 7U))));
        bufp->chgBit(oldp+5074,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 7U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5075,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__7__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5076,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 8U))));
        bufp->chgBit(oldp+5077,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 8U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5078,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__8__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5079,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 9U))));
        bufp->chgBit(oldp+5080,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 9U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5081,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__9__KET____DOT__stat_i__q),5);
        bufp->chgIData(oldp+5082,(vlSelfRef.core__DOT__registers__DOT__enable_bus),32);
        bufp->chgIData(oldp+5083,(vlSelfRef.core__DOT__registers__DOT__RegData[0]),32);
        bufp->chgIData(oldp+5084,(vlSelfRef.core__DOT__registers__DOT__RegData[1]),32);
        bufp->chgIData(oldp+5085,(vlSelfRef.core__DOT__registers__DOT__RegData[2]),32);
        bufp->chgIData(oldp+5086,(vlSelfRef.core__DOT__registers__DOT__RegData[3]),32);
        bufp->chgIData(oldp+5087,(vlSelfRef.core__DOT__registers__DOT__RegData[4]),32);
        bufp->chgIData(oldp+5088,(vlSelfRef.core__DOT__registers__DOT__RegData[5]),32);
        bufp->chgIData(oldp+5089,(vlSelfRef.core__DOT__registers__DOT__RegData[6]),32);
        bufp->chgIData(oldp+5090,(vlSelfRef.core__DOT__registers__DOT__RegData[7]),32);
        bufp->chgIData(oldp+5091,(vlSelfRef.core__DOT__registers__DOT__RegData[8]),32);
        bufp->chgIData(oldp+5092,(vlSelfRef.core__DOT__registers__DOT__RegData[9]),32);
        bufp->chgIData(oldp+5093,(vlSelfRef.core__DOT__registers__DOT__RegData[10]),32);
        bufp->chgIData(oldp+5094,(vlSelfRef.core__DOT__registers__DOT__RegData[11]),32);
        bufp->chgIData(oldp+5095,(vlSelfRef.core__DOT__registers__DOT__RegData[12]),32);
        bufp->chgIData(oldp+5096,(vlSelfRef.core__DOT__registers__DOT__RegData[13]),32);
        bufp->chgIData(oldp+5097,(vlSelfRef.core__DOT__registers__DOT__RegData[14]),32);
        bufp->chgIData(oldp+5098,(vlSelfRef.core__DOT__registers__DOT__RegData[15]),32);
        bufp->chgIData(oldp+5099,(vlSelfRef.core__DOT__registers__DOT__RegData[16]),32);
        bufp->chgIData(oldp+5100,(vlSelfRef.core__DOT__registers__DOT__RegData[17]),32);
        bufp->chgIData(oldp+5101,(vlSelfRef.core__DOT__registers__DOT__RegData[18]),32);
        bufp->chgIData(oldp+5102,(vlSelfRef.core__DOT__registers__DOT__RegData[19]),32);
        bufp->chgIData(oldp+5103,(vlSelfRef.core__DOT__registers__DOT__RegData[20]),32);
        bufp->chgIData(oldp+5104,(vlSelfRef.core__DOT__registers__DOT__RegData[21]),32);
        bufp->chgIData(oldp+5105,(vlSelfRef.core__DOT__registers__DOT__RegData[22]),32);
        bufp->chgIData(oldp+5106,(vlSelfRef.core__DOT__registers__DOT__RegData[23]),32);
        bufp->chgIData(oldp+5107,(vlSelfRef.core__DOT__registers__DOT__RegData[24]),32);
        bufp->chgIData(oldp+5108,(vlSelfRef.core__DOT__registers__DOT__RegData[25]),32);
        bufp->chgIData(oldp+5109,(vlSelfRef.core__DOT__registers__DOT__RegData[26]),32);
        bufp->chgIData(oldp+5110,(vlSelfRef.core__DOT__registers__DOT__RegData[27]),32);
        bufp->chgIData(oldp+5111,(vlSelfRef.core__DOT__registers__DOT__RegData[28]),32);
        bufp->chgIData(oldp+5112,(vlSelfRef.core__DOT__registers__DOT__RegData[29]),32);
        bufp->chgIData(oldp+5113,(vlSelfRef.core__DOT__registers__DOT__RegData[30]),32);
        bufp->chgIData(oldp+5114,(vlSelfRef.core__DOT__registers__DOT__RegData[31]),32);
        bufp->chgBit(oldp+5115,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000000aU))));
        bufp->chgIData(oldp+5116,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__10__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5117,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000000bU))));
        bufp->chgIData(oldp+5118,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__11__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5119,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000000cU))));
        bufp->chgIData(oldp+5120,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__12__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5121,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000000dU))));
        bufp->chgIData(oldp+5122,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__13__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5123,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000000eU))));
        bufp->chgIData(oldp+5124,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__14__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5125,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000000fU))));
        bufp->chgIData(oldp+5126,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__15__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5127,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000010U))));
        bufp->chgIData(oldp+5128,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__16__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5129,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000011U))));
        bufp->chgIData(oldp+5130,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__17__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5131,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000012U))));
        bufp->chgIData(oldp+5132,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__18__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5133,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000013U))));
        bufp->chgIData(oldp+5134,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__19__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5135,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 1U))));
        bufp->chgIData(oldp+5136,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__1__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5137,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000014U))));
        bufp->chgIData(oldp+5138,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__20__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5139,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000015U))));
        bufp->chgIData(oldp+5140,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__21__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5141,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000016U))));
        bufp->chgIData(oldp+5142,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__22__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5143,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000017U))));
        bufp->chgIData(oldp+5144,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__23__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5145,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000018U))));
        bufp->chgIData(oldp+5146,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__24__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5147,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000019U))));
        bufp->chgIData(oldp+5148,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__25__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5149,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000001aU))));
        bufp->chgIData(oldp+5150,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__26__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5151,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000001bU))));
        bufp->chgIData(oldp+5152,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__27__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5153,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000001cU))));
        bufp->chgIData(oldp+5154,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__28__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5155,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000001dU))));
        bufp->chgIData(oldp+5156,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__29__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5157,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 2U))));
        bufp->chgIData(oldp+5158,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__2__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5159,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000001eU))));
        bufp->chgIData(oldp+5160,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__30__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5161,((vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                 >> 0x0000001fU)));
        bufp->chgIData(oldp+5162,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__31__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5163,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 3U))));
        bufp->chgIData(oldp+5164,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__3__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5165,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 4U))));
        bufp->chgIData(oldp+5166,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__4__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5167,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 5U))));
        bufp->chgIData(oldp+5168,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__5__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5169,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 6U))));
        bufp->chgIData(oldp+5170,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__6__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5171,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 7U))));
        bufp->chgIData(oldp+5172,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__7__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5173,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 8U))));
        bufp->chgIData(oldp+5174,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__8__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5175,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 9U))));
        bufp->chgIData(oldp+5176,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__9__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgCData(oldp+5177,(vlSelfRef.core__DOT__reorder_buffer__DOT__wptr),4);
        bufp->chgCData(oldp+5178,(vlSelfRef.core__DOT__reorder_buffer__DOT__rptr),4);
        bufp->chgBit(oldp+5179,(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                 == (IData)(vlSelfRef.core__DOT__reorder_buffer__DOT__wptr))));
        bufp->chgWData(oldp+5180,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [0U]),142);
        bufp->chgWData(oldp+5185,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [1U]),142);
        bufp->chgWData(oldp+5190,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [2U]),142);
        bufp->chgWData(oldp+5195,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [3U]),142);
        bufp->chgWData(oldp+5200,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [4U]),142);
        bufp->chgWData(oldp+5205,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [5U]),142);
        bufp->chgWData(oldp+5210,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [6U]),142);
        bufp->chgWData(oldp+5215,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [7U]),142);
        bufp->chgWData(oldp+5220,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [8U]),142);
        bufp->chgWData(oldp+5225,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [9U]),142);
        bufp->chgWData(oldp+5230,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [0x0000000aU]),142);
        bufp->chgWData(oldp+5235,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [0x0000000bU]),142);
        bufp->chgWData(oldp+5240,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [0x0000000cU]),142);
        bufp->chgWData(oldp+5245,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [0x0000000dU]),142);
        bufp->chgWData(oldp+5250,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [0x0000000eU]),142);
        bufp->chgWData(oldp+5255,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [0x0000000fU]),142);
        bufp->chgIData(oldp+5260,(vlSelfRef.core__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+5261,(vlSelfRef.core__DOT__reorder_buffer__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+5262,(vlSelfRef.core__DOT__res_sched__DOT__curr_branch_pc),32);
        bufp->chgBit(oldp+5263,((1U & ((IData)(vlSelfRef.core__DOT__res_sched__DOT__ps)
                                        ? (vlSelfRef.core__DOT__res_sched__DOT__instr_hold[1U] 
                                           >> 6U) : 
                                       (vlSelfRef.core__DOT__pipe_out[1U] 
                                        >> 6U)))));
        bufp->chgIData(oldp+5264,(vlSelfRef.core__DOT__res_sched__DOT__ins),32);
        bufp->chgCData(oldp+5265,(vlSelfRef.core__DOT__res_sched__DOT__alu_op),4);
        bufp->chgCData(oldp+5266,(((0x33U == (0x0000007fU 
                                              & vlSelfRef.core__DOT__res_sched__DOT__ins))
                                    ? 2U : ((IData)(vlSelfRef.core__DOT__res_sched__DOT__branch)
                                             ? (7U 
                                                & (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                                   >> 0x0000000cU))
                                             : 2U))),3);
        bufp->chgIData(oldp+5267,(vlSelfRef.core__DOT__res_sched__DOT__V_k),32);
        bufp->chgIData(oldp+5268,(vlSelfRef.core__DOT__res_sched__DOT__V_j),32);
        bufp->chgCData(oldp+5269,(vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j),4);
        bufp->chgCData(oldp+5270,(((0x33U == (0x0000007fU 
                                              & vlSelfRef.core__DOT__res_sched__DOT__ins))
                                    ? (((((IData)(vlSelfRef.core__DOT__Q_k) 
                                          == (0x0000000fU 
                                              & (IData)(
                                                        (vlSelfRef.core__DOT__CDB_out 
                                                         >> 0x00000022U)))) 
                                         & (0U != (0x0000000fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__CDB_out 
                                                              >> 0x00000022U))))) 
                                        & (~ (IData)(vlSelfRef.core__DOT__CDB_out)))
                                        ? 0U : ((IData)(vlSelfRef.core__DOT__rs2reg_busy)
                                                 ? 
                                                ((IData)(vlSelfRef.core__DOT__rs2rob_ready)
                                                  ? 0U
                                                  : (IData)(vlSelfRef.core__DOT__Q_k))
                                                 : 0U))
                                    : ((IData)(vlSelfRef.core__DOT__res_sched__DOT__branch)
                                        ? (((((IData)(vlSelfRef.core__DOT__Q_k) 
                                              == (0x0000000fU 
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
                                            ? 0U : 
                                           ((IData)(vlSelfRef.core__DOT__rs2reg_busy)
                                             ? ((IData)(vlSelfRef.core__DOT__rs2rob_ready)
                                                 ? 0U
                                                 : (IData)(vlSelfRef.core__DOT__Q_k))
                                             : 0U))
                                        : 0U))),4);
        bufp->chgBit(oldp+5271,(vlSelfRef.core__DOT__res_sched__DOT__branch));
        bufp->chgBit(oldp+5272,((1U & ((IData)(vlSelfRef.core__DOT__res_sched__DOT__ps)
                                        ? (vlSelfRef.core__DOT__res_sched__DOT__instr_hold[1U] 
                                           >> 4U) : 
                                       (vlSelfRef.core__DOT__pipe_out[1U] 
                                        >> 4U)))));
        bufp->chgBit(oldp+5273,(((0x33U != (0x0000007fU 
                                            & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
                                 && ((1U & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT__branch))) 
                                     && ((0x13U != 
                                          (0x0000007fU 
                                           & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
                                         && ((1U & 
                                              (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h221b8606__0))) 
                                             && ((3U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
                                                 || ((1U 
                                                      & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_hae399222__0))) 
                                                     && (0x23U 
                                                         == 
                                                         (0x0000007fU 
                                                          & vlSelfRef.core__DOT__res_sched__DOT__ins))))))))));
        bufp->chgBit(oldp+5274,(((0x33U == (0x0000007fU 
                                            & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
                                 || ((1U & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT__branch))) 
                                     && ((0x13U == 
                                          (0x0000007fU 
                                           & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
                                         || ((IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h221b8606__0) 
                                             || ((3U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
                                                 || (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_hae399222__0))))))));
        bufp->chgBit(oldp+5275,(vlSelfRef.core__DOT__res_sched__DOT__ns));
        bufp->chgWData(oldp+5276,(vlSelfRef.core__DOT__res_sched__DOT__instr_hold),103);
        bufp->chgCData(oldp+5280,((0x0000007fU & vlSelfRef.core__DOT__res_sched__DOT__ins)),7);
        bufp->chgBit(oldp+5281,(((IData)(vlSelfRef.core__DOT__lsq_full) 
                                 & ((3U == (0x0000007fU 
                                            & vlSelfRef.core__DOT__res_sched__DOT__ins)) 
                                    | (0x23U == (0x0000007fU 
                                                 & vlSelfRef.core__DOT__res_sched__DOT__ins))))));
        bufp->chgBit(oldp+5282,(((IData)(vlSelfRef.core__DOT__jalrq_full) 
                                 & (0x67U == (0x0000007fU 
                                              & vlSelfRef.core__DOT__res_sched__DOT__ins)))));
        bufp->chgBit(oldp+5283,(((~ (IData)(vlSelfRef.core__DOT__stall)) 
                                 & (0U == (IData)(vlSelfRef.core__DOT__rs_dest)))));
        bufp->chgBit(oldp+5284,(((~ (IData)(vlSelfRef.core__DOT__stall)) 
                                 & (1U == (IData)(vlSelfRef.core__DOT__rs_dest)))));
        bufp->chgBit(oldp+5285,(((~ (IData)(vlSelfRef.core__DOT__stall)) 
                                 & (2U == (IData)(vlSelfRef.core__DOT__rs_dest)))));
        bufp->chgBit(oldp+5286,(((~ (IData)(vlSelfRef.core__DOT__stall)) 
                                 & (3U == (IData)(vlSelfRef.core__DOT__rs_dest)))));
        bufp->chgBit(oldp+5287,((1U & (vlSelfRef.core__DOT__reservation_stations__DOT__rs0__DOT__q_reg[0U] 
                                       >> 1U))));
        bufp->chgWData(oldp+5288,(vlSelfRef.core__DOT__reservation_stations__DOT__rs0__DOT__q_reg),85);
        bufp->chgBit(oldp+5291,((1U & (vlSelfRef.core__DOT__reservation_stations__DOT__rs1__DOT__q_reg[0U] 
                                       >> 1U))));
        bufp->chgWData(oldp+5292,(vlSelfRef.core__DOT__reservation_stations__DOT__rs1__DOT__q_reg),85);
        bufp->chgBit(oldp+5295,((1U & (vlSelfRef.core__DOT__reservation_stations__DOT__rs2__DOT__q_reg[0U] 
                                       >> 1U))));
        bufp->chgWData(oldp+5296,(vlSelfRef.core__DOT__reservation_stations__DOT__rs2__DOT__q_reg),85);
        bufp->chgBit(oldp+5299,((1U & (vlSelfRef.core__DOT__reservation_stations__DOT__rs3__DOT__q_reg[0U] 
                                       >> 1U))));
        bufp->chgWData(oldp+5300,(vlSelfRef.core__DOT__reservation_stations__DOT__rs3__DOT__q_reg),85);
        bufp->chgIData(oldp+5303,(vlSelfRef.core__DOT__fu_bus[8U]),32);
        bufp->chgIData(oldp+5304,(vlSelfRef.core__DOT__fu_bus[9U]),32);
        bufp->chgCData(oldp+5305,((0x0000000fU & (vlSelfRef.core__DOT__ROB_entry_bus 
                                                  >> 0x00000010U))),4);
        bufp->chgCData(oldp+5306,((0x0000000fU & (vlSelfRef.core__DOT__ALU_op 
                                                  >> 0x00000010U))),4);
        bufp->chgBit(oldp+5307,((1U & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                       >> 4U))));
        bufp->chgBit(oldp+5308,((1U & ((IData)(vlSelfRef.core__DOT__yumi_bus) 
                                       >> 5U))));
        bufp->chgBit(oldp+5309,((3U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))));
        bufp->chgBit(oldp+5310,((0U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))));
        bufp->chgIData(oldp+5311,(vlSelfRef.core__DOT__shift_fu__DOT__shift_dp__DOT__A),32);
        bufp->chgBit(oldp+5312,(vlSelfRef.core__DOT__shift_fu__DOT__loadregs));
        bufp->chgBit(oldp+5313,((2U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))));
        bufp->chgCData(oldp+5314,(vlSelfRef.core__DOT__shift_fu__DOT__curr_rob),4);
        bufp->chgCData(oldp+5315,(vlSelfRef.core__DOT__shift_fu__DOT__ALUop_reg),4);
        bufp->chgIData(oldp+5316,(vlSelfRef.core__DOT__shift_fu__DOT__P),32);
        bufp->chgCData(oldp+5317,(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps),2);
        bufp->chgCData(oldp+5318,(((0U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))
                                    ? ((0x00000010U 
                                        & (IData)(vlSelfRef.core__DOT__valid_in_bus))
                                        ? 2U : 0U) : 
                                   ((2U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))
                                     ? ((1U == vlSelfRef.core__DOT__shift_fu__DOT__P)
                                         ? 3U : 2U)
                                     : ((3U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))
                                         ? ((0x00000020U 
                                             & (IData)(vlSelfRef.core__DOT__yumi_bus))
                                             ? 0U : 3U)
                                         : 0U)))),2);
    }
    bufp->chgIData(oldp+5319,(vlSelfRef.mem_wr_addr),32);
    bufp->chgIData(oldp+5320,(vlSelfRef.mem_wr_data),32);
    bufp->chgBit(oldp+5321,(vlSelfRef.mem_wr_en));
    bufp->chgBit(oldp+5322,(vlSelfRef.valid_commit_out));
    bufp->chgBit(oldp+5323,(vlSelfRef.RegWrite_out));
    bufp->chgCData(oldp+5324,(vlSelfRef.rd_out),5);
    bufp->chgIData(oldp+5325,(vlSelfRef.head_pc),32);
    bufp->chgIData(oldp+5326,(vlSelfRef.WriteData_out),32);
    bufp->chgIData(oldp+5327,(vlSelfRef.ins_out),32);
    bufp->chgBit(oldp+5328,(vlSelfRef.clk));
    bufp->chgBit(oldp+5329,(vlSelfRef.reset));
    bufp->chgIData(oldp+5330,(((IData)(vlSelfRef.reset)
                                ? 0U : ((IData)(vlSelfRef.core__DOT__mispredicted)
                                         ? vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack
                                        [(0x0000000fU 
                                          & ((IData)(vlSelfRef.core__DOT__commit_unit__DOT__commit_ras_pointer) 
                                             - (IData)(1U)))]
                                         : vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__stack
                                        [vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp]))),32);
    bufp->chgBit(oldp+5331,(((~ (((IData)(vlSelfRef.rd_out) 
                                  == (0x0000001fU & 
                                      (vlSelfRef.core__DOT__res_sched__DOT__ins 
                                       >> 7U))) & (IData)(vlSelfRef.core__DOT__issue_writes))) 
                             & ((0x0000000fU & (vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                                [vlSelfRef.rd_out] 
                                                >> 1U)) 
                                == ((IData)(vlSelfRef.core__DOT__rob_read_enable)
                                     ? (0x0000000fU 
                                        & (vlSelfRef.core__DOT__commit_unit__DOT__head[4U] 
                                           >> 0x0000000aU))
                                     : 0U)))));
}
