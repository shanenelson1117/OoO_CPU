// Author: Shane Nelson
// Project: OoO CPU
// File: Integer Multiply Functional Unit
// Stage: Execute

`include "structs.sv"

module multiply (
  input logic [31:0] A, B,      // register operands
  input logic [3:0] rs_rob_entry,
  input logic valid_in, yumi_in, reset, clk,  // inputs are valid, system ready, rst, clk, high order bits?
  input logic [3:0] ALUop,
  output logic valid_out, ready,     // output is valid, FU ready for input, 
  output CDB_packet_t out
);
  import structs_pkg::*;

  logic [31:0] multiplier, multiplicand;
  logic [31:0] P, result;
  logic [63:0] product_inter;
  logic loadregs, shiftregs, addregs, decr_P, mul_h;
  logic [3:0] curr_rob;

  assign multiplier = A;
  assign multiplicand = B;


  mult_datapath multiply_dp(.*);
  mult_control multiply_cu(.*);

  assign result = mul_h ? product_inter[63:32] : product_inter[31:0];
  
  assign out.dest_ROB_entry = curr_rob;
  assign out.result = result;
  assign out.branch_result = 1'b0;
  assign out.load_step1 = 0;

  always_ff @(posedge clk) begin
        if (reset) begin
            curr_rob <= 4'b0;
            mul_h <= 0;
        end else if (valid_in) begin
            curr_rob <= rs_rob_entry;
            mul_h <= ALUop[0];
        end else if (yumi_in) begin
            curr_rob <= 4'b0;
            mul_h <= 0;
        end
    end

endmodule

// implement booth's algorithm
module mult_datapath (
  output logic [63:0] product_inter,
  output logic [31:0] P,
  input logic [31:0] multiplier, multiplicand,
  input logic clk, loadregs, shiftregs, addregs, decr_P
);
  logic Q1;
  logic [31:0] A, B, Q;

  // compute arithmetic
  always_ff @(posedge clk) begin
    if (loadregs) begin
      A <= 0; Q1 <= 0; P <= 32;
      B <= multiplicand;
      Q <= multiplier;
    end
    if (decr_P) P <= P - 1;
    if (addregs) begin
      if (({Q[0], Q1} == 2'b00) | ({Q[0], Q1} == 2'b11)) A <= A;
      else if ({Q[0], Q1} == 2'b01) A <= A + B;
      else A <= A - B;
    end
    if (shiftregs) begin
      {A, Q, Q1} <= {A[31], A, Q};
    end
  end

  assign product_inter = {A, Q};
endmodule

module mult_control (
  input logic valid_in, clk, reset, yumi_in,
  input logic [31:0] P,
  output logic loadregs, shiftregs, addregs, decr_P, valid_out, ready
);
  
  enum logic [1:0] {s_idle = 2'b00, s_add = 2'b01, s_shift = 2'b10, s_done = 2'b11} ps, ns;

  // assign control signals
  assign loadregs = (ps == s_idle) & valid_in;
  assign shiftregs = (ps == s_shift);
  assign addregs = (ps == s_add);
  assign decr_P = (ps == s_add);
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
      s_idle: ns = valid_in ? s_add : s_idle;
      s_add: ns = s_shift;
      s_shift: ns = (P == 32'b0) ? s_done : s_add;
      s_done: ns = yumi_in ? s_idle : s_done;
    endcase 
  end 

endmodule
