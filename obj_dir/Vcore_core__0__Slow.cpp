// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore_core___stl_sequent__TOP__core__0(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___stl_sequent__TOP__core__0\n"); );
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
    vlSymsp->TOP__core__res_sched.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__csrs.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__csr_register_status.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__load_store_queue.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__indirect_jump_queue.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__adder_fu_0.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__adder_fu_1.clk = vlSelfRef.clk;
    vlSymsp->TOP__core__reorder_buffer.clk = vlSelfRef.clk;
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

VL_ATTR_COLD void Vcore_core___stl_sequent__TOP__core__1(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___stl_sequent__TOP__core__1\n"); );
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

VL_ATTR_COLD void Vcore_core___stl_sequent__TOP__core__2(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___stl_sequent__TOP__core__2\n"); );
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

VL_ATTR_COLD void Vcore_core___stl_sequent__TOP__core__3(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___stl_sequent__TOP__core__3\n"); );
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

VL_ATTR_COLD void Vcore_core___stl_sequent__TOP__core__4(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___stl_sequent__TOP__core__4\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(81, vlSelfRef.jalrq_input, vlSymsp->TOP__core__res_sched.jalrq_input);
    VL_ASSIGN_W(79, vlSelfRef.lsq_input, vlSymsp->TOP__core__res_sched.lsq_input);
    VL_ASSIGN_W(81, vlSymsp->TOP__core__indirect_jump_queue.din, vlSelfRef.jalrq_input);
    VL_ASSIGN_W(79, vlSymsp->TOP__core__lsq_sched.in, vlSelfRef.lsq_input);
}

VL_ATTR_COLD void Vcore_core___stl_sequent__TOP__core__5(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___stl_sequent__TOP__core__5\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(79, vlSelfRef.lqss_out, vlSymsp->TOP__core__lsq_sched.out);
    vlSelfRef.wr_en = vlSymsp->TOP__core__lsq_sched.wr_en;
    VL_ASSIGN_W(79, vlSymsp->TOP__core__load_store_queue.din, vlSelfRef.lqss_out);
    vlSymsp->TOP__core__load_store_queue.wr_en = vlSelfRef.wr_en;
}

VL_ATTR_COLD void Vcore_core___stl_comb__TOP__core__0(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___stl_comb__TOP__core__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_ReadData = vlSymsp->TOP__core__csrs.csr_ReadData;
    vlSymsp->TOP__core__res_sched.csr_ReadData = vlSelfRef.csr_ReadData;
}

VL_ATTR_COLD void Vcore_core___stl_comb__TOP__core__1(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___stl_comb__TOP__core__1\n"); );
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

VL_ATTR_COLD void Vcore_core___stl_comb__TOP__core__2(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___stl_comb__TOP__core__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_busy = vlSymsp->TOP__core__csr_register_status.busy;
    vlSymsp->TOP__core__res_sched.csr_busy = vlSelfRef.csr_busy;
}

VL_ATTR_COLD void Vcore_core___stl_comb__TOP__core__3(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___stl_comb__TOP__core__3\n"); );
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

VL_ATTR_COLD void Vcore_core___stl_comb__TOP__core__4(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___stl_comb__TOP__core__4\n"); );
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

VL_ATTR_COLD void Vcore_core___stl_comb__TOP__core__5(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___stl_comb__TOP__core__5\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_W(112, vlSelfRef.pipe_in, vlSymsp->TOP__core__fetch_stage.pipe_in);
    VL_ASSIGN_W(112, vlSymsp->TOP__core__fetch_issue_reg.d, vlSelfRef.pipe_in);
    VL_ASSIGN_W(112, vlSymsp->TOP__core__generate_new_pc.pipe_in, vlSelfRef.pipe_in);
}

VL_ATTR_COLD void Vcore_core___stl_comb__TOP__core__6(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___stl_comb__TOP__core__6\n"); );
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

VL_ATTR_COLD void Vcore_core___ctor_var_reset(Vcore_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcore_core___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->mem_wr_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11541756044354751528ull);
    vlSelf->mem_wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2840439259503414816ull);
    vlSelf->mem_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10623438697984641879ull);
    vlSelf->valid_commit_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1418563524845985020ull);
    vlSelf->RegWrite_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8472401308057416097ull);
    vlSelf->rd_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9524451679737905392ull);
    vlSelf->head_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15664331306131262436ull);
    vlSelf->WriteData_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 976401768718281094ull);
    vlSelf->ins_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18366196581021165954ull);
    vlSelf->csr_WriteData_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3800668137119401560ull);
    vlSelf->csr_write_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13463608389540511911ull);
    vlSelf->csr_write_select_out = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8895347108902650487ull);
    vlSelf->priv_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3991217711931897270ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->pipe_in, __VscopeHash, 13001983719627058315ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->pipe_out, __VscopeHash, 18254688317797318538ull);
    vlSelf->pc_update = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16351754468963950880ull);
    vlSelf->committed_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2851875357791482293ull);
    vlSelf->commit_imm_se = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10335403197138811143ull);
    vlSelf->mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18312463477978689879ull);
    vlSelf->commit_prediction = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12556409357848323134ull);
    vlSelf->commit_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8466355976420499118ull);
    vlSelf->committed_is_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1602312058810479671ull);
    vlSelf->commit_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15734581275611539913ull);
    vlSelf->stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7179230919112499263ull);
    vlSelf->rs1reg_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12428587958514809722ull);
    vlSelf->rs2reg_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1040974582816273132ull);
    vlSelf->ROB_entry = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3172492093111144780ull);
    vlSelf->Q_j = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13101064098374966050ull);
    vlSelf->Q_k = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8213264214307608121ull);
    vlSelf->rs1reg_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9311950891482279135ull);
    vlSelf->rs2reg_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8460084214161007516ull);
    VL_SCOPED_RAND_RESET_W(85, vlSelf->rs_input, __VscopeHash, 199955959527952147ull);
    VL_SCOPED_RAND_RESET_W(163, vlSelf->rob_input, __VscopeHash, 15446618401954746237ull);
    vlSelf->rob_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9137954306461883115ull);
    vlSelf->empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3016723684638320966ull);
    vlSelf->rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10211807078052224816ull);
    vlSelf->rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 392999376545494891ull);
    vlSelf->issue_writes = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15153084133952738016ull);
    vlSelf->issue_dest = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11940087933589456684ull);
    vlSelf->rs_dest = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6233366190338396100ull);
    vlSelf->rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10303652599525973633ull);
    vlSelf->RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3806711693106967809ull);
    vlSelf->WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11254409076074583820ull);
    vlSelf->CDB_out = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 8594872607540274073ull);
    vlSelf->busy_bus = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12381324853571396118ull);
    vlSelf->consumed_bus = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7268660960299225513ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->rs0_data, __VscopeHash, 6623469576102183047ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->rs1_data, __VscopeHash, 16624318508599476813ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->rs2_data, __VscopeHash, 10683005467506302743ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->rs3_data, __VscopeHash, 17123992503407504941ull);
    vlSelf->ready_bus = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 327073247487266104ull);
    vlSelf->ROB_entry_bus = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 2826662544100618595ull);
    vlSelf->branch_type_bus = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17268700520792544164ull);
    vlSelf->load = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1148748992964133306ull);
    vlSelf->valid_in_bus = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8013077369210785226ull);
    vlSelf->ALU_op = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6668319976152363782ull);
    VL_SCOPED_RAND_RESET_W(320, vlSelf->fu_bus, __VscopeHash, 8948150120813538147ull);
    vlSelf->yumi_bus = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4893056785519448060ull);
    vlSelf->out_0 = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 14999931525626829940ull);
    vlSelf->out_1 = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 6957433418084696944ull);
    vlSelf->out_2 = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 13158147396567980737ull);
    vlSelf->out_3 = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 17180532109900062040ull);
    vlSelf->valid_out_bus = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1543552888638175929ull);
    vlSelf->out_load = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 2442155188977781170ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->lsq_input, __VscopeHash, 14386224139639738702ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->lqss_out, __VscopeHash, 11853722031821973713ull);
    vlSelf->wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710928637576349896ull);
    vlSelf->lsq_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13909851845285575706ull);
    vlSelf->rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3814484142505630662ull);
    vlSelf->ROB_head_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17200896078419622888ull);
    vlSelf->head_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17364623833263064885ull);
    vlSelf->head_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2071667241211036398ull);
    VL_SCOPED_RAND_RESET_W(79, vlSelf->lsq_out, __VscopeHash, 8593027292674836575ull);
    vlSelf->rd_en_rob = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13288154225850418120ull);
    vlSelf->rob_read_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3182331271545789083ull);
    VL_SCOPED_RAND_RESET_W(163, vlSelf->head, __VscopeHash, 10112112548227665684ull);
    vlSelf->rob_head_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13536451052963611336ull);
    vlSelf->commit_ROB = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5206458954467531095ull);
    vlSelf->valid_commit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17853949320393776948ull);
    vlSelf->lsq_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15215066616636913997ull);
    vlSelf->pc_pipe_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8130299630537667960ull);
    vlSelf->shift_out = VL_SCOPED_RAND_RESET_Q(38, __VscopeHash, 6255183185321142622ull);
    vlSelf->rd_en_jalrq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13725882464350225640ull);
    vlSelf->jalrq_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2355455933565304380ull);
    vlSelf->jalr_actual_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10465594383078161754ull);
    vlSelf->jalr_taken_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6808209024954878142ull);
    vlSelf->jalrq_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5329721543064434633ull);
    VL_SCOPED_RAND_RESET_W(81, vlSelf->jalrq_input, __VscopeHash, 9683892776356510595ull);
    vlSelf->commit_ras_pointer = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2633493357818976541ull);
    vlSelf->rs1rob_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2259780007359909577ull);
    vlSelf->rs2rob_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4856465691019389114ull);
    vlSelf->rs1rob_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16314643386973513677ull);
    vlSelf->rs2rob_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5001348478819998569ull);
    vlSelf->exception = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 765130616356482916ull);
    vlSelf->mcause = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16155705988360301293ull);
    vlSelf->commit_csr_write_select = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5322620241823764027ull);
    vlSelf->issue_csr_write_select = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1074160397596107661ull);
    vlSelf->mepc_WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12277894522739170872ull);
    vlSelf->csr_WriteData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14458753227888770815ull);
    vlSelf->csr_ReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4142972005914249151ull);
    vlSelf->special = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1033624942822192448ull);
    vlSelf->commit_csr_valid_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17342650222553503820ull);
    vlSelf->issue_csr_valid_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11773079183719742632ull);
    vlSelf->illegal_access_e = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2103023828628314327ull);
    vlSelf->issue_csr_valid_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 853122761303311068ull);
    vlSelf->valid_packet = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7061692927215707603ull);
    vlSelf->curr_priv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 513062980522173981ull);
    vlSelf->mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8098803689761564963ull);
    vlSelf->mtvec_ReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5364263975921930868ull);
    vlSelf->mepc_ReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17906630443429346129ull);
    vlSelf->csr_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 534427113606278516ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->hold_out, __VscopeHash, 6231166209727429881ull);
    vlSelf->__Vcellinp__fetch_issue_reg__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12334008924556555290ull);
    vlSelf->__Vcellinp__res_sched__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7600726990214691641ull);
    vlSelf->__Vcellinp__csr_register_status__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15559751797458357590ull);
    vlSelf->__Vcellinp__reg_status_register__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14083135037926068432ull);
    vlSelf->__Vcellinp__reservation_stations__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10696464169536511781ull);
    vlSelf->__Vcellinp__load_store_queue__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5393434920486227450ull);
    vlSelf->__Vcellinp__indirect_jump_queue__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15926090491181193870ull);
    vlSelf->__Vcellout__adder_fu_0__ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11484766108494267082ull);
    vlSelf->__Vcellinp__adder_fu_0__ALUop = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1534708318065661660ull);
    vlSelf->__Vcellout__adder_fu_0__valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17300362763365184204ull);
    vlSelf->__Vcellinp__adder_fu_0__branch_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1697792177074014220ull);
    vlSelf->__Vcellinp__adder_fu_0__rs_rob_entry = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14271202035464892056ull);
    vlSelf->__Vcellinp__adder_fu_0__rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8281420992373680137ull);
    vlSelf->__Vcellinp__adder_fu_0__rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2316602089614598834ull);
    vlSelf->__Vcellinp__adder_fu_0__yumi_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7630836649565352039ull);
    vlSelf->__Vcellinp__adder_fu_0__valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12189035138136274504ull);
    vlSelf->__Vcellinp__adder_fu_0__load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14015817433014870018ull);
    vlSelf->__Vcellinp__adder_fu_0__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5380224814479714926ull);
    vlSelf->__Vcellout__adder_fu_1__ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1813427589137988503ull);
    vlSelf->__Vcellinp__adder_fu_1__ALUop = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6324295502411020880ull);
    vlSelf->__Vcellout__adder_fu_1__valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3506777769745032319ull);
    vlSelf->__Vcellinp__adder_fu_1__branch_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1763599339241553784ull);
    vlSelf->__Vcellinp__adder_fu_1__rs_rob_entry = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11039107427485484056ull);
    vlSelf->__Vcellinp__adder_fu_1__rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5570832225858088236ull);
    vlSelf->__Vcellinp__adder_fu_1__rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14065537972914808906ull);
    vlSelf->__Vcellinp__adder_fu_1__yumi_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11127237123102973481ull);
    vlSelf->__Vcellinp__adder_fu_1__load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16248261349833422316ull);
    vlSelf->__Vcellinp__adder_fu_1__valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12915921195634881535ull);
    vlSelf->__Vcellinp__adder_fu_1__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17045388683511773473ull);
    vlSelf->__Vcellout__mult_fu__ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 198120244491362299ull);
    vlSelf->__Vcellout__mult_fu__valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7277623026382925362ull);
    vlSelf->__Vcellinp__mult_fu__ALUop = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5394840735149214463ull);
    vlSelf->__Vcellinp__mult_fu__valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6218169938002298371ull);
    vlSelf->__Vcellinp__mult_fu__yumi_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3507185378499003464ull);
    vlSelf->__Vcellinp__mult_fu__rs_rob_entry = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8675743990690619220ull);
    vlSelf->__Vcellinp__mult_fu__B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8886240773393194104ull);
    vlSelf->__Vcellinp__mult_fu__A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14743646408277405304ull);
    vlSelf->__Vcellinp__mult_fu__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16777140770530999785ull);
    vlSelf->__Vcellinp__div_fu__divisor = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 444022761623741288ull);
    vlSelf->__Vcellinp__div_fu__dividend = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3353915221452811282ull);
    vlSelf->__Vcellout__div_fu__ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18191916762324006847ull);
    vlSelf->__Vcellout__div_fu__valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14077266374746815631ull);
    vlSelf->__Vcellinp__div_fu__ALUop = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12187011973838973452ull);
    vlSelf->__Vcellinp__div_fu__rs_rob_entry = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15124866442861725906ull);
    vlSelf->__Vcellinp__div_fu__yumi_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11147636864888114291ull);
    vlSelf->__Vcellinp__div_fu__valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11589711792409279272ull);
    vlSelf->__Vcellinp__div_fu__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9501951716349770580ull);
    vlSelf->__Vcellinp__data_memory__yummy_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9076749267825753914ull);
    vlSelf->__Vcellinp__data_memory__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10598311305747417647ull);
    vlSelf->__Vcellout__data_memory__valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9811914544158215ull);
    vlSelf->__Vcellout__shift_fu__ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17793417240363845635ull);
    vlSelf->__Vcellout__shift_fu__valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1660885980366877051ull);
    vlSelf->__Vcellinp__shift_fu__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15037766071845606632ull);
    vlSelf->__Vcellinp__shift_fu__yumi_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12010809406766944401ull);
    vlSelf->__Vcellinp__shift_fu__valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1101571753653270651ull);
    vlSelf->__Vcellinp__shift_fu__ALUop = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10444613264424721279ull);
    vlSelf->__Vcellinp__shift_fu__rs_rob_entry = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14520116446555402171ull);
    vlSelf->__Vcellinp__shift_fu__B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1918043082640059141ull);
    vlSelf->__Vcellinp__shift_fu__A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8420522338169775956ull);
    vlSelf->__Vcellinp__reorder_buffer__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13040881179125357764ull);
}
