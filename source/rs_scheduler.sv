// Author: Shane Nelson
// Project: OoO CPU
// File: Reservation Station Scheduler
// Stage: Issue

`include structs.svh

module rs_scheduler (
    input pipe_in_t pipe_out,
    input logic [3:0] busy_bus// busy signals from each rs
    input logic [31:0] rs1_data, rs2_data, curr_branch_imm_se, // use for jal
    input logic [2:0] ROB_entry, // all 0's indicates full ROB, otherwise avail rob number
    input logic [2:0] Q_j, Q_k,
    output rs_data_t rs_input, // create RS packet
    output ROB_entry_t rob_input, // create ROB packet
    output logic [1:0] rs_dest,
    output logic [4:0] issue_dest, rs1, rs2, // regfile/regstat control sigs
    output logic issue_writes, // ...
    output logic stall // if no avail rs or rob slot, do not advance pipeline
);
logic [31:0] curr_branch_pc;
logic prediction;
logic [31:0] ins;
logic [2:0] alu_op;
logic [1:0] branch_type;
logic [31:0] V_k, V_j;
logic [2:0] Q_temp_j, Q_temp_k;
logic ROB_full;
logic branch, jump;

assign ROB_full = ROB_entry == 3'b0;

assign prediction = pipe_out.prediction;

assign ins = pipe_out.instruction;

assign curr_branch_pc = pipe_out.pc;

assign branch = pipe_out.branch;
assign jump = pipe_out.jump;

always_comb begin
    if (~ROB_full) begin
        if (~busy_bus[0])
            rs_dest = 3'b000;
        else if (~busy_bus[1])
            rs_dest = 3'b001;
        else if (~busy_bus[2])
            rs_dest = 3'b010;
        else if (~busy_bus[3])
            rs_dest = 3'b011;
        else 
            rs_dest = 3'b100;
    end
    else rs_dest = 3'b111; // invalid rs_signal
end

assign stall = rs_dest[2] | ROB_full;

// decode instruction
always_comb begin
    rs1 = ins[19:15];
    rs2 = ins[24:20];
    issue_dest = ins[11:7];
    // arithmetic
    if (ins[6:0] == 7'b0110011) begin
        branch_type = 2'b00;
        issue_writes = ~stall;
        V_j = (Q_j == 0) ? rs1_data : 31'b0;
        V_k = (Q_k == 0) ? rs2_data : 31'b0;
        Q_temp_j = Q_j;
        Q_temp_k = Q_k;
        if (ins[14:12] == 3'b0 && ins[31:25] == 7'b0000001) begin
            alu_op = 3'b100;
        end
        else if (ins[14:12] == 3'b001 && ins[31:25] == 7'b0000001) begin
            alu_op = 3'b101;
        end
        else if (ins[14:12] == 3'b100 && ins[31:25] == 7'b0000001) begin
            alu_op = 3'b011;
        end
        else if (ins[14:12] == 3'b111 && ins[31:25] == 7'b0000001) begin
            alu_op = 3'b010;
        end
        else if (ins[14:12] == 3'b0 && ins[31:25] == 7'b0000000) begin
            alu_op = 3'b000;
        end
        else begin
            alu_op = 3'b001;
        end
    end
    // branches
    else if (branch) begin
        alu_op = 3'b001;
        issue_writes = 1'b0;
        V_j = (Q_j == 0) ? rs1_data : 31'b0;
        V_k = (Q_k == 0) ? rs2_data : 31'b0;

        Q_temp_j = Q_j;
        Q_temp_k = Q_k;

        if (ins[14:12] == 3'b0) 
            branch_type = 2'b10;
        else if (ins[14:12] == 3'b001)
            branch_type = 2'b01;
        else
            branch_type = 2'b11;
    end
    // ADDI
    else if (ins[6:0] == 7'b0010011) begin
        alu_op = 3'b0;
        issue_writes = ~stall;
        V_j = (Q_j == 0) ? rs1_data : 31'b0;
        V_k = {20{ins[31]}, ins[31:20]};
        Q_temp_j = Q_j;
        Q_temp_k = 3'b0;
        branch_type = 2'b0;
    end
    else if (jump) begin
        alu_op = 3'b0;
        issue_writes = ~stall;
        V_j = curr_branch_pc;
        V_k = {29'b0, 3'b100};
        Q_temp_j = 3'b0;
        Q_temp_k = 3'b0;
        branch_type = 2'b0;
    end
    // load
    else if (ins[6:0] == 7'b0000011) begin
        alu_op = 3'b0;
        issue_writes = ~stall;
        V_j = (Q_j == 0) ? rs1_data : 31'b0;
        V_k =  {20{ins[31]}, ins[31:20]};
        Q_temp_j = Q_j;
        Q_temp_k = 3'b0;
        branch_type = 2'b0;
    end
    // store
    else begin
        // Need ROB to have access to operand buses in case rs2 is not available
        issue_writes = 1'b0;
        alu_op = 3'b000;
        V_j = (Q_j == 0) ? rs1_data : 31'b0;
        V_k =  {20{ins[31]}, ins[31:25], ins[11:7]};
        Q_temp_j = Q_j;
        Q_temp_k = 3'b0;
        branch_type = 2'b0;
    end
end
    // assemble rs input packet
    always_comb begin 
        rs_input.Q_j = Q_temp_j;
        rs_input.Q_k = Q_temp_k;
        rs_input.V_j = V_j;
        rs_input.V_k = V_k;
        rs_input.ROB_entry = ROB_entry;
        rs_input.ALU_op = alu_op;
        rs_input.branch_type = branch_type;
        rs_input.busy = 1'b1;
    end

    // assemble ROB input packet
    always_comb begin
        rob_input.ROB_number = ROB_entry;
        rob_input.branch_pred = prediction;
        rob_input.branch_result = 1'bX; // to be updated later
        rob_input.destination = branch ? curr_branch_pc : {27'b0, ins[11:7]};
        if (ins[6:0] == 7'b0100011) begin
            rob_input.type = 2'b01;
            rob_input.value = rs2_data;
            rob_input.ROB_of_store_val = Q_k;
        end
        else if (branch) begin
            rob_input.type = 2'b00;
            rob_input.value = curr_branch_imm_se;
            rob_input.ROB_of_store_val = 3'b0;
        end
        else if (ins[6:0] == 7'b0000011) begin
            rob_input.type = 2'b11;
            rob_input.value = 32'bX; // to be updated later
            rob_input.ROB_of_store_val = 3'b0;
        end
        else begin
            rob_input.type = 2'b10;
            rob_input.value = 32'bX; // to be updated later
            rob_input.ROB_of_store_val = 3'b0;
        end
        rob_input.ready = 1'b0;
    end


endmodule