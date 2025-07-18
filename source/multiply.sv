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

module datapath (
  output logic [63:0] product,
  output logic [31:0] Q, P,
  output logic carry_out,
  input logic [31:0] multiplier, multiplicand,
  input logic clk, loadregs, shiftregs, addregs, decr_P
);
  logic C;
  logic [31:0] A, B;

  always_ff @(posedge clk) begin
    if (loadregs) begin
      A <= 0; C <= 0; P <= 32;
      B <= multiplicand;
      Q <= multiplier;
    end
    if (decr_P) P <= P - 1;
    if (addregs) {C, A} <= A + B;
    if (shiftregs) {C, A, Q} <= {C, A, Q} >> 1;
  end

  assign product = {A, Q};
endmodule

module control (
  input logic valid_in, clk, reset, yumi_in,
  input logic [31:0] Q, P,
  output logic loadregs, shiftregs, addregs, decr_P, valid_out, ready
);
  
  enum logic [1:0] {s_idle = 2'b00, s_add = 2'b01, s_shift = 2'b10, s_done = 2'b11} ps, ns;

  assign loadregs = (ps == s_idle) & valid_in;
  assign shiftregs = (ps == s_shift);
  assign addregs = (ps == s_add) & Q[0];
  assign decr_P = (ps == s_add);
  assign valid_out = (ps == s_done);
  assign ready = (ps == s_idle);

  always_ff @(posedge clk) begin
    if (reset)
      ps <= s_idle;
    else
      ps <= ns;
  end 

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
  logic [31:0] multiplier, multiplicand;
  logic valid_in, yumi_in, reset, clk;

  // Outputs
  logic valid_out, ready, carry_out;
  logic [63:0] product;

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

  // Test procedure task
  task run_test(input signed [31:0] a, input signed [31:0] b);
    signed [63:0] expected;
    begin
      expected = a * b;

      // Apply inputs
      multiplier = a;
      multiplicand = b;
      valid_in = 1;

      @(posedge clk);
      valid_in = 0;

      // Wait for ready
      wait (ready);

      // Wait for valid_out
      wait (valid_out);

      $display("Test: %0d x %0d = %0d (Expected: %0d)", a, b, product, expected);
      if ($signed(product) !== expected)
        $display("ERROR: Mismatch. Got %0d, expected %0d", $signed(product), expected);
      else
        $display("PASS");

      // Consume output
      yumi_in = 1;
      @(posedge clk);
      yumi_in = 0;

      // Small delay between tests
      @(posedge clk);
    end
  endtask

  // Test sequence
  initial begin
    $display("Starting extended multiply testbench");
    // Initialize inputs
    multiplier = 0;
    multiplicand = 0;
    valid_in = 0;
    yumi_in = 0;
    reset = 1;

    // Apply reset
    #20;
    reset = 0;

    // Run tests
    run_test(32'd7, 32'd6);             // positive x positive
    run_test(-32'd7, 32'd6);            // negative x positive
    run_test(32'd7, -32'd6);            // positive x negative
    run_test(-32'd7, -32'd6);           // negative x negative
    run_test(32'd0, 32'd12345);         // zero x positive
    run_test(32'd12345, 32'd0);         // positive x zero
    run_test(32'd0, 32'd0);             // zero x zero
    run_test(32'h7FFFFFFF, 32'd2);      // max int x 2
    run_test(32'h80000000, 32'd2);      // min int x 2
    run_test(32'h7FFFFFFF, 32'h7FFFFFFF); // max int x max int
    run_test(32'h80000000, 32'h80000000); // min int x min int
    run_test(32'hFFFFFFFF, 32'd1);      // -1 x 1

    // Finish simulation
    #50;
    $display("Finished extended multiply testbench");
    $finish;
  end

endmodule


  
  
  
  
