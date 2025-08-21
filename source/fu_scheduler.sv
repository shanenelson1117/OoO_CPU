// Author: Shane Nelson
// Project: OoO CPU
// File: Functional Unit Scheduler
// Stage: Execute

`include "structs.svh"

module fu_scheduler (
    input rs_out_t rs0_data, rs1_data, rs2_data, rs3_data,
    input logic [4:0] ready_bus,
    input logic clk, reset,
    output logic [3:0] ROB_entry,
    output logic load,
    output logic [2:0] branch_type,
    output logic [3:0] ALU_op,
    output logic [31:0] rs1, rs2,
    output logic [3:0] consumed_bus, 
    output logic [4:0] valid_in_bus // both 1 hot
);  

    logic [3:0] q, d;

    assign consumed_bus = d;

    always_comb begin
        if (rs0_data.valid_operands) begin

            ALU_op = rs0_data.ALU_op;
            ROB_entry = rs0_data.ROB_entry;
            branch_type = rs0_data.branch_type;
            rs1 = rs0_data.rs1;
            rs2 = rs0_data.rs2;
            load = rs0_data.load;

            if (~(rs0_data.ALU_op[3]) && ready_bus[0]) begin
                valid_in_bus = 5'b00001;
                d = 4'b0001;
                 
            end
            else if (~(rs0_data.ALU_op[3]) && ready_bus[1])  begin
                valid_in_bus = 5'b00010;
                d = 4'b0001;
                 
            end
            else if (((rs0_data.ALU_op == MUL) || (rs0_data.ALU_op == MULH)) && ready_bus[2]) begin
                valid_in_bus = 5'b00100;
                d = 4'b0001;
                 
            end
            else if (((rs0_data.ALU_op == DIV) || (rs0_data.ALU_op == REMU)) && ready_bus[3]) begin
                valid_in_bus = 5'b01000;
                d = 4'b0001;
                 
            end
            else if (((rs0_data.ALU_op == SRL) || (rs0_data.ALU_op == SRA) || (rs0_data.ALU_op == SLL)) 
                && ready_bus[4]) begin
                valid_in_bus = 5'b10000;
                d = 4'b0001;
            end
            else begin
                valid_in_bus = 5'b00000;
                d = 4'b0000;
    
            end
        end
        else if (rs1_data.valid_operands) begin

            ALU_op = rs1_data.ALU_op;
            ROB_entry = rs1_data.ROB_entry;
            branch_type = rs1_data.branch_type;
            rs1 = rs1_data.rs1;
            rs2 = rs1_data.rs2;
            load = rs1_data.load;

            if (~(rs1_data.ALU_op[3]) && ready_bus[0]) begin
                valid_in_bus = 5'b00001;
                d = 4'b0010;
                 
            end
            else if (~(rs1_data.ALU_op[3]) && ready_bus[1])  begin
                valid_in_bus = 5'b00010;
                d = 4'b0010;
                 
            end
            else if (((rs1_data.ALU_op == MUL) || (rs1_data.ALU_op == MULH)) && ready_bus[2]) begin
                valid_in_bus = 5'b00100;
                d = 4'b0010;
                 
            end
            else if (((rs1_data.ALU_op == DIV) || (rs1_data.ALU_op == REMU)) && ready_bus[3]) begin
                valid_in_bus = 5'b01000;
                d = 4'b0010;
                 
            end
            else if (((rs1_data.ALU_op == SRL) || (rs1_data.ALU_op == SRA) || (rs1_data.ALU_op == SLL)) 
                && ready_bus[4]) begin
                valid_in_bus = 5'b10000;
                d = 4'b0010;
            end  
            else begin
                valid_in_bus = 5'b00000;
                d = 4'b0000;
    
            end
        end
        else if (rs2_data.valid_operands) begin

            ALU_op = rs2_data.ALU_op;
            ROB_entry = rs2_data.ROB_entry;
            branch_type = rs2_data.branch_type;
            rs1 = rs2_data.rs1;
            rs2 = rs2_data.rs2;
            load = rs2_data.load;

            if (~(rs2_data.ALU_op[3]) && ready_bus[0]) begin
                valid_in_bus = 5'b00001;
                d = 4'b0100;
                 
            end
            else if (~(rs2_data.ALU_op[3]) && ready_bus[1])  begin
                valid_in_bus = 5'b00010;
                d = 4'b0100;
                 
            end
            else if (((rs2_data.ALU_op == MUL) || (rs2_data.ALU_op == MULH)) && ready_bus[2]) begin
                valid_in_bus = 5'b00100;
                d = 4'b0100;
                 
            end
            else if (((rs2_data.ALU_op == DIV) || (rs2_data.ALU_op == REMU)) && ready_bus[3]) begin
                valid_in_bus = 5'b01000;
                d = 4'b0100;
                 
            end
            else if (((rs2_data.ALU_op == SRL) || (rs2_data.ALU_op == SRA) || (rs2_data.ALU_op == SLL)) 
                && ready_bus[4]) begin
                valid_in_bus = 5'b10000;
                d = 4'b0100;
            end  
            else begin
                valid_in_bus = 5'b00000;
                d = 4'b0000;
                 
            end
        end

        else if (rs3_data.valid_operands) begin

            ALU_op = rs3_data.ALU_op;
            ROB_entry = rs3_data.ROB_entry;
            branch_type = rs3_data.branch_type;
            rs1 = rs3_data.rs1;
            rs2 = rs3_data.rs2;
            load = rs3_data.load;

            if (~(rs3_data.ALU_op[3]) && ready_bus[0]) begin
                valid_in_bus = 5'b00001;
                d = 4'b1000;
                 
            end
            else if (~(rs3_data.ALU_op[3]) && ready_bus[1])  begin
                valid_in_bus = 5'b00010;
                d = 4'b1000;
                 
            end
            else if (((rs3_data.ALU_op == MUL) || (rs3_data.ALU_op == MULH)) && ready_bus[2]) begin
                valid_in_bus = 5'b00100;
                d = 4'b1000;
                 
            end
            else if (((rs3_data.ALU_op == DIV) || (rs3_data.ALU_op == REMU)) && ready_bus[3]) begin
                valid_in_bus = 5'b01000;
                d = 4'b1000;
                 
            end
            else if (((rs3_data.ALU_op == SRL) || (rs3_data.ALU_op == SRA) || (rs3_data.ALU_op == SLL)) 
                && ready_bus[4]) begin
                valid_in_bus = 5'b10000;
                d = 4'b1000;
            end  
            else begin
                valid_in_bus = 5'b00000;
                d = 4'b0000;
                 
            end
        end
        else begin
            ALU_op = NOP;
            ROB_entry = 3'b0;
            branch_type = NB;
            rs1 = 32'b0;
            rs2 = 32'b0;
            valid_in_bus = 4'b0000;
            d = 4'b0;
            load = 0;
             
        end
    end
endmodule
