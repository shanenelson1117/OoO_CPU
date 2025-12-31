// Author: Shane Nelson
// Project: OoO CPU
// File:  CSR Register Status Register
// Stage: Issue

`include "structs.sv"

module csr_regstat (
    input logic [CSR_BITS:0] csr_read_select,
    input logic clk, reset, // reset should go high when a mispredicted branch is committed
    input logic issue_csr_valid_write, // does the issued instruction write to a register, also should be 
    // low if no instruction is issued due to no open reserv stats
    input logic commit_csr_valid_write, // are we actually writing to register
    input logic [CSR_BITS:0] commit_dest, issue_dest, // destination register of committing instruction
    input logic [3:0] commit_ROB, issue_ROB, // ROB number of committing instruction
    input logic stall,
    output logic [3:0] Q_csr,
    output logic csr_reg_busy
);
    import structs_pkg::*;

    reg_stat_t reg_status_table [NUM_CSR-1:0]; // data
    reg_stat_t d; // new data
    logic [NUM_CSR-1:0] reset_bus, enable_bus; // one-hot enable and reset buses
    logic reset_enable;

    // new regstat_entry conditionally applied to specified entry
    always_comb begin
        d.ROB_number = issue_ROB;
        d.busy = 1'b1;
    end

    csr_bits_decoder enable_decode (
        .sel(issue_dest),
        .enable(issue_csr_valid_write),
        .out(enable_bus)
    );

    // only 0-out the entry if the committed instruction is the most recent writer to the register
    assign reset_enable = (reg_status_table[commit_dest].ROB_number == commit_ROB) && ~((issue_dest == commit_dest) & issue_csr_valid_write);

    // Generate one-hot enable and reset buses
    csr_bits_decoder reset_decode (.sel(commit_dest), .enable(reset_enable), .out(reset_bus));


    // generate entries
    genvar j;
    generate
        for (j = 0; j < NUM_CSR; j++) begin:reg_stat_entries
            csr_reg_status_entry stat_i (.clk, .reset(reset), .clear(reset_bus[j] & commit_csr_valid_write),
                .write_en(enable_bus[j]), .d(d), .q(reg_status_table[j]), .stall);
        end
    endgenerate


    // read ROB_number fields of operands
    always_comb begin
        Q_csr = reg_status_table[csr_read_select].ROB_number;
        csr_reg_busy = reg_status_table[csr_read_select].busy;
    end

endmodule

// single entry
module csr_reg_status_entry (
    input logic clk, reset,
    input logic write_en,
    input logic clear,
    input logic stall,
    input reg_stat_t d,
    output reg_stat_t q
);
    always_ff @(posedge clk) begin
        if (reset)
            q <= '{default: '0};
        else if (clear)
            q <= '{default: '0};
        else if (write_en && !stall)
            q <= d;
        
    end

endmodule

// one-hot generator
module csr_bits_decoder (
    input  logic [CSR_BITS:0] sel,
    input  logic enable,
    output logic [NUM_CSR-1:0] out
);
    always_comb begin
        out = '0;
        // handle 0-reg queries
        if (enable && (sel != '1)) begin
            out[sel] = 1'b1; 
        end
    end
endmodule

