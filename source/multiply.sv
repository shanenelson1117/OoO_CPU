// Author: Shane Nelson
// Project: OoO CPU
// File: Integer Multiply Functional Unit
// Stage: Execute

`include "structs.svh"

module multiply (
  input logic [31:0] A, B,      // register operands
  input logic [3:0] rs_rob_entry,
  input logic valid_in, yumi_in, reset, clk,  // inputs are valid, system ready, rst, clk, high order bits?
  input ALU_op_t ALUop,
  output logic valid_out, ready,     // output is valid, FU ready for input, 
  output CDB_packet_t out
);
  logic [31:0] multiplier, multiplicand;
  logic [31:0] Q, P, result;
  logic [63:0] product_inter;
  logic loadregs, shiftregs, addregs, decr_P, mul_h;
  logic [3:0] curr_rob;

  assign multiplier = A;
  assign multiplicand = B;


  datapath multiply_dp(.*);
  control multiply_cu(.*);

  assign result = mul_h ? product_inter[63:32] : product_inter[31:0];
  
  assign out.dest_ROB_entry = curr_rob;
  assign out.result = result;
  assign out.branch_result = 1'b0;
  assign out.from_commit = 1'b0;
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
module datapath (
  output logic [63:0] product_inter,
  output logic [31:0] Q, P,
  input logic [31:0] multiplier, multiplicand,
  input logic clk, loadregs, shiftregs, addregs, decr_P
);
  logic Q1;
  logic [31:0] A, B;
  logic temp_C;

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

module control (
  input logic valid_in, clk, reset, yumi_in,
  input logic [31:0] Q, P,
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

`timescale 1ns / 1ps


module multiply_tb;

  logic [31:0] A, B;
  logic [3:0] rs_rob_entry;
  logic valid_in, yumi_in, reset, clk, ALUop;
  logic valid_out, ready;
  CDB_packet_t out;

  // Instantiate the multiply unit
  multiply uut (
    .A(A), .B(B),
    .rs_rob_entry(rs_rob_entry),
    .valid_in(valid_in),
    .yumi_in(yumi_in),
    .reset(reset),
    .clk(clk),
    .ALUop(ALUop),
    .valid_out(valid_out),
    .ready(ready),
    .out(out)
  );

  // Clock generation
  always #5 clk = ~clk; // 10ns clock period

  // Task to apply a multiply test
  task run_multiply_test(
    input logic [31:0] opA,
    input logic [31:0] opB,
    input logic opSel, // 0 = low, 1 = high
    input string desc
  );
    begin
      @(posedge clk);
      A = opA;
      B = opB;
      ALUop = opSel;
      rs_rob_entry = 4'd2;
      valid_in = 1;
      @(posedge clk);
      valid_in = 0;

      // Wait for result
      wait (valid_out);
      $display("[%0t] %s: %0d * %0d => result = %0d (0x%h)", $time, desc, opA, opB, out.result, out.result);
      
      yumi_in = 1;
      @(posedge clk);
      yumi_in = 0;
    end
  endtask

  initial begin
    // Initial values
    clk = 0;
    reset = 1;
    valid_in = 0;
    yumi_in = 0;
    A = 0;
    B = 0;
    ALUop = 0;
    rs_rob_entry = 0;

    // Reset sequence
    repeat (2) @(posedge clk);
    reset = 0;
    repeat (2) @(posedge clk);

    // Run tests
    run_multiply_test(32'd5, 32'd7, 0, "Low part multiply (5 * 7)");
    run_multiply_test(32'd5, 32'd7, 1, "High part multiply (5 * 7)");
    run_multiply_test(-32'd10, 32'd3, 0, "Low part multiply (-10 * 3)");
    run_multiply_test(32'd4294967295, 32'd2, 0, "Low part multiply (UINT32_MAX * 2)");
    run_multiply_test(32'd65536, 32'd65536, 1, "High part multiply (65536 * 65536)");

    // Finish simulation
    $display("All tests complete.");
    $finish;
  end

endmodule
