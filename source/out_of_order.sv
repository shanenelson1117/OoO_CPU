// Author: Shane Nelson
// Project: OoO CPU
// File: Top Level

`include structs.svh

module out_of_order (
    input clk, reset
);
    // fetch-issue pipeline register packets
    pipe_in_t pipe_in, pipe_out;
    // come from commit unit (branch result and wether or not we commit a branch)
    logic update, valid_in; 
    // from new pc unit
    logic [31:0] pc_update;
    // from commit unit used to update fsms (should be destination field of a committed branch)
    logic [31:0] committed_pc, commit_imm_se;
    // mispredicted, output from new_pc mod
    logic mispredicted;
    // output from commit module (branch status signals)
    logic commit_taken, commit_result;
    // from commit unit, is instruction a branch
    logic committed_is_branch;
    //from new_pc mod, what is the se imm from branch in issue stage
    logic [31:0] curr_branch_imm_se;
    // stall from rs_scheduler
    logic stall;
    // busy signals from RSs
    logic rs0_busy, rs1_busy, rs2_busy, rs3_busy;
    // read data from regfile
    logic [31:0] rs1_data, rs2_data;
    // available ROB-entry from rob unit
    logic [2:0] ROB_entry;
    // Q_j, Q_k from regstat
    logic [2:0] Q_j, Q_k;
    // decoded rs input from rs scheduler
    rs_data_t rs_input;
    // decoded rob input from rs scheduler
    ROB_entry_t rob_input;
    // regfile read selects from rs scheduler
    logic [4:0] rs1, rs2;
    // does the issued instruction write to regfile
    logic issue_writes;
    // from rs scheduler, which register does issuing instruction write
    logic [4:0] issue_dest;
    // from rs scheduler, what rs is the packet going to
    logic [1:0] rs_dest;
    // from commit unit which register are we writing to, need this to 
    logic [4:0] rd;
    // from commit unit, are we writing the registers
    logic RegWrite;
    // write data from value field of commit unit
    logic [31:0] WriteData;
    // CDB
    CDB_packet_t CDB;
    // from res stations to rs sched
    logic [3:0] busy_bus;
    // from FU scheduler, have rs outputs been consumed by FU's?
    logic [3:0] consumed_bus;
    // From rs -> fu scheduler, data in rs's
    rs_out_t rs0_data, rs1_data, rs2_data, rs3_data;
    // from fu's to fu scheduler
    logic [3:0] ready_bus;
    // from fu sched to fu
    logic [2:0] ROB_entry_fu;
    logic [1:0] branch_type;
    logic [31:0] A, B;
    logic [3:0] valid_in_bus;
    logic ALU_op;
    // from cdb sched to functional units
    logic [3:0] yumi_bus;
    // from fus to cdb scheduler
    CDB_packet_t out_0, out_1, out_2, out_3;
    logic [3:0] valid_out_bus;
    // from ROB to cdb scheduler
    // 
    CDB_packet_t out_load;
    

    // Fetch Stage
    fetch fetch_stage (.clk, .reset, .enable(~stall), .update, 
                .valid_in, .pc_update, .committed_pc, .pipe_in);
    
    pipeline_reg fetch_issue_reg (.clk, .d(pipe_in), .queue_full(stall), 
                .reset(reset | pipe_in.prediction | mispredicted), .q(pipe_out));

    // Issue Stage
    new_pc generate_new_pc (.commit_pc(committed_pc), .commit_imm_se(commit_imm_se), .commit_taken,
                .commit_result, .pipe_out, .mispredicted, .curr_branch_imm_se, .pc_update);
    
    rs_scheduler res_sched (.pipe_out, .busy_bus,
                .rs1_data, .rs2_data, .curr_branch_imm_se, .Q_j, .Q_k, .rs1, .rs2, .issue_writes,
                .rs_input, .rob_input, .stall, .issue_dest, .ROB_entry, .rs_dest);
    
    regfile registers (.rs1, .rs2, .rd, .WriteData, .rs1_data, .rs2_data, .clk, .reset);

    regstat reg_status_register (.rs1, .rs2, .clk, .reset, .issue_writes, .commit_dest(rd), .issue_dest, .RegWrite,
                .Q_j, .Q_k);
    
    rs_module reservation_stations (.clk, .reset, .mispredicted, .rs_dest, .d(rs_input), .CBD_in(CBD), .busy_bus, .consumed_bus,
                .rs0_data, .rs1_data, .rs2_data, .rs3_data);
    
    // Execute Stage
    fu_scheduler fu_sched (.rs0_data, .rs1_data, .rs2_data, .rs3_data, .ready_bus, .clk, .reset(reset | mispredicted),
                .ROB_entry(ROB_entry_fu), .ALU_op, .branch_type, .rs1(A), .rs2(B), .consumed_bus, .valid_in_bus);

     add adder_fu_0 (.clk, .reset(reset | mispredicted), .valid_in(valid_in_bus[0]), .yumi_in(yumi_bus[0]), .rs1(A), .rs2(B), .rs_rob_entry(ROB_entry_fu),
                    .branch_type, .valid_out(valid_out_bus[0]), .out(out_0), .ALUop, .ready(ready_bus[0]));
     
     add adder_fu_1 (.clk, .reset(reset | mispredicted), .valid_in(valid_in_bus[1]), .yumi_in(yumi_bus[1]), .rs1(A), .rs2(B), .rs_rob_entry(ROB_entry_fu),
                    .branch_type, .valid_out(valid_out_bus[1]), .out(out_1), .ALUop, ready(ready_bus[1]));
     
     multiply mult_fu (.clk, .reset(reset | mispredicted), .A, .B, .rs_rob_entry(ROB_entry_fu), .yumi_in(yumi_bus[2]), .valid_in(valid_in_bus[2]), .ALUop,
                    .valid_out(valid_out_bus[2]), .ready(ready_bus[2]), .out(out_2));  
    
    divide div_fu (.clk, .reset(reset | mispredicted), .valid_in(valid_in_bus[3]), .yumi_in(yumi_bus[3]), .rs_rob_entry(ROB_entry_fu), .ALUop,
                    .valid_out(valid_out_bus[3]), .ready(ready_bus[3]), .dividend(A), .divisor(B), .out(out_3));       
endmodule