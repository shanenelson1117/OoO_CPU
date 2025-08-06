// Author: Shane Nelson
// Project: OoO CPU
// File: Reservation Stations
// Stage: Issue -> Execute

`include structs.svh

module rs_module (
    input logic clk, reset, mispredicted,
    input logic [2:0] rs_dest,
    input rs_data_t d,
    input CDB_packet_t CBD_in,
    input logic [3:0] consumed_bus,
    output logic [3:0] busy_bus,
    output rs_out_t rs0_data, rs1_data, rs2_data, rs3_data
);
    // Instantiate reservation stations
    rs rs0 (.CBD_in, .d, .rs_number(3'b000), .rs_dest, .clk, .reset(mispredicted | reset |
            consumed_bus[0]), .busy(busy_bus[0]), .out(rs0_data));
    rs rs1 (.CBD_in, .d, .rs_number(3'b001), .rs_dest, .clk, .reset(mispredicted | reset |
            consumed_bus[1]), .busy(busy_bus[1]), .out(rs1_data));
    rs rs2 (.CBD_in, .d, .rs_number(3'b010), .rs_dest, .clk, .reset(mispredicted | reset |
            consumed_bus[2]), .busy(busy_bus[2]), .out(rs2_data));
    rs rs3 (.CBD_in, .d, .rs_number(3'b011), .rs_dest, .clk, .reset(mispredicted | reset |
            consumed_bus[3]), .busy(busy_bus[3]), .out(rs3_data));

endmodule

// Individual reservation station
module rs (
    input CDB_packet_t CBD_in,
    input rs_data_t d,
    input logic [2:0] rs_number, rs_dest,
    input logic clk, reset, // reset should be reset | mispredicted | FU_consumed
    output logic busy, // ready for FU, in progress
    output rs_out_t out
);
    rs_data_t q_reg;

    // register rs data
    always_ff @(posedge clk) begin
        if (reset) begin
            q_reg.Q_j <= 3'b0;
            q_reg.Q_k <= 3'b0;
            q_reg.V_j <= 32'b0;
            q_reg.V_k <= 32'b0;
            q_reg.ROB_entry <= 4'b0;
            q_reg.ALU_op <= 3'b0;
            q_reg.branch_type <= 2'b0;
            q_reg.busy <= 1'b0;
        end
        else if ((rs_number == rs_dest)) begin
            q_reg <= d;
        end
        else begin
            // update operands with CDB data
            if (CBD_in.dest_ROB_entry == q_reg.Q_j) begin
                q_reg.Q_j <= 4'b0;
                q_reg.V_j <= CBD_in.result;
            end
            if (CBD_in.dest_ROB_entry == q_reg.Q_k) begin
                q_reg.Q_k <= 4'b0;
                q_reg.V_k <= CBD_in.result;
            end
        end
    end

    logic valid_operands_reg;

    // register valid operands signal to match timing with FU scheduler
    always_ff @(posedge clk) begin
        if (reset)
            valid_operands_reg <= 1'b0;
        else
            valid_operands_reg <= ((q_reg.Q_j == 3'b0) && (q_reg.Q_k == 3'b0));
    end

    assign out.valid_operands = valid_operands_reg;

    // assign outputs
    always_comb begin
        busy = q_reg.busy;
        out.ALU_op = q_reg.ALU_op;
        out.ROB_entry = q_reg.ROB_entry;
        out.branch_type =  q_reg.branch_type;
        out.rs1 = q_reg.V_j;
        out.rs2 = q_reg.V_k;
    end
endmodule