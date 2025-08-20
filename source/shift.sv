// Author: Shane Nelson
// Project: OoO CPU
// File: Shift Functional Unit
// Stage: Execute

`include "structs.svh"

module shift (
  input logic [31:0] A, B,      // register operands
  input logic [3:0] rs_rob_entry, ALUop,
  input logic valid_in, yumi_in, reset, clk,  // inputs are valid, system ready, rst, clk
  output logic valid_out, ready,     // output is valid, FU ready for input, 
  output CDB_packet_t out
);
  logic [31:0] shifted, shifter;
  logic [31:0] Q, P, result, output_inter;
  logic [63:0] product_inter;
  logic loadregs, shiftregs;
  logic [3:0] curr_rob, ALUop_reg;

  assign shifted = A;
  assign shifter = B;


  datapath shift_dp(.*);
  control shift_cu(.*);

  assign result = output_inter;
  
  assign out.dest_ROB_entry = curr_rob;
  assign out.result = result;
  assign out.branch_result = 1'b0;
  assign out.from_commit = 1'b0;
  assign out.load_step1 = 0;

  always_ff @(posedge clk) begin
        if (reset) begin
            curr_rob <= 4'b0;
            ALUop_reg <= '0;
        end else if (valid_in) begin
            curr_rob <= rs_rob_entry;
            ALUop_reg <= ALUop;
        end else if (yumi_in) begin
            curr_rob <= 4'b0;
            ALUop_reg <= '0;
        end
    end

endmodule

module datapath (
  output logic [31:0] output_inter,
  output logic [4:0] P,
  input logic [31:0] shifter, shifted,
  input logic clk, loadregs, shiftregs,
  input logic [3:0] ALUop_reg
);
  logic [31:0] A;

  // compute arithmetic
  always_ff @(posedge clk) begin
    if (loadregs) begin
      A <= shifted;
      P <= shifter[4:0];
    end
    if (shiftregs) begin
        if (ALUop_reg == SLL) begin
            A <= A << 1;
        end 
        else begin
          if (ALUop_reg == SRA) begin
              A <= {{A[31]}, A[31:1]};
          end else begin
              A <= {{1'b0, A[31:1]}};
          end 
          P <= P - 1;      
        end
    end
  end 

  assign output_inter = A;

endmodule

module control (
  input logic valid_in, clk, reset, yumi_in,
  input logic [4:0] P,
  output logic loadregs, shiftregs, valid_out, ready
);
  
  enum logic [1:0] {s_idle = 2'b00, s_shift = 2'b10, s_done = 2'b11} ps, ns;

  // assign control signals
  assign loadregs = (ps == s_idle) & valid_in;
  assign shiftregs = (ps == s_shift);
  assign valid_out = (ps == s_done);
  assign ready = (ps == s_idle);

  // on reset go to idle state
  always_ff @(posedge clk) begin
    if (reset)
      ps <= s_idle;
    else
      ps <= ns;
  end 
  // update state
  always_comb begin
    case (ps)
      s_idle: ns = valid_in ? s_shift : s_idle;
      s_shift: ns = (P == 5'b0) ? s_done : s_shift;
      s_done: ns = yumi_in ? s_idle : s_done;
    endcase 
  end 
endmodule

