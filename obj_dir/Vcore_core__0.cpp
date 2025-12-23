// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore_core___ico_sequent__TOP__core__0(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ico_sequent__TOP__core__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.curr_priv = vlSymsp->TOP__core__csrs.curr_priv;
    vlSelfRef.__Vcellout__adder_fu_0__valid_out = vlSymsp->TOP__core__adder_fu_0.valid_out;
    vlSelfRef.__Vcellout__adder_fu_1__valid_out = vlSymsp->TOP__core__adder_fu_1.valid_out;
    vlSelfRef.rs2 = vlSymsp->TOP__core__ins_hold.rs2;
    VL_ASSIGN_W(112, vlSelfRef.pipe_out, vlSymsp->TOP__core__fetch_issue_reg.q);
    vlSelfRef.__Vcellout__adder_fu_0__ready = vlSymsp->TOP__core__adder_fu_0.ready;
    vlSelfRef.__Vcellout__adder_fu_1__ready = vlSymsp->TOP__core__adder_fu_1.ready;
    vlSymsp->TOP__core__fetch_stage__program_counter__inst.mem_wr_addr 
        = vlSelfRef.mem_wr_addr;
    vlSymsp->TOP__core__fetch_stage__program_counter__inst.mem_wr_data 
        = vlSelfRef.mem_wr_data;
    vlSymsp->TOP__core__fetch_stage__program_counter__inst.mem_wr_en 
        = vlSelfRef.mem_wr_en;
    vlSymsp->TOP__core__fetch_issue_reg.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__ins_hold.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__csrs.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__csr_register_status.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__load_store_queue.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__indirect_jump_queue.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__adder_fu_0.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__adder_fu_1.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__reorder_buffer.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__res_sched.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__data_memory.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__mult_fu.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__div_fu.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__shift_fu.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__reservation_stations.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__registers.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__reg_status_register.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__fetch_stage.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__ins_hold.reset = vlSelfRef.reset;
    vlSymsp->TOP__core__csrs.reset = vlSelfRef.reset;
    vlSymsp->TOP__core__registers.reset = vlSelfRef.reset;
    vlSymsp->TOP__core__fetch_stage.reset = vlSelfRef.reset;
    vlSelfRef.__Vcellout__mult_fu__valid_out = vlSymsp->TOP__core__mult_fu.valid_out;
    vlSelfRef.__Vcellout__mult_fu__ready = vlSymsp->TOP__core__mult_fu.ready;
    vlSelfRef.mepc_ReadData = vlSymsp->TOP__core__csrs.mepc_ReadData;
    vlSelfRef.mtvec_ReadData = vlSymsp->TOP__core__csrs.mtvec_ReadData;
    vlSelfRef.pc_pipe_stall = vlSymsp->TOP__core__ins_hold.pc_pipe_stall;
    vlSelfRef.head_load = vlSymsp->TOP__core__load_store_queue.head_load;
    VL_ASSIGN_W(79, vlSelfRef.lsq_out, vlSymsp->TOP__core__load_store_queue.dout);
    vlSelfRef.lsq_full = vlSymsp->TOP__core__load_store_queue.full;
    vlSelfRef.lsq_empty = vlSymsp->TOP__core__load_store_queue.empty;
    vlSelfRef.head_ready = vlSymsp->TOP__core__load_store_queue.head_ready;
    VL_ASSIGNSEL_II(6, 2, 0U, vlSelfRef.valid_out_bus, 
                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__adder_fu_1__valid_out), (IData)(vlSelfRef.__Vcellout__adder_fu_0__valid_out)));
    vlSymsp->TOP__core__registers.rs2 = vlSelfRef.rs2;
    vlSymsp->TOP__core__reg_status_register.rs2 = vlSelfRef.rs2;
    VL_ASSIGN_W(112, vlSymsp->TOP__core__ins_hold.pipe_out, vlSelfRef.pipe_out);
    VL_ASSIGNSEL_II(5, 2, 0U, vlSelfRef.ready_bus, 
                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__Vcellout__adder_fu_1__ready), (IData)(vlSelfRef.__Vcellout__adder_fu_0__ready)));
    VL_ASSIGNBIT_II(2U, vlSelfRef.valid_out_bus, vlSelfRef.__Vcellout__mult_fu__valid_out);
    VL_ASSIGNBIT_II(2U, vlSelfRef.ready_bus, vlSelfRef.__Vcellout__mult_fu__ready);
    vlSymsp->TOP__core__fetch_stage.mepc_ReadData = vlSelfRef.mepc_ReadData;
    vlSymsp->TOP__core__fetch_stage.mtvec_ReadData 
        = vlSelfRef.mtvec_ReadData;
    vlSymsp->TOP__core__fetch_issue_reg.stall = vlSelfRef.pc_pipe_stall;
    vlSymsp->TOP__core__fetch_stage.stall = vlSelfRef.pc_pipe_stall;
    vlSymsp->TOP__core__data_memory.head_load = vlSelfRef.head_load;
    VL_ASSIGN_W(79, vlSymsp->TOP__core__data_memory.mem_in, vlSelfRef.lsq_out);
    vlSymsp->TOP__core__data_memory.empty = vlSelfRef.lsq_empty;
    vlSymsp->TOP__core__data_memory.head_ready = vlSelfRef.head_ready;
}

void Vcore_core___ico_sequent__TOP__core__1(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ico_sequent__TOP__core__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.jalrq_full = vlSymsp->TOP__core__indirect_jump_queue.full;
    vlSelfRef.jalr_actual_address = vlSymsp->TOP__core__indirect_jump_queue.jalr_actual_address;
    vlSelfRef.jalr_taken_address = vlSymsp->TOP__core__indirect_jump_queue.jalr_taken_address;
    vlSelfRef.jalrq_ready = vlSymsp->TOP__core__indirect_jump_queue.head_ready;
    vlSelfRef.rob_full = vlSymsp->TOP__core__reorder_buffer.full;
    vlSelfRef.empty = vlSymsp->TOP__core__reorder_buffer.empty;
    VL_ASSIGN_W(163, vlSelfRef.head, vlSymsp->TOP__core__reorder_buffer.head);
    vlSelfRef.ROB_entry = vlSymsp->TOP__core__reorder_buffer.ROB_entry;
    vlSelfRef.ROB_head_store = vlSymsp->TOP__core__reorder_buffer.ROB_head_store;
    vlSelfRef.rob_head_ready = vlSymsp->TOP__core__reorder_buffer.head_ready;
    vlSelfRef.out_load = vlSymsp->TOP__core__data_memory.mem_read_out;
    vlSelfRef.__Vcellout__data_memory__valid_out = vlSymsp->TOP__core__data_memory.valid_out;
    vlSelfRef.out_0 = vlSymsp->TOP__core__adder_fu_0.out;
    vlSelfRef.out_1 = vlSymsp->TOP__core__adder_fu_1.out;
    vlSelfRef.__Vcellout__shift_fu__valid_out = vlSymsp->TOP__core__shift_fu.valid_out;
    vlSelfRef.__Vcellout__shift_fu__ready = vlSymsp->TOP__core__shift_fu.ready;
    vlSelfRef.shift_out = vlSymsp->TOP__core__shift_fu.out;
    vlSelfRef.__Vcellout__div_fu__valid_out = vlSymsp->TOP__core__div_fu.valid_out;
    vlSelfRef.__Vcellout__div_fu__ready = vlSymsp->TOP__core__div_fu.ready;
    vlSelfRef.out_3 = vlSymsp->TOP__core__div_fu.out;
    vlSelfRef.out_2 = vlSymsp->TOP__core__mult_fu.out;
    VL_ASSIGN_W(77, vlSelfRef.rs0_data, vlSymsp->TOP__core__reservation_stations.rs0_data);
    VL_ASSIGN_W(77, vlSelfRef.rs1_data, vlSymsp->TOP__core__reservation_stations.rs1_data);
    VL_ASSIGN_W(77, vlSelfRef.rs2_data, vlSymsp->TOP__core__reservation_stations.rs2_data);
    VL_ASSIGN_W(77, vlSelfRef.rs3_data, vlSymsp->TOP__core__reservation_stations.rs3_data);
    vlSelfRef.busy_bus = vlSymsp->TOP__core__reservation_stations.busy_bus;
    VL_ASSIGN_W(112, vlSelfRef.hold_out, vlSymsp->TOP__core__ins_hold.hold_out);
    vlSelfRef.rs1 = vlSymsp->TOP__core__ins_hold.rs1;
    vlSymsp->TOP__core__generate_new_pc.jalr_actual_address 
        = vlSelfRef.jalr_actual_address;
    vlSymsp->TOP__core__generate_new_pc.jalr_taken_address 
        = vlSelfRef.jalr_taken_address;
    vlSymsp->TOP__core__commit_unit.jalrq_ready = vlSelfRef.jalrq_ready;
    vlSymsp->TOP__core__commit_unit.empty = vlSelfRef.empty;
    VL_ASSIGN_W(163, vlSymsp->TOP__core__commit_unit.head, vlSelfRef.head);
    vlSymsp->TOP__core__csr_register_status.issue_ROB 
        = vlSelfRef.ROB_entry;
    vlSymsp->TOP__core__reg_status_register.issue_ROB 
        = vlSelfRef.ROB_entry;
    vlSymsp->TOP__core__res_sched.ROB_entry = vlSelfRef.ROB_entry;
    vlSymsp->TOP__core__data_memory.ROB_head_store 
        = vlSelfRef.ROB_head_store;
    vlSymsp->TOP__core__commit_unit.rob_head_ready 
        = vlSelfRef.rob_head_ready;
    vlSymsp->TOP__core__cdb.mem_out = vlSelfRef.out_load;
    VL_ASSIGNBIT_II(4U, vlSelfRef.valid_out_bus, vlSelfRef.__Vcellout__data_memory__valid_out);
    vlSymsp->TOP__core__cdb.adder_0_out = vlSelfRef.out_0;
    vlSymsp->TOP__core__cdb.adder_1_out = vlSelfRef.out_1;
    VL_ASSIGNBIT_II(5U, vlSelfRef.valid_out_bus, vlSelfRef.__Vcellout__shift_fu__valid_out);
    VL_ASSIGNBIT_II(4U, vlSelfRef.ready_bus, vlSelfRef.__Vcellout__shift_fu__ready);
    vlSymsp->TOP__core__cdb.shift_out = vlSelfRef.shift_out;
    VL_ASSIGNBIT_II(3U, vlSelfRef.valid_out_bus, vlSelfRef.__Vcellout__div_fu__valid_out);
    VL_ASSIGNBIT_II(3U, vlSelfRef.ready_bus, vlSelfRef.__Vcellout__div_fu__ready);
    vlSymsp->TOP__core__cdb.div_out = vlSelfRef.out_3;
    vlSymsp->TOP__core__cdb.mult_out = vlSelfRef.out_2;
    VL_ASSIGN_W(77, vlSymsp->TOP__core__fu_sched.rs0_data, vlSelfRef.rs0_data);
    VL_ASSIGN_W(77, vlSymsp->TOP__core__fu_sched.rs1_data, vlSelfRef.rs1_data);
    VL_ASSIGN_W(77, vlSymsp->TOP__core__fu_sched.rs2_data, vlSelfRef.rs2_data);
    VL_ASSIGN_W(77, vlSymsp->TOP__core__fu_sched.rs3_data, vlSelfRef.rs3_data);
    vlSymsp->TOP__core__res_sched.busy_bus = vlSelfRef.busy_bus;
    vlSelfRef.stall = ((((1U == (IData)(vlSelfRef.busy_bus)) 
                         | (IData)(vlSelfRef.rob_full)) 
                        | (IData)(vlSelfRef.lsq_full)) 
                       | (IData)(vlSelfRef.jalrq_full));
    VL_ASSIGN_W(112, vlSymsp->TOP__core__res_sched.hold_out, vlSelfRef.hold_out);
    vlSymsp->TOP__core__registers.rs1 = vlSelfRef.rs1;
    vlSymsp->TOP__core__reg_status_register.rs1 = vlSelfRef.rs1;
    vlSymsp->TOP__core__cdb.valid_out_bus = vlSelfRef.valid_out_bus;
    vlSymsp->TOP__core__fu_sched.ready_bus = vlSelfRef.ready_bus;
    vlSymsp->TOP__core__csr_register_status.stall = vlSelfRef.stall;
    vlSymsp->TOP__core__ins_hold.stall = vlSelfRef.stall;
    vlSymsp->TOP__core__reservation_stations.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register.stall = vlSelfRef.stall;
    vlSymsp->TOP__core__res_sched.stall = vlSelfRef.stall;
}

void Vcore_core___ico_sequent__TOP__core__2(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ico_sequent__TOP__core__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs1reg_busy = vlSymsp->TOP__core__reg_status_register.rs1reg_busy;
    vlSelfRef.rs2reg_busy = vlSymsp->TOP__core__reg_status_register.rs2reg_busy;
    vlSelfRef.Q_j = vlSymsp->TOP__core__reg_status_register.Q_j;
    vlSelfRef.Q_k = vlSymsp->TOP__core__reg_status_register.Q_k;
    vlSelfRef.rd_en = vlSymsp->TOP__core__data_memory.rd_en;
    vlSelfRef.rd_en_rob = vlSymsp->TOP__core__data_memory.rd_en_rob;
    vlSelfRef.commit_jalr = vlSymsp->TOP__core__commit_unit.commit_jalr;
    vlSelfRef.rs_dest = vlSymsp->TOP__core__res_sched.rs_dest;
    vlSelfRef.rs1reg_data = vlSymsp->TOP__core__registers.rs1_data;
    vlSelfRef.rs2reg_data = vlSymsp->TOP__core__registers.rs2_data;
    vlSelfRef.yumi_bus = vlSymsp->TOP__core__cdb.yummi_in_bus;
    vlSelfRef.CDB_out = vlSymsp->TOP__core__cdb.new_CDB;
    vlSelfRef.load = vlSymsp->TOP__core__fu_sched.load;
    vlSelfRef.ROB_entry_bus = vlSymsp->TOP__core__fu_sched.ROB_entry_bus;
    vlSelfRef.consumed_bus = vlSymsp->TOP__core__fu_sched.consumed_bus;
    vlSelfRef.valid_in_bus = vlSymsp->TOP__core__fu_sched.valid_in_bus;
    vlSelfRef.branch_type_bus = vlSymsp->TOP__core__fu_sched.branch_type_bus;
    vlSelfRef.ALU_op = vlSymsp->TOP__core__fu_sched.ALU_op;
    VL_ASSIGN_W(320, vlSelfRef.fu_bus, vlSymsp->TOP__core__fu_sched.fu_bus);
    vlSymsp->TOP__core__res_sched.rs1reg_busy = vlSelfRef.rs1reg_busy;
    vlSymsp->TOP__core__res_sched.rs2reg_busy = vlSelfRef.rs2reg_busy;
    vlSymsp->TOP__core__res_sched.Q_j = vlSelfRef.Q_j;
    vlSymsp->TOP__core__reorder_buffer.Q_j = vlSelfRef.Q_j;
    vlSymsp->TOP__core__res_sched.Q_k = vlSelfRef.Q_k;
    vlSymsp->TOP__core__reorder_buffer.Q_k = vlSelfRef.Q_k;
    vlSymsp->TOP__core__load_store_queue.rd_en = vlSelfRef.rd_en;
    vlSymsp->TOP__core__commit_unit.rd_en_rob = vlSelfRef.rd_en_rob;
    vlSymsp->TOP__core__generate_new_pc.commit_jalr 
        = vlSelfRef.commit_jalr;
    vlSymsp->TOP__core__reservation_stations.rs_dest 
        = vlSelfRef.rs_dest;
    vlSymsp->TOP__core__res_sched.rs1_data = vlSelfRef.rs1reg_data;
    vlSymsp->TOP__core__res_sched.rs2_data = vlSelfRef.rs2reg_data;
    vlSelfRef.__Vcellinp__adder_fu_0__yumi_in = (1U 
                                                 & VL_BITSEL_IIII(6, (IData)(vlSelfRef.yumi_bus), 0U));
    vlSelfRef.__Vcellinp__adder_fu_1__yumi_in = (1U 
                                                 & VL_BITSEL_IIII(6, (IData)(vlSelfRef.yumi_bus), 1U));
    vlSelfRef.__Vcellinp__data_memory__yummy_in = (1U 
                                                   & VL_BITSEL_IIII(6, (IData)(vlSelfRef.yumi_bus), 4U));
    vlSelfRef.__Vcellinp__mult_fu__yumi_in = (1U & 
                                              VL_BITSEL_IIII(6, (IData)(vlSelfRef.yumi_bus), 2U));
    vlSelfRef.__Vcellinp__shift_fu__yumi_in = (1U & 
                                               VL_BITSEL_IIII(6, (IData)(vlSelfRef.yumi_bus), 5U));
    vlSelfRef.__Vcellinp__div_fu__yumi_in = (1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.yumi_bus), 3U));
    vlSymsp->TOP__core__load_store_queue.CDB_in = vlSelfRef.CDB_out;
    vlSymsp->TOP__core__indirect_jump_queue.CDB_in 
        = vlSelfRef.CDB_out;
    vlSymsp->TOP__core__reorder_buffer.CDB_in = vlSelfRef.CDB_out;
    vlSymsp->TOP__core__reservation_stations.CDB_in 
        = vlSelfRef.CDB_out;
    vlSymsp->TOP__core__res_sched.new_CDB = vlSelfRef.CDB_out;
    vlSelfRef.__Vcellinp__adder_fu_0__load = (1U & 
                                              VL_BITSEL_IIII(2, (IData)(vlSelfRef.load), 0U));
    vlSelfRef.__Vcellinp__adder_fu_1__load = (1U & 
                                              VL_BITSEL_IIII(2, (IData)(vlSelfRef.load), 1U));
    vlSelfRef.__Vcellinp__adder_fu_0__rs_rob_entry 
        = (0x0000000fU & VL_SEL_IIII(20, vlSelfRef.ROB_entry_bus, 0U, 4));
    vlSelfRef.__Vcellinp__adder_fu_1__rs_rob_entry 
        = (0x0000000fU & VL_SEL_IIII(20, vlSelfRef.ROB_entry_bus, 4U, 4));
    vlSelfRef.__Vcellinp__mult_fu__rs_rob_entry = (0x0000000fU 
                                                   & VL_SEL_IIII(20, vlSelfRef.ROB_entry_bus, 8U, 4));
    vlSelfRef.__Vcellinp__div_fu__rs_rob_entry = (0x0000000fU 
                                                  & VL_SEL_IIII(20, vlSelfRef.ROB_entry_bus, 0x0cU, 4));
    vlSelfRef.__Vcellinp__shift_fu__rs_rob_entry = 
        (0x0000000fU & VL_SEL_IIII(20, vlSelfRef.ROB_entry_bus, 0x10U, 4));
    vlSymsp->TOP__core__reservation_stations.consumed_bus 
        = vlSelfRef.consumed_bus;
    vlSelfRef.__Vcellinp__adder_fu_0__valid_in = (1U 
                                                  & VL_BITSEL_IIII(5, (IData)(vlSelfRef.valid_in_bus), 0U));
    vlSelfRef.__Vcellinp__adder_fu_1__valid_in = (1U 
                                                  & VL_BITSEL_IIII(5, (IData)(vlSelfRef.valid_in_bus), 1U));
    vlSelfRef.__Vcellinp__mult_fu__valid_in = (1U & 
                                               VL_BITSEL_IIII(5, (IData)(vlSelfRef.valid_in_bus), 2U));
    vlSelfRef.__Vcellinp__shift_fu__valid_in = (1U 
                                                & VL_BITSEL_IIII(5, (IData)(vlSelfRef.valid_in_bus), 4U));
    vlSelfRef.__Vcellinp__div_fu__valid_in = (1U & 
                                              VL_BITSEL_IIII(5, (IData)(vlSelfRef.valid_in_bus), 3U));
    vlSelfRef.__Vcellinp__adder_fu_0__branch_type = 
        (7U & VL_SEL_IIII(6, (IData)(vlSelfRef.branch_type_bus), 0U, 3));
    vlSelfRef.__Vcellinp__adder_fu_1__branch_type = 
        (7U & VL_SEL_IIII(6, (IData)(vlSelfRef.branch_type_bus), 3U, 3));
    vlSelfRef.__Vcellinp__mult_fu__ALUop = (0x0000000fU 
                                            & VL_SEL_IIII(20, vlSelfRef.ALU_op, 8U, 4));
    vlSelfRef.__Vcellinp__shift_fu__ALUop = (0x0000000fU 
                                             & VL_SEL_IIII(20, vlSelfRef.ALU_op, 0x10U, 4));
    vlSelfRef.__Vcellinp__div_fu__ALUop = (0x0000000fU 
                                           & VL_SEL_IIII(20, vlSelfRef.ALU_op, 0x0cU, 4));
    vlSelfRef.__Vcellinp__adder_fu_0__ALUop = (0x0000000fU 
                                               & VL_SEL_IIII(20, vlSelfRef.ALU_op, 0U, 4));
    vlSelfRef.__Vcellinp__adder_fu_1__ALUop = (0x0000000fU 
                                               & VL_SEL_IIII(20, vlSelfRef.ALU_op, 4U, 4));
    vlSelfRef.__Vcellinp__mult_fu__B = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x00a0U, 32);
    vlSelfRef.__Vcellinp__mult_fu__A = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x0080U, 32);
    vlSelfRef.__Vcellinp__shift_fu__B = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x0120U, 32);
    vlSelfRef.__Vcellinp__shift_fu__A = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x0100U, 32);
    vlSelfRef.__Vcellinp__div_fu__divisor = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x00e0U, 32);
    vlSelfRef.__Vcellinp__div_fu__dividend = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x00c0U, 32);
    vlSelfRef.__Vcellinp__adder_fu_0__rs1 = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0U, 32);
    vlSelfRef.__Vcellinp__adder_fu_1__rs1 = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x0040U, 32);
    vlSelfRef.__Vcellinp__adder_fu_0__rs2 = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x0020U, 32);
    vlSelfRef.__Vcellinp__adder_fu_1__rs2 = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x0060U, 32);
    vlSymsp->TOP__core__adder_fu_0.yumi_in = vlSelfRef.__Vcellinp__adder_fu_0__yumi_in;
    vlSymsp->TOP__core__adder_fu_1.yumi_in = vlSelfRef.__Vcellinp__adder_fu_1__yumi_in;
    vlSymsp->TOP__core__data_memory.yummy_in = vlSelfRef.__Vcellinp__data_memory__yummy_in;
    vlSymsp->TOP__core__mult_fu.yumi_in = vlSelfRef.__Vcellinp__mult_fu__yumi_in;
    vlSymsp->TOP__core__shift_fu.yumi_in = vlSelfRef.__Vcellinp__shift_fu__yumi_in;
    vlSymsp->TOP__core__div_fu.yumi_in = vlSelfRef.__Vcellinp__div_fu__yumi_in;
    vlSymsp->TOP__core__adder_fu_0.load = vlSelfRef.__Vcellinp__adder_fu_0__load;
    vlSymsp->TOP__core__adder_fu_1.load = vlSelfRef.__Vcellinp__adder_fu_1__load;
    vlSymsp->TOP__core__adder_fu_0.rs_rob_entry = vlSelfRef.__Vcellinp__adder_fu_0__rs_rob_entry;
    vlSymsp->TOP__core__adder_fu_1.rs_rob_entry = vlSelfRef.__Vcellinp__adder_fu_1__rs_rob_entry;
    vlSymsp->TOP__core__mult_fu.rs_rob_entry = vlSelfRef.__Vcellinp__mult_fu__rs_rob_entry;
    vlSymsp->TOP__core__div_fu.rs_rob_entry = vlSelfRef.__Vcellinp__div_fu__rs_rob_entry;
    vlSymsp->TOP__core__shift_fu.rs_rob_entry = vlSelfRef.__Vcellinp__shift_fu__rs_rob_entry;
    vlSymsp->TOP__core__adder_fu_0.valid_in = vlSelfRef.__Vcellinp__adder_fu_0__valid_in;
    vlSymsp->TOP__core__adder_fu_1.valid_in = vlSelfRef.__Vcellinp__adder_fu_1__valid_in;
    vlSymsp->TOP__core__mult_fu.valid_in = vlSelfRef.__Vcellinp__mult_fu__valid_in;
    vlSymsp->TOP__core__shift_fu.valid_in = vlSelfRef.__Vcellinp__shift_fu__valid_in;
    vlSymsp->TOP__core__div_fu.valid_in = vlSelfRef.__Vcellinp__div_fu__valid_in;
    vlSymsp->TOP__core__adder_fu_0.branch_type = vlSelfRef.__Vcellinp__adder_fu_0__branch_type;
    vlSymsp->TOP__core__adder_fu_1.branch_type = vlSelfRef.__Vcellinp__adder_fu_1__branch_type;
    vlSymsp->TOP__core__mult_fu.ALUop = vlSelfRef.__Vcellinp__mult_fu__ALUop;
    vlSymsp->TOP__core__shift_fu.ALUop = vlSelfRef.__Vcellinp__shift_fu__ALUop;
    vlSymsp->TOP__core__div_fu.ALUop = vlSelfRef.__Vcellinp__div_fu__ALUop;
    vlSymsp->TOP__core__adder_fu_0.ALUop = vlSelfRef.__Vcellinp__adder_fu_0__ALUop;
    vlSymsp->TOP__core__adder_fu_1.ALUop = vlSelfRef.__Vcellinp__adder_fu_1__ALUop;
    vlSymsp->TOP__core__mult_fu.B = vlSelfRef.__Vcellinp__mult_fu__B;
    vlSymsp->TOP__core__mult_fu.A = vlSelfRef.__Vcellinp__mult_fu__A;
    vlSymsp->TOP__core__shift_fu.B = vlSelfRef.__Vcellinp__shift_fu__B;
    vlSymsp->TOP__core__shift_fu.A = vlSelfRef.__Vcellinp__shift_fu__A;
    vlSymsp->TOP__core__div_fu.divisor = vlSelfRef.__Vcellinp__div_fu__divisor;
    vlSymsp->TOP__core__div_fu.dividend = vlSelfRef.__Vcellinp__div_fu__dividend;
    vlSymsp->TOP__core__adder_fu_0.rs1 = vlSelfRef.__Vcellinp__adder_fu_0__rs1;
    vlSymsp->TOP__core__adder_fu_1.rs1 = vlSelfRef.__Vcellinp__adder_fu_1__rs1;
    vlSymsp->TOP__core__adder_fu_0.rs2 = vlSelfRef.__Vcellinp__adder_fu_0__rs2;
    vlSymsp->TOP__core__adder_fu_1.rs2 = vlSelfRef.__Vcellinp__adder_fu_1__rs2;
}

void Vcore_core___ico_sequent__TOP__core__3(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ico_sequent__TOP__core__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs1rob_data = vlSymsp->TOP__core__reorder_buffer.rs1rob_data;
    vlSelfRef.rs1rob_ready = vlSymsp->TOP__core__reorder_buffer.rs1rob_ready;
    vlSelfRef.rs2rob_data = vlSymsp->TOP__core__reorder_buffer.rs2rob_data;
    vlSelfRef.rs2rob_ready = vlSymsp->TOP__core__reorder_buffer.rs2rob_ready;
    vlSymsp->TOP__core__res_sched.rs1rob_data = vlSelfRef.rs1rob_data;
    vlSymsp->TOP__core__res_sched.rs1rob_ready = vlSelfRef.rs1rob_ready;
    vlSymsp->TOP__core__res_sched.rs2rob_data = vlSelfRef.rs2rob_data;
    vlSymsp->TOP__core__res_sched.rs2rob_ready = vlSelfRef.rs2rob_ready;
}

void Vcore_core___ico_sequent__TOP__core__4(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ico_sequent__TOP__core__4\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(81, vlSelfRef.jalrq_input, vlSymsp->TOP__core__res_sched.jalrq_input);
    VL_ASSIGN_W(79, vlSelfRef.lsq_input, vlSymsp->TOP__core__res_sched.lsq_input);
    VL_ASSIGN_W(81, vlSymsp->TOP__core__indirect_jump_queue.din, vlSelfRef.jalrq_input);
    VL_ASSIGN_W(79, vlSymsp->TOP__core__lsq_sched.in, vlSelfRef.lsq_input);
}

void Vcore_core___ico_sequent__TOP__core__5(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ico_sequent__TOP__core__5\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79, vlSelfRef.lqss_out, vlSymsp->TOP__core__lsq_sched.out);
    vlSelfRef.wr_en = vlSymsp->TOP__core__lsq_sched.wr_en;
    VL_ASSIGN_W(79, vlSymsp->TOP__core__load_store_queue.din, vlSelfRef.lqss_out);
    vlSymsp->TOP__core__load_store_queue.wr_en = vlSelfRef.wr_en;
}

void Vcore_core___ico_comb__TOP__core__0(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ico_comb__TOP__core__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_ReadData = vlSymsp->TOP__core__csrs.csr_ReadData;
    vlSymsp->TOP__core__res_sched.csr_ReadData = vlSelfRef.csr_ReadData;
}

void Vcore_core___ico_comb__TOP__core__1(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ico_comb__TOP__core__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid_packet = vlSymsp->TOP__core__res_sched.valid_packet;
    vlSelfRef.issue_csr_write_select = vlSymsp->TOP__core__res_sched.issue_csr_write_select;
    vlSelfRef.issue_dest = vlSymsp->TOP__core__res_sched.issue_dest;
    VL_ASSIGN_W(85, vlSelfRef.rs_input, vlSymsp->TOP__core__res_sched.rs_input);
    vlSelfRef.issue_csr_valid_write = vlSymsp->TOP__core__res_sched.issue_csr_valid_write;
    vlSelfRef.issue_csr_valid_read = vlSymsp->TOP__core__res_sched.csr_valid_read;
    vlSelfRef.issue_writes = vlSymsp->TOP__core__res_sched.issue_writes;
    VL_ASSIGN_W(163, vlSelfRef.rob_input, vlSymsp->TOP__core__res_sched.new_packet);
    vlSymsp->TOP__core__reservation_stations.valid_packet 
        = vlSelfRef.valid_packet;
    vlSymsp->TOP__core__csrs.csr_read_select = vlSelfRef.issue_csr_write_select;
    vlSymsp->TOP__core__csr_register_status.issue_csr_write_select 
        = vlSelfRef.issue_csr_write_select;
    vlSymsp->TOP__core__reg_status_register.issue_dest 
        = vlSelfRef.issue_dest;
    VL_ASSIGN_W(85, vlSymsp->TOP__core__reservation_stations.d, vlSelfRef.rs_input);
    vlSymsp->TOP__core__csr_register_status.issue_csr_valid_write 
        = vlSelfRef.issue_csr_valid_write;
    vlSymsp->TOP__core__csrs.valid_read = vlSelfRef.issue_csr_valid_read;
    vlSymsp->TOP__core__csr_register_status.csr_valid_read 
        = vlSelfRef.issue_csr_valid_read;
    vlSymsp->TOP__core__reg_status_register.issue_writes 
        = vlSelfRef.issue_writes;
    VL_ASSIGN_W(163, vlSymsp->TOP__core__reorder_buffer.new_entry, vlSelfRef.rob_input);
}

void Vcore_core___ico_comb__TOP__core__2(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ico_comb__TOP__core__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_busy = vlSymsp->TOP__core__csr_register_status.busy;
    vlSymsp->TOP__core__res_sched.csr_busy = vlSelfRef.csr_busy;
}

void Vcore_core___ico_comb__TOP__core__3(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ico_comb__TOP__core__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mepc_WriteData = vlSymsp->TOP__core__commit_unit.mepc_WriteData;
    vlSelfRef.mcause = vlSymsp->TOP__core__commit_unit.mcause;
    vlSelfRef.rd_en_jalrq = vlSymsp->TOP__core__commit_unit.rd_en_jalrq;
    vlSelfRef.valid_commit = vlSymsp->TOP__core__commit_unit.valid_commit;
    vlSelfRef.csr_WriteData = vlSymsp->TOP__core__commit_unit.csr_WriteData;
    vlSelfRef.commit_csr_write_select = vlSymsp->TOP__core__commit_unit.csr_write_select;
    vlSelfRef.commit_csr_valid_write = vlSymsp->TOP__core__commit_unit.csr_valid_write;
    vlSelfRef.WriteData = vlSymsp->TOP__core__commit_unit.WriteData;
    vlSelfRef.exception = vlSymsp->TOP__core__commit_unit.exception;
    vlSelfRef.special = vlSymsp->TOP__core__commit_unit.special;
    vlSelfRef.commit_imm_se = vlSymsp->TOP__core__commit_unit.commit_imm_se;
    vlSelfRef.RegWrite = vlSymsp->TOP__core__commit_unit.RegWrite;
    vlSelfRef.commit_prediction = vlSymsp->TOP__core__commit_unit.commit_prediction;
    vlSelfRef.rob_read_enable = vlSymsp->TOP__core__commit_unit.rd_en;
    vlSelfRef.committed_pc = vlSymsp->TOP__core__commit_unit.committed_pc;
    vlSelfRef.committed_is_branch = vlSymsp->TOP__core__commit_unit.commit_is_branch;
    vlSelfRef.commit_result = vlSymsp->TOP__core__commit_unit.commit_result;
    vlSelfRef.commit_ras_pointer = vlSymsp->TOP__core__commit_unit.commit_ras_pointer;
    vlSelfRef.commit_ROB = vlSymsp->TOP__core__commit_unit.commit_ROB;
    vlSelfRef.rd = vlSymsp->TOP__core__commit_unit.rd;
    vlSymsp->TOP__core__csrs.mepc_WriteData = vlSelfRef.mepc_WriteData;
    vlSymsp->TOP__core__csrs.mcause = vlSelfRef.mcause;
    vlSymsp->TOP__core__indirect_jump_queue.rd_en = vlSelfRef.rd_en_jalrq;
    vlSymsp->TOP__core__csrs.csr_WriteData = vlSelfRef.csr_WriteData;
    vlSymsp->TOP__core__csrs.csr_write_select = vlSelfRef.commit_csr_write_select;
    vlSymsp->TOP__core__csr_register_status.commit_csr_write_select 
        = vlSelfRef.commit_csr_write_select;
    vlSymsp->TOP__core__csr_register_status.commit_csr_valid_write 
        = vlSelfRef.commit_csr_valid_write;
    vlSymsp->TOP__core__csrs.valid_write = vlSelfRef.commit_csr_valid_write;
    vlSymsp->TOP__core__registers.WriteData = vlSelfRef.WriteData;
    vlSymsp->TOP__core__csrs.exception = vlSelfRef.exception;
    vlSymsp->TOP__core__fetch_stage.exception = vlSelfRef.exception;
    vlSymsp->TOP__core__csrs.special = vlSelfRef.special;
    vlSymsp->TOP__core__generate_new_pc.commit_imm_se 
        = vlSelfRef.commit_imm_se;
    vlSymsp->TOP__core__registers.RegWrite = vlSelfRef.RegWrite;
    vlSymsp->TOP__core__reg_status_register.RegWrite 
        = vlSelfRef.RegWrite;
    vlSymsp->TOP__core__generate_new_pc.commit_taken 
        = vlSelfRef.commit_prediction;
    vlSymsp->TOP__core__reorder_buffer.rd_en = vlSelfRef.rob_read_enable;
    vlSymsp->TOP__core__generate_new_pc.commit_pc = vlSelfRef.committed_pc;
    vlSymsp->TOP__core__fetch_stage.committed_pc = vlSelfRef.committed_pc;
    vlSymsp->TOP__core__generate_new_pc.committed_is_branch 
        = vlSelfRef.committed_is_branch;
    vlSymsp->TOP__core__fetch_stage.valid_in = vlSelfRef.committed_is_branch;
    vlSymsp->TOP__core__generate_new_pc.commit_result 
        = vlSelfRef.commit_result;
    vlSymsp->TOP__core__fetch_stage.update = vlSelfRef.commit_result;
    vlSymsp->TOP__core__fetch_stage.flush_ptr = vlSelfRef.commit_ras_pointer;
    vlSymsp->TOP__core__csr_register_status.commit_ROB 
        = vlSelfRef.commit_ROB;
    vlSymsp->TOP__core__reg_status_register.commit_ROB 
        = vlSelfRef.commit_ROB;
    if (VL_UNLIKELY((vlSelfRef.valid_commit))) {
        VL_WRITEF_NX("%10#\n",0,32,VL_SEL_IWII(163, vlSelfRef.head, 0U, 32));
    }
    vlSelfRef.valid_commit_out = vlSelfRef.valid_commit;
    vlSelfRef.RegWrite_out = vlSelfRef.RegWrite;
    vlSelfRef.rd_out = vlSelfRef.rd;
    vlSelfRef.head_pc = VL_SEL_IWII(163, vlSelfRef.head, 0x0000002eU, 32);
    vlSelfRef.WriteData_out = vlSelfRef.WriteData;
    vlSelfRef.ins_out = VL_SEL_IWII(163, vlSelfRef.head, 0U, 32);
    vlSelfRef.priv_out = vlSelfRef.curr_priv;
    vlSelfRef.csr_WriteData_out = vlSelfRef.csr_WriteData;
    vlSelfRef.csr_write_out = vlSelfRef.commit_csr_valid_write;
    vlSelfRef.csr_write_select_out = vlSelfRef.commit_csr_write_select;
    vlSymsp->TOP__core__registers.rd = vlSelfRef.rd;
    vlSymsp->TOP__core__reg_status_register.commit_dest 
        = vlSelfRef.rd;
}

void Vcore_core___ico_comb__TOP__core__4(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ico_comb__TOP__core__4\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.illegal_access_e = vlSymsp->TOP__core__csrs.illegal_access_e;
    vlSelfRef.mret = vlSymsp->TOP__core__csrs.mret;
    vlSymsp->TOP__core__commit_unit.illegal_access_e 
        = vlSelfRef.illegal_access_e;
    vlSymsp->TOP__core__reorder_buffer.illegal_access_e 
        = vlSelfRef.illegal_access_e;
    vlSymsp->TOP__core__fetch_stage.mret = vlSelfRef.mret;
}

void Vcore_core___ico_comb__TOP__core__5(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ico_comb__TOP__core__5\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(112, vlSelfRef.pipe_in, vlSymsp->TOP__core__fetch_stage.pipe_in);
    VL_ASSIGN_W(112, vlSymsp->TOP__core__fetch_issue_reg.d, vlSelfRef.pipe_in);
    VL_ASSIGN_W(112, vlSymsp->TOP__core__generate_new_pc.pipe_in, vlSelfRef.pipe_in);
}

void Vcore_core___ico_comb__TOP__core__6(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ico_comb__TOP__core__6\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mispredicted = vlSymsp->TOP__core__generate_new_pc.mispredicted;
    vlSelfRef.pc_update = vlSymsp->TOP__core__generate_new_pc.pc_update;
    vlSelfRef.__Vcellinp__fetch_issue_reg__reset = 
        ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
          | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__res_sched__reset = ((((IData)(vlSelfRef.reset) 
                                                | (IData)(vlSelfRef.mispredicted)) 
                                               | (IData)(vlSelfRef.exception)) 
                                              | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__csr_register_status__reset 
        = ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
            | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__load_store_queue__reset = 
        ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
          | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__indirect_jump_queue__reset 
        = ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
            | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__adder_fu_0__reset = ((((IData)(vlSelfRef.reset) 
                                                 | (IData)(vlSelfRef.mispredicted)) 
                                                | (IData)(vlSelfRef.exception)) 
                                               | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__adder_fu_1__reset = ((((IData)(vlSelfRef.reset) 
                                                 | (IData)(vlSelfRef.mispredicted)) 
                                                | (IData)(vlSelfRef.exception)) 
                                               | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__data_memory__reset = ((((IData)(vlSelfRef.reset) 
                                                  | (IData)(vlSelfRef.mispredicted)) 
                                                 | (IData)(vlSelfRef.exception)) 
                                                | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__reorder_buffer__reset = (
                                                   (((IData)(vlSelfRef.reset) 
                                                     | (IData)(vlSelfRef.mispredicted)) 
                                                    | (IData)(vlSelfRef.exception)) 
                                                   | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__mult_fu__reset = ((((IData)(vlSelfRef.reset) 
                                              | (IData)(vlSelfRef.mispredicted)) 
                                             | (IData)(vlSelfRef.exception)) 
                                            | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__div_fu__reset = ((((IData)(vlSelfRef.reset) 
                                             | (IData)(vlSelfRef.mispredicted)) 
                                            | (IData)(vlSelfRef.exception)) 
                                           | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__shift_fu__reset = ((((IData)(vlSelfRef.reset) 
                                               | (IData)(vlSelfRef.mispredicted)) 
                                              | (IData)(vlSelfRef.exception)) 
                                             | (IData)(vlSelfRef.mret));
    vlSymsp->TOP__core__reservation_stations.mispredicted 
        = vlSelfRef.mispredicted;
    vlSymsp->TOP__core__fetch_stage.mispredicted = vlSelfRef.mispredicted;
    vlSelfRef.__Vcellinp__reservation_stations__reset 
        = ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
            | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__reg_status_register__reset 
        = ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
            | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSymsp->TOP__core__fetch_stage.pc_update = vlSelfRef.pc_update;
    vlSymsp->TOP__core__fetch_issue_reg.reset = vlSelfRef.__Vcellinp__fetch_issue_reg__reset;
    vlSymsp->TOP__core__res_sched.reset = vlSelfRef.__Vcellinp__res_sched__reset;
    vlSymsp->TOP__core__csr_register_status.reset = vlSelfRef.__Vcellinp__csr_register_status__reset;
    vlSymsp->TOP__core__load_store_queue.reset = vlSelfRef.__Vcellinp__load_store_queue__reset;
    vlSymsp->TOP__core__indirect_jump_queue.reset = vlSelfRef.__Vcellinp__indirect_jump_queue__reset;
    vlSymsp->TOP__core__adder_fu_0.reset = vlSelfRef.__Vcellinp__adder_fu_0__reset;
    vlSymsp->TOP__core__adder_fu_1.reset = vlSelfRef.__Vcellinp__adder_fu_1__reset;
    vlSymsp->TOP__core__data_memory.reset = vlSelfRef.__Vcellinp__data_memory__reset;
    vlSymsp->TOP__core__reorder_buffer.reset = vlSelfRef.__Vcellinp__reorder_buffer__reset;
    vlSymsp->TOP__core__mult_fu.reset = vlSelfRef.__Vcellinp__mult_fu__reset;
    vlSymsp->TOP__core__div_fu.reset = vlSelfRef.__Vcellinp__div_fu__reset;
    vlSymsp->TOP__core__shift_fu.reset = vlSelfRef.__Vcellinp__shift_fu__reset;
    vlSymsp->TOP__core__reservation_stations.reset 
        = vlSelfRef.__Vcellinp__reservation_stations__reset;
    vlSymsp->TOP__core__reg_status_register.reset = vlSelfRef.__Vcellinp__reg_status_register__reset;
}

void Vcore_core___act_sequent__TOP__core__0(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___act_sequent__TOP__core__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_ReadData = vlSymsp->TOP__core__csrs.csr_ReadData;
    vlSymsp->TOP__core__res_sched.csr_ReadData = vlSelfRef.csr_ReadData;
}

void Vcore_core___act_sequent__TOP__core__1(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___act_sequent__TOP__core__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid_packet = vlSymsp->TOP__core__res_sched.valid_packet;
    vlSelfRef.issue_csr_write_select = vlSymsp->TOP__core__res_sched.issue_csr_write_select;
    vlSelfRef.issue_dest = vlSymsp->TOP__core__res_sched.issue_dest;
    VL_ASSIGN_W(85, vlSelfRef.rs_input, vlSymsp->TOP__core__res_sched.rs_input);
    vlSelfRef.issue_csr_valid_write = vlSymsp->TOP__core__res_sched.issue_csr_valid_write;
    vlSelfRef.issue_csr_valid_read = vlSymsp->TOP__core__res_sched.csr_valid_read;
    vlSelfRef.issue_writes = vlSymsp->TOP__core__res_sched.issue_writes;
    VL_ASSIGN_W(163, vlSelfRef.rob_input, vlSymsp->TOP__core__res_sched.new_packet);
    vlSymsp->TOP__core__reservation_stations.valid_packet 
        = vlSelfRef.valid_packet;
    vlSymsp->TOP__core__csrs.csr_read_select = vlSelfRef.issue_csr_write_select;
    vlSymsp->TOP__core__csr_register_status.issue_csr_write_select 
        = vlSelfRef.issue_csr_write_select;
    vlSymsp->TOP__core__reg_status_register.issue_dest 
        = vlSelfRef.issue_dest;
    VL_ASSIGN_W(85, vlSymsp->TOP__core__reservation_stations.d, vlSelfRef.rs_input);
    vlSymsp->TOP__core__csr_register_status.issue_csr_valid_write 
        = vlSelfRef.issue_csr_valid_write;
    vlSymsp->TOP__core__csrs.valid_read = vlSelfRef.issue_csr_valid_read;
    vlSymsp->TOP__core__csr_register_status.csr_valid_read 
        = vlSelfRef.issue_csr_valid_read;
    vlSymsp->TOP__core__reg_status_register.issue_writes 
        = vlSelfRef.issue_writes;
    VL_ASSIGN_W(163, vlSymsp->TOP__core__reorder_buffer.new_entry, vlSelfRef.rob_input);
}

void Vcore_core___act_sequent__TOP__core__2(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___act_sequent__TOP__core__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_busy = vlSymsp->TOP__core__csr_register_status.busy;
    vlSymsp->TOP__core__res_sched.csr_busy = vlSelfRef.csr_busy;
}

void Vcore_core___act_sequent__TOP__core__3(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___act_sequent__TOP__core__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(112, vlSelfRef.pipe_in, vlSymsp->TOP__core__fetch_stage.pipe_in);
    VL_ASSIGN_W(112, vlSymsp->TOP__core__fetch_issue_reg.d, vlSelfRef.pipe_in);
    VL_ASSIGN_W(112, vlSymsp->TOP__core__generate_new_pc.pipe_in, vlSelfRef.pipe_in);
}

void Vcore_core___act_sequent__TOP__core__4(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___act_sequent__TOP__core__4\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mepc_WriteData = vlSymsp->TOP__core__commit_unit.mepc_WriteData;
    vlSelfRef.mcause = vlSymsp->TOP__core__commit_unit.mcause;
    vlSelfRef.rd_en_jalrq = vlSymsp->TOP__core__commit_unit.rd_en_jalrq;
    vlSelfRef.valid_commit = vlSymsp->TOP__core__commit_unit.valid_commit;
    vlSelfRef.csr_WriteData = vlSymsp->TOP__core__commit_unit.csr_WriteData;
    vlSelfRef.commit_csr_write_select = vlSymsp->TOP__core__commit_unit.csr_write_select;
    vlSelfRef.commit_csr_valid_write = vlSymsp->TOP__core__commit_unit.csr_valid_write;
    vlSelfRef.WriteData = vlSymsp->TOP__core__commit_unit.WriteData;
    vlSelfRef.exception = vlSymsp->TOP__core__commit_unit.exception;
    vlSelfRef.special = vlSymsp->TOP__core__commit_unit.special;
    vlSelfRef.commit_imm_se = vlSymsp->TOP__core__commit_unit.commit_imm_se;
    vlSelfRef.RegWrite = vlSymsp->TOP__core__commit_unit.RegWrite;
    vlSelfRef.commit_prediction = vlSymsp->TOP__core__commit_unit.commit_prediction;
    vlSelfRef.rob_read_enable = vlSymsp->TOP__core__commit_unit.rd_en;
    vlSelfRef.committed_pc = vlSymsp->TOP__core__commit_unit.committed_pc;
    vlSelfRef.committed_is_branch = vlSymsp->TOP__core__commit_unit.commit_is_branch;
    vlSelfRef.commit_result = vlSymsp->TOP__core__commit_unit.commit_result;
    vlSelfRef.commit_ras_pointer = vlSymsp->TOP__core__commit_unit.commit_ras_pointer;
    vlSelfRef.commit_ROB = vlSymsp->TOP__core__commit_unit.commit_ROB;
    vlSelfRef.rd = vlSymsp->TOP__core__commit_unit.rd;
    vlSymsp->TOP__core__csrs.mepc_WriteData = vlSelfRef.mepc_WriteData;
    vlSymsp->TOP__core__csrs.mcause = vlSelfRef.mcause;
    vlSymsp->TOP__core__indirect_jump_queue.rd_en = vlSelfRef.rd_en_jalrq;
    vlSymsp->TOP__core__csrs.csr_WriteData = vlSelfRef.csr_WriteData;
    vlSymsp->TOP__core__csrs.csr_write_select = vlSelfRef.commit_csr_write_select;
    vlSymsp->TOP__core__csr_register_status.commit_csr_write_select 
        = vlSelfRef.commit_csr_write_select;
    vlSymsp->TOP__core__csr_register_status.commit_csr_valid_write 
        = vlSelfRef.commit_csr_valid_write;
    vlSymsp->TOP__core__csrs.valid_write = vlSelfRef.commit_csr_valid_write;
    vlSymsp->TOP__core__registers.WriteData = vlSelfRef.WriteData;
    vlSymsp->TOP__core__csrs.exception = vlSelfRef.exception;
    vlSymsp->TOP__core__fetch_stage.exception = vlSelfRef.exception;
    vlSymsp->TOP__core__csrs.special = vlSelfRef.special;
    vlSymsp->TOP__core__generate_new_pc.commit_imm_se 
        = vlSelfRef.commit_imm_se;
    vlSymsp->TOP__core__registers.RegWrite = vlSelfRef.RegWrite;
    vlSymsp->TOP__core__reg_status_register.RegWrite 
        = vlSelfRef.RegWrite;
    vlSymsp->TOP__core__generate_new_pc.commit_taken 
        = vlSelfRef.commit_prediction;
    vlSymsp->TOP__core__reorder_buffer.rd_en = vlSelfRef.rob_read_enable;
    vlSymsp->TOP__core__generate_new_pc.commit_pc = vlSelfRef.committed_pc;
    vlSymsp->TOP__core__fetch_stage.committed_pc = vlSelfRef.committed_pc;
    vlSymsp->TOP__core__generate_new_pc.committed_is_branch 
        = vlSelfRef.committed_is_branch;
    vlSymsp->TOP__core__fetch_stage.valid_in = vlSelfRef.committed_is_branch;
    vlSymsp->TOP__core__generate_new_pc.commit_result 
        = vlSelfRef.commit_result;
    vlSymsp->TOP__core__fetch_stage.update = vlSelfRef.commit_result;
    vlSymsp->TOP__core__fetch_stage.flush_ptr = vlSelfRef.commit_ras_pointer;
    vlSymsp->TOP__core__csr_register_status.commit_ROB 
        = vlSelfRef.commit_ROB;
    vlSymsp->TOP__core__reg_status_register.commit_ROB 
        = vlSelfRef.commit_ROB;
    if (VL_UNLIKELY((vlSelfRef.valid_commit))) {
        VL_WRITEF_NX("%10#\n",0,32,VL_SEL_IWII(163, vlSelfRef.head, 0U, 32));
    }
    vlSelfRef.valid_commit_out = vlSelfRef.valid_commit;
    vlSelfRef.RegWrite_out = vlSelfRef.RegWrite;
    vlSelfRef.rd_out = vlSelfRef.rd;
    vlSelfRef.head_pc = VL_SEL_IWII(163, vlSelfRef.head, 0x0000002eU, 32);
    vlSelfRef.WriteData_out = vlSelfRef.WriteData;
    vlSelfRef.ins_out = VL_SEL_IWII(163, vlSelfRef.head, 0U, 32);
    vlSelfRef.priv_out = vlSelfRef.curr_priv;
    vlSelfRef.csr_WriteData_out = vlSelfRef.csr_WriteData;
    vlSelfRef.csr_write_out = vlSelfRef.commit_csr_valid_write;
    vlSelfRef.csr_write_select_out = vlSelfRef.commit_csr_write_select;
    vlSymsp->TOP__core__registers.rd = vlSelfRef.rd;
    vlSymsp->TOP__core__reg_status_register.commit_dest 
        = vlSelfRef.rd;
}

void Vcore_core___act_sequent__TOP__core__5(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___act_sequent__TOP__core__5\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.illegal_access_e = vlSymsp->TOP__core__csrs.illegal_access_e;
    vlSelfRef.mret = vlSymsp->TOP__core__csrs.mret;
    vlSymsp->TOP__core__commit_unit.illegal_access_e 
        = vlSelfRef.illegal_access_e;
    vlSymsp->TOP__core__reorder_buffer.illegal_access_e 
        = vlSelfRef.illegal_access_e;
    vlSymsp->TOP__core__fetch_stage.mret = vlSelfRef.mret;
}

void Vcore_core___act_comb__TOP__core__0(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___act_comb__TOP__core__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mispredicted = vlSymsp->TOP__core__generate_new_pc.mispredicted;
    vlSelfRef.pc_update = vlSymsp->TOP__core__generate_new_pc.pc_update;
    vlSelfRef.__Vcellinp__fetch_issue_reg__reset = 
        ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
          | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__res_sched__reset = ((((IData)(vlSelfRef.reset) 
                                                | (IData)(vlSelfRef.mispredicted)) 
                                               | (IData)(vlSelfRef.exception)) 
                                              | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__csr_register_status__reset 
        = ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
            | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__load_store_queue__reset = 
        ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
          | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__indirect_jump_queue__reset 
        = ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
            | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__adder_fu_0__reset = ((((IData)(vlSelfRef.reset) 
                                                 | (IData)(vlSelfRef.mispredicted)) 
                                                | (IData)(vlSelfRef.exception)) 
                                               | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__adder_fu_1__reset = ((((IData)(vlSelfRef.reset) 
                                                 | (IData)(vlSelfRef.mispredicted)) 
                                                | (IData)(vlSelfRef.exception)) 
                                               | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__data_memory__reset = ((((IData)(vlSelfRef.reset) 
                                                  | (IData)(vlSelfRef.mispredicted)) 
                                                 | (IData)(vlSelfRef.exception)) 
                                                | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__reorder_buffer__reset = (
                                                   (((IData)(vlSelfRef.reset) 
                                                     | (IData)(vlSelfRef.mispredicted)) 
                                                    | (IData)(vlSelfRef.exception)) 
                                                   | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__mult_fu__reset = ((((IData)(vlSelfRef.reset) 
                                              | (IData)(vlSelfRef.mispredicted)) 
                                             | (IData)(vlSelfRef.exception)) 
                                            | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__div_fu__reset = ((((IData)(vlSelfRef.reset) 
                                             | (IData)(vlSelfRef.mispredicted)) 
                                            | (IData)(vlSelfRef.exception)) 
                                           | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__shift_fu__reset = ((((IData)(vlSelfRef.reset) 
                                               | (IData)(vlSelfRef.mispredicted)) 
                                              | (IData)(vlSelfRef.exception)) 
                                             | (IData)(vlSelfRef.mret));
    vlSymsp->TOP__core__reservation_stations.mispredicted 
        = vlSelfRef.mispredicted;
    vlSymsp->TOP__core__fetch_stage.mispredicted = vlSelfRef.mispredicted;
    vlSelfRef.__Vcellinp__reservation_stations__reset 
        = ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
            | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__reg_status_register__reset 
        = ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
            | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSymsp->TOP__core__fetch_stage.pc_update = vlSelfRef.pc_update;
    vlSymsp->TOP__core__fetch_issue_reg.reset = vlSelfRef.__Vcellinp__fetch_issue_reg__reset;
    vlSymsp->TOP__core__res_sched.reset = vlSelfRef.__Vcellinp__res_sched__reset;
    vlSymsp->TOP__core__csr_register_status.reset = vlSelfRef.__Vcellinp__csr_register_status__reset;
    vlSymsp->TOP__core__load_store_queue.reset = vlSelfRef.__Vcellinp__load_store_queue__reset;
    vlSymsp->TOP__core__indirect_jump_queue.reset = vlSelfRef.__Vcellinp__indirect_jump_queue__reset;
    vlSymsp->TOP__core__adder_fu_0.reset = vlSelfRef.__Vcellinp__adder_fu_0__reset;
    vlSymsp->TOP__core__adder_fu_1.reset = vlSelfRef.__Vcellinp__adder_fu_1__reset;
    vlSymsp->TOP__core__data_memory.reset = vlSelfRef.__Vcellinp__data_memory__reset;
    vlSymsp->TOP__core__reorder_buffer.reset = vlSelfRef.__Vcellinp__reorder_buffer__reset;
    vlSymsp->TOP__core__mult_fu.reset = vlSelfRef.__Vcellinp__mult_fu__reset;
    vlSymsp->TOP__core__div_fu.reset = vlSelfRef.__Vcellinp__div_fu__reset;
    vlSymsp->TOP__core__shift_fu.reset = vlSelfRef.__Vcellinp__shift_fu__reset;
    vlSymsp->TOP__core__reservation_stations.reset 
        = vlSelfRef.__Vcellinp__reservation_stations__reset;
    vlSymsp->TOP__core__reg_status_register.reset = vlSelfRef.__Vcellinp__reg_status_register__reset;
}

void Vcore_core___nba_sequent__TOP__core__0(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.curr_priv = vlSymsp->TOP__core__csrs.curr_priv;
    vlSelfRef.mepc_ReadData = vlSymsp->TOP__core__csrs.mepc_ReadData;
    vlSelfRef.mtvec_ReadData = vlSymsp->TOP__core__csrs.mtvec_ReadData;
    vlSymsp->TOP__core__fetch_stage.mepc_ReadData = vlSelfRef.mepc_ReadData;
    vlSymsp->TOP__core__fetch_stage.mtvec_ReadData 
        = vlSelfRef.mtvec_ReadData;
}

void Vcore_core___nba_sequent__TOP__core__1(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pc_pipe_stall = vlSymsp->TOP__core__ins_hold.pc_pipe_stall;
    vlSymsp->TOP__core__fetch_stage.stall = vlSelfRef.pc_pipe_stall;
}

void Vcore_core___nba_sequent__TOP__core__2(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.head_load = vlSymsp->TOP__core__load_store_queue.head_load;
    VL_ASSIGN_W(79, vlSelfRef.lsq_out, vlSymsp->TOP__core__load_store_queue.dout);
    vlSelfRef.lsq_full = vlSymsp->TOP__core__load_store_queue.full;
    vlSelfRef.lsq_empty = vlSymsp->TOP__core__load_store_queue.empty;
    vlSelfRef.head_ready = vlSymsp->TOP__core__load_store_queue.head_ready;
    vlSymsp->TOP__core__data_memory.head_load = vlSelfRef.head_load;
    vlSymsp->TOP__core__data_memory.empty = vlSelfRef.lsq_empty;
    vlSymsp->TOP__core__data_memory.head_ready = vlSelfRef.head_ready;
}

void Vcore_core___nba_sequent__TOP__core__3(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.jalrq_full = vlSymsp->TOP__core__indirect_jump_queue.full;
    vlSelfRef.jalr_actual_address = vlSymsp->TOP__core__indirect_jump_queue.jalr_actual_address;
    vlSelfRef.jalr_taken_address = vlSymsp->TOP__core__indirect_jump_queue.jalr_taken_address;
    vlSelfRef.jalrq_ready = vlSymsp->TOP__core__indirect_jump_queue.head_ready;
    vlSymsp->TOP__core__generate_new_pc.jalr_actual_address 
        = vlSelfRef.jalr_actual_address;
    vlSymsp->TOP__core__generate_new_pc.jalr_taken_address 
        = vlSelfRef.jalr_taken_address;
    vlSymsp->TOP__core__commit_unit.jalrq_ready = vlSelfRef.jalrq_ready;
}

void Vcore_core___nba_sequent__TOP__core__4(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__4\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(77, vlSelfRef.rs0_data, vlSymsp->TOP__core__reservation_stations.rs0_data);
    VL_ASSIGN_W(77, vlSymsp->TOP__core__fu_sched.rs0_data, vlSelfRef.rs0_data);
}

void Vcore_core___nba_sequent__TOP__core__5(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__5\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(77, vlSelfRef.rs1_data, vlSymsp->TOP__core__reservation_stations.rs1_data);
    VL_ASSIGN_W(77, vlSymsp->TOP__core__fu_sched.rs1_data, vlSelfRef.rs1_data);
}

void Vcore_core___nba_sequent__TOP__core__6(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__6\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(77, vlSelfRef.rs2_data, vlSymsp->TOP__core__reservation_stations.rs2_data);
    VL_ASSIGN_W(77, vlSymsp->TOP__core__fu_sched.rs2_data, vlSelfRef.rs2_data);
}

void Vcore_core___nba_sequent__TOP__core__7(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__7\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(77, vlSelfRef.rs3_data, vlSymsp->TOP__core__reservation_stations.rs3_data);
    VL_ASSIGN_W(77, vlSymsp->TOP__core__fu_sched.rs3_data, vlSelfRef.rs3_data);
}

void Vcore_core___nba_sequent__TOP__core__8(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__8\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rob_full = vlSymsp->TOP__core__reorder_buffer.full;
    vlSelfRef.empty = vlSymsp->TOP__core__reorder_buffer.empty;
    VL_ASSIGN_W(163, vlSelfRef.head, vlSymsp->TOP__core__reorder_buffer.head);
    vlSelfRef.ROB_entry = vlSymsp->TOP__core__reorder_buffer.ROB_entry;
    vlSelfRef.ROB_head_store = vlSymsp->TOP__core__reorder_buffer.ROB_head_store;
    vlSelfRef.rob_head_ready = vlSymsp->TOP__core__reorder_buffer.head_ready;
    vlSymsp->TOP__core__commit_unit.empty = vlSelfRef.empty;
    VL_ASSIGN_W(163, vlSymsp->TOP__core__commit_unit.head, vlSelfRef.head);
    vlSymsp->TOP__core__csr_register_status.issue_ROB 
        = vlSelfRef.ROB_entry;
    vlSymsp->TOP__core__reg_status_register.issue_ROB 
        = vlSelfRef.ROB_entry;
    vlSymsp->TOP__core__res_sched.ROB_entry = vlSelfRef.ROB_entry;
    vlSymsp->TOP__core__data_memory.ROB_head_store 
        = vlSelfRef.ROB_head_store;
    vlSymsp->TOP__core__commit_unit.rob_head_ready 
        = vlSelfRef.rob_head_ready;
}

void Vcore_core___nba_sequent__TOP__core__9(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__9\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_load = vlSymsp->TOP__core__data_memory.mem_read_out;
    vlSelfRef.__Vcellout__data_memory__valid_out = vlSymsp->TOP__core__data_memory.valid_out;
    vlSymsp->TOP__core__cdb.mem_out = vlSelfRef.out_load;
    VL_ASSIGNBIT_II(4U, vlSelfRef.valid_out_bus, vlSelfRef.__Vcellout__data_memory__valid_out);
}

void Vcore_core___nba_sequent__TOP__core__10(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__10\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(112, vlSelfRef.pipe_out, vlSymsp->TOP__core__fetch_issue_reg.q);
    VL_ASSIGN_W(112, vlSymsp->TOP__core__ins_hold.pipe_out, vlSelfRef.pipe_out);
}

void Vcore_core___nba_sequent__TOP__core__11(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__11\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__adder_fu_0__valid_out = vlSymsp->TOP__core__adder_fu_0.valid_out;
    vlSelfRef.__Vcellout__adder_fu_0__ready = vlSymsp->TOP__core__adder_fu_0.ready;
    vlSelfRef.out_0 = vlSymsp->TOP__core__adder_fu_0.out;
    VL_ASSIGNBIT_II(0U, vlSelfRef.valid_out_bus, vlSelfRef.__Vcellout__adder_fu_0__valid_out);
    VL_ASSIGNBIT_II(0U, vlSelfRef.ready_bus, vlSelfRef.__Vcellout__adder_fu_0__ready);
    vlSymsp->TOP__core__cdb.adder_0_out = vlSelfRef.out_0;
}

void Vcore_core___nba_sequent__TOP__core__12(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__12\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__adder_fu_1__valid_out = vlSymsp->TOP__core__adder_fu_1.valid_out;
    vlSelfRef.__Vcellout__adder_fu_1__ready = vlSymsp->TOP__core__adder_fu_1.ready;
    vlSelfRef.out_1 = vlSymsp->TOP__core__adder_fu_1.out;
    VL_ASSIGNBIT_II(1U, vlSelfRef.valid_out_bus, vlSelfRef.__Vcellout__adder_fu_1__valid_out);
    VL_ASSIGNBIT_II(1U, vlSelfRef.ready_bus, vlSelfRef.__Vcellout__adder_fu_1__ready);
    vlSymsp->TOP__core__cdb.adder_1_out = vlSelfRef.out_1;
}

void Vcore_core___nba_sequent__TOP__core__13(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__13\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__shift_fu__valid_out = vlSymsp->TOP__core__shift_fu.valid_out;
    vlSelfRef.__Vcellout__shift_fu__ready = vlSymsp->TOP__core__shift_fu.ready;
    VL_ASSIGNBIT_II(5U, vlSelfRef.valid_out_bus, vlSelfRef.__Vcellout__shift_fu__valid_out);
    VL_ASSIGNBIT_II(4U, vlSelfRef.ready_bus, vlSelfRef.__Vcellout__shift_fu__ready);
}

void Vcore_core___nba_sequent__TOP__core__14(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__14\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__mult_fu__valid_out = vlSymsp->TOP__core__mult_fu.valid_out;
    vlSelfRef.__Vcellout__mult_fu__ready = vlSymsp->TOP__core__mult_fu.ready;
    VL_ASSIGNBIT_II(2U, vlSelfRef.valid_out_bus, vlSelfRef.__Vcellout__mult_fu__valid_out);
    VL_ASSIGNBIT_II(2U, vlSelfRef.ready_bus, vlSelfRef.__Vcellout__mult_fu__ready);
}

void Vcore_core___nba_sequent__TOP__core__15(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__15\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__div_fu__valid_out = vlSymsp->TOP__core__div_fu.valid_out;
    vlSelfRef.__Vcellout__div_fu__ready = vlSymsp->TOP__core__div_fu.ready;
    VL_ASSIGNBIT_II(3U, vlSelfRef.valid_out_bus, vlSelfRef.__Vcellout__div_fu__valid_out);
    VL_ASSIGNBIT_II(3U, vlSelfRef.ready_bus, vlSelfRef.__Vcellout__div_fu__ready);
}

void Vcore_core___nba_comb__TOP__core__0(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_ReadData = vlSymsp->TOP__core__csrs.csr_ReadData;
    vlSymsp->TOP__core__res_sched.csr_ReadData = vlSelfRef.csr_ReadData;
}

void Vcore_core___nba_comb__TOP__core__1(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.busy_bus = vlSymsp->TOP__core__reservation_stations.busy_bus;
    vlSymsp->TOP__core__res_sched.busy_bus = vlSelfRef.busy_bus;
}

void Vcore_core___nba_comb__TOP__core__2(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rd_en_rob = vlSymsp->TOP__core__data_memory.rd_en_rob;
    vlSymsp->TOP__core__commit_unit.rd_en_rob = vlSelfRef.rd_en_rob;
}

void Vcore_core___nba_comb__TOP__core__3(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.commit_jalr = vlSymsp->TOP__core__commit_unit.commit_jalr;
    vlSymsp->TOP__core__generate_new_pc.commit_jalr 
        = vlSelfRef.commit_jalr;
}

void Vcore_core___nba_comb__TOP__core__4(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__4\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.shift_out = vlSymsp->TOP__core__shift_fu.out;
    vlSymsp->TOP__core__cdb.shift_out = vlSelfRef.shift_out;
}

void Vcore_core___nba_comb__TOP__core__5(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__5\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_2 = vlSymsp->TOP__core__mult_fu.out;
    vlSymsp->TOP__core__cdb.mult_out = vlSelfRef.out_2;
}

void Vcore_core___nba_comb__TOP__core__6(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__6\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_3 = vlSymsp->TOP__core__div_fu.out;
    vlSymsp->TOP__core__cdb.div_out = vlSelfRef.out_3;
}

void Vcore_core___nba_sequent__TOP__core__16(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__16\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79, vlSymsp->TOP__core__data_memory.mem_in, vlSelfRef.lsq_out);
}

void Vcore_core___nba_sequent__TOP__core__17(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_sequent__TOP__core__17\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fetch_issue_reg.stall = vlSelfRef.pc_pipe_stall;
}

void Vcore_core___nba_comb__TOP__core__7(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__7\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(112, vlSelfRef.hold_out, vlSymsp->TOP__core__ins_hold.hold_out);
    vlSelfRef.rs1 = vlSymsp->TOP__core__ins_hold.rs1;
    VL_ASSIGN_W(112, vlSymsp->TOP__core__res_sched.hold_out, vlSelfRef.hold_out);
    vlSymsp->TOP__core__registers.rs1 = vlSelfRef.rs1;
    vlSymsp->TOP__core__reg_status_register.rs1 = vlSelfRef.rs1;
}

void Vcore_core___nba_comb__TOP__core__8(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__8\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__cdb.valid_out_bus = vlSelfRef.valid_out_bus;
}

void Vcore_core___nba_comb__TOP__core__9(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__9\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__core__fu_sched.ready_bus = vlSelfRef.ready_bus;
}

void Vcore_core___nba_comb__TOP__core__10(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__10\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.stall = ((((1U == (IData)(vlSelfRef.busy_bus)) 
                         | (IData)(vlSelfRef.rob_full)) 
                        | (IData)(vlSelfRef.lsq_full)) 
                       | (IData)(vlSelfRef.jalrq_full));
    vlSymsp->TOP__core__csr_register_status.stall = vlSelfRef.stall;
    vlSymsp->TOP__core__ins_hold.stall = vlSelfRef.stall;
    vlSymsp->TOP__core__reservation_stations.stall 
        = vlSelfRef.stall;
    vlSymsp->TOP__core__reg_status_register.stall = vlSelfRef.stall;
    vlSymsp->TOP__core__res_sched.stall = vlSelfRef.stall;
}

void Vcore_core___nba_comb__TOP__core__11(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__11\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mepc_WriteData = vlSymsp->TOP__core__commit_unit.mepc_WriteData;
    vlSelfRef.mcause = vlSymsp->TOP__core__commit_unit.mcause;
    vlSelfRef.rd_en_jalrq = vlSymsp->TOP__core__commit_unit.rd_en_jalrq;
    vlSelfRef.valid_commit = vlSymsp->TOP__core__commit_unit.valid_commit;
    vlSelfRef.csr_WriteData = vlSymsp->TOP__core__commit_unit.csr_WriteData;
    vlSelfRef.commit_csr_write_select = vlSymsp->TOP__core__commit_unit.csr_write_select;
    vlSelfRef.commit_csr_valid_write = vlSymsp->TOP__core__commit_unit.csr_valid_write;
    vlSelfRef.WriteData = vlSymsp->TOP__core__commit_unit.WriteData;
    vlSelfRef.exception = vlSymsp->TOP__core__commit_unit.exception;
    vlSelfRef.special = vlSymsp->TOP__core__commit_unit.special;
    vlSelfRef.commit_imm_se = vlSymsp->TOP__core__commit_unit.commit_imm_se;
    vlSelfRef.RegWrite = vlSymsp->TOP__core__commit_unit.RegWrite;
    vlSelfRef.commit_prediction = vlSymsp->TOP__core__commit_unit.commit_prediction;
    vlSelfRef.rob_read_enable = vlSymsp->TOP__core__commit_unit.rd_en;
    vlSelfRef.committed_pc = vlSymsp->TOP__core__commit_unit.committed_pc;
    vlSelfRef.committed_is_branch = vlSymsp->TOP__core__commit_unit.commit_is_branch;
    vlSelfRef.commit_result = vlSymsp->TOP__core__commit_unit.commit_result;
    vlSelfRef.commit_ras_pointer = vlSymsp->TOP__core__commit_unit.commit_ras_pointer;
    vlSelfRef.commit_ROB = vlSymsp->TOP__core__commit_unit.commit_ROB;
    vlSelfRef.rd = vlSymsp->TOP__core__commit_unit.rd;
    vlSymsp->TOP__core__csrs.mepc_WriteData = vlSelfRef.mepc_WriteData;
    vlSymsp->TOP__core__csrs.mcause = vlSelfRef.mcause;
    vlSymsp->TOP__core__indirect_jump_queue.rd_en = vlSelfRef.rd_en_jalrq;
    vlSymsp->TOP__core__csrs.csr_WriteData = vlSelfRef.csr_WriteData;
    vlSymsp->TOP__core__csrs.csr_write_select = vlSelfRef.commit_csr_write_select;
    vlSymsp->TOP__core__csr_register_status.commit_csr_write_select 
        = vlSelfRef.commit_csr_write_select;
    vlSymsp->TOP__core__csr_register_status.commit_csr_valid_write 
        = vlSelfRef.commit_csr_valid_write;
    vlSymsp->TOP__core__csrs.valid_write = vlSelfRef.commit_csr_valid_write;
    vlSymsp->TOP__core__registers.WriteData = vlSelfRef.WriteData;
    vlSymsp->TOP__core__csrs.exception = vlSelfRef.exception;
    vlSymsp->TOP__core__fetch_stage.exception = vlSelfRef.exception;
    vlSymsp->TOP__core__csrs.special = vlSelfRef.special;
    vlSymsp->TOP__core__generate_new_pc.commit_imm_se 
        = vlSelfRef.commit_imm_se;
    vlSymsp->TOP__core__registers.RegWrite = vlSelfRef.RegWrite;
    vlSymsp->TOP__core__reg_status_register.RegWrite 
        = vlSelfRef.RegWrite;
    vlSymsp->TOP__core__generate_new_pc.commit_taken 
        = vlSelfRef.commit_prediction;
    vlSymsp->TOP__core__reorder_buffer.rd_en = vlSelfRef.rob_read_enable;
    vlSymsp->TOP__core__generate_new_pc.commit_pc = vlSelfRef.committed_pc;
    vlSymsp->TOP__core__fetch_stage.committed_pc = vlSelfRef.committed_pc;
    vlSymsp->TOP__core__generate_new_pc.committed_is_branch 
        = vlSelfRef.committed_is_branch;
    vlSymsp->TOP__core__fetch_stage.valid_in = vlSelfRef.committed_is_branch;
    vlSymsp->TOP__core__generate_new_pc.commit_result 
        = vlSelfRef.commit_result;
    vlSymsp->TOP__core__fetch_stage.update = vlSelfRef.commit_result;
    vlSymsp->TOP__core__fetch_stage.flush_ptr = vlSelfRef.commit_ras_pointer;
    vlSymsp->TOP__core__csr_register_status.commit_ROB 
        = vlSelfRef.commit_ROB;
    vlSymsp->TOP__core__reg_status_register.commit_ROB 
        = vlSelfRef.commit_ROB;
    vlSymsp->TOP__core__registers.rd = vlSelfRef.rd;
    vlSymsp->TOP__core__reg_status_register.commit_dest 
        = vlSelfRef.rd;
}

void Vcore_core___nba_comb__TOP__core__12(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__12\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rd_en = vlSymsp->TOP__core__data_memory.rd_en;
    vlSymsp->TOP__core__load_store_queue.rd_en = vlSelfRef.rd_en;
}

void Vcore_core___nba_comb__TOP__core__13(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__13\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs1reg_data = vlSymsp->TOP__core__registers.rs1_data;
    vlSelfRef.rs2reg_data = vlSymsp->TOP__core__registers.rs2_data;
    vlSymsp->TOP__core__res_sched.rs1_data = vlSelfRef.rs1reg_data;
    vlSymsp->TOP__core__res_sched.rs2_data = vlSelfRef.rs2reg_data;
}

void Vcore_core___nba_comb__TOP__core__14(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__14\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs1reg_busy = vlSymsp->TOP__core__reg_status_register.rs1reg_busy;
    vlSelfRef.rs2reg_busy = vlSymsp->TOP__core__reg_status_register.rs2reg_busy;
    vlSelfRef.Q_j = vlSymsp->TOP__core__reg_status_register.Q_j;
    vlSelfRef.Q_k = vlSymsp->TOP__core__reg_status_register.Q_k;
    vlSymsp->TOP__core__res_sched.rs1reg_busy = vlSelfRef.rs1reg_busy;
    vlSymsp->TOP__core__res_sched.rs2reg_busy = vlSelfRef.rs2reg_busy;
    vlSymsp->TOP__core__res_sched.Q_j = vlSelfRef.Q_j;
    vlSymsp->TOP__core__reorder_buffer.Q_j = vlSelfRef.Q_j;
    vlSymsp->TOP__core__res_sched.Q_k = vlSelfRef.Q_k;
    vlSymsp->TOP__core__reorder_buffer.Q_k = vlSelfRef.Q_k;
}

void Vcore_core___nba_comb__TOP__core__15(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__15\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs_dest = vlSymsp->TOP__core__res_sched.rs_dest;
    vlSymsp->TOP__core__reservation_stations.rs_dest 
        = vlSelfRef.rs_dest;
}

void Vcore_core___nba_comb__TOP__core__16(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__16\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.yumi_bus = vlSymsp->TOP__core__cdb.yummi_in_bus;
    vlSelfRef.CDB_out = vlSymsp->TOP__core__cdb.new_CDB;
    vlSelfRef.__Vcellinp__adder_fu_0__yumi_in = (1U 
                                                 & VL_BITSEL_IIII(6, (IData)(vlSelfRef.yumi_bus), 0U));
    vlSelfRef.__Vcellinp__adder_fu_1__yumi_in = (1U 
                                                 & VL_BITSEL_IIII(6, (IData)(vlSelfRef.yumi_bus), 1U));
    vlSelfRef.__Vcellinp__data_memory__yummy_in = (1U 
                                                   & VL_BITSEL_IIII(6, (IData)(vlSelfRef.yumi_bus), 4U));
    vlSelfRef.__Vcellinp__mult_fu__yumi_in = (1U & 
                                              VL_BITSEL_IIII(6, (IData)(vlSelfRef.yumi_bus), 2U));
    vlSelfRef.__Vcellinp__shift_fu__yumi_in = (1U & 
                                               VL_BITSEL_IIII(6, (IData)(vlSelfRef.yumi_bus), 5U));
    vlSelfRef.__Vcellinp__div_fu__yumi_in = (1U & VL_BITSEL_IIII(6, (IData)(vlSelfRef.yumi_bus), 3U));
    vlSymsp->TOP__core__load_store_queue.CDB_in = vlSelfRef.CDB_out;
    vlSymsp->TOP__core__indirect_jump_queue.CDB_in 
        = vlSelfRef.CDB_out;
    vlSymsp->TOP__core__reorder_buffer.CDB_in = vlSelfRef.CDB_out;
    vlSymsp->TOP__core__reservation_stations.CDB_in 
        = vlSelfRef.CDB_out;
    vlSymsp->TOP__core__res_sched.new_CDB = vlSelfRef.CDB_out;
    vlSymsp->TOP__core__adder_fu_0.yumi_in = vlSelfRef.__Vcellinp__adder_fu_0__yumi_in;
    vlSymsp->TOP__core__adder_fu_1.yumi_in = vlSelfRef.__Vcellinp__adder_fu_1__yumi_in;
    vlSymsp->TOP__core__data_memory.yummy_in = vlSelfRef.__Vcellinp__data_memory__yummy_in;
    vlSymsp->TOP__core__mult_fu.yumi_in = vlSelfRef.__Vcellinp__mult_fu__yumi_in;
    vlSymsp->TOP__core__shift_fu.yumi_in = vlSelfRef.__Vcellinp__shift_fu__yumi_in;
    vlSymsp->TOP__core__div_fu.yumi_in = vlSelfRef.__Vcellinp__div_fu__yumi_in;
}

void Vcore_core___nba_comb__TOP__core__17(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__17\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.load = vlSymsp->TOP__core__fu_sched.load;
    vlSelfRef.ROB_entry_bus = vlSymsp->TOP__core__fu_sched.ROB_entry_bus;
    vlSelfRef.consumed_bus = vlSymsp->TOP__core__fu_sched.consumed_bus;
    vlSelfRef.valid_in_bus = vlSymsp->TOP__core__fu_sched.valid_in_bus;
    vlSelfRef.branch_type_bus = vlSymsp->TOP__core__fu_sched.branch_type_bus;
    vlSelfRef.ALU_op = vlSymsp->TOP__core__fu_sched.ALU_op;
    VL_ASSIGN_W(320, vlSelfRef.fu_bus, vlSymsp->TOP__core__fu_sched.fu_bus);
    vlSelfRef.__Vcellinp__adder_fu_0__load = (1U & 
                                              VL_BITSEL_IIII(2, (IData)(vlSelfRef.load), 0U));
    vlSelfRef.__Vcellinp__adder_fu_1__load = (1U & 
                                              VL_BITSEL_IIII(2, (IData)(vlSelfRef.load), 1U));
    vlSelfRef.__Vcellinp__adder_fu_0__rs_rob_entry 
        = (0x0000000fU & VL_SEL_IIII(20, vlSelfRef.ROB_entry_bus, 0U, 4));
    vlSelfRef.__Vcellinp__adder_fu_1__rs_rob_entry 
        = (0x0000000fU & VL_SEL_IIII(20, vlSelfRef.ROB_entry_bus, 4U, 4));
    vlSelfRef.__Vcellinp__mult_fu__rs_rob_entry = (0x0000000fU 
                                                   & VL_SEL_IIII(20, vlSelfRef.ROB_entry_bus, 8U, 4));
    vlSelfRef.__Vcellinp__div_fu__rs_rob_entry = (0x0000000fU 
                                                  & VL_SEL_IIII(20, vlSelfRef.ROB_entry_bus, 0x0cU, 4));
    vlSelfRef.__Vcellinp__shift_fu__rs_rob_entry = 
        (0x0000000fU & VL_SEL_IIII(20, vlSelfRef.ROB_entry_bus, 0x10U, 4));
    vlSymsp->TOP__core__reservation_stations.consumed_bus 
        = vlSelfRef.consumed_bus;
    vlSelfRef.__Vcellinp__adder_fu_0__valid_in = (1U 
                                                  & VL_BITSEL_IIII(5, (IData)(vlSelfRef.valid_in_bus), 0U));
    vlSelfRef.__Vcellinp__adder_fu_1__valid_in = (1U 
                                                  & VL_BITSEL_IIII(5, (IData)(vlSelfRef.valid_in_bus), 1U));
    vlSelfRef.__Vcellinp__mult_fu__valid_in = (1U & 
                                               VL_BITSEL_IIII(5, (IData)(vlSelfRef.valid_in_bus), 2U));
    vlSelfRef.__Vcellinp__shift_fu__valid_in = (1U 
                                                & VL_BITSEL_IIII(5, (IData)(vlSelfRef.valid_in_bus), 4U));
    vlSelfRef.__Vcellinp__div_fu__valid_in = (1U & 
                                              VL_BITSEL_IIII(5, (IData)(vlSelfRef.valid_in_bus), 3U));
    vlSelfRef.__Vcellinp__adder_fu_0__branch_type = 
        (7U & VL_SEL_IIII(6, (IData)(vlSelfRef.branch_type_bus), 0U, 3));
    vlSelfRef.__Vcellinp__adder_fu_1__branch_type = 
        (7U & VL_SEL_IIII(6, (IData)(vlSelfRef.branch_type_bus), 3U, 3));
    vlSelfRef.__Vcellinp__mult_fu__ALUop = (0x0000000fU 
                                            & VL_SEL_IIII(20, vlSelfRef.ALU_op, 8U, 4));
    vlSelfRef.__Vcellinp__shift_fu__ALUop = (0x0000000fU 
                                             & VL_SEL_IIII(20, vlSelfRef.ALU_op, 0x10U, 4));
    vlSelfRef.__Vcellinp__div_fu__ALUop = (0x0000000fU 
                                           & VL_SEL_IIII(20, vlSelfRef.ALU_op, 0x0cU, 4));
    vlSelfRef.__Vcellinp__adder_fu_0__ALUop = (0x0000000fU 
                                               & VL_SEL_IIII(20, vlSelfRef.ALU_op, 0U, 4));
    vlSelfRef.__Vcellinp__adder_fu_1__ALUop = (0x0000000fU 
                                               & VL_SEL_IIII(20, vlSelfRef.ALU_op, 4U, 4));
    vlSelfRef.__Vcellinp__mult_fu__B = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x00a0U, 32);
    vlSelfRef.__Vcellinp__mult_fu__A = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x0080U, 32);
    vlSelfRef.__Vcellinp__shift_fu__B = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x0120U, 32);
    vlSelfRef.__Vcellinp__shift_fu__A = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x0100U, 32);
    vlSelfRef.__Vcellinp__div_fu__divisor = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x00e0U, 32);
    vlSelfRef.__Vcellinp__div_fu__dividend = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x00c0U, 32);
    vlSelfRef.__Vcellinp__adder_fu_0__rs1 = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0U, 32);
    vlSelfRef.__Vcellinp__adder_fu_1__rs1 = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x0040U, 32);
    vlSelfRef.__Vcellinp__adder_fu_0__rs2 = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x0020U, 32);
    vlSelfRef.__Vcellinp__adder_fu_1__rs2 = VL_SEL_IWII(320, vlSelfRef.fu_bus, 0x0060U, 32);
    vlSymsp->TOP__core__adder_fu_0.load = vlSelfRef.__Vcellinp__adder_fu_0__load;
    vlSymsp->TOP__core__adder_fu_1.load = vlSelfRef.__Vcellinp__adder_fu_1__load;
    vlSymsp->TOP__core__adder_fu_0.rs_rob_entry = vlSelfRef.__Vcellinp__adder_fu_0__rs_rob_entry;
    vlSymsp->TOP__core__adder_fu_1.rs_rob_entry = vlSelfRef.__Vcellinp__adder_fu_1__rs_rob_entry;
    vlSymsp->TOP__core__mult_fu.rs_rob_entry = vlSelfRef.__Vcellinp__mult_fu__rs_rob_entry;
    vlSymsp->TOP__core__div_fu.rs_rob_entry = vlSelfRef.__Vcellinp__div_fu__rs_rob_entry;
    vlSymsp->TOP__core__shift_fu.rs_rob_entry = vlSelfRef.__Vcellinp__shift_fu__rs_rob_entry;
    vlSymsp->TOP__core__adder_fu_0.valid_in = vlSelfRef.__Vcellinp__adder_fu_0__valid_in;
    vlSymsp->TOP__core__adder_fu_1.valid_in = vlSelfRef.__Vcellinp__adder_fu_1__valid_in;
    vlSymsp->TOP__core__mult_fu.valid_in = vlSelfRef.__Vcellinp__mult_fu__valid_in;
    vlSymsp->TOP__core__shift_fu.valid_in = vlSelfRef.__Vcellinp__shift_fu__valid_in;
    vlSymsp->TOP__core__div_fu.valid_in = vlSelfRef.__Vcellinp__div_fu__valid_in;
    vlSymsp->TOP__core__adder_fu_0.branch_type = vlSelfRef.__Vcellinp__adder_fu_0__branch_type;
    vlSymsp->TOP__core__adder_fu_1.branch_type = vlSelfRef.__Vcellinp__adder_fu_1__branch_type;
    vlSymsp->TOP__core__mult_fu.ALUop = vlSelfRef.__Vcellinp__mult_fu__ALUop;
    vlSymsp->TOP__core__shift_fu.ALUop = vlSelfRef.__Vcellinp__shift_fu__ALUop;
    vlSymsp->TOP__core__div_fu.ALUop = vlSelfRef.__Vcellinp__div_fu__ALUop;
    vlSymsp->TOP__core__adder_fu_0.ALUop = vlSelfRef.__Vcellinp__adder_fu_0__ALUop;
    vlSymsp->TOP__core__adder_fu_1.ALUop = vlSelfRef.__Vcellinp__adder_fu_1__ALUop;
    vlSymsp->TOP__core__mult_fu.B = vlSelfRef.__Vcellinp__mult_fu__B;
    vlSymsp->TOP__core__mult_fu.A = vlSelfRef.__Vcellinp__mult_fu__A;
    vlSymsp->TOP__core__shift_fu.B = vlSelfRef.__Vcellinp__shift_fu__B;
    vlSymsp->TOP__core__shift_fu.A = vlSelfRef.__Vcellinp__shift_fu__A;
    vlSymsp->TOP__core__div_fu.divisor = vlSelfRef.__Vcellinp__div_fu__divisor;
    vlSymsp->TOP__core__div_fu.dividend = vlSelfRef.__Vcellinp__div_fu__dividend;
    vlSymsp->TOP__core__adder_fu_0.rs1 = vlSelfRef.__Vcellinp__adder_fu_0__rs1;
    vlSymsp->TOP__core__adder_fu_1.rs1 = vlSelfRef.__Vcellinp__adder_fu_1__rs1;
    vlSymsp->TOP__core__adder_fu_0.rs2 = vlSelfRef.__Vcellinp__adder_fu_0__rs2;
    vlSymsp->TOP__core__adder_fu_1.rs2 = vlSelfRef.__Vcellinp__adder_fu_1__rs2;
}

void Vcore_core___nba_comb__TOP__core__18(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__18\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.valid_commit))) {
        VL_WRITEF_NX("%10#\n",0,32,VL_SEL_IWII(163, vlSelfRef.head, 0U, 32));
    }
    vlSelfRef.valid_commit_out = vlSelfRef.valid_commit;
    vlSelfRef.RegWrite_out = vlSelfRef.RegWrite;
    vlSelfRef.rd_out = vlSelfRef.rd;
    vlSelfRef.head_pc = VL_SEL_IWII(163, vlSelfRef.head, 0x0000002eU, 32);
    vlSelfRef.WriteData_out = vlSelfRef.WriteData;
    vlSelfRef.ins_out = VL_SEL_IWII(163, vlSelfRef.head, 0U, 32);
    vlSelfRef.priv_out = vlSelfRef.curr_priv;
    vlSelfRef.csr_WriteData_out = vlSelfRef.csr_WriteData;
    vlSelfRef.csr_write_out = vlSelfRef.commit_csr_valid_write;
    vlSelfRef.csr_write_select_out = vlSelfRef.commit_csr_write_select;
}

void Vcore_core___nba_comb__TOP__core__19(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__19\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.illegal_access_e = vlSymsp->TOP__core__csrs.illegal_access_e;
    vlSelfRef.mret = vlSymsp->TOP__core__csrs.mret;
    vlSymsp->TOP__core__reorder_buffer.illegal_access_e 
        = vlSelfRef.illegal_access_e;
    vlSymsp->TOP__core__commit_unit.illegal_access_e 
        = vlSelfRef.illegal_access_e;
    vlSymsp->TOP__core__fetch_stage.mret = vlSelfRef.mret;
}

void Vcore_core___nba_comb__TOP__core__20(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__20\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs1rob_data = vlSymsp->TOP__core__reorder_buffer.rs1rob_data;
    vlSelfRef.rs1rob_ready = vlSymsp->TOP__core__reorder_buffer.rs1rob_ready;
    vlSelfRef.rs2rob_data = vlSymsp->TOP__core__reorder_buffer.rs2rob_data;
    vlSelfRef.rs2rob_ready = vlSymsp->TOP__core__reorder_buffer.rs2rob_ready;
    vlSymsp->TOP__core__res_sched.rs1rob_data = vlSelfRef.rs1rob_data;
    vlSymsp->TOP__core__res_sched.rs1rob_ready = vlSelfRef.rs1rob_ready;
    vlSymsp->TOP__core__res_sched.rs2rob_data = vlSelfRef.rs2rob_data;
    vlSymsp->TOP__core__res_sched.rs2rob_ready = vlSelfRef.rs2rob_ready;
}

void Vcore_core___nba_comb__TOP__core__21(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__21\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(112, vlSelfRef.pipe_in, vlSymsp->TOP__core__fetch_stage.pipe_in);
    VL_ASSIGN_W(112, vlSymsp->TOP__core__fetch_issue_reg.d, vlSelfRef.pipe_in);
    VL_ASSIGN_W(112, vlSymsp->TOP__core__generate_new_pc.pipe_in, vlSelfRef.pipe_in);
}

void Vcore_core___nba_comb__TOP__core__22(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__22\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(81, vlSelfRef.jalrq_input, vlSymsp->TOP__core__res_sched.jalrq_input);
    VL_ASSIGN_W(79, vlSelfRef.lsq_input, vlSymsp->TOP__core__res_sched.lsq_input);
    VL_ASSIGN_W(81, vlSymsp->TOP__core__indirect_jump_queue.din, vlSelfRef.jalrq_input);
    VL_ASSIGN_W(79, vlSymsp->TOP__core__lsq_sched.in, vlSelfRef.lsq_input);
}

void Vcore_core___nba_comb__TOP__core__23(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__23\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79, vlSelfRef.lqss_out, vlSymsp->TOP__core__lsq_sched.out);
    vlSelfRef.wr_en = vlSymsp->TOP__core__lsq_sched.wr_en;
    VL_ASSIGN_W(79, vlSymsp->TOP__core__load_store_queue.din, vlSelfRef.lqss_out);
    vlSymsp->TOP__core__load_store_queue.wr_en = vlSelfRef.wr_en;
}

void Vcore_core___nba_comb__TOP__core__24(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__24\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid_packet = vlSymsp->TOP__core__res_sched.valid_packet;
    vlSelfRef.issue_csr_write_select = vlSymsp->TOP__core__res_sched.issue_csr_write_select;
    vlSelfRef.issue_dest = vlSymsp->TOP__core__res_sched.issue_dest;
    vlSelfRef.issue_csr_valid_write = vlSymsp->TOP__core__res_sched.issue_csr_valid_write;
    vlSelfRef.issue_csr_valid_read = vlSymsp->TOP__core__res_sched.csr_valid_read;
    vlSelfRef.issue_writes = vlSymsp->TOP__core__res_sched.issue_writes;
    vlSymsp->TOP__core__reservation_stations.valid_packet 
        = vlSelfRef.valid_packet;
    vlSymsp->TOP__core__csrs.csr_read_select = vlSelfRef.issue_csr_write_select;
    vlSymsp->TOP__core__csr_register_status.issue_csr_write_select 
        = vlSelfRef.issue_csr_write_select;
    vlSymsp->TOP__core__reg_status_register.issue_dest 
        = vlSelfRef.issue_dest;
    vlSymsp->TOP__core__csr_register_status.issue_csr_valid_write 
        = vlSelfRef.issue_csr_valid_write;
    vlSymsp->TOP__core__csrs.valid_read = vlSelfRef.issue_csr_valid_read;
    vlSymsp->TOP__core__csr_register_status.csr_valid_read 
        = vlSelfRef.issue_csr_valid_read;
    vlSymsp->TOP__core__reg_status_register.issue_writes 
        = vlSelfRef.issue_writes;
}

void Vcore_core___nba_comb__TOP__core__25(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__25\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mispredicted = vlSymsp->TOP__core__generate_new_pc.mispredicted;
    vlSelfRef.pc_update = vlSymsp->TOP__core__generate_new_pc.pc_update;
    vlSymsp->TOP__core__reservation_stations.mispredicted 
        = vlSelfRef.mispredicted;
    vlSymsp->TOP__core__fetch_stage.mispredicted = vlSelfRef.mispredicted;
    vlSymsp->TOP__core__fetch_stage.pc_update = vlSelfRef.pc_update;
}

void Vcore_core___nba_comb__TOP__core__26(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__26\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(85, vlSelfRef.rs_input, vlSymsp->TOP__core__res_sched.rs_input);
    VL_ASSIGN_W(163, vlSelfRef.rob_input, vlSymsp->TOP__core__res_sched.new_packet);
    VL_ASSIGN_W(85, vlSymsp->TOP__core__reservation_stations.d, vlSelfRef.rs_input);
    VL_ASSIGN_W(163, vlSymsp->TOP__core__reorder_buffer.new_entry, vlSelfRef.rob_input);
}

void Vcore_core___nba_comb__TOP__core__27(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__27\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_busy = vlSymsp->TOP__core__csr_register_status.busy;
    vlSymsp->TOP__core__res_sched.csr_busy = vlSelfRef.csr_busy;
}

void Vcore_core___nba_comb__TOP__core__28(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___nba_comb__TOP__core__28\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__fetch_issue_reg__reset = 
        ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
          | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__res_sched__reset = ((((IData)(vlSelfRef.reset) 
                                                | (IData)(vlSelfRef.mispredicted)) 
                                               | (IData)(vlSelfRef.exception)) 
                                              | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__csr_register_status__reset 
        = ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
            | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__load_store_queue__reset = 
        ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
          | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__indirect_jump_queue__reset 
        = ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
            | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__adder_fu_0__reset = ((((IData)(vlSelfRef.reset) 
                                                 | (IData)(vlSelfRef.mispredicted)) 
                                                | (IData)(vlSelfRef.exception)) 
                                               | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__adder_fu_1__reset = ((((IData)(vlSelfRef.reset) 
                                                 | (IData)(vlSelfRef.mispredicted)) 
                                                | (IData)(vlSelfRef.exception)) 
                                               | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__data_memory__reset = ((((IData)(vlSelfRef.reset) 
                                                  | (IData)(vlSelfRef.mispredicted)) 
                                                 | (IData)(vlSelfRef.exception)) 
                                                | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__reorder_buffer__reset = (
                                                   (((IData)(vlSelfRef.reset) 
                                                     | (IData)(vlSelfRef.mispredicted)) 
                                                    | (IData)(vlSelfRef.exception)) 
                                                   | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__mult_fu__reset = ((((IData)(vlSelfRef.reset) 
                                              | (IData)(vlSelfRef.mispredicted)) 
                                             | (IData)(vlSelfRef.exception)) 
                                            | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__div_fu__reset = ((((IData)(vlSelfRef.reset) 
                                             | (IData)(vlSelfRef.mispredicted)) 
                                            | (IData)(vlSelfRef.exception)) 
                                           | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__shift_fu__reset = ((((IData)(vlSelfRef.reset) 
                                               | (IData)(vlSelfRef.mispredicted)) 
                                              | (IData)(vlSelfRef.exception)) 
                                             | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__reservation_stations__reset 
        = ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
            | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSelfRef.__Vcellinp__reg_status_register__reset 
        = ((((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.mispredicted)) 
            | (IData)(vlSelfRef.exception)) | (IData)(vlSelfRef.mret));
    vlSymsp->TOP__core__fetch_issue_reg.reset = vlSelfRef.__Vcellinp__fetch_issue_reg__reset;
    vlSymsp->TOP__core__res_sched.reset = vlSelfRef.__Vcellinp__res_sched__reset;
    vlSymsp->TOP__core__csr_register_status.reset = vlSelfRef.__Vcellinp__csr_register_status__reset;
    vlSymsp->TOP__core__load_store_queue.reset = vlSelfRef.__Vcellinp__load_store_queue__reset;
    vlSymsp->TOP__core__indirect_jump_queue.reset = vlSelfRef.__Vcellinp__indirect_jump_queue__reset;
    vlSymsp->TOP__core__adder_fu_0.reset = vlSelfRef.__Vcellinp__adder_fu_0__reset;
    vlSymsp->TOP__core__adder_fu_1.reset = vlSelfRef.__Vcellinp__adder_fu_1__reset;
    vlSymsp->TOP__core__data_memory.reset = vlSelfRef.__Vcellinp__data_memory__reset;
    vlSymsp->TOP__core__reorder_buffer.reset = vlSelfRef.__Vcellinp__reorder_buffer__reset;
    vlSymsp->TOP__core__mult_fu.reset = vlSelfRef.__Vcellinp__mult_fu__reset;
    vlSymsp->TOP__core__div_fu.reset = vlSelfRef.__Vcellinp__div_fu__reset;
    vlSymsp->TOP__core__shift_fu.reset = vlSelfRef.__Vcellinp__shift_fu__reset;
    vlSymsp->TOP__core__reservation_stations.reset 
        = vlSelfRef.__Vcellinp__reservation_stations__reset;
    vlSymsp->TOP__core__reg_status_register.reset = vlSelfRef.__Vcellinp__reg_status_register__reset;
}
