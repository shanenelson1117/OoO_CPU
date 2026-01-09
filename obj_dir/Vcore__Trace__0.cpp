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
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        __Vtemp_1[2U] = (((IData)((((QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                    << 7U) | (QData)((IData)(
                                                             (((IData)(vlSelfRef.core__DOT__generate_new_pc__DOT__pipe_taken) 
                                                               << 6U) 
                                                              | (((0x63U 
                                                                   == 
                                                                   (0x0000007fU 
                                                                    & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                                                  << 5U) 
                                                                 | (((0x6fU 
                                                                      == 
                                                                      (0x0000007fU 
                                                                       & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                                                     << 4U) 
                                                                    | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp)))))))) 
                          >> 0x00000017U) | ((IData)(
                                                     ((((QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                                        << 7U) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlSelfRef.core__DOT__generate_new_pc__DOT__pipe_taken) 
                                                                           << 6U) 
                                                                          | (((0x63U 
                                                                               == 
                                                                               (0x0000007fU 
                                                                                & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                                                              << 5U) 
                                                                             | (((0x6fU 
                                                                                == 
                                                                                (0x0000007fU 
                                                                                & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                                                                << 4U) 
                                                                                | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp))))))) 
                                                      >> 0x00000020U)) 
                                             << 9U));
        __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__newpc)) 
                                  << 9U) | (QData)((IData)(
                                                           (((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__mcause) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__read_exception))))));
        __Vtemp_2[1U] = (((IData)((((QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                    << 7U) | (QData)((IData)(
                                                             (((IData)(vlSelfRef.core__DOT__generate_new_pc__DOT__pipe_taken) 
                                                               << 6U) 
                                                              | (((0x63U 
                                                                   == 
                                                                   (0x0000007fU 
                                                                    & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                                                  << 5U) 
                                                                 | (((0x6fU 
                                                                      == 
                                                                      (0x0000007fU 
                                                                       & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)) 
                                                                     << 4U) 
                                                                    | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp)))))))) 
                          << 9U) | (IData)(((((QData)((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__newpc)) 
                                              << 9U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__mcause) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__read_exception))))) 
                                            >> 0x00000020U)));
        __Vtemp_2[2U] = ((vlSelfRef.core__DOT__fetch_stage__DOT__pc 
                          << 0x00000010U) | __Vtemp_1[2U]);
        __Vtemp_2[3U] = (vlSelfRef.core__DOT__fetch_stage__DOT__pc 
                         >> 0x00000010U);
        bufp->chgWData(oldp+0,(__Vtemp_2),112);
        bufp->chgWData(oldp+4,(vlSelfRef.core__DOT__rs_input),85);
        bufp->chgWData(oldp+7,(vlSelfRef.core__DOT__res_sched__DOT__rob_input),167);
        bufp->chgBit(oldp+13,(vlSelfRef.core__DOT__illegal_access_e));
        bufp->chgBit(oldp+14,(vlSelfRef.core__DOT__mret));
        bufp->chgBit(oldp+15,(vlSelfRef.core__DOT____Vcellinp__adder_fu_0__reset));
        bufp->chgIData(oldp+16,(vlSelfRef.core__DOT__fetch_stage__DOT__newpc),32);
        bufp->chgIData(oldp+17,((((~ (IData)(vlSelfRef.core__DOT__mispredicted)) 
                                  & (IData)(vlSelfRef.core__DOT__ins_hold__DOT__ps))
                                  ? vlSelfRef.core__DOT__fetch_stage__DOT__pc
                                  : vlSelfRef.core__DOT__fetch_stage__DOT__newpc)),32);
        bufp->chgBit(oldp+18,(((0x0000000fU & (vlSelfRef.core__DOT__res_sched__DOT__rob_input[5U] 
                                               >> 3U)) 
                               == (IData)(vlSelfRef.core__DOT__reorder_buffer__DOT__wptr))));
        bufp->chgIData(oldp+19,(vlSelfRef.core__DOT__res_sched__DOT__V_k),32);
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelfRef.core__DOT__reservation_stations__DOT____VdfgRegularize_h1542825a_0_0) 
                                     | (IData)(vlSelfRef.core__DOT__consumed_bus)))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelfRef.core__DOT__reservation_stations__DOT____VdfgRegularize_h1542825a_0_0) 
                                     | ((IData)(vlSelfRef.core__DOT__consumed_bus) 
                                        >> 1U)))));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelfRef.core__DOT__reservation_stations__DOT____VdfgRegularize_h1542825a_0_0) 
                                     | ((IData)(vlSelfRef.core__DOT__consumed_bus) 
                                        >> 2U)))));
        bufp->chgBit(oldp+23,(((IData)(vlSelfRef.core__DOT__reservation_stations__DOT____VdfgRegularize_h1542825a_0_0) 
                               | ((IData)(vlSelfRef.core__DOT__consumed_bus) 
                                  >> 3U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgWData(oldp+24,(vlSelfRef.core__DOT__pipe_out),112);
        bufp->chgIData(oldp+28,((((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0)
                                   ? vlSelfRef.core__DOT__committed_pc
                                   : ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1)
                                       ? 0U : vlSelfRef.core__DOT__fetch_stage__DOT__pc)) 
                                 + ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0)
                                     ? (((~ (IData)(vlSelfRef.core__DOT__commit_result)) 
                                         & (IData)(vlSelfRef.core__DOT__commit_prediction))
                                         ? 4U : vlSelfRef.core__DOT__commit_imm_se)
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
        bufp->chgIData(oldp+29,(vlSelfRef.core__DOT__committed_pc),32);
        bufp->chgIData(oldp+30,(vlSelfRef.core__DOT__commit_imm_se),32);
        bufp->chgBit(oldp+31,(vlSelfRef.core__DOT__mispredicted));
        bufp->chgBit(oldp+32,(vlSelfRef.core__DOT__commit_prediction));
        bufp->chgBit(oldp+33,(vlSelfRef.core__DOT__commit_result));
        bufp->chgBit(oldp+34,(vlSelfRef.core__DOT__committed_is_branch));
        bufp->chgBit(oldp+35,((IData)(((0x000c0000U 
                                        == (0x000c0000U 
                                            & vlSelfRef.core__DOT__commit_unit__DOT__head[2U])) 
                                       & (IData)(vlSelfRef.core__DOT__commit_unit__DOT__jalrq_ready)))));
        bufp->chgBit(oldp+36,(vlSelfRef.core__DOT__stall));
        bufp->chgIData(oldp+37,(vlSelfRef.core__DOT__rs1reg_data),32);
        bufp->chgIData(oldp+38,(vlSelfRef.core__DOT__rs2reg_data),32);
        bufp->chgCData(oldp+39,(vlSelfRef.core__DOT__ROB_entry),4);
        bufp->chgCData(oldp+40,(vlSelfRef.core__DOT__Q_j),4);
        bufp->chgCData(oldp+41,(vlSelfRef.core__DOT__Q_k),4);
        bufp->chgBit(oldp+42,(vlSelfRef.core__DOT__rs1reg_busy));
        bufp->chgBit(oldp+43,(vlSelfRef.core__DOT__rs2reg_busy));
        bufp->chgBit(oldp+44,(vlSelfRef.core__DOT__rob_full));
        bufp->chgBit(oldp+45,(vlSelfRef.core__DOT__commit_unit__DOT__empty));
        bufp->chgCData(oldp+46,((0x0000001fU & ((vlSelfRef.core__DOT__hold_out[2U] 
                                                 << 1U) 
                                                | (vlSelfRef.core__DOT__hold_out[1U] 
                                                   >> 0x0000001fU)))),5);
        bufp->chgCData(oldp+47,((0x0000001fU & (vlSelfRef.core__DOT__hold_out[2U] 
                                                >> 4U))),5);
        bufp->chgBit(oldp+48,(vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp));
        bufp->chgCData(oldp+49,((0x0000001fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                                >> 0x00000017U))),5);
        bufp->chgCData(oldp+50,(vlSelfRef.core__DOT__rs_dest),3);
        bufp->chgBit(oldp+51,(vlSelfRef.core__DOT__RegWrite));
        bufp->chgIData(oldp+52,(vlSelfRef.core__DOT__WriteData),32);
        bufp->chgQData(oldp+53,(vlSelfRef.core__DOT__CDB_out),38);
        bufp->chgCData(oldp+55,(((((2U & vlSelfRef.core__DOT__reservation_stations__DOT__rs3__DOT__q_reg[0U]) 
                                   | (1U & (vlSelfRef.core__DOT__reservation_stations__DOT__rs2__DOT__q_reg[0U] 
                                            >> 1U))) 
                                  << 2U) | ((2U & vlSelfRef.core__DOT__reservation_stations__DOT__rs1__DOT__q_reg[0U]) 
                                            | (1U & 
                                               (vlSelfRef.core__DOT__reservation_stations__DOT__rs0__DOT__q_reg[0U] 
                                                >> 1U))))),4);
        bufp->chgCData(oldp+56,(vlSelfRef.core__DOT__consumed_bus),4);
        bufp->chgWData(oldp+57,(vlSelfRef.core__DOT__rs0_data),77);
        bufp->chgWData(oldp+60,(vlSelfRef.core__DOT__rs1_data),77);
        bufp->chgWData(oldp+63,(vlSelfRef.core__DOT__rs2_data),77);
        bufp->chgWData(oldp+66,(vlSelfRef.core__DOT__rs3_data),77);
        bufp->chgCData(oldp+69,(vlSelfRef.core__DOT__ready_bus),5);
        bufp->chgIData(oldp+70,(vlSelfRef.core__DOT__ROB_entry_bus),20);
        bufp->chgCData(oldp+71,(vlSelfRef.core__DOT__branch_type_bus),6);
        bufp->chgCData(oldp+72,(vlSelfRef.core__DOT__load),2);
        bufp->chgCData(oldp+73,(vlSelfRef.core__DOT__valid_in_bus),5);
        bufp->chgIData(oldp+74,(vlSelfRef.core__DOT__ALU_op),20);
        bufp->chgWData(oldp+75,(vlSelfRef.core__DOT__fu_bus),320);
        bufp->chgCData(oldp+85,(vlSelfRef.core__DOT__yumi_bus),6);
        bufp->chgQData(oldp+86,(vlSelfRef.core__DOT__out_0),38);
        bufp->chgQData(oldp+88,(vlSelfRef.core__DOT__out_1),38);
        bufp->chgQData(oldp+90,((((QData)((IData)(vlSelfRef.core__DOT__mult_fu__DOT__curr_rob)) 
                                  << 0x00000022U) | 
                                 ((QData)((IData)(((IData)(vlSelfRef.core__DOT__mult_fu__DOT__mul_h)
                                                    ? vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__A
                                                    : vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__Q))) 
                                  << 2U))),38);
        bufp->chgQData(oldp+92,((((QData)((IData)(vlSelfRef.core__DOT__div_fu__DOT__curr_rob)) 
                                  << 0x00000022U) | 
                                 ((QData)((IData)((
                                                   (((~ (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b_reg)) 
                                                     & (IData)(vlSelfRef.core__DOT__div_fu__DOT__div)) 
                                                    | ((~ (IData)(vlSelfRef.core__DOT__div_fu__DOT__div)) 
                                                       & (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b_reg)))
                                                    ? vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__Q
                                                    : vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A))) 
                                  << 2U))),38);
        bufp->chgCData(oldp+94,(vlSelfRef.core__DOT__cdb__DOT__valid_out_bus),6);
        bufp->chgQData(oldp+95,((((QData)((IData)(vlSelfRef.core__DOT__data_memory__DOT__mem_rob_entry_reg)) 
                                  << 0x00000022U) | 
                                 ((QData)((IData)(vlSelfRef.core__DOT__data_memory__DOT__mem_result_reg)) 
                                  << 2U))),38);
        bufp->chgWData(oldp+97,(vlSelfRef.core__DOT__lsq_input),79);
        bufp->chgBit(oldp+100,((IData)((0U != (0x6000U 
                                               & vlSelfRef.core__DOT__lsq_input[2U])))));
        bufp->chgBit(oldp+101,(vlSelfRef.core__DOT__lsq_full));
        bufp->chgBit(oldp+102,(((IData)(vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__read_enable) 
                                | (IData)(vlSelfRef.core__DOT__commit_unit__DOT__rd_en_rob))));
        bufp->chgBit(oldp+103,(vlSelfRef.core__DOT__head_ready));
        bufp->chgBit(oldp+104,((1U & (vlSelfRef.core__DOT__lsq_out[2U] 
                                      >> 0x0000000eU))));
        bufp->chgWData(oldp+105,(vlSelfRef.core__DOT__lsq_out),79);
        bufp->chgBit(oldp+108,(vlSelfRef.core__DOT__commit_unit__DOT__rd_en_rob));
        bufp->chgBit(oldp+109,(vlSelfRef.core__DOT__rob_read_enable));
        bufp->chgWData(oldp+110,(vlSelfRef.core__DOT__commit_unit__DOT__head),167);
        bufp->chgBit(oldp+116,((1U & (vlSelfRef.core__DOT__commit_unit__DOT__head[2U] 
                                      >> 0x00000013U))));
        bufp->chgCData(oldp+117,(vlSelfRef.core__DOT__commit_unit__DOT__commit_ROB),4);
        bufp->chgBit(oldp+118,(vlSelfRef.core__DOT__valid_commit));
        bufp->chgBit(oldp+119,(vlSelfRef.core__DOT__lsq_empty));
        bufp->chgBit(oldp+120,(vlSelfRef.core__DOT__ins_hold__DOT__ps));
        bufp->chgQData(oldp+121,((((QData)((IData)(vlSelfRef.core__DOT__shift_fu__DOT__curr_rob)) 
                                   << 0x00000022U) 
                                  | ((QData)((IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_dp__DOT__A)) 
                                     << 2U))),38);
        bufp->chgBit(oldp+123,(vlSelfRef.core__DOT__rd_en_jalrq));
        bufp->chgBit(oldp+124,(vlSelfRef.core__DOT__commit_unit__DOT__jalrq_ready));
        bufp->chgIData(oldp+125,(vlSelfRef.core__DOT__jalr_actual_address),32);
        bufp->chgIData(oldp+126,(((vlSelfRef.core__DOT__indirect_jump_queue__DOT__jalrq_data
                                   [vlSelfRef.core__DOT__indirect_jump_queue__DOT__rptr][2U] 
                                   << 0x00000010U) 
                                  | (vlSelfRef.core__DOT__indirect_jump_queue__DOT__jalrq_data
                                     [vlSelfRef.core__DOT__indirect_jump_queue__DOT__rptr][1U] 
                                     >> 0x00000010U))),32);
        bufp->chgBit(oldp+127,(vlSelfRef.core__DOT__jalrq_full));
        bufp->chgWData(oldp+128,(vlSelfRef.core__DOT__jalrq_input),81);
        bufp->chgCData(oldp+131,(vlSelfRef.core__DOT__commit_unit__DOT__commit_ras_pointer),4);
        bufp->chgIData(oldp+132,(vlSelfRef.core__DOT__rs1rob_data),32);
        bufp->chgIData(oldp+133,(vlSelfRef.core__DOT__rs2rob_data),32);
        bufp->chgBit(oldp+134,(vlSelfRef.core__DOT__rs1rob_ready));
        bufp->chgBit(oldp+135,(vlSelfRef.core__DOT__rs2rob_ready));
        bufp->chgBit(oldp+136,(vlSelfRef.core__DOT__exception));
        bufp->chgCData(oldp+137,(vlSelfRef.core__DOT__mcause),8);
        bufp->chgCData(oldp+138,(vlSelfRef.core__DOT__commit_csr_write_select),3);
        bufp->chgBit(oldp+139,(vlSelfRef.core__DOT__commit_csr_valid_write));
        bufp->chgBit(oldp+140,(vlSelfRef.core__DOT__res_sched__DOT__csr_valid_write_temp));
        bufp->chgBit(oldp+141,(vlSelfRef.core__DOT__valid_packet));
        bufp->chgCData(oldp+142,(vlSelfRef.core__DOT__curr_priv),2);
        bufp->chgBit(oldp+143,(vlSelfRef.core__DOT__csr_busy));
        bufp->chgBit(oldp+144,(vlSelfRef.core__DOT__issue_csr_op));
        bufp->chgCData(oldp+145,(vlSelfRef.core__DOT__csr_read_select),3);
        bufp->chgCData(oldp+146,(vlSelfRef.core__DOT__Q_csr),4);
        bufp->chgWData(oldp+147,(vlSelfRef.core__DOT__hold_out),112);
        bufp->chgBit(oldp+151,((1U & (IData)(vlSelfRef.core__DOT__valid_in_bus))));
        bufp->chgBit(oldp+152,((1U & (IData)(vlSelfRef.core__DOT__yumi_bus))));
        bufp->chgBit(oldp+153,((1U & (IData)(vlSelfRef.core__DOT__load))));
        bufp->chgCData(oldp+154,((0x0000000fU & vlSelfRef.core__DOT__ALU_op)),4);
        bufp->chgCData(oldp+155,((0x0000000fU & vlSelfRef.core__DOT__ROB_entry_bus)),4);
        bufp->chgIData(oldp+156,(vlSelfRef.core__DOT__fu_bus[0U]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.core__DOT__fu_bus[1U]),32);
        bufp->chgCData(oldp+158,((7U & (IData)(vlSelfRef.core__DOT__branch_type_bus))),3);
        bufp->chgBit(oldp+159,(vlSelfRef.core__DOT____Vcellout__adder_fu_0__valid_out));
        bufp->chgBit(oldp+160,(vlSelfRef.core__DOT____Vcellout__adder_fu_0__ready));
        bufp->chgIData(oldp+161,(vlSelfRef.core__DOT__adder_fu_0__DOT__s),32);
        bufp->chgIData(oldp+162,(((7U == (0x0000000fU 
                                          & vlSelfRef.core__DOT__ALU_op))
                                   ? ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT____VdfgRegularize_h58454f79_0_0)
                                       ? 1U : 0U) : 
                                  ((6U == (0x0000000fU 
                                           & vlSelfRef.core__DOT__ALU_op))
                                    ? ((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__carry)
                                        ? 0U : 1U) : 
                                   ((5U == (0x0000000fU 
                                            & vlSelfRef.core__DOT__ALU_op))
                                     ? ((~ vlSelfRef.core__DOT__fu_bus[0U]) 
                                        & vlSelfRef.core__DOT__fu_bus[1U])
                                     : ((1U == (0x0000000fU 
                                                & vlSelfRef.core__DOT__ALU_op))
                                         ? (vlSelfRef.core__DOT__fu_bus[0U] 
                                            ^ vlSelfRef.core__DOT__fu_bus[1U])
                                         : ((2U == 
                                             (0x0000000fU 
                                              & vlSelfRef.core__DOT__ALU_op))
                                             ? (vlSelfRef.core__DOT__fu_bus[0U] 
                                                | vlSelfRef.core__DOT__fu_bus[1U])
                                             : ((3U 
                                                 == 
                                                 (0x0000000fU 
                                                  & vlSelfRef.core__DOT__ALU_op))
                                                 ? 
                                                (vlSelfRef.core__DOT__fu_bus[0U] 
                                                 & vlSelfRef.core__DOT__fu_bus[1U])
                                                 : vlSelfRef.core__DOT__adder_fu_0__DOT__s))))))),32);
        bufp->chgBit(oldp+163,((0U == vlSelfRef.core__DOT__adder_fu_0__DOT__s)));
        bufp->chgBit(oldp+164,(vlSelfRef.core__DOT__adder_fu_0__DOT__negative));
        bufp->chgBit(oldp+165,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__carry))));
        bufp->chgBit(oldp+166,((1U & (vlSelfRef.core__DOT__ALU_op 
                                      >> 2U))));
        bufp->chgBit(oldp+167,(vlSelfRef.core__DOT__adder_fu_0__DOT__carry));
        bufp->chgBit(oldp+168,((((0U != vlSelfRef.core__DOT__adder_fu_0__DOT__s) 
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
        bufp->chgBit(oldp+169,(vlSelfRef.core__DOT__adder_fu_0__DOT__b_taken));
        bufp->chgBit(oldp+170,(vlSelfRef.core__DOT__adder_fu_0__DOT__load_step1));
        bufp->chgBit(oldp+171,((1U == (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)))));
        bufp->chgBit(oldp+172,((0U == (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)))));
        bufp->chgBit(oldp+173,((4U == (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)))));
        bufp->chgBit(oldp+174,((5U == (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)))));
        bufp->chgBit(oldp+175,((6U == (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)))));
        bufp->chgBit(oldp+176,((7U == (7U & (IData)(vlSelfRef.core__DOT__branch_type_bus)))));
        bufp->chgCData(oldp+177,(vlSelfRef.core__DOT__adder_fu_0__DOT__curr_rob),4);
        bufp->chgQData(oldp+178,((((QData)((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__carry)) 
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
        bufp->chgIData(oldp+180,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b),32);
        bufp->chgBit(oldp+181,((1U & vlSelfRef.core__DOT__fu_bus[0U])));
        bufp->chgBit(oldp+182,((1U & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b)));
        bufp->chgBit(oldp+183,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+184,((1U & ((vlSelfRef.core__DOT__ALU_op 
                                       >> 2U) ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1)))));
        bufp->chgBit(oldp+185,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+186,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b))));
        bufp->chgBit(oldp+187,(((vlSelfRef.core__DOT__ALU_op 
                                 >> 2U) & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+188,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+189,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+190,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+191,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+192,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+193,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+194,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+195,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+196,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+197,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+198,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+199,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+200,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+201,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+202,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+203,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+204,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+205,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+206,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+207,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+208,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+209,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+210,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+211,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+212,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+213,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+214,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+215,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+216,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+217,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+218,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+219,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+220,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+221,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+222,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+223,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+224,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+225,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+226,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+227,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+228,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+229,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+230,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+231,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+232,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+233,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+234,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+235,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+236,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+237,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+238,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+239,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+240,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+241,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+242,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+243,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+244,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+245,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+246,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+247,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+248,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+249,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+250,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+251,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+252,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000013U))));
        bufp->chgBit(oldp+253,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000013U))));
        bufp->chgBit(oldp+254,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+255,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+256,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+257,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000013U))));
        bufp->chgBit(oldp+258,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+259,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+260,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 1U))));
        bufp->chgBit(oldp+261,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+262,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+263,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+264,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 1U))));
        bufp->chgBit(oldp+265,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+266,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000014U))));
        bufp->chgBit(oldp+267,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000014U))));
        bufp->chgBit(oldp+268,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+269,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+270,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+271,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000014U))));
        bufp->chgBit(oldp+272,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+273,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+274,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+275,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+276,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+277,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+278,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+279,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+280,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+281,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+282,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+283,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+284,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+285,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+286,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+287,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000017U))));
        bufp->chgBit(oldp+288,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000017U))));
        bufp->chgBit(oldp+289,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+290,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+291,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+292,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000017U))));
        bufp->chgBit(oldp+293,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+294,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000018U))));
        bufp->chgBit(oldp+295,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000018U))));
        bufp->chgBit(oldp+296,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+297,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+298,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+299,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000018U))));
        bufp->chgBit(oldp+300,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+301,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x00000019U))));
        bufp->chgBit(oldp+302,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x00000019U))));
        bufp->chgBit(oldp+303,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+304,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+305,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+306,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x00000019U))));
        bufp->chgBit(oldp+307,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+308,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000001aU))));
        bufp->chgBit(oldp+309,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000001aU))));
        bufp->chgBit(oldp+310,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+311,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+312,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+313,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000001aU))));
        bufp->chgBit(oldp+314,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+315,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000001bU))));
        bufp->chgBit(oldp+316,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000001bU))));
        bufp->chgBit(oldp+317,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+318,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+319,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+320,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000001bU))));
        bufp->chgBit(oldp+321,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+322,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000001cU))));
        bufp->chgBit(oldp+323,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000001cU))));
        bufp->chgBit(oldp+324,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+325,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+326,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+327,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000001cU))));
        bufp->chgBit(oldp+328,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+329,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+330,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+331,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+332,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+333,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+334,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+335,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+336,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+337,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 2U))));
        bufp->chgBit(oldp+338,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+339,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+340,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+341,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 2U))));
        bufp->chgBit(oldp+342,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+343,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+344,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+345,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+346,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+347,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+348,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+349,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+350,((vlSelfRef.core__DOT__fu_bus[0U] 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+351,((vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+352,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+353,(((vlSelfRef.core__DOT__fu_bus[0U] 
                                 & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+354,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+355,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+356,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 3U))));
        bufp->chgBit(oldp+357,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+358,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+359,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+360,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 3U))));
        bufp->chgBit(oldp+361,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+362,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+363,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 4U))));
        bufp->chgBit(oldp+364,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+365,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+366,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+367,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 4U))));
        bufp->chgBit(oldp+368,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+369,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+370,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 5U))));
        bufp->chgBit(oldp+371,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+372,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+373,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+374,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 5U))));
        bufp->chgBit(oldp+375,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+376,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+377,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 6U))));
        bufp->chgBit(oldp+378,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+379,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+380,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+381,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 6U))));
        bufp->chgBit(oldp+382,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+383,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+384,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 7U))));
        bufp->chgBit(oldp+385,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+386,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+387,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+388,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 7U))));
        bufp->chgBit(oldp+389,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+390,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+391,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 8U))));
        bufp->chgBit(oldp+392,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+393,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+394,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+395,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 8U))));
        bufp->chgBit(oldp+396,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+397,((1U & (vlSelfRef.core__DOT__fu_bus[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+398,((1U & (vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b 
                                      >> 9U))));
        bufp->chgBit(oldp+399,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+400,(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+401,((1U & ((vlSelfRef.core__DOT__fu_bus[0U] 
                                       & vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__b) 
                                      >> 9U))));
        bufp->chgBit(oldp+402,(((IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_0__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+403,((1U & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                      >> 1U))));
        bufp->chgBit(oldp+404,((1U & ((IData)(vlSelfRef.core__DOT__yumi_bus) 
                                      >> 1U))));
        bufp->chgBit(oldp+405,((1U & ((IData)(vlSelfRef.core__DOT__load) 
                                      >> 1U))));
        bufp->chgCData(oldp+406,((0x0000000fU & (vlSelfRef.core__DOT__ALU_op 
                                                 >> 4U))),4);
        bufp->chgCData(oldp+407,((0x0000000fU & (vlSelfRef.core__DOT__ROB_entry_bus 
                                                 >> 4U))),4);
        bufp->chgIData(oldp+408,(vlSelfRef.core__DOT__fu_bus[2U]),32);
        bufp->chgIData(oldp+409,(vlSelfRef.core__DOT__fu_bus[3U]),32);
        bufp->chgCData(oldp+410,((7U & ((IData)(vlSelfRef.core__DOT__branch_type_bus) 
                                        >> 3U))),3);
        bufp->chgBit(oldp+411,(vlSelfRef.core__DOT____Vcellout__adder_fu_1__valid_out));
        bufp->chgBit(oldp+412,(vlSelfRef.core__DOT____Vcellout__adder_fu_1__ready));
        bufp->chgIData(oldp+413,(vlSelfRef.core__DOT__adder_fu_1__DOT__s),32);
        bufp->chgIData(oldp+414,(((7U == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__ALU_op 
                                             >> 4U)))
                                   ? ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT____VdfgRegularize_h58454f79_0_0)
                                       ? 1U : 0U) : 
                                  ((6U == (0x0000000fU 
                                           & (vlSelfRef.core__DOT__ALU_op 
                                              >> 4U)))
                                    ? ((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__carry)
                                        ? 0U : 1U) : 
                                   ((5U == (0x0000000fU 
                                            & (vlSelfRef.core__DOT__ALU_op 
                                               >> 4U)))
                                     ? ((~ vlSelfRef.core__DOT__fu_bus[2U]) 
                                        & vlSelfRef.core__DOT__fu_bus[3U])
                                     : ((1U == (0x0000000fU 
                                                & (vlSelfRef.core__DOT__ALU_op 
                                                   >> 4U)))
                                         ? (vlSelfRef.core__DOT__fu_bus[2U] 
                                            ^ vlSelfRef.core__DOT__fu_bus[3U])
                                         : ((2U == 
                                             (0x0000000fU 
                                              & (vlSelfRef.core__DOT__ALU_op 
                                                 >> 4U)))
                                             ? (vlSelfRef.core__DOT__fu_bus[2U] 
                                                | vlSelfRef.core__DOT__fu_bus[3U])
                                             : ((3U 
                                                 == 
                                                 (0x0000000fU 
                                                  & (vlSelfRef.core__DOT__ALU_op 
                                                     >> 4U)))
                                                 ? 
                                                (vlSelfRef.core__DOT__fu_bus[2U] 
                                                 & vlSelfRef.core__DOT__fu_bus[3U])
                                                 : vlSelfRef.core__DOT__adder_fu_1__DOT__s))))))),32);
        bufp->chgBit(oldp+415,((0U == vlSelfRef.core__DOT__adder_fu_1__DOT__s)));
        bufp->chgBit(oldp+416,(vlSelfRef.core__DOT__adder_fu_1__DOT__negative));
        bufp->chgBit(oldp+417,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__carry))));
        bufp->chgBit(oldp+418,((1U & (vlSelfRef.core__DOT__ALU_op 
                                      >> 6U))));
        bufp->chgBit(oldp+419,(vlSelfRef.core__DOT__adder_fu_1__DOT__carry));
        bufp->chgBit(oldp+420,(((IData)(((8U == (0x38U 
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
        bufp->chgBit(oldp+421,(vlSelfRef.core__DOT__adder_fu_1__DOT__b_taken));
        bufp->chgBit(oldp+422,(vlSelfRef.core__DOT__adder_fu_1__DOT__load_step1));
        bufp->chgBit(oldp+423,((1U == (7U & ((IData)(vlSelfRef.core__DOT__branch_type_bus) 
                                             >> 3U)))));
        bufp->chgBit(oldp+424,((0U == (7U & ((IData)(vlSelfRef.core__DOT__branch_type_bus) 
                                             >> 3U)))));
        bufp->chgBit(oldp+425,((4U == (7U & ((IData)(vlSelfRef.core__DOT__branch_type_bus) 
                                             >> 3U)))));
        bufp->chgBit(oldp+426,((5U == (7U & ((IData)(vlSelfRef.core__DOT__branch_type_bus) 
                                             >> 3U)))));
        bufp->chgBit(oldp+427,((6U == (7U & ((IData)(vlSelfRef.core__DOT__branch_type_bus) 
                                             >> 3U)))));
        bufp->chgBit(oldp+428,((7U == (7U & ((IData)(vlSelfRef.core__DOT__branch_type_bus) 
                                             >> 3U)))));
        bufp->chgCData(oldp+429,(vlSelfRef.core__DOT__adder_fu_1__DOT__curr_rob),4);
        bufp->chgQData(oldp+430,((((QData)((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__carry)) 
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
        bufp->chgIData(oldp+432,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b),32);
        bufp->chgBit(oldp+433,((1U & vlSelfRef.core__DOT__fu_bus[2U])));
        bufp->chgBit(oldp+434,((1U & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b)));
        bufp->chgBit(oldp+435,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+436,((1U & ((vlSelfRef.core__DOT__ALU_op 
                                       >> 6U) ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1)))));
        bufp->chgBit(oldp+437,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+438,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b))));
        bufp->chgBit(oldp+439,(((vlSelfRef.core__DOT__ALU_op 
                                 >> 6U) & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__0__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+440,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+441,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+442,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+443,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+444,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+445,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+446,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000000aU))));
        bufp->chgBit(oldp+447,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__10__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+448,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+449,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+450,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+451,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+452,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+453,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+454,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__11__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+455,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+456,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+457,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+458,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+459,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+460,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+461,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__12__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+462,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+463,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+464,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+465,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+466,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+467,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000000dU))));
        bufp->chgBit(oldp+468,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__13__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+469,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+470,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+471,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+472,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+473,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+474,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+475,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__14__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+476,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+477,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+478,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+479,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+480,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+481,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+482,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__15__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+483,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+484,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+485,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+486,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+487,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+488,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000010U))));
        bufp->chgBit(oldp+489,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__16__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+490,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+491,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+492,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+493,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+494,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+495,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+496,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__17__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+497,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+498,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+499,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+500,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+501,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+502,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+503,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__18__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+504,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000013U))));
        bufp->chgBit(oldp+505,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000013U))));
        bufp->chgBit(oldp+506,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+507,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+508,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+509,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000013U))));
        bufp->chgBit(oldp+510,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__19__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+511,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 1U))));
        bufp->chgBit(oldp+512,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 1U))));
        bufp->chgBit(oldp+513,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+514,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+515,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+516,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 1U))));
        bufp->chgBit(oldp+517,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__1__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+518,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000014U))));
        bufp->chgBit(oldp+519,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000014U))));
        bufp->chgBit(oldp+520,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+521,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+522,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+523,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000014U))));
        bufp->chgBit(oldp+524,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__20__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+525,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+526,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+527,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+528,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+529,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+530,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000015U))));
        bufp->chgBit(oldp+531,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__21__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+532,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+533,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+534,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+535,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+536,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+537,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000016U))));
        bufp->chgBit(oldp+538,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__22__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+539,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000017U))));
        bufp->chgBit(oldp+540,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000017U))));
        bufp->chgBit(oldp+541,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+542,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+543,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+544,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000017U))));
        bufp->chgBit(oldp+545,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__23__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+546,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000018U))));
        bufp->chgBit(oldp+547,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000018U))));
        bufp->chgBit(oldp+548,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+549,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+550,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+551,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000018U))));
        bufp->chgBit(oldp+552,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__24__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+553,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x00000019U))));
        bufp->chgBit(oldp+554,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x00000019U))));
        bufp->chgBit(oldp+555,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+556,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+557,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+558,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x00000019U))));
        bufp->chgBit(oldp+559,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__25__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+560,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000001aU))));
        bufp->chgBit(oldp+561,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000001aU))));
        bufp->chgBit(oldp+562,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+563,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+564,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+565,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000001aU))));
        bufp->chgBit(oldp+566,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__26__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+567,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000001bU))));
        bufp->chgBit(oldp+568,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000001bU))));
        bufp->chgBit(oldp+569,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+570,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+571,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+572,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000001bU))));
        bufp->chgBit(oldp+573,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__27__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+574,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000001cU))));
        bufp->chgBit(oldp+575,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000001cU))));
        bufp->chgBit(oldp+576,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+577,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+578,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+579,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000001cU))));
        bufp->chgBit(oldp+580,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__28__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+581,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+582,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+583,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+584,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+585,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+586,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000001dU))));
        bufp->chgBit(oldp+587,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__29__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+588,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 2U))));
        bufp->chgBit(oldp+589,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 2U))));
        bufp->chgBit(oldp+590,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+591,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+592,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+593,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 2U))));
        bufp->chgBit(oldp+594,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__2__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+595,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+596,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+597,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+598,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+599,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+600,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+601,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__30__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+602,((vlSelfRef.core__DOT__fu_bus[2U] 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+603,((vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+604,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+605,(((vlSelfRef.core__DOT__fu_bus[2U] 
                                 & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+606,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__31__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+607,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 3U))));
        bufp->chgBit(oldp+608,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 3U))));
        bufp->chgBit(oldp+609,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+610,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+611,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+612,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 3U))));
        bufp->chgBit(oldp+613,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__3__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+614,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 4U))));
        bufp->chgBit(oldp+615,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 4U))));
        bufp->chgBit(oldp+616,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+617,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+618,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+619,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 4U))));
        bufp->chgBit(oldp+620,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__4__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+621,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 5U))));
        bufp->chgBit(oldp+622,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 5U))));
        bufp->chgBit(oldp+623,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+624,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+625,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+626,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 5U))));
        bufp->chgBit(oldp+627,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__5__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+628,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 6U))));
        bufp->chgBit(oldp+629,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 6U))));
        bufp->chgBit(oldp+630,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+631,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+632,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+633,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 6U))));
        bufp->chgBit(oldp+634,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__6__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+635,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 7U))));
        bufp->chgBit(oldp+636,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 7U))));
        bufp->chgBit(oldp+637,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+638,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+639,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+640,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 7U))));
        bufp->chgBit(oldp+641,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__7__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+642,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 8U))));
        bufp->chgBit(oldp+643,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 8U))));
        bufp->chgBit(oldp+644,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in));
        bufp->chgBit(oldp+645,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+646,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+647,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 8U))));
        bufp->chgBit(oldp+648,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__8__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+649,((1U & (vlSelfRef.core__DOT__fu_bus[2U] 
                                      >> 9U))));
        bufp->chgBit(oldp+650,((1U & (vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b 
                                      >> 9U))));
        bufp->chgBit(oldp+651,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                                ^ (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1))));
        bufp->chgBit(oldp+652,(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1));
        bufp->chgBit(oldp+653,((1U & ((vlSelfRef.core__DOT__fu_bus[2U] 
                                       & vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__b) 
                                      >> 9U))));
        bufp->chgBit(oldp+654,(((IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__c_in) 
                                & (IData)(vlSelfRef.core__DOT__adder_fu_1__DOT__adder__DOT__add_loop__BRA__9__KET____DOT__addi__DOT__i1))));
        bufp->chgCData(oldp+655,(vlSelfRef.core__DOT__csr_register_status__DOT__reg_status_table
                                 [0U]),5);
        bufp->chgCData(oldp+656,(vlSelfRef.core__DOT__csr_register_status__DOT__reg_status_table
                                 [1U]),5);
        bufp->chgCData(oldp+657,(vlSelfRef.core__DOT__csr_register_status__DOT__reg_status_table
                                 [2U]),5);
        bufp->chgCData(oldp+658,(vlSelfRef.core__DOT__csr_register_status__DOT__reg_status_table
                                 [3U]),5);
        bufp->chgCData(oldp+659,(vlSelfRef.core__DOT__csr_register_status__DOT__reg_status_table
                                 [4U]),5);
        bufp->chgCData(oldp+660,(vlSelfRef.core__DOT__csr_register_status__DOT__reg_status_table
                                 [5U]),5);
        bufp->chgCData(oldp+661,(vlSelfRef.core__DOT__csr_register_status__DOT__reg_status_table
                                 [6U]),5);
        bufp->chgCData(oldp+662,(vlSelfRef.core__DOT__csr_register_status__DOT__reg_status_table
                                 [7U]),5);
        bufp->chgCData(oldp+663,((1U | ((IData)(vlSelfRef.core__DOT__ROB_entry) 
                                        << 1U))),5);
        bufp->chgCData(oldp+664,(vlSelfRef.core__DOT__csr_register_status__DOT__reset_bus),8);
        bufp->chgCData(oldp+665,(vlSelfRef.core__DOT__csr_register_status__DOT__enable_bus),8);
        bufp->chgBit(oldp+666,(((~ (((IData)(vlSelfRef.core__DOT__commit_csr_write_select) 
                                     == (IData)(vlSelfRef.core__DOT__csr_read_select)) 
                                    & (IData)(vlSelfRef.core__DOT__res_sched__DOT__csr_valid_write_temp))) 
                                & ((0x0000000fU & (
                                                   vlSelfRef.core__DOT__csr_register_status__DOT__reg_status_table
                                                   [vlSelfRef.core__DOT__commit_csr_write_select] 
                                                   >> 1U)) 
                                   == (IData)(vlSelfRef.core__DOT__commit_unit__DOT__commit_ROB)))));
        bufp->chgBit(oldp+667,((1U & (IData)(vlSelfRef.core__DOT__csr_register_status__DOT__enable_bus))));
        bufp->chgBit(oldp+668,(((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__reset_bus) 
                                & (IData)(vlSelfRef.core__DOT__commit_csr_valid_write))));
        bufp->chgCData(oldp+669,(vlSelfRef.core__DOT__csr_register_status__DOT____Vcellout__reg_stat_entries__BRA__0__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+670,((1U & ((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__enable_bus) 
                                      >> 1U))));
        bufp->chgBit(oldp+671,((((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__reset_bus) 
                                 >> 1U) & (IData)(vlSelfRef.core__DOT__commit_csr_valid_write))));
        bufp->chgCData(oldp+672,(vlSelfRef.core__DOT__csr_register_status__DOT____Vcellout__reg_stat_entries__BRA__1__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+673,((1U & ((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__enable_bus) 
                                      >> 2U))));
        bufp->chgBit(oldp+674,((((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__reset_bus) 
                                 >> 2U) & (IData)(vlSelfRef.core__DOT__commit_csr_valid_write))));
        bufp->chgCData(oldp+675,(vlSelfRef.core__DOT__csr_register_status__DOT____Vcellout__reg_stat_entries__BRA__2__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+676,((1U & ((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__enable_bus) 
                                      >> 3U))));
        bufp->chgBit(oldp+677,((((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__reset_bus) 
                                 >> 3U) & (IData)(vlSelfRef.core__DOT__commit_csr_valid_write))));
        bufp->chgCData(oldp+678,(vlSelfRef.core__DOT__csr_register_status__DOT____Vcellout__reg_stat_entries__BRA__3__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+679,((1U & ((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__enable_bus) 
                                      >> 4U))));
        bufp->chgBit(oldp+680,((((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__reset_bus) 
                                 >> 4U) & (IData)(vlSelfRef.core__DOT__commit_csr_valid_write))));
        bufp->chgCData(oldp+681,(vlSelfRef.core__DOT__csr_register_status__DOT____Vcellout__reg_stat_entries__BRA__4__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+682,((1U & ((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__enable_bus) 
                                      >> 5U))));
        bufp->chgBit(oldp+683,((((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__reset_bus) 
                                 >> 5U) & (IData)(vlSelfRef.core__DOT__commit_csr_valid_write))));
        bufp->chgCData(oldp+684,(vlSelfRef.core__DOT__csr_register_status__DOT____Vcellout__reg_stat_entries__BRA__5__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+685,((1U & ((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__enable_bus) 
                                      >> 6U))));
        bufp->chgBit(oldp+686,((((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__reset_bus) 
                                 >> 6U) & (IData)(vlSelfRef.core__DOT__commit_csr_valid_write))));
        bufp->chgCData(oldp+687,(vlSelfRef.core__DOT__csr_register_status__DOT____Vcellout__reg_stat_entries__BRA__6__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+688,((1U & ((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__enable_bus) 
                                      >> 7U))));
        bufp->chgBit(oldp+689,((((IData)(vlSelfRef.core__DOT__csr_register_status__DOT__reset_bus) 
                                 >> 7U) & (IData)(vlSelfRef.core__DOT__commit_csr_valid_write))));
        bufp->chgCData(oldp+690,(vlSelfRef.core__DOT__csr_register_status__DOT____Vcellout__reg_stat_entries__BRA__7__KET____DOT__stat_i__q),5);
        bufp->chgWData(oldp+691,(vlSelfRef.core__DOT__csrs__DOT__csr_data),288);
        bufp->chgBit(oldp+700,((1U & ((IData)(vlSelfRef.core__DOT__yumi_bus) 
                                      >> 4U))));
        bufp->chgBit(oldp+701,(vlSelfRef.core__DOT__data_memory__DOT__mem_valid_reg));
        bufp->chgBit(oldp+702,(vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__read_enable));
        bufp->chgIData(oldp+703,(vlSelfRef.core__DOT__data_memory__DOT__mem_result_reg),32);
        bufp->chgIData(oldp+704,(vlSelfRef.core__DOT__data_memory__DOT__read_data),32);
        bufp->chgCData(oldp+705,(vlSelfRef.core__DOT__data_memory__DOT__mem_rob_entry_reg),4);
        bufp->chgIData(oldp+706,(((vlSelfRef.core__DOT__lsq_out[2U] 
                                   << 0x00000013U) 
                                  | (vlSelfRef.core__DOT__lsq_out[1U] 
                                     >> 0x0000000dU))),32);
        bufp->chgIData(oldp+707,(((vlSelfRef.core__DOT__lsq_out[1U] 
                                   << 0x00000013U) 
                                  | (vlSelfRef.core__DOT__lsq_out[0U] 
                                     >> 0x0000000dU))),32);
        bufp->chgCData(oldp+708,((7U & (vlSelfRef.core__DOT__lsq_out[0U] 
                                        >> 1U))),4);
        bufp->chgIData(oldp+709,(vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__aligned_address),32);
        bufp->chgIData(oldp+710,(vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__i),32);
        bufp->chgIData(oldp+711,(vlSelfRef.core__DOT__data_memory__DOT__the_mem__DOT__j),32);
        bufp->chgBit(oldp+712,((1U & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                      >> 3U))));
        bufp->chgBit(oldp+713,((1U & ((IData)(vlSelfRef.core__DOT__yumi_bus) 
                                      >> 3U))));
        bufp->chgCData(oldp+714,((0x0000000fU & (vlSelfRef.core__DOT__ROB_entry_bus 
                                                 >> 0x0000000cU))),4);
        bufp->chgCData(oldp+715,((0x0000000fU & (vlSelfRef.core__DOT__ALU_op 
                                                 >> 0x0000000cU))),4);
        bufp->chgBit(oldp+716,((5U == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))));
        bufp->chgBit(oldp+717,((0U == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))));
        bufp->chgIData(oldp+718,(vlSelfRef.core__DOT__fu_bus[6U]),32);
        bufp->chgIData(oldp+719,(vlSelfRef.core__DOT__fu_bus[7U]),32);
        bufp->chgBit(oldp+720,(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b));
        bufp->chgBit(oldp+721,(vlSelfRef.core__DOT__div_fu__DOT__loadregs));
        bufp->chgBit(oldp+722,((1U == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))));
        bufp->chgBit(oldp+723,((2U == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))));
        bufp->chgBit(oldp+724,((4U == (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))));
        bufp->chgBit(oldp+725,(vlSelfRef.core__DOT__div_fu__DOT__div));
        bufp->chgBit(oldp+726,(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b_reg));
        bufp->chgIData(oldp+727,(vlSelfRef.core__DOT__div_fu__DOT__P),32);
        bufp->chgIData(oldp+728,(vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__Q),32);
        bufp->chgIData(oldp+729,(vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A),32);
        bufp->chgIData(oldp+730,(((((~ (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b_reg)) 
                                    & (IData)(vlSelfRef.core__DOT__div_fu__DOT__div)) 
                                   | ((~ (IData)(vlSelfRef.core__DOT__div_fu__DOT__div)) 
                                      & (IData)(vlSelfRef.core__DOT__div_fu__DOT__a_lt_b_reg)))
                                   ? vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__Q
                                   : vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A)),32);
        bufp->chgCData(oldp+731,(vlSelfRef.core__DOT__div_fu__DOT__curr_rob),4);
        bufp->chgBit(oldp+732,(vlSelfRef.core__DOT__div_fu__DOT__sor_msb));
        bufp->chgBit(oldp+733,(vlSelfRef.core__DOT__div_fu__DOT__end_msb));
        bufp->chgIData(oldp+734,(vlSelfRef.core__DOT__div_fu__DOT__abs_sor),32);
        bufp->chgIData(oldp+735,(vlSelfRef.core__DOT__div_fu__DOT__abs_end),32);
        bufp->chgCData(oldp+736,(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps),3);
        bufp->chgCData(oldp+737,(((4U & (IData)(vlSelfRef.core__DOT__div_fu__DOT__divide_cu__DOT__ps))
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
        bufp->chgIData(oldp+738,(vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__M),32);
        bufp->chgIData(oldp+739,(vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__A_temp),32);
        bufp->chgIData(oldp+740,(vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__Q_temp),32);
        bufp->chgQData(oldp+741,(vlSelfRef.core__DOT__div_fu__DOT__divide_dp__DOT__temp),64);
        bufp->chgIData(oldp+743,(vlSelfRef.core__DOT__fetch_stage__DOT__pc),32);
        bufp->chgIData(oldp+744,(vlSelfRef.core__DOT__fetch_stage__DOT__instruction),32);
        bufp->chgBit(oldp+745,((0x63U == (0x0000007fU 
                                          & vlSelfRef.core__DOT__fetch_stage__DOT__instruction))));
        bufp->chgBit(oldp+746,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__pred_bus[
                                      (0x0000001fU 
                                       & (((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                           ^ vlSelfRef.core__DOT__fetch_stage__DOT__pc) 
                                          >> 5U))] 
                                      >> (0x0000001fU 
                                          & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                             ^ vlSelfRef.core__DOT__fetch_stage__DOT__pc))))));
        bufp->chgBit(oldp+747,((0x6fU == (0x0000007fU 
                                          & vlSelfRef.core__DOT__fetch_stage__DOT__instruction))));
        bufp->chgBit(oldp+748,((0x67U == (0x0000007fU 
                                          & vlSelfRef.core__DOT__fetch_stage__DOT__instruction))));
        bufp->chgSData(oldp+749,(vlSelfRef.core__DOT__fetch_stage__DOT__history),10);
        bufp->chgSData(oldp+750,((0x000003ffU & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                                 ^ vlSelfRef.core__DOT__fetch_stage__DOT__pc))),10);
        bufp->chgSData(oldp+751,((0x000003ffU & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history) 
                                                 ^ vlSelfRef.core__DOT__committed_pc))),10);
        bufp->chgBit(oldp+752,(vlSelfRef.core__DOT__fetch_stage__DOT__read_exception));
        bufp->chgCData(oldp+753,(vlSelfRef.core__DOT__fetch_stage__DOT__mcause),8);
        bufp->chgCData(oldp+754,((0x0000007fU & vlSelfRef.core__DOT__fetch_stage__DOT__instruction)),7);
        bufp->chgBit(oldp+755,(vlSelfRef.core__DOT__fetch_stage__DOT__push));
        bufp->chgBit(oldp+756,(vlSelfRef.core__DOT__fetch_stage__DOT__pop));
        bufp->chgCData(oldp+757,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp),4);
        bufp->chgCData(oldp+758,((0x0000001fU & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+759,((0x0000001fU & (vlSelfRef.core__DOT__fetch_stage__DOT__instruction 
                                                 >> 0x0000000fU))),5);
        bufp->chgSData(oldp+760,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d),10);
        bufp->chgBit(oldp+761,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__0__KET____DOT__biti__q));
        bufp->chgBit(oldp+762,((1U & (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d))));
        bufp->chgBit(oldp+763,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__1__KET____DOT__biti__q));
        bufp->chgBit(oldp+764,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 1U))));
        bufp->chgBit(oldp+765,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__2__KET____DOT__biti__q));
        bufp->chgBit(oldp+766,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 2U))));
        bufp->chgBit(oldp+767,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__3__KET____DOT__biti__q));
        bufp->chgBit(oldp+768,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 3U))));
        bufp->chgBit(oldp+769,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__4__KET____DOT__biti__q));
        bufp->chgBit(oldp+770,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 4U))));
        bufp->chgBit(oldp+771,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__5__KET____DOT__biti__q));
        bufp->chgBit(oldp+772,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 5U))));
        bufp->chgBit(oldp+773,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__6__KET____DOT__biti__q));
        bufp->chgBit(oldp+774,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 6U))));
        bufp->chgBit(oldp+775,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__7__KET____DOT__biti__q));
        bufp->chgBit(oldp+776,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 7U))));
        bufp->chgBit(oldp+777,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__8__KET____DOT__biti__q));
        bufp->chgBit(oldp+778,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 8U))));
        bufp->chgBit(oldp+779,(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT____Vcellout__gbhsr_dffs__BRA__9__KET____DOT__biti__q));
        bufp->chgBit(oldp+780,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__history_reg__DOT__d) 
                                      >> 9U))));
        bufp->chgWData(oldp+781,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus),1024);
        bufp->chgWData(oldp+813,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__pred_bus),1024);
        bufp->chgBit(oldp+845,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__0__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+846,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U])));
        bufp->chgCData(oldp+847,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__0__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+848,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__0__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+849,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1000__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+850,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 8U))));
        bufp->chgCData(oldp+851,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1000__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+852,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1000__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+853,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1001__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+854,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 9U))));
        bufp->chgCData(oldp+855,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1001__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+856,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1001__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+857,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1002__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+858,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+859,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1002__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+860,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1002__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+861,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1003__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+862,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000000bU))));
        bufp->chgCData(oldp+863,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1003__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+864,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1003__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+865,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1004__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+866,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000000cU))));
        bufp->chgCData(oldp+867,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1004__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+868,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1004__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+869,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1005__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+870,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000000dU))));
        bufp->chgCData(oldp+871,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1005__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+872,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1005__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+873,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1006__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+874,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000000eU))));
        bufp->chgCData(oldp+875,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1006__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+876,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1006__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+877,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1007__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+878,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000000fU))));
        bufp->chgCData(oldp+879,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1007__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+880,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1007__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+881,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1008__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+882,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000010U))));
        bufp->chgCData(oldp+883,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1008__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+884,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1008__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+885,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1009__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+886,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000011U))));
        bufp->chgCData(oldp+887,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1009__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+888,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1009__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+889,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__100__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+890,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 4U))));
        bufp->chgCData(oldp+891,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__100__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+892,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__100__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+893,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1010__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+894,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000012U))));
        bufp->chgCData(oldp+895,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1010__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+896,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1010__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+897,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1011__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+898,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000013U))));
        bufp->chgCData(oldp+899,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1011__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+900,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1011__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+901,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1012__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+902,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000014U))));
        bufp->chgCData(oldp+903,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1012__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+904,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1012__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+905,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1013__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+906,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000015U))));
        bufp->chgCData(oldp+907,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1013__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+908,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1013__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+909,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1014__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+910,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000016U))));
        bufp->chgCData(oldp+911,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1014__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+912,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1014__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+913,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1015__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+914,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000017U))));
        bufp->chgCData(oldp+915,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1015__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+916,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1015__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+917,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1016__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+918,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000018U))));
        bufp->chgCData(oldp+919,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1016__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+920,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1016__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+921,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1017__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+922,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x00000019U))));
        bufp->chgCData(oldp+923,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1017__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+924,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1017__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+925,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1018__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+926,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000001aU))));
        bufp->chgCData(oldp+927,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1018__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+928,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1018__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+929,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1019__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+930,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000001bU))));
        bufp->chgCData(oldp+931,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1019__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+932,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1019__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+933,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__101__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+934,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 5U))));
        bufp->chgCData(oldp+935,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__101__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+936,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__101__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+937,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1020__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+938,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000001cU))));
        bufp->chgCData(oldp+939,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1020__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+940,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1020__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+941,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1021__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+942,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000001dU))));
        bufp->chgCData(oldp+943,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1021__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+944,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1021__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+945,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1022__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+946,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                      >> 0x0000001eU))));
        bufp->chgCData(oldp+947,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1022__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+948,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1022__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+949,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1023__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+950,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                >> 0x0000001fU)));
        bufp->chgCData(oldp+951,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1023__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+952,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1023__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+953,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__102__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+954,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 6U))));
        bufp->chgCData(oldp+955,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__102__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+956,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__102__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+957,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__103__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+958,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 7U))));
        bufp->chgCData(oldp+959,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__103__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+960,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__103__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+961,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__104__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+962,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 8U))));
        bufp->chgCData(oldp+963,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__104__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+964,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__104__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+965,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__105__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+966,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 9U))));
        bufp->chgCData(oldp+967,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__105__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+968,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__105__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+969,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__106__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+970,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+971,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__106__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+972,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__106__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+973,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__107__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+974,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000000bU))));
        bufp->chgCData(oldp+975,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__107__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+976,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__107__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+977,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__108__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+978,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000000cU))));
        bufp->chgCData(oldp+979,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__108__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+980,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__108__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+981,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__109__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+982,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000000dU))));
        bufp->chgCData(oldp+983,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__109__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+984,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__109__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+985,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__10__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+986,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                      >> 0x0000000aU))));
        bufp->chgCData(oldp+987,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__10__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+988,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__10__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+989,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__110__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+990,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000000eU))));
        bufp->chgCData(oldp+991,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__110__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+992,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__110__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+993,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__111__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+994,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x0000000fU))));
        bufp->chgCData(oldp+995,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__111__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+996,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__111__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+997,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__112__KET____DOT__fsm__DOT__ps) 
                                      >> 1U))));
        bufp->chgBit(oldp+998,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                      >> 0x00000010U))));
        bufp->chgCData(oldp+999,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__112__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1000,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__112__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1001,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__113__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1002,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1003,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__113__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1004,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__113__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1005,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__114__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1006,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1007,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__114__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1008,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__114__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1009,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__115__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1010,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1011,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__115__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1012,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__115__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1013,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__116__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1014,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1015,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__116__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1016,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__116__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1017,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__117__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1018,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1019,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__117__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1020,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__117__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1021,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__118__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1022,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1023,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__118__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1024,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__118__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1025,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__119__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1026,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1027,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__119__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1028,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__119__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1029,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__11__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1030,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+1031,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__11__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1032,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__11__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1033,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__120__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1034,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1035,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__120__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1036,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__120__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1037,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__121__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1038,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1039,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__121__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1040,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__121__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1041,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__122__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1042,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1043,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__122__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1044,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__122__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1045,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__123__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1046,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1047,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__123__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1048,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__123__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1049,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__124__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1050,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1051,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__124__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1052,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__124__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1053,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__125__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1054,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1055,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__125__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1056,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__125__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1057,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__126__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1058,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1059,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__126__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1060,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__126__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1061,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__127__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1062,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1063,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__127__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1064,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__127__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1065,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__128__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1066,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U])));
        bufp->chgCData(oldp+1067,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__128__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1068,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__128__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1069,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__129__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1070,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1071,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__129__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1072,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__129__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1073,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__12__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1074,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1075,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__12__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1076,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__12__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1077,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__130__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1078,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1079,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__130__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1080,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__130__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1081,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__131__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1082,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 3U))));
        bufp->chgCData(oldp+1083,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__131__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1084,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__131__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1085,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__132__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1086,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 4U))));
        bufp->chgCData(oldp+1087,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__132__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1088,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__132__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1089,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__133__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1090,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 5U))));
        bufp->chgCData(oldp+1091,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__133__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1092,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__133__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1093,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__134__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1094,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1095,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__134__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1096,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__134__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1097,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__135__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1098,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1099,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__135__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1100,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__135__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1101,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__136__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1102,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 8U))));
        bufp->chgCData(oldp+1103,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__136__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1104,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__136__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1105,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__137__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1106,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1107,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__137__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1108,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__137__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1109,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__138__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1110,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1111,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__138__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1112,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__138__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1113,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__139__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1114,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+1115,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__139__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1116,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__139__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1117,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__13__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1118,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1119,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__13__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1120,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__13__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1121,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__140__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1122,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1123,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__140__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1124,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__140__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1125,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__141__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1126,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1127,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__141__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1128,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__141__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1129,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__142__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1130,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1131,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__142__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1132,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__142__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1133,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__143__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1134,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1135,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__143__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1136,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__143__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1137,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__144__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1138,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1139,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__144__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1140,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__144__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1141,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__145__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1142,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1143,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__145__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1144,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__145__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1145,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__146__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1146,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1147,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__146__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1148,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__146__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1149,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__147__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1150,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1151,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__147__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1152,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__147__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1153,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__148__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1154,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1155,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__148__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1156,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__148__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1157,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__149__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1158,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1159,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__149__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1160,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__149__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1161,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__14__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1162,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1163,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__14__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1164,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__14__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1165,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__150__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1166,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1167,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__150__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1168,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__150__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1169,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__151__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1170,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1171,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__151__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1172,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__151__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1173,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__152__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1174,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1175,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__152__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1176,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__152__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1177,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__153__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1178,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1179,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__153__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1180,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__153__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1181,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__154__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1182,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1183,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__154__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1184,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__154__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1185,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__155__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1186,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1187,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__155__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1188,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__155__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1189,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__156__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1190,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1191,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__156__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1192,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__156__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1193,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__157__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1194,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1195,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__157__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1196,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__157__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1197,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__158__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1198,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1199,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__158__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1200,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__158__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1201,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__159__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1202,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[4U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1203,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__159__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1204,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__159__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1205,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__15__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1206,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1207,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__15__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1208,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__15__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1209,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__160__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1210,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U])));
        bufp->chgCData(oldp+1211,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__160__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1212,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__160__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1213,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__161__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1214,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1215,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__161__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1216,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__161__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1217,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__162__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1218,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1219,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__162__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1220,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__162__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1221,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__163__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1222,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 3U))));
        bufp->chgCData(oldp+1223,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__163__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1224,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__163__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1225,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__164__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1226,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 4U))));
        bufp->chgCData(oldp+1227,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__164__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1228,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__164__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1229,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__165__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1230,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 5U))));
        bufp->chgCData(oldp+1231,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__165__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1232,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__165__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1233,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__166__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1234,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1235,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__166__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1236,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__166__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1237,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__167__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1238,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1239,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__167__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1240,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__167__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1241,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__168__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1242,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 8U))));
        bufp->chgCData(oldp+1243,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__168__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1244,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__168__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1245,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__169__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1246,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1247,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__169__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1248,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__169__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1249,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__16__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1250,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1251,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__16__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1252,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__16__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1253,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__170__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1254,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1255,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__170__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1256,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__170__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1257,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__171__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1258,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+1259,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__171__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1260,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__171__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1261,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__172__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1262,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1263,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__172__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1264,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__172__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1265,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__173__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1266,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1267,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__173__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1268,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__173__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1269,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__174__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1270,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1271,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__174__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1272,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__174__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1273,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__175__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1274,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1275,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__175__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1276,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__175__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1277,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__176__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1278,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1279,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__176__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1280,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__176__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1281,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__177__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1282,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1283,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__177__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1284,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__177__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1285,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__178__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1286,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1287,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__178__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1288,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__178__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1289,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__179__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1290,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1291,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__179__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1292,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__179__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1293,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__17__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1294,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1295,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__17__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1296,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__17__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1297,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__180__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1298,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1299,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__180__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1300,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__180__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1301,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__181__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1302,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1303,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__181__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1304,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__181__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1305,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__182__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1306,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1307,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__182__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1308,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__182__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1309,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__183__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1310,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1311,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__183__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1312,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__183__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1313,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__184__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1314,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1315,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__184__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1316,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__184__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1317,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__185__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1318,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1319,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__185__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1320,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__185__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1321,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__186__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1322,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1323,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__186__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1324,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__186__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1325,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__187__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1326,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1327,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__187__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1328,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__187__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1329,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__188__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1330,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1331,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__188__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1332,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__188__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1333,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__189__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1334,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1335,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__189__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1336,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__189__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1337,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__18__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1338,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1339,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__18__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1340,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__18__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1341,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__190__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1342,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1343,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__190__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1344,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__190__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1345,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__191__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1346,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[5U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1347,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__191__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1348,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__191__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1349,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__192__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1350,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U])));
        bufp->chgCData(oldp+1351,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__192__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1352,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__192__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1353,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__193__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1354,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1355,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__193__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1356,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__193__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1357,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__194__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1358,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1359,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__194__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1360,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__194__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1361,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__195__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1362,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 3U))));
        bufp->chgCData(oldp+1363,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__195__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1364,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__195__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1365,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__196__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1366,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 4U))));
        bufp->chgCData(oldp+1367,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__196__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1368,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__196__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1369,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__197__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1370,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 5U))));
        bufp->chgCData(oldp+1371,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__197__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1372,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__197__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1373,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__198__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1374,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1375,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__198__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1376,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__198__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1377,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__199__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1378,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1379,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__199__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1380,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__199__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1381,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__19__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1382,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1383,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__19__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1384,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__19__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1385,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1386,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1387,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1388,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__1__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1389,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__200__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1390,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 8U))));
        bufp->chgCData(oldp+1391,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__200__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1392,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__200__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1393,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__201__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1394,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1395,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__201__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1396,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__201__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1397,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__202__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1398,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1399,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__202__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1400,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__202__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1401,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__203__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1402,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+1403,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__203__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1404,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__203__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1405,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__204__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1406,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1407,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__204__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1408,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__204__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1409,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__205__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1410,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1411,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__205__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1412,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__205__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1413,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__206__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1414,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1415,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__206__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1416,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__206__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1417,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__207__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1418,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1419,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__207__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1420,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__207__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1421,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__208__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1422,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1423,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__208__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1424,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__208__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1425,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__209__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1426,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1427,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__209__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1428,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__209__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1429,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__20__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1430,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1431,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__20__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1432,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__20__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1433,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__210__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1434,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1435,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__210__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1436,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__210__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1437,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__211__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1438,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1439,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__211__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1440,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__211__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1441,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__212__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1442,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1443,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__212__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1444,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__212__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1445,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__213__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1446,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1447,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__213__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1448,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__213__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1449,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__214__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1450,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1451,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__214__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1452,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__214__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1453,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__215__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1454,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1455,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__215__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1456,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__215__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1457,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__216__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1458,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1459,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__216__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1460,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__216__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1461,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__217__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1462,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1463,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__217__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1464,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__217__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1465,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__218__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1466,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1467,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__218__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1468,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__218__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1469,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__219__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1470,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1471,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__219__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1472,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__219__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1473,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__21__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1474,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1475,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__21__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1476,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__21__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1477,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__220__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1478,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1479,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__220__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1480,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__220__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1481,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__221__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1482,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1483,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__221__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1484,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__221__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1485,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__222__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1486,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1487,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__222__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1488,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__222__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1489,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__223__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1490,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[6U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1491,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__223__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1492,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__223__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1493,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__224__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1494,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U])));
        bufp->chgCData(oldp+1495,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__224__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1496,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__224__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1497,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__225__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1498,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1499,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__225__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1500,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__225__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1501,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__226__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1502,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1503,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__226__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1504,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__226__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1505,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__227__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1506,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 3U))));
        bufp->chgCData(oldp+1507,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__227__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1508,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__227__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1509,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__228__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1510,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 4U))));
        bufp->chgCData(oldp+1511,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__228__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1512,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__228__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1513,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__229__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1514,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 5U))));
        bufp->chgCData(oldp+1515,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__229__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1516,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__229__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1517,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__22__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1518,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1519,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__22__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1520,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__22__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1521,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__230__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1522,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1523,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__230__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1524,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__230__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1525,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__231__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1526,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1527,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__231__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1528,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__231__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1529,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__232__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1530,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 8U))));
        bufp->chgCData(oldp+1531,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__232__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1532,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__232__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1533,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__233__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1534,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1535,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__233__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1536,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__233__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1537,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__234__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1538,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1539,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__234__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1540,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__234__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1541,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__235__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1542,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+1543,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__235__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1544,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__235__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1545,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__236__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1546,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1547,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__236__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1548,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__236__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1549,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__237__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1550,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1551,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__237__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1552,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__237__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1553,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__238__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1554,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1555,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__238__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1556,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__238__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1557,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__239__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1558,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1559,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__239__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1560,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__239__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1561,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__23__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1562,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1563,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__23__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1564,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__23__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1565,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__240__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1566,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1567,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__240__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1568,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__240__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1569,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__241__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1570,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1571,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__241__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1572,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__241__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1573,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__242__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1574,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1575,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__242__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1576,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__242__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1577,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__243__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1578,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1579,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__243__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1580,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__243__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1581,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__244__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1582,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1583,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__244__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1584,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__244__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1585,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__245__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1586,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1587,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__245__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1588,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__245__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1589,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__246__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1590,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1591,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__246__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1592,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__246__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1593,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__247__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1594,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1595,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__247__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1596,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__247__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1597,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__248__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1598,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1599,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__248__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1600,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__248__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1601,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__249__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1602,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1603,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__249__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1604,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__249__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1605,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__24__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1606,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1607,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__24__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1608,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__24__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1609,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__250__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1610,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1611,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__250__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1612,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__250__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1613,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__251__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1614,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1615,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__251__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1616,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__251__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1617,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__252__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1618,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1619,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__252__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1620,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__252__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1621,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__253__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1622,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1623,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__253__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1624,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__253__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1625,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__254__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1626,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1627,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__254__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1628,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__254__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1629,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__255__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1630,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[7U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1631,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__255__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1632,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__255__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1633,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__256__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1634,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U])));
        bufp->chgCData(oldp+1635,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__256__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1636,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__256__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1637,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__257__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1638,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1639,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__257__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1640,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__257__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1641,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__258__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1642,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1643,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__258__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1644,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__258__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1645,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__259__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1646,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 3U))));
        bufp->chgCData(oldp+1647,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__259__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1648,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__259__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1649,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__25__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1650,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1651,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__25__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1652,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__25__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1653,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__260__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1654,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 4U))));
        bufp->chgCData(oldp+1655,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__260__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1656,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__260__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1657,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__261__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1658,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 5U))));
        bufp->chgCData(oldp+1659,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__261__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1660,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__261__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1661,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__262__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1662,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1663,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__262__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1664,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__262__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1665,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__263__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1666,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1667,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__263__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1668,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__263__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1669,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__264__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1670,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 8U))));
        bufp->chgCData(oldp+1671,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__264__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1672,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__264__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1673,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__265__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1674,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1675,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__265__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1676,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__265__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1677,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__266__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1678,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1679,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__266__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1680,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__266__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1681,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__267__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1682,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+1683,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__267__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1684,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__267__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1685,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__268__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1686,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1687,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__268__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1688,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__268__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1689,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__269__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1690,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1691,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__269__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1692,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__269__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1693,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__26__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1694,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1695,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__26__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1696,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__26__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1697,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__270__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1698,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1699,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__270__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1700,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__270__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1701,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__271__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1702,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1703,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__271__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1704,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__271__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1705,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__272__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1706,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1707,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__272__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1708,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__272__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1709,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__273__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1710,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1711,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__273__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1712,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__273__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1713,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__274__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1714,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1715,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__274__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1716,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__274__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1717,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__275__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1718,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1719,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__275__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1720,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__275__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1721,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__276__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1722,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1723,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__276__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1724,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__276__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1725,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__277__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1726,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1727,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__277__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1728,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__277__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1729,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__278__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1730,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1731,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__278__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1732,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__278__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1733,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__279__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1734,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1735,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__279__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1736,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__279__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1737,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__27__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1738,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1739,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__27__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1740,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__27__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1741,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__280__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1742,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1743,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__280__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1744,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__280__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1745,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__281__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1746,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1747,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__281__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1748,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__281__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1749,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__282__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1750,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1751,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__282__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1752,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__282__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1753,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__283__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1754,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1755,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__283__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1756,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__283__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1757,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__284__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1758,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1759,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__284__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1760,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__284__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1761,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__285__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1762,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1763,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__285__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1764,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__285__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1765,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__286__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1766,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1767,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__286__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1768,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__286__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1769,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__287__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1770,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[8U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1771,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__287__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1772,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__287__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1773,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__288__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1774,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U])));
        bufp->chgCData(oldp+1775,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__288__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1776,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__288__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1777,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__289__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1778,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1779,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__289__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1780,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__289__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1781,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__28__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1782,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1783,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__28__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1784,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__28__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1785,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__290__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1786,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1787,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__290__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1788,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__290__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1789,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__291__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1790,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 3U))));
        bufp->chgCData(oldp+1791,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__291__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1792,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__291__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1793,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__292__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1794,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 4U))));
        bufp->chgCData(oldp+1795,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__292__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1796,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__292__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1797,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__293__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1798,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 5U))));
        bufp->chgCData(oldp+1799,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__293__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1800,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__293__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1801,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__294__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1802,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 6U))));
        bufp->chgCData(oldp+1803,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__294__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1804,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__294__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1805,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__295__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1806,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1807,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__295__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1808,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__295__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1809,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__296__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1810,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 8U))));
        bufp->chgCData(oldp+1811,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__296__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1812,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__296__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1813,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__297__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1814,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 9U))));
        bufp->chgCData(oldp+1815,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__297__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1816,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__297__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1817,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__298__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1818,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1819,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__298__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1820,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__298__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1821,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__299__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1822,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+1823,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__299__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1824,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__299__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1825,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__29__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1826,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1827,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__29__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1828,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__29__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1829,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__2__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1830,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1831,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__2__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1832,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__2__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1833,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__300__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1834,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1835,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__300__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1836,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__300__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1837,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__301__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1838,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1839,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__301__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1840,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__301__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1841,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__302__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1842,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1843,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__302__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1844,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__302__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1845,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__303__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1846,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1847,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__303__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1848,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__303__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1849,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__304__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1850,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1851,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__304__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1852,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__304__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1853,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__305__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1854,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1855,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__305__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1856,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__305__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1857,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__306__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1858,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1859,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__306__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1860,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__306__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1861,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__307__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1862,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+1863,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__307__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1864,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__307__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1865,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__308__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1866,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+1867,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__308__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1868,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__308__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1869,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__309__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1870,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+1871,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__309__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1872,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__309__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1873,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__30__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1874,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1875,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__30__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1876,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__30__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1877,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__310__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1878,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+1879,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__310__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1880,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__310__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1881,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__311__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1882,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+1883,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__311__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1884,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__311__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1885,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__312__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1886,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+1887,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__312__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1888,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__312__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1889,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__313__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1890,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+1891,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__313__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1892,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__313__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1893,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__314__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1894,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+1895,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__314__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1896,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__314__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1897,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__315__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1898,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+1899,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__315__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1900,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__315__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1901,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__316__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1902,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+1903,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__316__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1904,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__316__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1905,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__317__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1906,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+1907,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__317__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1908,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__317__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1909,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__318__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1910,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+1911,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__318__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1912,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__318__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1913,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__319__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1914,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[9U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1915,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__319__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1916,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__319__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1917,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__31__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1918,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+1919,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__31__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1920,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__31__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1921,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__320__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1922,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU])));
        bufp->chgCData(oldp+1923,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__320__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1924,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__320__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1925,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__321__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1926,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 1U))));
        bufp->chgCData(oldp+1927,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__321__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1928,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__321__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1929,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__322__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1930,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 2U))));
        bufp->chgCData(oldp+1931,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__322__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1932,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__322__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1933,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__323__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1934,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 3U))));
        bufp->chgCData(oldp+1935,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__323__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1936,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__323__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1937,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__324__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1938,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 4U))));
        bufp->chgCData(oldp+1939,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__324__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1940,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__324__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1941,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__325__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1942,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 5U))));
        bufp->chgCData(oldp+1943,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__325__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1944,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__325__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1945,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__326__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1946,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 6U))));
        bufp->chgCData(oldp+1947,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__326__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1948,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__326__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1949,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__327__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1950,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 7U))));
        bufp->chgCData(oldp+1951,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__327__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1952,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__327__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1953,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__328__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1954,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 8U))));
        bufp->chgCData(oldp+1955,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__328__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1956,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__328__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1957,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__329__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1958,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 9U))));
        bufp->chgCData(oldp+1959,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__329__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1960,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__329__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1961,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__32__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1962,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U])));
        bufp->chgCData(oldp+1963,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__32__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1964,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__32__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1965,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__330__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1966,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+1967,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__330__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1968,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__330__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1969,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__331__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1970,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+1971,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__331__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1972,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__331__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1973,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__332__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1974,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+1975,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__332__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1976,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__332__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1977,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__333__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1978,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+1979,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__333__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1980,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__333__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1981,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__334__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1982,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+1983,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__334__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1984,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__334__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1985,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__335__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1986,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+1987,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__335__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1988,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__335__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1989,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__336__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1990,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+1991,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__336__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1992,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__336__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1993,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__337__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1994,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+1995,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__337__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+1996,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__337__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+1997,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__338__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+1998,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+1999,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__338__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2000,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__338__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2001,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__339__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2002,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2003,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__339__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2004,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__339__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2005,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__33__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2006,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 1U))));
        bufp->chgCData(oldp+2007,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__33__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2008,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__33__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2009,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__340__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2010,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2011,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__340__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2012,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__340__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2013,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__341__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2014,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2015,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__341__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2016,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__341__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2017,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__342__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2018,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2019,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__342__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2020,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__342__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2021,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__343__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2022,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2023,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__343__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2024,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__343__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2025,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__344__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2026,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+2027,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__344__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2028,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__344__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2029,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__345__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2030,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+2031,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__345__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2032,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__345__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2033,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__346__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2034,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+2035,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__346__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2036,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__346__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2037,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__347__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2038,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+2039,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__347__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2040,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__347__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2041,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__348__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2042,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+2043,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__348__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2044,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__348__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2045,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__349__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2046,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+2047,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__349__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2048,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__349__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2049,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__34__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2050,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 2U))));
        bufp->chgCData(oldp+2051,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__34__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2052,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__34__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2053,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__350__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2054,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+2055,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__350__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2056,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__350__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2057,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__351__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2058,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000aU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+2059,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__351__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2060,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__351__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2061,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__352__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2062,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU])));
        bufp->chgCData(oldp+2063,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__352__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2064,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__352__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2065,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__353__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2066,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 1U))));
        bufp->chgCData(oldp+2067,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__353__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2068,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__353__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2069,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__354__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2070,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 2U))));
        bufp->chgCData(oldp+2071,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__354__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2072,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__354__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2073,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__355__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2074,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 3U))));
        bufp->chgCData(oldp+2075,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__355__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2076,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__355__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2077,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__356__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2078,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 4U))));
        bufp->chgCData(oldp+2079,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__356__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2080,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__356__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2081,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__357__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2082,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 5U))));
        bufp->chgCData(oldp+2083,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__357__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2084,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__357__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2085,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__358__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2086,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 6U))));
        bufp->chgCData(oldp+2087,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__358__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2088,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__358__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2089,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__359__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2090,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 7U))));
        bufp->chgCData(oldp+2091,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__359__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2092,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__359__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2093,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__35__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2094,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 3U))));
        bufp->chgCData(oldp+2095,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__35__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2096,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__35__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2097,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__360__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2098,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 8U))));
        bufp->chgCData(oldp+2099,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__360__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2100,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__360__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2101,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__361__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2102,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 9U))));
        bufp->chgCData(oldp+2103,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__361__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2104,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__361__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2105,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__362__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2106,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2107,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__362__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2108,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__362__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2109,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__363__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2110,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2111,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__363__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2112,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__363__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2113,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__364__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2114,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2115,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__364__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2116,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__364__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2117,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__365__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2118,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2119,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__365__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2120,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__365__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2121,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__366__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2122,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2123,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__366__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2124,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__366__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2125,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__367__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2126,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2127,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__367__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2128,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__367__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2129,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__368__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2130,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2131,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__368__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2132,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__368__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2133,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__369__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2134,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2135,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__369__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2136,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__369__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2137,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__36__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2138,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 4U))));
        bufp->chgCData(oldp+2139,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__36__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2140,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__36__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2141,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__370__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2142,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2143,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__370__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2144,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__370__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2145,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__371__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2146,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2147,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__371__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2148,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__371__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2149,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__372__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2150,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2151,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__372__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2152,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__372__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2153,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__373__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2154,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2155,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__373__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2156,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__373__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2157,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__374__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2158,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2159,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__374__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2160,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__374__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2161,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__375__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2162,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2163,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__375__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2164,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__375__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2165,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__376__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2166,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+2167,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__376__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2168,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__376__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2169,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__377__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2170,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+2171,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__377__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2172,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__377__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2173,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__378__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2174,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+2175,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__378__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2176,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__378__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2177,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__379__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2178,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+2179,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__379__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2180,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__379__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2181,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__37__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2182,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 5U))));
        bufp->chgCData(oldp+2183,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__37__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2184,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__37__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2185,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__380__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2186,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+2187,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__380__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2188,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__380__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2189,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__381__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2190,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+2191,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__381__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2192,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__381__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2193,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__382__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2194,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+2195,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__382__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2196,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__382__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2197,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__383__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2198,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000bU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+2199,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__383__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2200,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__383__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2201,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__384__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2202,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU])));
        bufp->chgCData(oldp+2203,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__384__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2204,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__384__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2205,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__385__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2206,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 1U))));
        bufp->chgCData(oldp+2207,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__385__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2208,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__385__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2209,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__386__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2210,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 2U))));
        bufp->chgCData(oldp+2211,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__386__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2212,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__386__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2213,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__387__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2214,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 3U))));
        bufp->chgCData(oldp+2215,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__387__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2216,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__387__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2217,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__388__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2218,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 4U))));
        bufp->chgCData(oldp+2219,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__388__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2220,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__388__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2221,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__389__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2222,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 5U))));
        bufp->chgCData(oldp+2223,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__389__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2224,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__389__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2225,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__38__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2226,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 6U))));
        bufp->chgCData(oldp+2227,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__38__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2228,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__38__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2229,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__390__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2230,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 6U))));
        bufp->chgCData(oldp+2231,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__390__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2232,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__390__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2233,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__391__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2234,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 7U))));
        bufp->chgCData(oldp+2235,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__391__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2236,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__391__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2237,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__392__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2238,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 8U))));
        bufp->chgCData(oldp+2239,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__392__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2240,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__392__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2241,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__393__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2242,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 9U))));
        bufp->chgCData(oldp+2243,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__393__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2244,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__393__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2245,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__394__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2246,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2247,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__394__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2248,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__394__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2249,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__395__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2250,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2251,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__395__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2252,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__395__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2253,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__396__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2254,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2255,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__396__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2256,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__396__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2257,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__397__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2258,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2259,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__397__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2260,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__397__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2261,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__398__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2262,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2263,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__398__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2264,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__398__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2265,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__399__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2266,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2267,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__399__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2268,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__399__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2269,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__39__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2270,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 7U))));
        bufp->chgCData(oldp+2271,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__39__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2272,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__39__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2273,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__3__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2274,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 3U))));
        bufp->chgCData(oldp+2275,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__3__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2276,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__3__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2277,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__400__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2278,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2279,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__400__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2280,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__400__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2281,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__401__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2282,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2283,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__401__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2284,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__401__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2285,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__402__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2286,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2287,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__402__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2288,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__402__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2289,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__403__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2290,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2291,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__403__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2292,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__403__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2293,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__404__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2294,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2295,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__404__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2296,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__404__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2297,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__405__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2298,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2299,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__405__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2300,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__405__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2301,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__406__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2302,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2303,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__406__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2304,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__406__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2305,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__407__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2306,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2307,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__407__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2308,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__407__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2309,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__408__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2310,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+2311,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__408__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2312,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__408__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2313,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__409__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2314,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+2315,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__409__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2316,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__409__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2317,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__40__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2318,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 8U))));
        bufp->chgCData(oldp+2319,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__40__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2320,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__40__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2321,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__410__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2322,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+2323,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__410__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2324,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__410__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2325,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__411__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2326,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+2327,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__411__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2328,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__411__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2329,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__412__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2330,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+2331,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__412__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2332,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__412__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2333,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__413__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2334,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+2335,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__413__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2336,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__413__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2337,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__414__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2338,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+2339,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__414__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2340,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__414__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2341,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__415__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2342,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000cU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+2343,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__415__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2344,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__415__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2345,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__416__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2346,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU])));
        bufp->chgCData(oldp+2347,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__416__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2348,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__416__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2349,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__417__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2350,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 1U))));
        bufp->chgCData(oldp+2351,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__417__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2352,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__417__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2353,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__418__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2354,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 2U))));
        bufp->chgCData(oldp+2355,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__418__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2356,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__418__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2357,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__419__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2358,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 3U))));
        bufp->chgCData(oldp+2359,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__419__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2360,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__419__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2361,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__41__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2362,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 9U))));
        bufp->chgCData(oldp+2363,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__41__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2364,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__41__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2365,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__420__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2366,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 4U))));
        bufp->chgCData(oldp+2367,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__420__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2368,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__420__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2369,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__421__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2370,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 5U))));
        bufp->chgCData(oldp+2371,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__421__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2372,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__421__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2373,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__422__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2374,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 6U))));
        bufp->chgCData(oldp+2375,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__422__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2376,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__422__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2377,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__423__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2378,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 7U))));
        bufp->chgCData(oldp+2379,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__423__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2380,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__423__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2381,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__424__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2382,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 8U))));
        bufp->chgCData(oldp+2383,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__424__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2384,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__424__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2385,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__425__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2386,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 9U))));
        bufp->chgCData(oldp+2387,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__425__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2388,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__425__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2389,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__426__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2390,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2391,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__426__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2392,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__426__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2393,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__427__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2394,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2395,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__427__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2396,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__427__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2397,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__428__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2398,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2399,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__428__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2400,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__428__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2401,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__429__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2402,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2403,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__429__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2404,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__429__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2405,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__42__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2406,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2407,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__42__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2408,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__42__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2409,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__430__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2410,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2411,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__430__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2412,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__430__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2413,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__431__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2414,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2415,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__431__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2416,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__431__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2417,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__432__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2418,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2419,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__432__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2420,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__432__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2421,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__433__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2422,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2423,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__433__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2424,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__433__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2425,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__434__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2426,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2427,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__434__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2428,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__434__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2429,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__435__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2430,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2431,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__435__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2432,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__435__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2433,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__436__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2434,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2435,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__436__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2436,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__436__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2437,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__437__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2438,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2439,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__437__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2440,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__437__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2441,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__438__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2442,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2443,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__438__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2444,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__438__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2445,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__439__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2446,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2447,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__439__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2448,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__439__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2449,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__43__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2450,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2451,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__43__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2452,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__43__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2453,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__440__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2454,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+2455,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__440__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2456,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__440__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2457,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__441__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2458,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+2459,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__441__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2460,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__441__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2461,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__442__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2462,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+2463,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__442__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2464,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__442__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2465,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__443__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2466,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+2467,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__443__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2468,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__443__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2469,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__444__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2470,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+2471,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__444__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2472,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__444__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2473,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__445__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2474,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+2475,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__445__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2476,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__445__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2477,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__446__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2478,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+2479,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__446__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2480,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__446__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2481,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__447__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2482,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000dU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+2483,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__447__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2484,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__447__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2485,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__448__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2486,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU])));
        bufp->chgCData(oldp+2487,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__448__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2488,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__448__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2489,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__449__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2490,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 1U))));
        bufp->chgCData(oldp+2491,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__449__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2492,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__449__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2493,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__44__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2494,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2495,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__44__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2496,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__44__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2497,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__450__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2498,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 2U))));
        bufp->chgCData(oldp+2499,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__450__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2500,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__450__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2501,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__451__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2502,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 3U))));
        bufp->chgCData(oldp+2503,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__451__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2504,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__451__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2505,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__452__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2506,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 4U))));
        bufp->chgCData(oldp+2507,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__452__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2508,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__452__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2509,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__453__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2510,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 5U))));
        bufp->chgCData(oldp+2511,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__453__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2512,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__453__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2513,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__454__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2514,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 6U))));
        bufp->chgCData(oldp+2515,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__454__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2516,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__454__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2517,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__455__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2518,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 7U))));
        bufp->chgCData(oldp+2519,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__455__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2520,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__455__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2521,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__456__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2522,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 8U))));
        bufp->chgCData(oldp+2523,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__456__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2524,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__456__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2525,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__457__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2526,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 9U))));
        bufp->chgCData(oldp+2527,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__457__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2528,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__457__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2529,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__458__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2530,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2531,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__458__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2532,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__458__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2533,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__459__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2534,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2535,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__459__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2536,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__459__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2537,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__45__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2538,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2539,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__45__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2540,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__45__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2541,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__460__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2542,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2543,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__460__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2544,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__460__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2545,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__461__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2546,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2547,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__461__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2548,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__461__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2549,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__462__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2550,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2551,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__462__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2552,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__462__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2553,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__463__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2554,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2555,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__463__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2556,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__463__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2557,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__464__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2558,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2559,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__464__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2560,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__464__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2561,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__465__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2562,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2563,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__465__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2564,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__465__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2565,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__466__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2566,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2567,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__466__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2568,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__466__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2569,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__467__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2570,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2571,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__467__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2572,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__467__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2573,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__468__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2574,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2575,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__468__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2576,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__468__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2577,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__469__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2578,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2579,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__469__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2580,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__469__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2581,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__46__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2582,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2583,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__46__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2584,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__46__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2585,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__470__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2586,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2587,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__470__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2588,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__470__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2589,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__471__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2590,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2591,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__471__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2592,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__471__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2593,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__472__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2594,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+2595,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__472__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2596,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__472__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2597,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__473__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2598,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+2599,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__473__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2600,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__473__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2601,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__474__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2602,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+2603,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__474__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2604,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__474__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2605,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__475__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2606,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+2607,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__475__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2608,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__475__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2609,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__476__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2610,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+2611,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__476__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2612,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__476__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2613,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__477__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2614,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+2615,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__477__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2616,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__477__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2617,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__478__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2618,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+2619,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__478__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2620,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__478__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2621,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__479__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2622,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000eU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+2623,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__479__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2624,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__479__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2625,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__47__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2626,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2627,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__47__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2628,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__47__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2629,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__480__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2630,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU])));
        bufp->chgCData(oldp+2631,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__480__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2632,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__480__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2633,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__481__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2634,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 1U))));
        bufp->chgCData(oldp+2635,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__481__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2636,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__481__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2637,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__482__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2638,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 2U))));
        bufp->chgCData(oldp+2639,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__482__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2640,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__482__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2641,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__483__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2642,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 3U))));
        bufp->chgCData(oldp+2643,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__483__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2644,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__483__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2645,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__484__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2646,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 4U))));
        bufp->chgCData(oldp+2647,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__484__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2648,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__484__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2649,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__485__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2650,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 5U))));
        bufp->chgCData(oldp+2651,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__485__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2652,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__485__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2653,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__486__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2654,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 6U))));
        bufp->chgCData(oldp+2655,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__486__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2656,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__486__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2657,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__487__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2658,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 7U))));
        bufp->chgCData(oldp+2659,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__487__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2660,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__487__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2661,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__488__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2662,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 8U))));
        bufp->chgCData(oldp+2663,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__488__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2664,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__488__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2665,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__489__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2666,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 9U))));
        bufp->chgCData(oldp+2667,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__489__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2668,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__489__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2669,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__48__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2670,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2671,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__48__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2672,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__48__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2673,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__490__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2674,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2675,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__490__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2676,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__490__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2677,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__491__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2678,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2679,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__491__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2680,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__491__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2681,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__492__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2682,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2683,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__492__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2684,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__492__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2685,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__493__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2686,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2687,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__493__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2688,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__493__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2689,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__494__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2690,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2691,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__494__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2692,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__494__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2693,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__495__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2694,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2695,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__495__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2696,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__495__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2697,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__496__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2698,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2699,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__496__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2700,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__496__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2701,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__497__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2702,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2703,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__497__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2704,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__497__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2705,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__498__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2706,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2707,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__498__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2708,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__498__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2709,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__499__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2710,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2711,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__499__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2712,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__499__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2713,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__49__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2714,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2715,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__49__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2716,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__49__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2717,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__4__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2718,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 4U))));
        bufp->chgCData(oldp+2719,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__4__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2720,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__4__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2721,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__500__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2722,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2723,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__500__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2724,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__500__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2725,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__501__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2726,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2727,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__501__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2728,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__501__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2729,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__502__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2730,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2731,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__502__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2732,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__502__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2733,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__503__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2734,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2735,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__503__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2736,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__503__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2737,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__504__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2738,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+2739,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__504__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2740,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__504__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2741,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__505__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2742,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+2743,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__505__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2744,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__505__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2745,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__506__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2746,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+2747,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__506__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2748,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__506__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2749,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__507__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2750,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+2751,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__507__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2752,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__507__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2753,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__508__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2754,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+2755,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__508__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2756,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__508__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2757,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__509__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2758,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+2759,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__509__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2760,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__509__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2761,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__50__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2762,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2763,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__50__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2764,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__50__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2765,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__510__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2766,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+2767,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__510__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2768,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__510__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2769,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__511__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2770,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000000fU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+2771,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__511__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2772,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__511__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2773,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__512__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2774,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U])));
        bufp->chgCData(oldp+2775,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__512__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2776,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__512__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2777,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__513__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2778,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 1U))));
        bufp->chgCData(oldp+2779,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__513__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2780,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__513__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2781,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__514__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2782,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 2U))));
        bufp->chgCData(oldp+2783,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__514__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2784,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__514__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2785,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__515__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2786,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 3U))));
        bufp->chgCData(oldp+2787,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__515__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2788,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__515__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2789,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__516__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2790,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 4U))));
        bufp->chgCData(oldp+2791,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__516__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2792,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__516__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2793,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__517__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2794,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 5U))));
        bufp->chgCData(oldp+2795,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__517__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2796,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__517__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2797,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__518__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2798,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 6U))));
        bufp->chgCData(oldp+2799,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__518__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2800,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__518__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2801,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__519__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2802,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 7U))));
        bufp->chgCData(oldp+2803,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__519__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2804,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__519__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2805,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__51__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2806,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2807,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__51__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2808,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__51__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2809,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__520__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2810,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 8U))));
        bufp->chgCData(oldp+2811,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__520__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2812,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__520__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2813,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__521__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2814,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 9U))));
        bufp->chgCData(oldp+2815,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__521__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2816,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__521__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2817,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__522__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2818,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2819,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__522__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2820,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__522__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2821,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__523__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2822,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2823,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__523__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2824,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__523__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2825,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__524__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2826,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2827,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__524__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2828,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__524__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2829,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__525__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2830,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2831,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__525__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2832,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__525__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2833,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__526__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2834,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2835,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__526__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2836,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__526__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2837,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__527__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2838,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2839,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__527__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2840,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__527__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2841,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__528__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2842,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2843,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__528__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2844,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__528__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2845,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__529__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2846,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2847,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__529__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2848,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__529__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2849,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__52__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2850,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2851,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__52__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2852,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__52__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2853,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__530__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2854,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2855,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__530__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2856,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__530__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2857,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__531__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2858,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2859,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__531__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2860,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__531__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2861,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__532__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2862,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+2863,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__532__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2864,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__532__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2865,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__533__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2866,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2867,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__533__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2868,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__533__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2869,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__534__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2870,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2871,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__534__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2872,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__534__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2873,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__535__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2874,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2875,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__535__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2876,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__535__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2877,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__536__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2878,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+2879,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__536__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2880,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__536__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2881,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__537__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2882,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+2883,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__537__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2884,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__537__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2885,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__538__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2886,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+2887,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__538__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2888,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__538__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2889,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__539__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2890,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+2891,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__539__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2892,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__539__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2893,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__53__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2894,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+2895,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__53__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2896,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__53__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2897,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__540__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2898,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+2899,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__540__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2900,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__540__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2901,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__541__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2902,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+2903,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__541__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2904,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__541__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2905,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__542__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2906,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+2907,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__542__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2908,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__542__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2909,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__543__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2910,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000010U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+2911,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__543__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2912,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__543__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2913,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__544__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2914,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U])));
        bufp->chgCData(oldp+2915,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__544__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2916,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__544__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2917,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__545__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2918,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 1U))));
        bufp->chgCData(oldp+2919,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__545__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2920,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__545__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2921,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__546__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2922,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 2U))));
        bufp->chgCData(oldp+2923,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__546__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2924,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__546__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2925,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__547__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2926,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 3U))));
        bufp->chgCData(oldp+2927,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__547__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2928,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__547__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2929,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__548__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2930,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 4U))));
        bufp->chgCData(oldp+2931,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__548__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2932,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__548__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2933,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__549__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2934,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 5U))));
        bufp->chgCData(oldp+2935,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__549__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2936,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__549__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2937,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__54__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2938,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+2939,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__54__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2940,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__54__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2941,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__550__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2942,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 6U))));
        bufp->chgCData(oldp+2943,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__550__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2944,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__550__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2945,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__551__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2946,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 7U))));
        bufp->chgCData(oldp+2947,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__551__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2948,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__551__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2949,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__552__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2950,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 8U))));
        bufp->chgCData(oldp+2951,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__552__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2952,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__552__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2953,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__553__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2954,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 9U))));
        bufp->chgCData(oldp+2955,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__553__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2956,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__553__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2957,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__554__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2958,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+2959,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__554__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2960,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__554__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2961,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__555__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2962,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+2963,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__555__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2964,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__555__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2965,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__556__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2966,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+2967,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__556__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2968,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__556__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2969,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__557__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2970,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+2971,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__557__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2972,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__557__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2973,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__558__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2974,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+2975,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__558__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2976,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__558__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2977,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__559__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2978,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+2979,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__559__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2980,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__559__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2981,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__55__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2982,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+2983,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__55__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2984,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__55__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2985,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__560__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2986,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+2987,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__560__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2988,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__560__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2989,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__561__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2990,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+2991,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__561__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2992,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__561__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2993,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__562__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2994,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+2995,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__562__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+2996,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__562__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+2997,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__563__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+2998,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+2999,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__563__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3000,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__563__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3001,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__564__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3002,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+3003,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__564__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3004,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__564__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3005,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__565__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3006,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+3007,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__565__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3008,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__565__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3009,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__566__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3010,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+3011,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__566__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3012,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__566__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3013,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__567__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3014,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+3015,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__567__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3016,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__567__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3017,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__568__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3018,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+3019,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__568__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3020,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__568__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3021,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__569__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3022,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3023,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__569__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3024,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__569__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3025,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__56__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3026,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+3027,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__56__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3028,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__56__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3029,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__570__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3030,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3031,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__570__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3032,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__570__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3033,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__571__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3034,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3035,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__571__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3036,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__571__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3037,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__572__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3038,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3039,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__572__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3040,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__572__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3041,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__573__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3042,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3043,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__573__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3044,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__573__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3045,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__574__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3046,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3047,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__574__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3048,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__574__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3049,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__575__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3050,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000011U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3051,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__575__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3052,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__575__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3053,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__576__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3054,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U])));
        bufp->chgCData(oldp+3055,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__576__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3056,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__576__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3057,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__577__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3058,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3059,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__577__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3060,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__577__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3061,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__578__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3062,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3063,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__578__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3064,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__578__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3065,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__579__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3066,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3067,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__579__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3068,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__579__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3069,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__57__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3070,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3071,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__57__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3072,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__57__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3073,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__580__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3074,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3075,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__580__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3076,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__580__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3077,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__581__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3078,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3079,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__581__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3080,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__581__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3081,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__582__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3082,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3083,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__582__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3084,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__582__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3085,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__583__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3086,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3087,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__583__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3088,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__583__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3089,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__584__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3090,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3091,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__584__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3092,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__584__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3093,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__585__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3094,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3095,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__585__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3096,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__585__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3097,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__586__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3098,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3099,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__586__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3100,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__586__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3101,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__587__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3102,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3103,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__587__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3104,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__587__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3105,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__588__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3106,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3107,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__588__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3108,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__588__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3109,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__589__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3110,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3111,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__589__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3112,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__589__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3113,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__58__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3114,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3115,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__58__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3116,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__58__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3117,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__590__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3118,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+3119,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__590__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3120,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__590__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3121,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__591__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3122,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+3123,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__591__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3124,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__591__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3125,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__592__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3126,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+3127,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__592__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3128,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__592__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3129,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__593__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3130,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+3131,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__593__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3132,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__593__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3133,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__594__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3134,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+3135,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__594__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3136,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__594__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3137,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__595__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3138,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+3139,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__595__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3140,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__595__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3141,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__596__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3142,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+3143,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__596__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3144,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__596__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3145,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__597__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3146,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+3147,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__597__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3148,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__597__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3149,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__598__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3150,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+3151,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__598__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3152,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__598__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3153,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__599__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3154,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+3155,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__599__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3156,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__599__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3157,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__59__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3158,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3159,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__59__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3160,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__59__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3161,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__5__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3162,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3163,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__5__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3164,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__5__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3165,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__600__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3166,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+3167,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__600__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3168,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__600__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3169,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__601__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3170,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3171,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__601__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3172,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__601__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3173,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__602__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3174,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3175,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__602__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3176,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__602__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3177,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__603__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3178,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3179,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__603__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3180,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__603__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3181,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__604__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3182,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3183,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__604__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3184,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__604__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3185,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__605__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3186,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3187,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__605__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3188,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__605__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3189,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__606__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3190,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3191,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__606__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3192,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__606__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3193,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__607__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3194,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000012U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3195,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__607__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3196,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__607__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3197,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__608__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3198,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U])));
        bufp->chgCData(oldp+3199,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__608__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3200,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__608__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3201,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__609__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3202,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3203,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__609__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3204,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__609__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3205,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__60__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3206,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3207,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__60__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3208,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__60__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3209,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__610__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3210,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3211,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__610__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3212,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__610__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3213,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__611__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3214,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3215,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__611__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3216,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__611__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3217,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__612__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3218,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3219,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__612__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3220,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__612__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3221,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__613__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3222,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3223,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__613__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3224,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__613__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3225,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__614__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3226,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3227,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__614__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3228,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__614__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3229,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__615__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3230,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3231,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__615__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3232,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__615__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3233,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__616__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3234,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3235,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__616__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3236,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__616__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3237,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__617__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3238,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3239,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__617__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3240,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__617__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3241,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__618__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3242,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3243,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__618__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3244,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__618__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3245,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__619__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3246,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3247,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__619__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3248,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__619__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3249,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__61__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3250,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3251,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__61__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3252,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__61__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3253,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__620__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3254,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3255,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__620__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3256,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__620__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3257,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__621__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3258,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3259,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__621__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3260,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__621__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3261,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__622__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3262,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+3263,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__622__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3264,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__622__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3265,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__623__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3266,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+3267,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__623__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3268,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__623__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3269,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__624__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3270,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+3271,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__624__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3272,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__624__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3273,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__625__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3274,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+3275,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__625__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3276,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__625__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3277,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__626__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3278,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+3279,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__626__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3280,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__626__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3281,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__627__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3282,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+3283,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__627__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3284,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__627__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3285,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__628__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3286,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+3287,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__628__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3288,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__628__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3289,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__629__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3290,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+3291,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__629__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3292,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__629__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3293,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__62__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3294,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3295,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__62__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3296,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__62__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3297,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__630__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3298,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+3299,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__630__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3300,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__630__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3301,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__631__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3302,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+3303,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__631__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3304,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__631__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3305,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__632__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3306,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+3307,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__632__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3308,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__632__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3309,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__633__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3310,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3311,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__633__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3312,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__633__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3313,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__634__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3314,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3315,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__634__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3316,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__634__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3317,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__635__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3318,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3319,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__635__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3320,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__635__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3321,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__636__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3322,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3323,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__636__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3324,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__636__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3325,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__637__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3326,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3327,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__637__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3328,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__637__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3329,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__638__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3330,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3331,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__638__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3332,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__638__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3333,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__639__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3334,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000013U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3335,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__639__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3336,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__639__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3337,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__63__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3338,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[1U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3339,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__63__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3340,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__63__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3341,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__640__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3342,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U])));
        bufp->chgCData(oldp+3343,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__640__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3344,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__640__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3345,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__641__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3346,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3347,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__641__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3348,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__641__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3349,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__642__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3350,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3351,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__642__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3352,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__642__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3353,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__643__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3354,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3355,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__643__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3356,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__643__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3357,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__644__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3358,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3359,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__644__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3360,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__644__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3361,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__645__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3362,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3363,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__645__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3364,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__645__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3365,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__646__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3366,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3367,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__646__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3368,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__646__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3369,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__647__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3370,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3371,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__647__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3372,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__647__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3373,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__648__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3374,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3375,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__648__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3376,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__648__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3377,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__649__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3378,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3379,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__649__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3380,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__649__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3381,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__64__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3382,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U])));
        bufp->chgCData(oldp+3383,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__64__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3384,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__64__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3385,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__650__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3386,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3387,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__650__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3388,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__650__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3389,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__651__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3390,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3391,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__651__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3392,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__651__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3393,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__652__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3394,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3395,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__652__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3396,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__652__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3397,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__653__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3398,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3399,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__653__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3400,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__653__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3401,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__654__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3402,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+3403,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__654__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3404,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__654__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3405,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__655__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3406,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+3407,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__655__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3408,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__655__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3409,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__656__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3410,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+3411,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__656__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3412,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__656__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3413,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__657__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3414,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+3415,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__657__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3416,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__657__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3417,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__658__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3418,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+3419,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__658__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3420,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__658__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3421,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__659__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3422,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+3423,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__659__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3424,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__659__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3425,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__65__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3426,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3427,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__65__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3428,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__65__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3429,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__660__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3430,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+3431,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__660__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3432,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__660__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3433,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__661__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3434,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+3435,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__661__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3436,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__661__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3437,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__662__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3438,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+3439,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__662__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3440,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__662__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3441,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__663__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3442,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+3443,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__663__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3444,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__663__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3445,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__664__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3446,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+3447,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__664__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3448,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__664__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3449,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__665__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3450,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3451,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__665__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3452,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__665__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3453,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__666__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3454,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3455,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__666__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3456,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__666__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3457,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__667__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3458,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3459,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__667__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3460,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__667__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3461,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__668__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3462,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3463,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__668__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3464,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__668__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3465,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__669__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3466,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3467,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__669__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3468,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__669__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3469,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__66__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3470,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3471,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__66__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3472,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__66__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3473,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__670__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3474,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3475,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__670__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3476,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__670__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3477,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__671__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3478,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000014U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3479,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__671__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3480,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__671__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3481,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__672__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3482,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U])));
        bufp->chgCData(oldp+3483,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__672__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3484,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__672__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3485,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__673__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3486,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3487,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__673__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3488,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__673__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3489,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__674__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3490,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3491,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__674__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3492,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__674__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3493,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__675__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3494,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3495,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__675__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3496,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__675__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3497,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__676__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3498,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3499,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__676__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3500,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__676__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3501,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__677__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3502,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3503,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__677__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3504,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__677__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3505,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__678__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3506,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3507,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__678__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3508,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__678__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3509,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__679__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3510,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3511,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__679__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3512,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__679__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3513,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__67__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3514,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3515,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__67__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3516,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__67__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3517,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__680__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3518,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3519,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__680__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3520,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__680__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3521,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__681__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3522,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3523,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__681__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3524,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__681__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3525,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__682__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3526,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3527,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__682__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3528,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__682__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3529,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__683__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3530,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3531,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__683__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3532,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__683__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3533,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__684__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3534,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3535,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__684__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3536,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__684__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3537,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__685__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3538,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3539,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__685__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3540,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__685__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3541,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__686__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3542,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+3543,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__686__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3544,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__686__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3545,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__687__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3546,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+3547,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__687__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3548,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__687__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3549,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__688__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3550,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+3551,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__688__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3552,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__688__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3553,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__689__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3554,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+3555,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__689__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3556,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__689__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3557,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__68__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3558,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3559,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__68__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3560,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__68__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3561,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__690__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3562,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+3563,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__690__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3564,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__690__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3565,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__691__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3566,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+3567,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__691__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3568,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__691__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3569,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__692__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3570,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+3571,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__692__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3572,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__692__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3573,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__693__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3574,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+3575,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__693__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3576,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__693__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3577,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__694__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3578,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+3579,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__694__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3580,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__694__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3581,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__695__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3582,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+3583,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__695__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3584,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__695__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3585,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__696__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3586,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+3587,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__696__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3588,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__696__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3589,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__697__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3590,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3591,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__697__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3592,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__697__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3593,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__698__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3594,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3595,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__698__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3596,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__698__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3597,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__699__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3598,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3599,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__699__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3600,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__699__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3601,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__69__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3602,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3603,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__69__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3604,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__69__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3605,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__6__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3606,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3607,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__6__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3608,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__6__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3609,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__700__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3610,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3611,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__700__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3612,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__700__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3613,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__701__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3614,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3615,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__701__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3616,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__701__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3617,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__702__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3618,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3619,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__702__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3620,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__702__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3621,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__703__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3622,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000015U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3623,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__703__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3624,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__703__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3625,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__704__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3626,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U])));
        bufp->chgCData(oldp+3627,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__704__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3628,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__704__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3629,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__705__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3630,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3631,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__705__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3632,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__705__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3633,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__706__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3634,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3635,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__706__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3636,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__706__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3637,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__707__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3638,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3639,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__707__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3640,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__707__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3641,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__708__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3642,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3643,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__708__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3644,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__708__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3645,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__709__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3646,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3647,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__709__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3648,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__709__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3649,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__70__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3650,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3651,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__70__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3652,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__70__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3653,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__710__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3654,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3655,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__710__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3656,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__710__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3657,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__711__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3658,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3659,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__711__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3660,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__711__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3661,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__712__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3662,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3663,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__712__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3664,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__712__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3665,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__713__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3666,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3667,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__713__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3668,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__713__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3669,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__714__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3670,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3671,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__714__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3672,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__714__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3673,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__715__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3674,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3675,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__715__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3676,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__715__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3677,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__716__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3678,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3679,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__716__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3680,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__716__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3681,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__717__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3682,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3683,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__717__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3684,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__717__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3685,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__718__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3686,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+3687,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__718__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3688,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__718__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3689,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__719__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3690,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+3691,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__719__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3692,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__719__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3693,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__71__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3694,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3695,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__71__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3696,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__71__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3697,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__720__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3698,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+3699,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__720__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3700,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__720__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3701,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__721__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3702,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+3703,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__721__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3704,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__721__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3705,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__722__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3706,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+3707,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__722__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3708,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__722__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3709,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__723__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3710,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+3711,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__723__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3712,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__723__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3713,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__724__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3714,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+3715,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__724__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3716,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__724__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3717,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__725__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3718,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+3719,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__725__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3720,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__725__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3721,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__726__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3722,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+3723,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__726__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3724,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__726__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3725,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__727__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3726,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+3727,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__727__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3728,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__727__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3729,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__728__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3730,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+3731,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__728__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3732,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__728__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3733,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__729__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3734,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3735,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__729__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3736,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__729__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3737,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__72__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3738,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3739,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__72__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3740,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__72__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3741,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__730__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3742,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3743,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__730__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3744,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__730__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3745,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__731__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3746,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3747,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__731__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3748,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__731__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3749,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__732__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3750,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3751,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__732__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3752,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__732__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3753,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__733__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3754,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3755,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__733__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3756,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__733__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3757,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__734__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3758,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3759,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__734__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3760,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__734__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3761,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__735__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3762,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000016U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3763,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__735__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3764,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__735__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3765,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__736__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3766,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U])));
        bufp->chgCData(oldp+3767,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__736__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3768,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__736__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3769,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__737__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3770,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3771,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__737__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3772,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__737__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3773,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__738__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3774,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3775,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__738__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3776,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__738__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3777,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__739__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3778,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3779,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__739__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3780,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__739__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3781,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__73__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3782,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3783,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__73__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3784,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__73__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3785,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__740__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3786,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3787,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__740__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3788,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__740__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3789,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__741__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3790,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3791,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__741__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3792,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__741__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3793,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__742__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3794,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3795,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__742__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3796,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__742__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3797,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__743__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3798,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3799,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__743__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3800,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__743__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3801,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__744__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3802,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3803,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__744__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3804,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__744__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3805,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__745__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3806,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3807,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__745__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3808,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__745__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3809,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__746__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3810,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3811,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__746__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3812,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__746__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3813,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__747__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3814,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3815,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__747__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3816,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__747__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3817,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__748__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3818,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3819,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__748__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3820,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__748__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3821,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__749__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3822,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3823,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__749__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3824,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__749__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3825,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__74__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3826,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3827,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__74__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3828,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__74__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3829,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__750__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3830,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+3831,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__750__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3832,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__750__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3833,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__751__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3834,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+3835,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__751__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3836,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__751__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3837,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__752__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3838,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+3839,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__752__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3840,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__752__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3841,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__753__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3842,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+3843,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__753__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3844,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__753__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3845,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__754__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3846,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+3847,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__754__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3848,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__754__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3849,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__755__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3850,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+3851,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__755__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3852,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__755__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3853,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__756__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3854,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+3855,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__756__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3856,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__756__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3857,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__757__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3858,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+3859,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__757__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3860,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__757__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3861,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__758__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3862,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+3863,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__758__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3864,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__758__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3865,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__759__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3866,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+3867,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__759__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3868,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__759__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3869,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__75__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3870,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3871,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__75__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3872,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__75__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3873,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__760__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3874,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+3875,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__760__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3876,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__760__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3877,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__761__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3878,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+3879,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__761__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3880,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__761__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3881,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__762__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3882,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+3883,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__762__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3884,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__762__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3885,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__763__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3886,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+3887,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__763__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3888,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__763__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3889,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__764__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3890,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+3891,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__764__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3892,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__764__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3893,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__765__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3894,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+3895,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__765__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3896,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__765__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3897,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__766__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3898,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+3899,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__766__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3900,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__766__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3901,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__767__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3902,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000017U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+3903,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__767__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3904,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__767__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3905,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__768__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3906,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U])));
        bufp->chgCData(oldp+3907,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__768__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3908,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__768__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3909,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__769__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3910,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 1U))));
        bufp->chgCData(oldp+3911,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__769__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3912,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__769__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3913,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__76__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3914,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3915,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__76__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3916,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__76__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3917,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__770__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3918,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 2U))));
        bufp->chgCData(oldp+3919,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__770__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3920,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__770__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3921,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__771__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3922,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 3U))));
        bufp->chgCData(oldp+3923,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__771__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3924,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__771__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3925,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__772__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3926,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 4U))));
        bufp->chgCData(oldp+3927,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__772__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3928,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__772__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3929,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__773__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3930,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 5U))));
        bufp->chgCData(oldp+3931,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__773__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3932,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__773__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3933,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__774__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3934,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 6U))));
        bufp->chgCData(oldp+3935,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__774__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3936,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__774__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3937,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__775__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3938,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 7U))));
        bufp->chgCData(oldp+3939,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__775__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3940,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__775__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3941,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__776__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3942,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 8U))));
        bufp->chgCData(oldp+3943,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__776__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3944,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__776__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3945,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__777__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3946,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 9U))));
        bufp->chgCData(oldp+3947,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__777__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3948,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__777__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3949,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__778__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3950,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+3951,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__778__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3952,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__778__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3953,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__779__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3954,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+3955,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__779__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3956,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__779__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3957,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__77__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3958,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3959,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__77__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3960,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__77__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3961,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__780__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3962,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+3963,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__780__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3964,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__780__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3965,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__781__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3966,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+3967,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__781__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3968,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__781__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3969,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__782__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3970,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+3971,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__782__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3972,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__782__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3973,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__783__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3974,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+3975,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__783__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3976,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__783__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3977,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__784__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3978,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+3979,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__784__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3980,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__784__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3981,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__785__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3982,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+3983,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__785__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3984,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__785__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3985,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__786__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3986,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+3987,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__786__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3988,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__786__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3989,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__787__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3990,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+3991,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__787__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3992,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__787__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3993,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__788__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3994,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+3995,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__788__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+3996,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__788__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+3997,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__789__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+3998,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+3999,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__789__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4000,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__789__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4001,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__78__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4002,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+4003,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__78__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4004,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__78__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4005,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__790__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4006,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+4007,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__790__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4008,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__790__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4009,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__791__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4010,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+4011,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__791__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4012,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__791__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4013,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__792__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4014,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+4015,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__792__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4016,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__792__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4017,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__793__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4018,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+4019,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__793__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4020,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__793__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4021,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__794__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4022,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+4023,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__794__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4024,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__794__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4025,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__795__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4026,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+4027,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__795__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4028,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__795__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4029,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__796__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4030,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+4031,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__796__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4032,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__796__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4033,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__797__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4034,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+4035,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__797__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4036,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__797__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4037,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__798__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4038,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+4039,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__798__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4040,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__798__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4041,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__799__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4042,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000018U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+4043,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__799__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4044,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__799__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4045,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__79__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4046,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+4047,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__79__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4048,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__79__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4049,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__7__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4050,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 7U))));
        bufp->chgCData(oldp+4051,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__7__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4052,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__7__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4053,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__800__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4054,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U])));
        bufp->chgCData(oldp+4055,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__800__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4056,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__800__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4057,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__801__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4058,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 1U))));
        bufp->chgCData(oldp+4059,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__801__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4060,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__801__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4061,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__802__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4062,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 2U))));
        bufp->chgCData(oldp+4063,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__802__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4064,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__802__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4065,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__803__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4066,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 3U))));
        bufp->chgCData(oldp+4067,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__803__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4068,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__803__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4069,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__804__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4070,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 4U))));
        bufp->chgCData(oldp+4071,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__804__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4072,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__804__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4073,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__805__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4074,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 5U))));
        bufp->chgCData(oldp+4075,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__805__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4076,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__805__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4077,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__806__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4078,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 6U))));
        bufp->chgCData(oldp+4079,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__806__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4080,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__806__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4081,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__807__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4082,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 7U))));
        bufp->chgCData(oldp+4083,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__807__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4084,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__807__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4085,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__808__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4086,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 8U))));
        bufp->chgCData(oldp+4087,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__808__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4088,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__808__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4089,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__809__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4090,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 9U))));
        bufp->chgCData(oldp+4091,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__809__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4092,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__809__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4093,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__80__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4094,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+4095,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__80__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4096,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__80__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4097,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__810__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4098,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+4099,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__810__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4100,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__810__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4101,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__811__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4102,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+4103,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__811__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4104,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__811__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4105,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__812__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4106,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+4107,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__812__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4108,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__812__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4109,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__813__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4110,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+4111,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__813__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4112,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__813__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4113,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__814__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4114,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+4115,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__814__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4116,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__814__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4117,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__815__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4118,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+4119,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__815__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4120,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__815__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4121,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__816__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4122,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+4123,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__816__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4124,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__816__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4125,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__817__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4126,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+4127,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__817__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4128,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__817__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4129,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__818__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4130,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+4131,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__818__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4132,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__818__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4133,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__819__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4134,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+4135,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__819__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4136,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__819__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4137,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__81__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4138,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+4139,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__81__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4140,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__81__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4141,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__820__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4142,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+4143,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__820__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4144,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__820__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4145,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__821__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4146,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+4147,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__821__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4148,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__821__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4149,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__822__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4150,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+4151,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__822__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4152,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__822__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4153,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__823__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4154,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+4155,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__823__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4156,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__823__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4157,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__824__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4158,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+4159,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__824__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4160,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__824__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4161,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__825__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4162,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+4163,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__825__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4164,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__825__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4165,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__826__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4166,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+4167,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__826__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4168,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__826__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4169,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__827__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4170,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+4171,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__827__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4172,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__827__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4173,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__828__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4174,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+4175,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__828__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4176,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__828__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4177,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__829__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4178,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+4179,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__829__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4180,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__829__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4181,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__82__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4182,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+4183,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__82__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4184,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__82__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4185,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__830__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4186,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+4187,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__830__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4188,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__830__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4189,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__831__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4190,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x00000019U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+4191,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__831__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4192,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__831__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4193,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__832__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4194,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU])));
        bufp->chgCData(oldp+4195,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__832__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4196,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__832__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4197,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__833__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4198,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 1U))));
        bufp->chgCData(oldp+4199,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__833__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4200,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__833__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4201,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__834__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4202,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 2U))));
        bufp->chgCData(oldp+4203,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__834__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4204,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__834__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4205,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__835__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4206,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 3U))));
        bufp->chgCData(oldp+4207,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__835__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4208,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__835__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4209,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__836__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4210,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 4U))));
        bufp->chgCData(oldp+4211,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__836__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4212,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__836__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4213,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__837__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4214,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 5U))));
        bufp->chgCData(oldp+4215,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__837__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4216,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__837__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4217,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__838__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4218,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 6U))));
        bufp->chgCData(oldp+4219,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__838__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4220,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__838__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4221,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__839__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4222,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 7U))));
        bufp->chgCData(oldp+4223,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__839__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4224,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__839__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4225,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__83__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4226,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+4227,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__83__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4228,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__83__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4229,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__840__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4230,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 8U))));
        bufp->chgCData(oldp+4231,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__840__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4232,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__840__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4233,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__841__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4234,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 9U))));
        bufp->chgCData(oldp+4235,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__841__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4236,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__841__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4237,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__842__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4238,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+4239,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__842__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4240,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__842__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4241,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__843__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4242,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+4243,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__843__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4244,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__843__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4245,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__844__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4246,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+4247,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__844__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4248,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__844__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4249,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__845__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4250,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+4251,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__845__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4252,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__845__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4253,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__846__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4254,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+4255,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__846__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4256,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__846__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4257,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__847__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4258,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+4259,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__847__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4260,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__847__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4261,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__848__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4262,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+4263,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__848__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4264,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__848__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4265,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__849__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4266,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+4267,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__849__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4268,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__849__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4269,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__84__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4270,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+4271,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__84__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4272,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__84__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4273,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__850__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4274,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+4275,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__850__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4276,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__850__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4277,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__851__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4278,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+4279,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__851__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4280,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__851__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4281,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__852__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4282,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+4283,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__852__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4284,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__852__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4285,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__853__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4286,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+4287,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__853__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4288,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__853__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4289,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__854__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4290,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+4291,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__854__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4292,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__854__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4293,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__855__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4294,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+4295,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__855__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4296,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__855__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4297,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__856__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4298,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+4299,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__856__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4300,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__856__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4301,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__857__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4302,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+4303,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__857__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4304,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__857__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4305,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__858__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4306,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+4307,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__858__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4308,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__858__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4309,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__859__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4310,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+4311,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__859__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4312,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__859__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4313,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__85__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4314,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+4315,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__85__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4316,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__85__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4317,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__860__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4318,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+4319,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__860__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4320,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__860__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4321,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__861__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4322,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+4323,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__861__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4324,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__861__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4325,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__862__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4326,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+4327,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__862__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4328,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__862__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4329,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__863__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4330,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001aU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+4331,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__863__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4332,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__863__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4333,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__864__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4334,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU])));
        bufp->chgCData(oldp+4335,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__864__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4336,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__864__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4337,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__865__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4338,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 1U))));
        bufp->chgCData(oldp+4339,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__865__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4340,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__865__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4341,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__866__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4342,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 2U))));
        bufp->chgCData(oldp+4343,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__866__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4344,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__866__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4345,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__867__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4346,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 3U))));
        bufp->chgCData(oldp+4347,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__867__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4348,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__867__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4349,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__868__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4350,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 4U))));
        bufp->chgCData(oldp+4351,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__868__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4352,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__868__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4353,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__869__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4354,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 5U))));
        bufp->chgCData(oldp+4355,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__869__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4356,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__869__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4357,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__86__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4358,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+4359,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__86__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4360,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__86__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4361,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__870__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4362,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 6U))));
        bufp->chgCData(oldp+4363,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__870__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4364,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__870__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4365,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__871__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4366,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 7U))));
        bufp->chgCData(oldp+4367,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__871__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4368,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__871__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4369,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__872__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4370,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 8U))));
        bufp->chgCData(oldp+4371,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__872__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4372,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__872__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4373,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__873__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4374,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 9U))));
        bufp->chgCData(oldp+4375,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__873__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4376,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__873__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4377,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__874__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4378,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+4379,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__874__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4380,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__874__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4381,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__875__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4382,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+4383,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__875__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4384,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__875__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4385,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__876__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4386,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+4387,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__876__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4388,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__876__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4389,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__877__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4390,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+4391,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__877__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4392,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__877__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4393,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__878__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4394,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+4395,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__878__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4396,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__878__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4397,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__879__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4398,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+4399,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__879__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4400,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__879__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4401,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__87__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4402,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+4403,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__87__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4404,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__87__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4405,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__880__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4406,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+4407,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__880__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4408,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__880__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4409,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__881__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4410,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+4411,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__881__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4412,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__881__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4413,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__882__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4414,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+4415,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__882__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4416,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__882__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4417,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__883__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4418,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+4419,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__883__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4420,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__883__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4421,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__884__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4422,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+4423,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__884__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4424,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__884__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4425,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__885__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4426,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+4427,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__885__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4428,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__885__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4429,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__886__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4430,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+4431,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__886__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4432,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__886__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4433,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__887__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4434,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+4435,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__887__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4436,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__887__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4437,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__888__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4438,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+4439,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__888__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4440,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__888__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4441,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__889__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4442,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+4443,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__889__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4444,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__889__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4445,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__88__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4446,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+4447,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__88__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4448,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__88__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4449,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__890__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4450,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+4451,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__890__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4452,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__890__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4453,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__891__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4454,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+4455,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__891__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4456,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__891__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4457,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__892__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4458,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+4459,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__892__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4460,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__892__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4461,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__893__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4462,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+4463,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__893__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4464,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__893__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4465,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__894__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4466,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+4467,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__894__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4468,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__894__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4469,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__895__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4470,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001bU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+4471,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__895__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4472,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__895__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4473,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__896__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4474,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU])));
        bufp->chgCData(oldp+4475,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__896__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4476,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__896__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4477,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__897__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4478,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 1U))));
        bufp->chgCData(oldp+4479,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__897__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4480,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__897__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4481,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__898__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4482,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 2U))));
        bufp->chgCData(oldp+4483,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__898__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4484,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__898__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4485,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__899__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4486,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 3U))));
        bufp->chgCData(oldp+4487,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__899__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4488,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__899__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4489,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__89__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4490,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+4491,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__89__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4492,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__89__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4493,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__8__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4494,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 8U))));
        bufp->chgCData(oldp+4495,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__8__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4496,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__8__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4497,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__900__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4498,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 4U))));
        bufp->chgCData(oldp+4499,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__900__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4500,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__900__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4501,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__901__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4502,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 5U))));
        bufp->chgCData(oldp+4503,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__901__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4504,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__901__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4505,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__902__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4506,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 6U))));
        bufp->chgCData(oldp+4507,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__902__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4508,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__902__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4509,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__903__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4510,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 7U))));
        bufp->chgCData(oldp+4511,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__903__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4512,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__903__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4513,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__904__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4514,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 8U))));
        bufp->chgCData(oldp+4515,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__904__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4516,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__904__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4517,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__905__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4518,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 9U))));
        bufp->chgCData(oldp+4519,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__905__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4520,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__905__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4521,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__906__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4522,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+4523,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__906__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4524,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__906__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4525,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__907__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4526,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+4527,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__907__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4528,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__907__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4529,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__908__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4530,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+4531,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__908__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4532,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__908__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4533,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__909__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4534,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+4535,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__909__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4536,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__909__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4537,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__90__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4538,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+4539,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__90__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4540,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__90__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4541,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__910__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4542,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+4543,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__910__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4544,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__910__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4545,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__911__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4546,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+4547,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__911__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4548,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__911__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4549,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__912__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4550,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+4551,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__912__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4552,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__912__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4553,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__913__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4554,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+4555,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__913__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4556,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__913__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4557,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__914__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4558,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+4559,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__914__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4560,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__914__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4561,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__915__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4562,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+4563,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__915__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4564,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__915__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4565,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__916__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4566,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+4567,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__916__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4568,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__916__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4569,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__917__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4570,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+4571,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__917__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4572,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__917__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4573,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__918__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4574,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+4575,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__918__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4576,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__918__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4577,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__919__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4578,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+4579,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__919__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4580,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__919__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4581,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__91__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4582,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+4583,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__91__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4584,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__91__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4585,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__920__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4586,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+4587,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__920__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4588,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__920__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4589,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__921__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4590,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+4591,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__921__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4592,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__921__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4593,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__922__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4594,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+4595,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__922__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4596,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__922__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4597,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__923__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4598,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+4599,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__923__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4600,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__923__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4601,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__924__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4602,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+4603,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__924__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4604,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__924__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4605,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__925__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4606,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+4607,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__925__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4608,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__925__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4609,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__926__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4610,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+4611,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__926__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4612,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__926__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4613,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__927__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4614,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001cU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+4615,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__927__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4616,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__927__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4617,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__928__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4618,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU])));
        bufp->chgCData(oldp+4619,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__928__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4620,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__928__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4621,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__929__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4622,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 1U))));
        bufp->chgCData(oldp+4623,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__929__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4624,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__929__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4625,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__92__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4626,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+4627,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__92__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4628,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__92__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4629,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__930__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4630,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 2U))));
        bufp->chgCData(oldp+4631,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__930__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4632,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__930__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4633,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__931__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4634,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 3U))));
        bufp->chgCData(oldp+4635,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__931__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4636,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__931__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4637,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__932__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4638,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 4U))));
        bufp->chgCData(oldp+4639,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__932__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4640,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__932__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4641,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__933__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4642,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 5U))));
        bufp->chgCData(oldp+4643,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__933__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4644,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__933__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4645,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__934__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4646,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 6U))));
        bufp->chgCData(oldp+4647,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__934__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4648,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__934__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4649,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__935__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4650,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 7U))));
        bufp->chgCData(oldp+4651,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__935__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4652,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__935__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4653,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__936__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4654,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 8U))));
        bufp->chgCData(oldp+4655,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__936__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4656,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__936__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4657,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__937__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4658,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 9U))));
        bufp->chgCData(oldp+4659,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__937__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4660,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__937__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4661,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__938__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4662,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+4663,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__938__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4664,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__938__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4665,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__939__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4666,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+4667,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__939__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4668,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__939__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4669,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__93__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4670,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+4671,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__93__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4672,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__93__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4673,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__940__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4674,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+4675,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__940__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4676,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__940__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4677,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__941__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4678,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+4679,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__941__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4680,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__941__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4681,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__942__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4682,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+4683,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__942__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4684,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__942__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4685,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__943__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4686,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+4687,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__943__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4688,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__943__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4689,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__944__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4690,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+4691,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__944__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4692,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__944__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4693,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__945__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4694,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+4695,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__945__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4696,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__945__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4697,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__946__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4698,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+4699,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__946__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4700,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__946__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4701,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__947__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4702,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+4703,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__947__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4704,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__947__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4705,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__948__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4706,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+4707,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__948__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4708,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__948__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4709,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__949__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4710,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+4711,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__949__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4712,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__949__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4713,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__94__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4714,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+4715,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__94__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4716,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__94__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4717,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__950__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4718,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+4719,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__950__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4720,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__950__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4721,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__951__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4722,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+4723,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__951__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4724,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__951__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4725,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__952__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4726,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+4727,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__952__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4728,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__952__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4729,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__953__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4730,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+4731,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__953__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4732,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__953__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4733,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__954__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4734,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+4735,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__954__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4736,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__954__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4737,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__955__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4738,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+4739,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__955__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4740,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__955__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4741,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__956__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4742,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+4743,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__956__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4744,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__956__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4745,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__957__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4746,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+4747,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__957__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4748,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__957__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4749,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__958__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4750,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+4751,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__958__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4752,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__958__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4753,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__959__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4754,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001dU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+4755,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__959__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4756,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__959__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4757,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__95__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4758,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[2U] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+4759,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__95__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4760,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__95__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4761,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__960__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4762,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU])));
        bufp->chgCData(oldp+4763,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__960__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4764,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__960__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4765,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__961__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4766,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 1U))));
        bufp->chgCData(oldp+4767,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__961__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4768,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__961__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4769,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__962__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4770,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 2U))));
        bufp->chgCData(oldp+4771,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__962__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4772,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__962__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4773,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__963__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4774,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 3U))));
        bufp->chgCData(oldp+4775,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__963__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4776,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__963__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4777,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__964__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4778,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 4U))));
        bufp->chgCData(oldp+4779,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__964__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4780,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__964__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4781,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__965__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4782,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 5U))));
        bufp->chgCData(oldp+4783,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__965__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4784,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__965__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4785,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__966__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4786,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 6U))));
        bufp->chgCData(oldp+4787,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__966__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4788,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__966__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4789,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__967__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4790,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 7U))));
        bufp->chgCData(oldp+4791,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__967__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4792,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__967__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4793,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__968__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4794,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 8U))));
        bufp->chgCData(oldp+4795,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__968__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4796,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__968__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4797,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__969__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4798,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 9U))));
        bufp->chgCData(oldp+4799,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__969__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4800,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__969__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4801,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__96__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4802,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U])));
        bufp->chgCData(oldp+4803,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__96__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4804,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__96__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4805,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__970__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4806,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000000aU))));
        bufp->chgCData(oldp+4807,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__970__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4808,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__970__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4809,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__971__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4810,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000000bU))));
        bufp->chgCData(oldp+4811,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__971__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4812,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__971__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4813,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__972__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4814,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000000cU))));
        bufp->chgCData(oldp+4815,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__972__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4816,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__972__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4817,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__973__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4818,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000000dU))));
        bufp->chgCData(oldp+4819,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__973__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4820,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__973__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4821,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__974__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4822,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000000eU))));
        bufp->chgCData(oldp+4823,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__974__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4824,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__974__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4825,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__975__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4826,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000000fU))));
        bufp->chgCData(oldp+4827,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__975__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4828,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__975__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4829,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__976__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4830,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000010U))));
        bufp->chgCData(oldp+4831,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__976__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4832,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__976__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4833,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__977__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4834,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000011U))));
        bufp->chgCData(oldp+4835,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__977__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4836,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__977__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4837,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__978__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4838,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000012U))));
        bufp->chgCData(oldp+4839,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__978__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4840,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__978__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4841,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__979__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4842,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000013U))));
        bufp->chgCData(oldp+4843,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__979__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4844,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__979__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4845,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__97__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4846,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 1U))));
        bufp->chgCData(oldp+4847,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__97__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4848,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__97__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4849,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__980__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4850,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000014U))));
        bufp->chgCData(oldp+4851,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__980__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4852,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__980__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4853,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__981__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4854,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000015U))));
        bufp->chgCData(oldp+4855,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__981__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4856,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__981__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4857,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__982__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4858,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000016U))));
        bufp->chgCData(oldp+4859,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__982__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4860,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__982__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4861,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__983__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4862,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000017U))));
        bufp->chgCData(oldp+4863,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__983__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4864,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__983__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4865,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__984__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4866,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+4867,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__984__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4868,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__984__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4869,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__985__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4870,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x00000019U))));
        bufp->chgCData(oldp+4871,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__985__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4872,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__985__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4873,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__986__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4874,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000001aU))));
        bufp->chgCData(oldp+4875,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__986__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4876,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__986__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4877,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__987__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4878,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000001bU))));
        bufp->chgCData(oldp+4879,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__987__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4880,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__987__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4881,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__988__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4882,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000001cU))));
        bufp->chgCData(oldp+4883,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__988__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4884,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__988__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4885,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__989__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4886,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000001dU))));
        bufp->chgCData(oldp+4887,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__989__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4888,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__989__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4889,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__98__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4890,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 2U))));
        bufp->chgCData(oldp+4891,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__98__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4892,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__98__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4893,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__990__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4894,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                       >> 0x0000001eU))));
        bufp->chgCData(oldp+4895,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__990__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4896,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__990__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4897,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__991__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4898,((vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001eU] 
                                 >> 0x0000001fU)));
        bufp->chgCData(oldp+4899,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__991__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4900,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__991__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4901,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__992__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4902,((1U & vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU])));
        bufp->chgCData(oldp+4903,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__992__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4904,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__992__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4905,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__993__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4906,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                       >> 1U))));
        bufp->chgCData(oldp+4907,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__993__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4908,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__993__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4909,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__994__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4910,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                       >> 2U))));
        bufp->chgCData(oldp+4911,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__994__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4912,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__994__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4913,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__995__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4914,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                       >> 3U))));
        bufp->chgCData(oldp+4915,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__995__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4916,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__995__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4917,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__996__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4918,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                       >> 4U))));
        bufp->chgCData(oldp+4919,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__996__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4920,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__996__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4921,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__997__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4922,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                       >> 5U))));
        bufp->chgCData(oldp+4923,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__997__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4924,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__997__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4925,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__998__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4926,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                       >> 6U))));
        bufp->chgCData(oldp+4927,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__998__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4928,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__998__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4929,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__999__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4930,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0x0000001fU] 
                                       >> 7U))));
        bufp->chgCData(oldp+4931,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__999__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4932,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__999__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4933,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__99__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4934,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[3U] 
                                       >> 3U))));
        bufp->chgCData(oldp+4935,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__99__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4936,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__99__KET____DOT__fsm__DOT__ns),2);
        bufp->chgBit(oldp+4937,((1U & ((IData)(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__9__KET____DOT__fsm__DOT__ps) 
                                       >> 1U))));
        bufp->chgBit(oldp+4938,((1U & (vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__update_bus[0U] 
                                       >> 9U))));
        bufp->chgCData(oldp+4939,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__9__KET____DOT__fsm__DOT__ps),2);
        bufp->chgCData(oldp+4940,(vlSelfRef.core__DOT__fetch_stage__DOT__pred_buffer__DOT__bpb_fsms__BRA__9__KET____DOT__fsm__DOT__ns),2);
        bufp->chgIData(oldp+4941,(((IData)(4U) + vlSelfRef.core__DOT__fetch_stage__DOT__pc)),32);
        bufp->chgIData(oldp+4942,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[0]),32);
        bufp->chgIData(oldp+4943,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[1]),32);
        bufp->chgIData(oldp+4944,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[2]),32);
        bufp->chgIData(oldp+4945,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[3]),32);
        bufp->chgIData(oldp+4946,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[4]),32);
        bufp->chgIData(oldp+4947,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[5]),32);
        bufp->chgIData(oldp+4948,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[6]),32);
        bufp->chgIData(oldp+4949,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[7]),32);
        bufp->chgIData(oldp+4950,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[8]),32);
        bufp->chgIData(oldp+4951,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[9]),32);
        bufp->chgIData(oldp+4952,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[10]),32);
        bufp->chgIData(oldp+4953,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[11]),32);
        bufp->chgIData(oldp+4954,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[12]),32);
        bufp->chgIData(oldp+4955,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[13]),32);
        bufp->chgIData(oldp+4956,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[14]),32);
        bufp->chgIData(oldp+4957,(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack[15]),32);
        bufp->chgBit(oldp+4958,((0x0fU == (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp))));
        bufp->chgBit(oldp+4959,((0U == (IData)(vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp))));
        bufp->chgBit(oldp+4960,(vlSelfRef.core__DOT__generate_new_pc__DOT__pipe_taken));
        bufp->chgBit(oldp+4961,(((~ (IData)(vlSelfRef.core__DOT__commit_result)) 
                                 & (IData)(vlSelfRef.core__DOT__commit_prediction))));
        bufp->chgIData(oldp+4962,(((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0)
                                    ? vlSelfRef.core__DOT__committed_pc
                                    : ((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_1)
                                        ? 0U : vlSelfRef.core__DOT__fetch_stage__DOT__pc))),32);
        bufp->chgIData(oldp+4963,(((IData)(vlSelfRef.__VdfgRegularize_h4af1c392_0_0)
                                    ? (((~ (IData)(vlSelfRef.core__DOT__commit_result)) 
                                        & (IData)(vlSelfRef.core__DOT__commit_prediction))
                                        ? 4U : vlSelfRef.core__DOT__commit_imm_se)
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
        bufp->chgCData(oldp+4964,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__wptr),2);
        bufp->chgCData(oldp+4965,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__rptr),2);
        bufp->chgBit(oldp+4966,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__empty));
        bufp->chgBit(oldp+4967,((1U & (vlSelfRef.core__DOT__jalrq_input[2U] 
                                       >> 0x00000010U))));
        bufp->chgWData(oldp+4968,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__jalrq_data
                                  [0U]),81);
        bufp->chgWData(oldp+4971,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__jalrq_data
                                  [1U]),81);
        bufp->chgWData(oldp+4974,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__jalrq_data
                                  [2U]),81);
        bufp->chgWData(oldp+4977,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__jalrq_data
                                  [3U]),81);
        bufp->chgIData(oldp+4980,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+4981,(vlSelfRef.core__DOT__indirect_jump_queue__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+4982,(vlSelfRef.core__DOT__ins_hold__DOT__ns));
        bufp->chgWData(oldp+4983,(vlSelfRef.core__DOT__ins_hold__DOT__instr_hold),112);
        bufp->chgCData(oldp+4987,(vlSelfRef.core__DOT__load_store_queue__DOT__wptr),2);
        bufp->chgCData(oldp+4988,(vlSelfRef.core__DOT__load_store_queue__DOT__rptr),2);
        bufp->chgWData(oldp+4989,(vlSelfRef.core__DOT__load_store_queue__DOT__lsq_data
                                  [0U]),79);
        bufp->chgWData(oldp+4992,(vlSelfRef.core__DOT__load_store_queue__DOT__lsq_data
                                  [1U]),79);
        bufp->chgWData(oldp+4995,(vlSelfRef.core__DOT__load_store_queue__DOT__lsq_data
                                  [2U]),79);
        bufp->chgWData(oldp+4998,(vlSelfRef.core__DOT__load_store_queue__DOT__lsq_data
                                  [3U]),79);
        bufp->chgIData(oldp+5001,(vlSelfRef.core__DOT__load_store_queue__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+5002,(vlSelfRef.core__DOT__load_store_queue__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+5003,(vlSelfRef.core__DOT__fu_bus[4U]),32);
        bufp->chgIData(oldp+5004,(vlSelfRef.core__DOT__fu_bus[5U]),32);
        bufp->chgCData(oldp+5005,((0x0000000fU & (vlSelfRef.core__DOT__ROB_entry_bus 
                                                  >> 8U))),4);
        bufp->chgBit(oldp+5006,((1U & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                       >> 2U))));
        bufp->chgBit(oldp+5007,((1U & ((IData)(vlSelfRef.core__DOT__yumi_bus) 
                                       >> 2U))));
        bufp->chgCData(oldp+5008,((0x0000000fU & (vlSelfRef.core__DOT__ALU_op 
                                                  >> 8U))),4);
        bufp->chgBit(oldp+5009,((3U == (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))));
        bufp->chgBit(oldp+5010,((0U == (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))));
        bufp->chgIData(oldp+5011,(vlSelfRef.core__DOT__mult_fu__DOT__P),32);
        bufp->chgIData(oldp+5012,(((IData)(vlSelfRef.core__DOT__mult_fu__DOT__mul_h)
                                    ? vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__A
                                    : vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__Q)),32);
        bufp->chgQData(oldp+5013,((((QData)((IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__A)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__Q)))),64);
        bufp->chgBit(oldp+5015,(vlSelfRef.core__DOT__mult_fu__DOT__loadregs));
        bufp->chgBit(oldp+5016,((2U == (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))));
        bufp->chgBit(oldp+5017,((1U == (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))));
        bufp->chgBit(oldp+5018,(vlSelfRef.core__DOT__mult_fu__DOT__mul_h));
        bufp->chgCData(oldp+5019,(vlSelfRef.core__DOT__mult_fu__DOT__curr_rob),4);
        bufp->chgCData(oldp+5020,(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps),2);
        bufp->chgCData(oldp+5021,(((2U & (IData)(vlSelfRef.core__DOT__mult_fu__DOT__multiply_cu__DOT__ps))
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
        bufp->chgBit(oldp+5022,(vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__Q1));
        bufp->chgIData(oldp+5023,(vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__A),32);
        bufp->chgIData(oldp+5024,(vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__B),32);
        bufp->chgIData(oldp+5025,(vlSelfRef.core__DOT__mult_fu__DOT__multiply_dp__DOT__Q),32);
        bufp->chgCData(oldp+5026,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0U]),5);
        bufp->chgCData(oldp+5027,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [1U]),5);
        bufp->chgCData(oldp+5028,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [2U]),5);
        bufp->chgCData(oldp+5029,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [3U]),5);
        bufp->chgCData(oldp+5030,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [4U]),5);
        bufp->chgCData(oldp+5031,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [5U]),5);
        bufp->chgCData(oldp+5032,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [6U]),5);
        bufp->chgCData(oldp+5033,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [7U]),5);
        bufp->chgCData(oldp+5034,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [8U]),5);
        bufp->chgCData(oldp+5035,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [9U]),5);
        bufp->chgCData(oldp+5036,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000000aU]),5);
        bufp->chgCData(oldp+5037,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000000bU]),5);
        bufp->chgCData(oldp+5038,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000000cU]),5);
        bufp->chgCData(oldp+5039,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000000dU]),5);
        bufp->chgCData(oldp+5040,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000000eU]),5);
        bufp->chgCData(oldp+5041,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000000fU]),5);
        bufp->chgCData(oldp+5042,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000010U]),5);
        bufp->chgCData(oldp+5043,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000011U]),5);
        bufp->chgCData(oldp+5044,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000012U]),5);
        bufp->chgCData(oldp+5045,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000013U]),5);
        bufp->chgCData(oldp+5046,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000014U]),5);
        bufp->chgCData(oldp+5047,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000015U]),5);
        bufp->chgCData(oldp+5048,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000016U]),5);
        bufp->chgCData(oldp+5049,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000017U]),5);
        bufp->chgCData(oldp+5050,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000018U]),5);
        bufp->chgCData(oldp+5051,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x00000019U]),5);
        bufp->chgCData(oldp+5052,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000001aU]),5);
        bufp->chgCData(oldp+5053,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000001bU]),5);
        bufp->chgCData(oldp+5054,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000001cU]),5);
        bufp->chgCData(oldp+5055,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000001dU]),5);
        bufp->chgCData(oldp+5056,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000001eU]),5);
        bufp->chgCData(oldp+5057,(vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                  [0x0000001fU]),5);
        bufp->chgIData(oldp+5058,(vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus),32);
        bufp->chgIData(oldp+5059,(vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus),32);
        bufp->chgBit(oldp+5060,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000000aU))));
        bufp->chgBit(oldp+5061,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000000aU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5062,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__10__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5063,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000000bU))));
        bufp->chgBit(oldp+5064,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000000bU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5065,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__11__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5066,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000000cU))));
        bufp->chgBit(oldp+5067,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000000cU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5068,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__12__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5069,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000000dU))));
        bufp->chgBit(oldp+5070,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000000dU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5071,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__13__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5072,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000000eU))));
        bufp->chgBit(oldp+5073,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000000eU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5074,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__14__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5075,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000000fU))));
        bufp->chgBit(oldp+5076,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000000fU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5077,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__15__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5078,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000010U))));
        bufp->chgBit(oldp+5079,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000010U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5080,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__16__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5081,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000011U))));
        bufp->chgBit(oldp+5082,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000011U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5083,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__17__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5084,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000012U))));
        bufp->chgBit(oldp+5085,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000012U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5086,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__18__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5087,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000013U))));
        bufp->chgBit(oldp+5088,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000013U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5089,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__19__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5090,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 1U))));
        bufp->chgBit(oldp+5091,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 1U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5092,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__1__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5093,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000014U))));
        bufp->chgBit(oldp+5094,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000014U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5095,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__20__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5096,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000015U))));
        bufp->chgBit(oldp+5097,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000015U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5098,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__21__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5099,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000016U))));
        bufp->chgBit(oldp+5100,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000016U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5101,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__22__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5102,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000017U))));
        bufp->chgBit(oldp+5103,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000017U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5104,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__23__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5105,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000018U))));
        bufp->chgBit(oldp+5106,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000018U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5107,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__24__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5108,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x00000019U))));
        bufp->chgBit(oldp+5109,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x00000019U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5110,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__25__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5111,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000001aU))));
        bufp->chgBit(oldp+5112,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000001aU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5113,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__26__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5114,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000001bU))));
        bufp->chgBit(oldp+5115,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000001bU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5116,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__27__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5117,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000001cU))));
        bufp->chgBit(oldp+5118,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000001cU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5119,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__28__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5120,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000001dU))));
        bufp->chgBit(oldp+5121,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000001dU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5122,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__29__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5123,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 2U))));
        bufp->chgBit(oldp+5124,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 2U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5125,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__2__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5126,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 0x0000001eU))));
        bufp->chgBit(oldp+5127,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000001eU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5128,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__30__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5129,((vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                 >> 0x0000001fU)));
        bufp->chgBit(oldp+5130,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 0x0000001fU) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5131,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__31__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5132,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 3U))));
        bufp->chgBit(oldp+5133,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 3U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5134,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__3__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5135,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 4U))));
        bufp->chgBit(oldp+5136,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 4U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5137,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__4__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5138,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 5U))));
        bufp->chgBit(oldp+5139,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 5U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5140,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__5__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5141,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 6U))));
        bufp->chgBit(oldp+5142,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 6U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5143,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__6__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5144,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 7U))));
        bufp->chgBit(oldp+5145,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 7U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5146,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__7__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5147,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 8U))));
        bufp->chgBit(oldp+5148,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 8U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5149,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__8__KET____DOT__stat_i__q),5);
        bufp->chgBit(oldp+5150,((1U & (vlSelfRef.core__DOT__reg_status_register__DOT__enable_bus 
                                       >> 9U))));
        bufp->chgBit(oldp+5151,(((vlSelfRef.core__DOT__reg_status_register__DOT__reset_bus 
                                  >> 9U) & (IData)(vlSelfRef.core__DOT__RegWrite))));
        bufp->chgCData(oldp+5152,(vlSelfRef.core__DOT__reg_status_register__DOT____Vcellout__reg_stat_entries__BRA__9__KET____DOT__stat_i__q),5);
        bufp->chgIData(oldp+5153,(vlSelfRef.core__DOT__registers__DOT__enable_bus),32);
        bufp->chgIData(oldp+5154,(vlSelfRef.core__DOT__registers__DOT__RegData[0]),32);
        bufp->chgIData(oldp+5155,(vlSelfRef.core__DOT__registers__DOT__RegData[1]),32);
        bufp->chgIData(oldp+5156,(vlSelfRef.core__DOT__registers__DOT__RegData[2]),32);
        bufp->chgIData(oldp+5157,(vlSelfRef.core__DOT__registers__DOT__RegData[3]),32);
        bufp->chgIData(oldp+5158,(vlSelfRef.core__DOT__registers__DOT__RegData[4]),32);
        bufp->chgIData(oldp+5159,(vlSelfRef.core__DOT__registers__DOT__RegData[5]),32);
        bufp->chgIData(oldp+5160,(vlSelfRef.core__DOT__registers__DOT__RegData[6]),32);
        bufp->chgIData(oldp+5161,(vlSelfRef.core__DOT__registers__DOT__RegData[7]),32);
        bufp->chgIData(oldp+5162,(vlSelfRef.core__DOT__registers__DOT__RegData[8]),32);
        bufp->chgIData(oldp+5163,(vlSelfRef.core__DOT__registers__DOT__RegData[9]),32);
        bufp->chgIData(oldp+5164,(vlSelfRef.core__DOT__registers__DOT__RegData[10]),32);
        bufp->chgIData(oldp+5165,(vlSelfRef.core__DOT__registers__DOT__RegData[11]),32);
        bufp->chgIData(oldp+5166,(vlSelfRef.core__DOT__registers__DOT__RegData[12]),32);
        bufp->chgIData(oldp+5167,(vlSelfRef.core__DOT__registers__DOT__RegData[13]),32);
        bufp->chgIData(oldp+5168,(vlSelfRef.core__DOT__registers__DOT__RegData[14]),32);
        bufp->chgIData(oldp+5169,(vlSelfRef.core__DOT__registers__DOT__RegData[15]),32);
        bufp->chgIData(oldp+5170,(vlSelfRef.core__DOT__registers__DOT__RegData[16]),32);
        bufp->chgIData(oldp+5171,(vlSelfRef.core__DOT__registers__DOT__RegData[17]),32);
        bufp->chgIData(oldp+5172,(vlSelfRef.core__DOT__registers__DOT__RegData[18]),32);
        bufp->chgIData(oldp+5173,(vlSelfRef.core__DOT__registers__DOT__RegData[19]),32);
        bufp->chgIData(oldp+5174,(vlSelfRef.core__DOT__registers__DOT__RegData[20]),32);
        bufp->chgIData(oldp+5175,(vlSelfRef.core__DOT__registers__DOT__RegData[21]),32);
        bufp->chgIData(oldp+5176,(vlSelfRef.core__DOT__registers__DOT__RegData[22]),32);
        bufp->chgIData(oldp+5177,(vlSelfRef.core__DOT__registers__DOT__RegData[23]),32);
        bufp->chgIData(oldp+5178,(vlSelfRef.core__DOT__registers__DOT__RegData[24]),32);
        bufp->chgIData(oldp+5179,(vlSelfRef.core__DOT__registers__DOT__RegData[25]),32);
        bufp->chgIData(oldp+5180,(vlSelfRef.core__DOT__registers__DOT__RegData[26]),32);
        bufp->chgIData(oldp+5181,(vlSelfRef.core__DOT__registers__DOT__RegData[27]),32);
        bufp->chgIData(oldp+5182,(vlSelfRef.core__DOT__registers__DOT__RegData[28]),32);
        bufp->chgIData(oldp+5183,(vlSelfRef.core__DOT__registers__DOT__RegData[29]),32);
        bufp->chgIData(oldp+5184,(vlSelfRef.core__DOT__registers__DOT__RegData[30]),32);
        bufp->chgIData(oldp+5185,(vlSelfRef.core__DOT__registers__DOT__RegData[31]),32);
        bufp->chgBit(oldp+5186,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000000aU))));
        bufp->chgIData(oldp+5187,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__10__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5188,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000000bU))));
        bufp->chgIData(oldp+5189,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__11__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5190,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000000cU))));
        bufp->chgIData(oldp+5191,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__12__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5192,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000000dU))));
        bufp->chgIData(oldp+5193,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__13__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5194,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000000eU))));
        bufp->chgIData(oldp+5195,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__14__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5196,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000000fU))));
        bufp->chgIData(oldp+5197,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__15__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5198,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000010U))));
        bufp->chgIData(oldp+5199,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__16__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5200,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000011U))));
        bufp->chgIData(oldp+5201,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__17__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5202,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000012U))));
        bufp->chgIData(oldp+5203,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__18__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5204,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000013U))));
        bufp->chgIData(oldp+5205,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__19__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5206,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 1U))));
        bufp->chgIData(oldp+5207,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__1__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5208,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000014U))));
        bufp->chgIData(oldp+5209,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__20__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5210,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000015U))));
        bufp->chgIData(oldp+5211,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__21__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5212,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000016U))));
        bufp->chgIData(oldp+5213,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__22__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5214,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000017U))));
        bufp->chgIData(oldp+5215,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__23__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5216,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000018U))));
        bufp->chgIData(oldp+5217,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__24__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5218,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x00000019U))));
        bufp->chgIData(oldp+5219,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__25__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5220,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000001aU))));
        bufp->chgIData(oldp+5221,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__26__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5222,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000001bU))));
        bufp->chgIData(oldp+5223,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__27__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5224,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000001cU))));
        bufp->chgIData(oldp+5225,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__28__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5226,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000001dU))));
        bufp->chgIData(oldp+5227,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__29__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5228,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 2U))));
        bufp->chgIData(oldp+5229,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__2__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5230,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 0x0000001eU))));
        bufp->chgIData(oldp+5231,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__30__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5232,((vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                 >> 0x0000001fU)));
        bufp->chgIData(oldp+5233,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__31__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5234,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 3U))));
        bufp->chgIData(oldp+5235,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__3__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5236,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 4U))));
        bufp->chgIData(oldp+5237,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__4__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5238,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 5U))));
        bufp->chgIData(oldp+5239,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__5__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5240,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 6U))));
        bufp->chgIData(oldp+5241,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__6__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5242,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 7U))));
        bufp->chgIData(oldp+5243,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__7__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5244,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 8U))));
        bufp->chgIData(oldp+5245,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__8__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgBit(oldp+5246,((1U & (vlSelfRef.core__DOT__registers__DOT__enable_bus 
                                       >> 9U))));
        bufp->chgIData(oldp+5247,(vlSelfRef.core__DOT__registers__DOT__registers__BRA__9__KET____DOT__reg_i__DOT__q_reg),32);
        bufp->chgCData(oldp+5248,(vlSelfRef.core__DOT__reorder_buffer__DOT__wptr),4);
        bufp->chgCData(oldp+5249,(vlSelfRef.core__DOT__reorder_buffer__DOT__rptr),4);
        bufp->chgWData(oldp+5250,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [0U]),167);
        bufp->chgWData(oldp+5256,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [1U]),167);
        bufp->chgWData(oldp+5262,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [2U]),167);
        bufp->chgWData(oldp+5268,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [3U]),167);
        bufp->chgWData(oldp+5274,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [4U]),167);
        bufp->chgWData(oldp+5280,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [5U]),167);
        bufp->chgWData(oldp+5286,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [6U]),167);
        bufp->chgWData(oldp+5292,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [7U]),167);
        bufp->chgWData(oldp+5298,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [8U]),167);
        bufp->chgWData(oldp+5304,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [9U]),167);
        bufp->chgWData(oldp+5310,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [0x0000000aU]),167);
        bufp->chgWData(oldp+5316,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [0x0000000bU]),167);
        bufp->chgWData(oldp+5322,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [0x0000000cU]),167);
        bufp->chgWData(oldp+5328,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [0x0000000dU]),167);
        bufp->chgWData(oldp+5334,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [0x0000000eU]),167);
        bufp->chgWData(oldp+5340,(vlSelfRef.core__DOT__reorder_buffer__DOT__rob_data
                                  [0x0000000fU]),167);
        bufp->chgIData(oldp+5346,(vlSelfRef.core__DOT__reorder_buffer__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+5347,(vlSelfRef.core__DOT__reorder_buffer__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+5348,(((vlSelfRef.core__DOT__hold_out[3U] 
                                    << 0x00000010U) 
                                   | (vlSelfRef.core__DOT__hold_out[2U] 
                                      >> 0x00000010U))),32);
        bufp->chgBit(oldp+5349,((1U & (vlSelfRef.core__DOT__hold_out[1U] 
                                       >> 0x0000000fU))));
        bufp->chgIData(oldp+5350,(((vlSelfRef.core__DOT__hold_out[2U] 
                                    << 0x00000010U) 
                                   | (vlSelfRef.core__DOT__hold_out[1U] 
                                      >> 0x00000010U))),32);
        bufp->chgCData(oldp+5351,(vlSelfRef.core__DOT__res_sched__DOT__alu_op),4);
        bufp->chgCData(oldp+5352,(((0x33U == (0x0000007fU 
                                              & (vlSelfRef.core__DOT__hold_out[1U] 
                                                 >> 0x00000010U)))
                                    ? 2U : ((0x00004000U 
                                             & vlSelfRef.core__DOT__hold_out[1U])
                                             ? (7U 
                                                & (vlSelfRef.core__DOT__hold_out[1U] 
                                                   >> 0x0000001cU))
                                             : 2U))),3);
        bufp->chgIData(oldp+5353,(vlSelfRef.core__DOT__res_sched__DOT__V_j),32);
        bufp->chgCData(oldp+5354,(vlSelfRef.core__DOT__res_sched__DOT__Q_temp_j),4);
        bufp->chgCData(oldp+5355,(vlSelfRef.core__DOT__res_sched__DOT__Q_temp_k),4);
        bufp->chgBit(oldp+5356,((1U & (vlSelfRef.core__DOT__hold_out[1U] 
                                       >> 0x0000000eU))));
        bufp->chgBit(oldp+5357,((1U & (vlSelfRef.core__DOT__hold_out[1U] 
                                       >> 0x0000000dU))));
        bufp->chgBit(oldp+5358,(((0x33U != (0x0000007fU 
                                            & (vlSelfRef.core__DOT__hold_out[1U] 
                                               >> 0x00000010U))) 
                                 && ((1U & (~ (vlSelfRef.core__DOT__hold_out[1U] 
                                               >> 0x0000000eU))) 
                                     && ((0x13U != 
                                          (0x0000007fU 
                                           & (vlSelfRef.core__DOT__hold_out[1U] 
                                              >> 0x00000010U))) 
                                         && ((1U & 
                                              (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_h221b8606__0))) 
                                             && ((3U 
                                                  == 
                                                  (0x0000007fU 
                                                   & (vlSelfRef.core__DOT__hold_out[1U] 
                                                      >> 0x00000010U))) 
                                                 || ((1U 
                                                      & (~ (IData)(vlSelfRef.core__DOT__res_sched__DOT____VdfgExtracted_hae399222__0))) 
                                                     && (0x23U 
                                                         == 
                                                         (0x0000007fU 
                                                          & (vlSelfRef.core__DOT__hold_out[1U] 
                                                             >> 0x00000010U)))))))))));
        bufp->chgBit(oldp+5359,(vlSelfRef.core__DOT__res_sched__DOT__illegal));
        bufp->chgBit(oldp+5360,(vlSelfRef.core__DOT__res_sched__DOT__csr_valid_read_temp));
        bufp->chgBit(oldp+5361,((1U & vlSelfRef.core__DOT__hold_out[0U])));
        bufp->chgCData(oldp+5362,((0x000000ffU & (vlSelfRef.core__DOT__hold_out[0U] 
                                                  >> 1U))),8);
        bufp->chgCData(oldp+5363,(vlSelfRef.core__DOT__res_sched__DOT__issue_csr_write_select),3);
        bufp->chgCData(oldp+5364,((0x0000007fU & (vlSelfRef.core__DOT__hold_out[1U] 
                                                  >> 0x00000010U))),7);
        bufp->chgBit(oldp+5365,(((0U == (IData)(vlSelfRef.core__DOT__rs_dest)) 
                                 & (IData)(vlSelfRef.core__DOT__reservation_stations__DOT____VdfgRegularize_h1542825a_0_1))));
        bufp->chgBit(oldp+5366,(((1U == (IData)(vlSelfRef.core__DOT__rs_dest)) 
                                 & (IData)(vlSelfRef.core__DOT__reservation_stations__DOT____VdfgRegularize_h1542825a_0_1))));
        bufp->chgBit(oldp+5367,(((2U == (IData)(vlSelfRef.core__DOT__rs_dest)) 
                                 & (IData)(vlSelfRef.core__DOT__reservation_stations__DOT____VdfgRegularize_h1542825a_0_1))));
        bufp->chgBit(oldp+5368,(((3U == (IData)(vlSelfRef.core__DOT__rs_dest)) 
                                 & (IData)(vlSelfRef.core__DOT__reservation_stations__DOT____VdfgRegularize_h1542825a_0_1))));
        bufp->chgBit(oldp+5369,((1U & (vlSelfRef.core__DOT__reservation_stations__DOT__rs0__DOT__q_reg[0U] 
                                       >> 1U))));
        bufp->chgWData(oldp+5370,(vlSelfRef.core__DOT__reservation_stations__DOT__rs0__DOT__q_reg),85);
        bufp->chgBit(oldp+5373,((1U & (vlSelfRef.core__DOT__reservation_stations__DOT__rs1__DOT__q_reg[0U] 
                                       >> 1U))));
        bufp->chgWData(oldp+5374,(vlSelfRef.core__DOT__reservation_stations__DOT__rs1__DOT__q_reg),85);
        bufp->chgBit(oldp+5377,((1U & (vlSelfRef.core__DOT__reservation_stations__DOT__rs2__DOT__q_reg[0U] 
                                       >> 1U))));
        bufp->chgWData(oldp+5378,(vlSelfRef.core__DOT__reservation_stations__DOT__rs2__DOT__q_reg),85);
        bufp->chgBit(oldp+5381,((1U & (vlSelfRef.core__DOT__reservation_stations__DOT__rs3__DOT__q_reg[0U] 
                                       >> 1U))));
        bufp->chgWData(oldp+5382,(vlSelfRef.core__DOT__reservation_stations__DOT__rs3__DOT__q_reg),85);
        bufp->chgIData(oldp+5385,(vlSelfRef.core__DOT__fu_bus[8U]),32);
        bufp->chgIData(oldp+5386,(vlSelfRef.core__DOT__fu_bus[9U]),32);
        bufp->chgCData(oldp+5387,((0x0000000fU & (vlSelfRef.core__DOT__ROB_entry_bus 
                                                  >> 0x00000010U))),4);
        bufp->chgCData(oldp+5388,((0x0000000fU & (vlSelfRef.core__DOT__ALU_op 
                                                  >> 0x00000010U))),4);
        bufp->chgBit(oldp+5389,((1U & ((IData)(vlSelfRef.core__DOT__valid_in_bus) 
                                       >> 4U))));
        bufp->chgBit(oldp+5390,((1U & ((IData)(vlSelfRef.core__DOT__yumi_bus) 
                                       >> 5U))));
        bufp->chgBit(oldp+5391,((3U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))));
        bufp->chgBit(oldp+5392,((0U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))));
        bufp->chgIData(oldp+5393,(vlSelfRef.core__DOT__shift_fu__DOT__shift_dp__DOT__A),32);
        bufp->chgBit(oldp+5394,(vlSelfRef.core__DOT__shift_fu__DOT__loadregs));
        bufp->chgBit(oldp+5395,((2U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))));
        bufp->chgCData(oldp+5396,(vlSelfRef.core__DOT__shift_fu__DOT__curr_rob),4);
        bufp->chgCData(oldp+5397,(vlSelfRef.core__DOT__shift_fu__DOT__ALUop_reg),4);
        bufp->chgIData(oldp+5398,(vlSelfRef.core__DOT__shift_fu__DOT__P),32);
        bufp->chgCData(oldp+5399,(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps),2);
        bufp->chgCData(oldp+5400,(((0U == (IData)(vlSelfRef.core__DOT__shift_fu__DOT__shift_cu__DOT__ps))
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
    bufp->chgIData(oldp+5401,(vlSelfRef.mem_wr_addr),32);
    bufp->chgIData(oldp+5402,(vlSelfRef.mem_wr_data),32);
    bufp->chgBit(oldp+5403,(vlSelfRef.mem_wr_en));
    bufp->chgBit(oldp+5404,(vlSelfRef.valid_commit_out));
    bufp->chgBit(oldp+5405,(vlSelfRef.RegWrite_out));
    bufp->chgCData(oldp+5406,(vlSelfRef.rd_out),5);
    bufp->chgIData(oldp+5407,(vlSelfRef.head_pc),32);
    bufp->chgIData(oldp+5408,(vlSelfRef.WriteData_out),32);
    bufp->chgIData(oldp+5409,(vlSelfRef.ins_out),32);
    bufp->chgIData(oldp+5410,(vlSelfRef.csr_WriteData_out),32);
    bufp->chgIData(oldp+5411,(vlSelfRef.mem_addr_out),32);
    bufp->chgBit(oldp+5412,(vlSelfRef.csr_write_out));
    bufp->chgCData(oldp+5413,(vlSelfRef.csr_write_select_out),3);
    bufp->chgCData(oldp+5414,(vlSelfRef.priv_out),2);
    bufp->chgBit(oldp+5415,(vlSelfRef.load_out));
    bufp->chgBit(oldp+5416,(vlSelfRef.store_out));
    bufp->chgBit(oldp+5417,(vlSelfRef.clk));
    bufp->chgBit(oldp+5418,(vlSelfRef.reset));
    bufp->chgIData(oldp+5419,(vlSelfRef.core__DOT__mepc_WriteData),32);
    bufp->chgIData(oldp+5420,(vlSelfRef.core__DOT__csr_WriteData),32);
    bufp->chgIData(oldp+5421,(vlSelfRef.core__DOT__csr_ReadData),32);
    bufp->chgCData(oldp+5422,(vlSelfRef.core__DOT__special),2);
    bufp->chgIData(oldp+5423,(vlSelfRef.core__DOT__mtvec_ReadData),32);
    bufp->chgIData(oldp+5424,(vlSelfRef.core__DOT__mepc_ReadData),32);
    bufp->chgIData(oldp+5425,(((IData)(vlSelfRef.reset)
                                ? 0U : ((IData)(vlSelfRef.core__DOT__mispredicted)
                                         ? vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack
                                        [(0x0000000fU 
                                          & ((IData)(vlSelfRef.core__DOT__commit_unit__DOT__commit_ras_pointer) 
                                             - (IData)(1U)))]
                                         : vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__ras_stack
                                        [vlSelfRef.core__DOT__fetch_stage__DOT__ret_addr_s__DOT__sp]))),32);
    bufp->chgBit(oldp+5426,(((~ (((IData)(vlSelfRef.rd_out) 
                                  == (0x0000001fU & 
                                      (vlSelfRef.core__DOT__hold_out[1U] 
                                       >> 0x00000017U))) 
                                 & (IData)(vlSelfRef.core__DOT__res_sched__DOT__issue_writes_temp))) 
                             & ((0x0000000fU & (vlSelfRef.core__DOT__reg_status_register__DOT__reg_status_table
                                                [vlSelfRef.rd_out] 
                                                >> 1U)) 
                                == (IData)(vlSelfRef.core__DOT__commit_unit__DOT__commit_ROB)))));
}
