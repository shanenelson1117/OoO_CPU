// Author: Shane Nelson
// Project: OoO CPU
// File:  CSR Register Status Register
// Stage: Issue

`include "structs.sv"

module csr_regstat (
    input logic clk, reset, // reset should go high when a mispredicted branch is committed
    input logic issue_csr_valid_write, commit_csr_valid_write, // are we actually writing to register
    input logic [11:0] commit_csr_write_select,
    input logic [CSR_BITS:0] issue_csr_write_select, 
    input logic [3:0] commit_ROB, issue_ROB, // ROB number of committing instruction
    input logic csr_valid_read,
    output logic busy
);
    import structs_pkg::*;

    reg_stat_t [NUM_CSR:0] reg_stat_data; // data
    reg_stat_t d; // new data
    logic reset_enable, write_enable;

    always_comb begin
        d.ROB_number = issue_ROB;
        d.busy = 1'b1;
    end

    assign reset_enable = commit_csr_valid_write && (reg_stat_data[index(commit_csr_write_select)].ROB_number == commit_ROB)
                           && ~((issue_csr_write_select == index(commit_csr_write_select)) & issue_csr_valid_write);

    // Since we are stalling on busy, we do not want to overwrite regstat values
    assign write_enable = issue_csr_valid_write & ~reg_stat_data[issue_csr_write_select].busy;

    always_ff @(posedge clk) begin
      if (reset) begin
        reg_stat_data <= '0;
      end
      else if (write_enable) begin
        reg_stat_data[issue_csr_write_select] <= d;
      end
      if (reset_enable) begin
        reg_stat_data[index(commit_csr_write_select)] <= '0;
      end
    end

    assign busy = reg_stat_data[issue_csr_write_select].busy & ~csr_valid_read;


endmodule
