// Author: Shane Nelson
// Project: OoO CPU
// File: Reservation Stations
// Stage: Issue -> Execute

`include "structs.svh"

module rs_module (
    input logic clk, reset, mispredicted, stall,
    input logic [2:0] rs_dest,
    input rs_data_t d,
    input CDB_packet_t CDB_in,
    input logic [3:0] consumed_bus,
    output logic [3:0] busy_bus,
    output rs_out_t rs0_data, rs1_data, rs2_data, rs3_data
);
    logic wr_en0, wr_en1, wr_en2, wr_en3;

    // Instantiate reservation stations
    rs rs0 (.CDB_in, .d, .rs_number(3'b000), .wr_en(wr_en0), .clk, .reset(mispredicted | reset |
            consumed_bus[0]), .busy(busy_bus[0]), .out(rs0_data));
    rs rs1 (.CDB_in, .d, .rs_number(3'b001), .wr_en(wr_en1), .clk, .reset(mispredicted | reset |
            consumed_bus[1]), .busy(busy_bus[1]), .out(rs1_data));
    rs rs2 (.CDB_in, .d, .rs_number(3'b010), .wr_en(wr_en2), .clk, .reset(mispredicted | reset |
            consumed_bus[2]), .busy(busy_bus[2]), .out(rs2_data));
    rs rs3 (.CDB_in, .d, .rs_number(3'b011), .wr_en(wr_en3), .clk, .reset(mispredicted | reset |
            consumed_bus[3]),.busy(busy_bus[3]), .out(rs3_data));
    assign wr_en0 = (rs_dest == 3'b000) & ~stall;
    assign wr_en1 = (rs_dest == 3'b001) & ~stall;
    assign wr_en2 = (rs_dest == 3'b010) & ~stall;
    assign wr_en3 = (rs_dest == 3'b011) & ~stall;

endmodule

// Individual reservation station
module rs (
    input CDB_packet_t CDB_in,
    input rs_data_t d,
    input logic [2:0] rs_number,
    input logic clk, reset, wr_en, // reset should be reset | mispredicted | FU_consumed
    output logic busy, // ready for FU, in progress

    output rs_out_t out
);
    rs_data_t q_reg;

    // register rs data
    always_ff @(posedge clk) begin
        if (reset) begin
            q_reg.Q_j <= 4'b0;
            q_reg.Q_k <= 4'b0;
            q_reg.V_j <= 32'b0;
            q_reg.V_k <= 32'b0;
            q_reg.load = 0;
            q_reg.ROB_entry <= 4'b0;
            q_reg.ALU_op <= '0;
            q_reg.branch_type <= 2'b0;
            q_reg.busy <= 1'b0;
        end
        else if ((wr_en)) begin
            q_reg <= d;
        end
        else begin
            // update operands with CDB data
            if (CDB_in.dest_ROB_entry == q_reg.Q_j && (q_reg.Q_j != 4'b0000) && (~CDB_in.load_step1)) begin
                q_reg.Q_j <= 4'b0;
                q_reg.V_j <= CDB_in.result;
            end
            else begin
                q_reg.Q_j <= q_reg.Q_j;
                q_reg.V_j <= q_reg.V_j;
            end
            if (CDB_in.dest_ROB_entry == q_reg.Q_k && (q_reg.Q_k != 4'b0000) && (~CDB_in.load_step1)) begin
                q_reg.Q_k <= 4'b0;
                q_reg.V_k <= CDB_in.result;
            end
            else begin
                q_reg.Q_k <= q_reg.Q_k;
                q_reg.V_k <= q_reg.V_k;
            end
            q_reg.ROB_entry <= q_reg.ROB_entry;
            q_reg.ALU_op <= q_reg.ALU_op;
            q_reg.branch_type <= q_reg.branch_type;
            q_reg.busy <= q_reg.busy;
            q_reg.load <= q_reg.load;
        end
    end


    logic valid_operands_reg;

    assign out.valid_operands = ((q_reg.Q_j == 4'b0) && (q_reg.Q_k == 4'b0) && (q_reg.ROB_entry != 4'b0));

    // assign outputs
    always_comb begin
        busy = q_reg.busy;
        out.ALU_op = q_reg.ALU_op;
        out.ROB_entry = q_reg.ROB_entry;
        out.branch_type =  q_reg.branch_type;
        out.rs1 = q_reg.V_j;
        out.rs2 = q_reg.V_k;
        out.load = q_reg.load;
    end
endmodule
