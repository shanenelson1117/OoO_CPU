// Author: Shane Nelson
// Project: OoO CPU
// File: Functional Unit Scheduler
// Stage: Execute

`include "structs.svh"

module fu_scheduler (
    input rs_out_t rs0_data, rs1_data, rs2_data, rs3_data,
    input logic [4:0] ready_bus,
    input logic clk,
    output logic [4:0] [3:0] ROB_entry_bus,
    output logic [1:0] load,
    output logic [1:0] [2:0] branch_type_bus,
    output logic [4:0] [3:0] ALU_op,
    output logic [9:0] [31:0] fu_bus,
    output logic [3:0] consumed_bus, 
    output logic [4:0] valid_in_bus // both 1 hot
);  


    always_comb begin
        fu_bus          = '0;
        load            = '0;
        branch_type_bus = '{default: NB};
        ROB_entry_bus   = '0;
        valid_in_bus    = '0;
        consumed_bus    = '0;

        if (ready_bus[0]) begin
            if (rs0_data.valid_operands && ~rs0_data.ALU_op[3]) begin
                fu_bus[0] = rs0_data.rs1;
                fu_bus[1] = rs0_data.rs2;
                load[0] = rs0_data.load;
                branch_type_bus[0] = rs0_data.branch_type;
                consumed_bus[0] = 1;
                ROB_entry_bus[0] = rs0_data.ROB_entry;
                valid_in_bus[0] = 1;
                ALU_op[0] = rs0_data.ALU_op;
            end
            else if (rs1_data.valid_operands && ~rs1_data.ALU_op[3]) begin
                fu_bus[0] = rs1_data.rs1;
                fu_bus[1] = rs1_data.rs2;
                load[0] = rs1_data.load;
                branch_type_bus[0] = rs1_data.branch_type;
                consumed_bus[1] = 1;
                ROB_entry_bus[0] = rs1_data.ROB_entry;
                valid_in_bus[0] = 1;
                ALU_op[0] = rs1_data.ALU_op;
            end
            else if (rs2_data.valid_operands && ~rs2_data.ALU_op[3]) begin
                fu_bus[0] = rs2_data.rs1;
                fu_bus[1] = rs2_data.rs2;
                load[0] = rs2_data.load;
                branch_type_bus[0] = rs2_data.branch_type;
                consumed_bus[2] = 1;
                ROB_entry_bus[0] = rs2_data.ROB_entry;
                valid_in_bus[0] = 1;
                ALU_op[0] = rs2_data.ALU_op;
            end
            else if (rs3_data.valid_operands && ~rs3_data.ALU_op[3]) begin
                fu_bus[0] = rs3_data.rs1;
                fu_bus[1] = rs3_data.rs2;
                load[0] = rs3_data.load;
                branch_type_bus[0] = rs3_data.branch_type;
                consumed_bus[3] = 1;
                ROB_entry_bus[0] = rs3_data.ROB_entry;
                valid_in_bus[0] = 1;
                ALU_op[0] = rs3_data.ALU_op;
            end
        end

        if (ready_bus[1]) begin
            if (rs3_data.valid_operands && ~rs3_data.ALU_op[3] && ~consumed_bus[3]) begin
                fu_bus[2] = rs3_data.rs1;
                fu_bus[3] = rs3_data.rs2;
                load[1] = rs3_data.load;
                branch_type_bus[1] = rs3_data.branch_type;
                consumed_bus[3] = 1;
                ROB_entry_bus[1] = rs3_data.ROB_entry;
                valid_in_bus[1] = 1;
                ALU_op[1] = rs3_data.ALU_op;
            end
            else if (rs2_data.valid_operands && ~rs2_data.ALU_op[3] && ~consumed_bus[2]) begin
                fu_bus[2] = rs2_data.rs1;
                fu_bus[3] = rs2_data.rs2;
                load[1] = rs2_data.load;
                branch_type_bus[1] = rs2_data.branch_type;
                consumed_bus[2] = 1;
                ROB_entry_bus[1] = rs2_data.ROB_entry;
                valid_in_bus[1] = 1;
                ALU_op[1] = rs2_data.ALU_op;
            end
            else if (rs1_data.valid_operands && ~rs1_data.ALU_op[3] && ~consumed_bus[1]) begin
                fu_bus[2] = rs1_data.rs1;
                fu_bus[3] = rs1_data.rs2;
                load[1] = rs1_data.load;
                branch_type_bus[1] = rs1_data.branch_type;
                consumed_bus[1] = 1;
                ROB_entry_bus[1] = rs1_data.ROB_entry;
                valid_in_bus[1] = 1;
                ALU_op[1] = rs1_data.ALU_op;
            end
            else if (rs0_data.valid_operands && ~rs0_data.ALU_op[3] && ~consumed_bus[0]) begin
                fu_bus[2] = rs0_data.rs1;
                fu_bus[3] = rs0_data.rs2;
                load[1] = rs0_data.load;
                branch_type_bus[1] = rs0_data.branch_type;
                consumed_bus[0] = 1;
                ROB_entry_bus[1] = rs0_data.ROB_entry;
                valid_in_bus[1] = 1;
                ALU_op[1] = rs0_data.ALU_op;
            end
        end

        if (ready_bus[2]) begin
            if (rs0_data.valid_operands && (rs0_data.ALU_op == MUL || rs0_data.ALU_op == MULH)) begin
                fu_bus[4] = rs0_data.rs1;
                fu_bus[5] = rs0_data.rs2;
                consumed_bus[0] = 1;
                ROB_entry_bus[2] = rs0_data.ROB_entry;
                valid_in_bus[2] = 1;
                ALU_op[2] = rs0_data.ALU_op;
            end
            else if (rs1_data.valid_operands && (rs1_data.ALU_op == MUL || rs1_data.ALU_op == MULH)) begin
                fu_bus[4] = rs1_data.rs1;
                fu_bus[5] = rs1_data.rs2;
                consumed_bus[1] = 1;
                ROB_entry_bus[2] = rs1_data.ROB_entry;
                valid_in_bus[2] = 1;
                ALU_op[2] = rs1_data.ALU_op;
            end
            else if (rs2_data.valid_operands && (rs2_data.ALU_op == MUL || rs2_data.ALU_op == MULH)) begin
                fu_bus[4] = rs2_data.rs1;
                fu_bus[5] = rs2_data.rs2;
                consumed_bus[2] = 1;
                ROB_entry_bus[2] = rs2_data.ROB_entry;
                valid_in_bus[2] = 1;
                ALU_op[2] = rs2_data.ALU_op;
            end
            else if (rs3_data.valid_operands && (rs3_data.ALU_op == MUL || rs3_data.ALU_op == MULH)) begin
                fu_bus[4] = rs3_data.rs1;
                fu_bus[5] = rs3_data.rs2;
                consumed_bus[3] = 1;
                ROB_entry_bus[2] = rs3_data.ROB_entry;
                valid_in_bus[2] = 1;
                ALU_op[2] = rs3_data.ALU_op;
            end
        end

        if (ready_bus[3]) begin
            if (rs0_data.valid_operands && (rs0_data.ALU_op == DIV || rs0_data.ALU_op == REMU)) begin
                fu_bus[6] = rs0_data.rs1;
                fu_bus[7] = rs0_data.rs2;
                consumed_bus[0] = 1;
                ROB_entry_bus[3] = rs0_data.ROB_entry;
                valid_in_bus[3] = 1;
                ALU_op[3] = rs0_data.ALU_op;
            end
            else if (rs1_data.valid_operands && (rs1_data.ALU_op == DIV || rs1_data.ALU_op == REMU)) begin
                fu_bus[6] = rs1_data.rs1;
                fu_bus[7] = rs1_data.rs2;
                consumed_bus[1] = 1;
                ROB_entry_bus[3] = rs1_data.ROB_entry;
                valid_in_bus[3] = 1;
                ALU_op[3] = rs1_data.ALU_op;
            end
            else if (rs2_data.valid_operands && (rs2_data.ALU_op == DIV || rs2_data.ALU_op == REMU)) begin
                fu_bus[6] = rs2_data.rs1;
                fu_bus[7] = rs2_data.rs2;
                consumed_bus[2] = 1;
                ROB_entry_bus[3] = rs2_data.ROB_entry;
                valid_in_bus[3] = 1;
                ALU_op[3] = rs2_data.ALU_op;
            end
            else if (rs3_data.valid_operands && (rs3_data.ALU_op == DIV || rs3_data.ALU_op == REMU)) begin
                fu_bus[6] = rs3_data.rs1;
                fu_bus[7] = rs3_data.rs2;
                consumed_bus[3] = 1;
                ROB_entry_bus[3] = rs3_data.ROB_entry;
                valid_in_bus[3] = 1;
                ALU_op[3] = rs3_data.ALU_op;
            end
        end

        if (ready_bus[4]) begin
            if (rs0_data.valid_operands && (rs0_data.ALU_op == SLL || rs0_data.ALU_op == SRL || rs0_data.ALU_op == SRA)) begin
                fu_bus[8] = rs0_data.rs1;
                fu_bus[9] = rs0_data.rs2;
                consumed_bus[0] = 1;
                ROB_entry_bus[4] = rs0_data.ROB_entry;
                valid_in_bus[4] = 1;
                ALU_op[4] = rs0_data.ALU_op;
            end
            else if (rs1_data.valid_operands && (rs1_data.ALU_op == SLL || rs1_data.ALU_op == SRL || rs1_data.ALU_op == SRA)) begin
                fu_bus[8] = rs1_data.rs1;
                fu_bus[9] = rs1_data.rs2;
                consumed_bus[1] = 1;
                ROB_entry_bus[4] = rs1_data.ROB_entry;
                valid_in_bus[4] = 1;
                ALU_op[4] = rs1_data.ALU_op;
            end
            else if (rs2_data.valid_operands && (rs2_data.ALU_op == SLL || rs2_data.ALU_op == SRL || rs2_data.ALU_op == SRA)) begin
                fu_bus[8] = rs2_data.rs1;
                fu_bus[9] = rs2_data.rs2;
                consumed_bus[2] = 1;
                ROB_entry_bus[4] = rs2_data.ROB_entry;
                valid_in_bus[4] = 1;
                ALU_op[4] = rs2_data.ALU_op;
            end
            else if (rs3_data.valid_operands && (rs3_data.ALU_op == SLL || rs3_data.ALU_op == SRL || rs3_data.ALU_op == SRA)) begin
                fu_bus[8] = rs3_data.rs1;
                fu_bus[9] = rs3_data.rs2;
                consumed_bus[3] = 1;
                ROB_entry_bus[4] = rs3_data.ROB_entry;
                valid_in_bus[4] = 1;
                ALU_op[4] = rs3_data.ALU_op;
            end
        end
    end
endmodule
