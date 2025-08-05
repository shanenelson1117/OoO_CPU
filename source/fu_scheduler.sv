// Author: Shane Nelson
// Project: OoO CPU
// File: Functional Unit Scheduler
// Stage: Execute

`include structs.svh

module fu_scheduler (
    input rs_out_t rs0_data, rs1_data, rs2_data, rs3_data,
    input logic [3:0] ready_bus,
    input logic clk, reset,
    output logic [2:0] ROB_entry,
    output logic ALU_op,
    output logic [1:0] branch_type,
    output logic [31:0] rs1, rs2,
    output logic [3:0] consumed_bus, valid_in_bus // both 1 hot
);  
    enum logic {consumed = 1'b0, waiting = 1'b1} ps, ns;

    logic [3:0] q, d;
    // track consumed signals
    always_ff @(posedge clk) begin
        if (reset) begin
            ps <= waiting;
        end
        else begin
            ps <= ns;
        end
    end 

    always_ff @(posedge clk) begin
        if (reset) begin
            q <= 4'bX;
        end
        else begin
            q <= d;
        end
    end

    assign consumed_bus = (ps == consumed) ? q : 4'b0000;

    always_comb begin
        if (rs0_data.valid_operands) begin

            ALU_op = rs0_data.ALU_op[0];
            ROB_entry = rs0_data.ROB_entry;
            branch_type = rs0_data.branch_type;
            rs1 = rs0_data.rs1;
            rs2 = rs0_data.rs2;

            if (((rs0_data.ALU_op == 3'b0) || (rs0_data.ALU_op == 3'b001)) && ready_bus[0]) begin
                valid_in_bus = 4'b0001;
                d = 4'b0001;
                ns = consumed;
            end
            else if (((rs0_data.ALU_op == 3'b0) || (rs0_data.ALU_op == 3'b001)) && ready_bus[1]) begin
                valid_in_bus = 4'b0010;
                d = 4'b0001;
                ns = consumed;
            end
            else if (((rs0_data.ALU_op == 3'b100) || (rs0_data.ALU_op == 3'b101)) && ready_bus[2]) begin
                valid_in_bus = 4'b0100;
                d = 4'b0001;
                ns = consumed;
            end
            else if (((rs0_data.ALU_op == 3'b011) || (rs0_data.ALU_op == 3'b010)) && ready_bus[3]) begin
                valid_in_bus = 4'b1000;
                d = 4'b0001;
                ns = consumed;
            end
            else begin
                valid_in_bus = 4'b0000;
                d = 4'bX;
                ns = waiting;
            end
        end
        else if (rs1_data.valid_operands) begin

            ALU_op = rs1_data.ALU_op[0];
            ROB_entry = rs1_data.ROB_entry;
            branch_type = rs1_data.branch_type;
            rs1 = rs1_data.rs1;
            rs2 = rs1_data.rs2;

            if (((rs1_data.ALU_op == 3'b0) || (rs1_data.ALU_op == 3'b001)) && ready_bus[0]) begin
                valid_in_bus = 4'b0001;
                d = 4'b0010;
                ns = consumed;
            end
            else if (((rs1_data.ALU_op == 3'b0) || (rs1_data.ALU_op == 3'b001)) && ready_bus[1]) begin
                valid_in_bus = 4'b0010;
                d = 4'b0010;
                ns = consumed;
            end
            else if (((rs1_data.ALU_op == 3'b100) || (rs1_data.ALU_op == 3'b101)) && ready_bus[2]) begin
                valid_in_bus = 4'b0100;
                d = 4'b0010;
                ns = consumed;
            end
            else if (((rs1_data.ALU_op == 3'b011) || (rs1_data.ALU_op == 3'b010)) && ready_bus[3]) begin
                valid_in_bus = 4'b1000;
                d = 4'b0010;
                ns = consumed;
            end
            else begin
                valid_in_bus = 4'b0000;
                d = 4'X;
                ns = waiting;
            end
        end
        else if (rs2_data.valid_operands) begin

            ALU_op = rs2_data.ALU_op[0];
            ROB_entry = rs2_data.ROB_entry;
            branch_type = rs2_data.branch_type;
            rs1 = rs2_data.rs1;
            rs2 = rs2_data.rs2;

            if (((rs2_data.ALU_op == 3'b0) || (rs2_data.ALU_op == 3'b001)) && ready_bus[0]) begin
                valid_in_bus = 4'b0001;
                d = 4'b0100;
                ns = consumed;
            end
            else if (((rs2_data.ALU_op == 3'b0) || (rs2_data.ALU_op == 3'b001)) && ready_bus[1]) begin
                valid_in_bus = 4'b0010;
                d = 4'b0100;
                ns = consumed;
            end
            else if (((rs2_data.ALU_op == 3'b100) || (rs2_data.ALU_op == 3'b101)) && ready_bus[2]) begin
                valid_in_bus = 4'b0100;
                d = 4'b0100;
                ns = consumed;
            end
            else if (((rs2_data.ALU_op == 3'b011) || (rs2_data.ALU_op == 3'b010)) && ready_bus[3]) begin
                valid_in_bus = 4'b1000;
                d = 4'b0100;
                ns = consumed;
            end
            else begin
                valid_in_bus = 4'b0000;
                d = 4'bX;
                ns = waiting;
            end
        end

        else if (rs3_data.valid_operands) begin

            ALU_op = rs3_data.ALU_op[0];
            ROB_entry = rs3_data.ROB_entry;
            branch_type = rs3_data.branch_type;
            rs1 = rs3_data.rs1;
            rs2 = rs3_data.rs2;

            if (((rs3_data.ALU_op == 3'b0) || (rs3_data.ALU_op == 3'b001)) && ready_bus[0]) begin
                valid_in_bus = 4'b0001;
                d = 4'b1000;
                ns = consumed;
            end
            else if (((rs3_data.ALU_op == 3'b0) || (rs3_data.ALU_op == 3'b001)) && ready_bus[1]) begin
                valid_in_bus = 4'b0010;
                d = 4'b1000;
                ns = consumed;
            end
            else if (((rs3_data.ALU_op == 3'b100) || (rs3_data.ALU_op == 3'b101)) && ready_bus[2]) begin
                valid_in_bus = 4'b0100;
                d = 4'b1000;
                ns = consumed;
            end
            else if (((rs3_data.ALU_op == 3'b011) || (rs3_data.ALU_op == 3'b010)) && ready_bus[3]) begin
                valid_in_bus = 4'b1000;
                d = 4'b1000;
                ns = consumed;
            end
            else begin
                valid_in_bus = 4'b0000;
                d = 4'bX;
                ns = waiting;
            end
        end
        else begin
            ALU_op = 1'bX;
            ROB_entry = 3'bX;
            branch_type = 2'bX;
            rs1 = 32'bX;
            rs2 = 32'bX;
            valid_in_bus = 4'b0000;
            d = 4'bX;
            ns = waiting;
        end
    end
endmodule