// Author: Shane Nelson
// Project: OoO CPU
// File: Integer Multiply Functional Unit
// note: carry out is not currently used

module multiply (
  input logic [31:0] multiplier, multiplicand,
  input logic valid_in, yumi_in, reset, clk,
  output logic valid_out, ready, carry_out,
  output logic [63:0] product
);

  logic [31:0] Q, P;
  logic loadregs, shiftregs, addregs, decr_P;

  datapath multiply_dp(.*);
  control multiply_cu(.*);
endmodule

// implement booth's algorithm
module datapath (
  output logic [63:0] product,
  output logic [31:0] Q, P,
  output logic carry_out,
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

  assign product = {A, Q};
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

`timescale 1ns/1ps

module multiply_tb;

  // Inputs
  logic signed [31:0] multiplier, multiplicand;
  logic valid_in, yumi_in, reset, clk;

  // Outputs
  logic valid_out, ready, carry_out;
  logic signed [63:0] product;

  // Instantiate DUT
  multiply dut (
    .multiplier(multiplier),
    .multiplicand(multiplicand),
    .valid_in(valid_in),
    .yumi_in(yumi_in),
    .reset(reset),
    .clk(clk),
    .valid_out(valid_out),
    .ready(ready),
    .carry_out(carry_out),
    .product(product)
  );

  // Clock generation
  initial clk = 0;
  always #5 clk = ~clk; // 10ns period

  // Test sequence
  initial begin
    logic signed [63:0] expected;
    logic signed [31:0] a, b;

    $display("Starting enumerated multiply testbench");
    
    // Initialize inputs
    multiplier = 0;
    multiplicand = 0;
    valid_in = 0;
    yumi_in = 0;
    reset = 1;

    // Apply reset
    #20;
    reset = 0;

    // -------------------
    // Test 1: 7 x 6
    a = 7; b = 6; expected = a * b;
    multiplier = a; multiplicand = b;
    valid_in = 1; @(posedge clk); valid_in = 0;
    wait (valid_out);
    $display("Test 1: %0d x %0d = %0d (Expected: %0d)", a, b, $signed(product), expected);
    if ($signed(product) !== expected) $display("ERROR: Mismatch."); else $display("PASS");
    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // -------------------
    // Test 2: -7 x 6
    a = -7; b = 6; expected = a * b;
    multiplier = a; multiplicand = b;
    valid_in = 1; @(posedge clk); valid_in = 0;
    wait (valid_out);
    $display("Test 2: %0d x %0d = %0d (Expected: %0d)", a, b, $signed(product), expected);
    if ($signed(product) !== expected) $display("ERROR: Mismatch."); else $display("PASS");
    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // -------------------
    // Test 3: 7 x -6
    a = 7; b = -6; expected = a * b;
    multiplier = a; multiplicand = b;
    valid_in = 1; @(posedge clk); valid_in = 0;
    wait (valid_out);
    $display("Test 3: %0d x %0d = %0d (Expected: %0d)", a, b, $signed(product), expected);
    if ($signed(product) !== expected) $display("ERROR: Mismatch."); else $display("PASS");
    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // -------------------
    // Test 4: -7 x -6
    a = -7; b = -6; expected = a * b;
    multiplier = a; multiplicand = b;
    valid_in = 1; @(posedge clk); valid_in = 0;
    wait (valid_out);
    $display("Test 4: %0d x %0d = %0d (Expected: %0d)", a, b, $signed(product), expected);
    if ($signed(product) !== expected) $display("ERROR: Mismatch."); else $display("PASS");
    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // -------------------
    // Test 5: 0 x 12345
    a = 0; b = 12345; expected = a * b;
    multiplier = a; multiplicand = b;
    valid_in = 1; @(posedge clk); valid_in = 0;
    wait (valid_out);
    $display("Test 5: %0d x %0d = %0d (Expected: %0d)", a, b, $signed(product), expected);
    if ($signed(product) !== expected) $display("ERROR: Mismatch."); else $display("PASS");
    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // -------------------
    // Test 6: 12345 x 0
    a = 12345; b = 0; expected = a * b;
    multiplier = a; multiplicand = b;
    valid_in = 1; @(posedge clk); valid_in = 0;
    wait (valid_out);
    $display("Test 6: %0d x %0d = %0d (Expected: %0d)", a, b, $signed(product), expected);
    if ($signed(product) !== expected) $display("ERROR: Mismatch."); else $display("PASS");
    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // -------------------
    // Test 7: max int x 2
    a = 32'sh7FFFFFFF; b = 2; expected = a * b;
    multiplier = a; multiplicand = b;
    valid_in = 1; @(posedge clk); valid_in = 0;
    wait (valid_out);
    $display("Test 7: %0d x %0d = %0d (Expected: %0d)", a, b, $signed(product), expected);
    if ($signed(product) !== expected) $display("ERROR: Mismatch."); else $display("PASS");
    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // -------------------
    // Test 8: min int x 2
    a = 32'sh80000000; b = 2; expected = a * b;
    multiplier = a; multiplicand = b;
    valid_in = 1; @(posedge clk); valid_in = 0;
    wait (valid_out);
    $display("Test 8: %0d x %0d = %0d (Expected: %0d)", a, b, $signed(product), expected);
    if ($signed(product) !== expected) $display("ERROR: Mismatch."); else $display("PASS");
    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // -------------------
    // Test 9: -1 x 1
    a = -1; b = 1; expected = a * b;
    multiplier = a; multiplicand = b;
    valid_in = 1; @(posedge clk); valid_in = 0;
    wait (valid_out);
    $display("Test 9: %0d x %0d = %0d (Expected: %0d)", a, b, $signed(product), expected);
    if ($signed(product) !== expected) $display("ERROR: Mismatch."); else $display("PASS");
    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // Finish simulation
    #50;
    $display("Finished enumerated multiply testbench");
    $finish;
  end

endmodule





  
  
  
  
