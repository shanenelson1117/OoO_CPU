// Author: Shane Nelson
// Project: OoO CPU
// File: Register Status Register
// Stage: Issue

/*
If both regstat.commit_destination.ROB == commit.ROB, then regstat.commit_destination.busy = 0,
if not then do not update. Need some way to tell rs scheduler that one of the operands is invalid, due to 
it being a branch, a store, or an arithmetic immediate instruction.

If either of Q_j or Q_k are not 0, then we should read the zero register. If either are 0 then we 
should read register rs1 and/or rs2. Later have muxes and such that will correctly place intermediates
into rs.
*/

`include "structs.svh"

module regstat (
    input logic [4:0] rs1, rs2, // from instruction in issue stage
    input logic clk, reset, // reset should go high when a mispredicted branch is committed
    input logic issue_writes, // does the issued instruction write to a register, also should be 
    // low if no instruction is issued due to no open reserv stats
    input logic RegWrite, // are we actually writing to register
    input logic [4:0] commit_dest, issue_dest, // destination register of committing instruction
    input logic [3:0] commit_ROB, issue_ROB, // ROB number of committing instruction
    output [3:0] Q_j, Q_k // ROB numbers for unready instructions
);

    reg_stat_t reg_status_table [31:0]; // data
    reg_stat_t d; // new data
    logic [31:0] reset_bus, enable_bus; // one-hot enable and reset buses
    logic reset_enable;

    // new regstat_entry conditionally applied to specified entry
    always_comb begin
        d.ROB_number = issue_ROB;
        d.busy = 1'b1;
    end

    // only 0-out the entry if the committed instruction is the most recent writer to the register
    assign reset_enable = (reg_status_table[commit_dest].ROB_number == commit_ROB);

    // Generate one-hot enable and reset buses
    five_to_thirtytwo_decoder reset_decode (.sel(commit_dest), .enable(reset_enable), .out(reset_bus));
    five_to_thirtytwo_decoder enable_decode (.sel(issue_dest), .enable(issue_writes), .out(enable_bus));


    // generate entries
    genvar j;
    generate
        for (j = 1; j < 32; j++) begin:reg_stat_entries
            reg_status_entry stat_i (.clk, .reset(reset), .clear(reset_bus[j] & RegWrite),
                .write_en(enable_bus[j]), .d, .q(reg_status_table[j]));
        end
    endgenerate

    // read ROB_number fields of operands
    always_comb begin
        Q_j = reg_status_table[rs1].ROB_number;
        Q_k = reg_status_table[rs2].ROB_number;
    end

endmodule

// single entry
module reg_status_entry (
    input logic clk, reset,
    input logic write_en,
    input reg_stat_t d,
    output reg_stat_t q
);
    always_ff @(posedge clk or posedge reset) begin
        if (reset)
            q <= '{default: '0};
        else if (clear)
            q <= '{default: '0};
        else if (write_en)
            q <= d;
    end

endmodule

// one-hot generator
module five_to_thirtytwo_decoder (
    input  logic [4:0] sel,
    input  logic enable,
    output logic [31:0] out
);
    always_comb begin
        out = 32'b0;
        // handle 0-reg queries
        if (enable && (sel != 5'b0)) begin
            out[sel] = 1'b1; 
        end
    end
endmodule