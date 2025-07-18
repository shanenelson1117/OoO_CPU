module divide (
  input logic clk, reset, valid_in, yumi_in,
  output logic valid_out, ready,
  // control signal identifying signed or unsigned division
  input logic signed_div,
  input logic [63:0] dividend, divisor,
  output logic [63:0] quotient
);
  logic a_lt_b;
  assign a_lt_b = divisor < dividend;
  // instantiate datapath and control
  datapath_dv divide_dp(.*);
  control_dv divide_cu(.*);
  
endmodule

module datapath_dv (
  input logic [63:0] divisor, dividend,
  output logic [63:0] quotient,
  output logic [31:0] P,
  input logic clk, loadregs, pass1, pass2, pass3, signadj
);
  logic [63:0] A, M, Q;
  logic [31:0] P;

  always_ff @(posedge clk) begin
    if (loadregs) begin
      A <= 0; P <= 64;
      M <= signed_div & divisor[63] ? (~divisor + 1) : divisor;
      Q <= signed_div & dividend[63] ? (~dividend + 1) : dividend;
    end
    if (pass1) begin
      {A, Q} <= {A, Q} << 1;
      A <= (A[63] == 1) ? A + M : A - M;
    end 
    if (pass2) begin
      Q[0] <= ~A[63];
      P <= P - 1;
    end
    if (pass3) begin
      if (A[63]) A <= A + M; 
    end
    if (signadj) begin
      if (divisor[63] ^ dividend[63]) Q <= (~Q) + 1;
    end
  end

  assign quotient = Q;
        
endmodule

module control_dv (
  input logic valid_in, clk, reset, yumi_in, a_lt_b, signed_div,
  input logic [31:0] Q, P,
  output logic loadregs, pass1, pass2, pass3, signadj, valid_out, ready
);
  
  enum logic [2:0] {s_idle = 3'b000, s_pass1 = 3'b001, s_pass2 = 3'b010, s_pass3 = 3'b011, s_signadj = 3'b100, s_done = 3'b101, unused1 = 3'b110, unused2 = 3'b111} ps, ns;

  // assign control signals
  assign loadregs = (ps == s_idle) & valid_in;
  assign pass1 = (ps == s_pass1);
  assign pass2 = (ps == s_pass2);
  assign pass3 = (ps == s_pass3);
  assign signadj = (ps == s_signadj);
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
      s_idle: begin 
        if (valid_in & ~a_lt_b) ns = s_pass1;
        else if (valid_in & a_lt_b) ns = s_done;
        else ns = s_idle;
      end
      s_pass1: ns = s_pass2;
      s_pass2: ns = (P == 32'b0) ? s_pass3 : s_pass1;
      s_pass3: ns = signed_div ? s_signadj : s_done;
      s_signadj: ns = s_done;
      s_done: ns = yumi_in ? s_idle : s_done;
      default: ns = s_idle;
    endcase 
  end 
endmodule

`timescale 1ns/1ps

module divide_tb;

  // Inputs
  logic clk, reset, valid_in, yumi_in, signed_div;
  logic [63:0] dividend, divisor;

  // Outputs
  logic valid_out, ready;
  logic [63:0] quotient;

  // Instantiate DUT
  divide dut (
    .clk(clk),
    .reset(reset),
    .valid_in(valid_in),
    .yumi_in(yumi_in),
    .signed_div(signed_div),
    .dividend(dividend),
    .divisor(divisor),
    .valid_out(valid_out),
    .ready(ready),
    .quotient(quotient)
  );

  // Clock generation
  initial clk = 0;
  always #5 clk = ~clk; // 10ns period

  // Test sequence
  initial begin
    $display("Starting enumerated divide testbench");

    logic [63:0] expected;
    logic [63:0] a, b;

    // Initialize inputs
    dividend = 0;
    divisor = 0;
    valid_in = 0;
    yumi_in = 0;
    reset = 1;
    signed_div = 0;

    // Apply reset
    #20;
    reset = 0;

    // ================
    // Test 1: 50 / 5 (unsigned)
    a = 50; b = 5; expected = a / b;
    dividend = a;
    divisor = b;
    signed_div = 0;
    valid_in = 1;
    @(posedge clk);
    valid_in = 0;

    wait (valid_out);

    $display("Test 1 (unsigned): %0d / %0d = %0d (Expected: %0d)", a, b, $signed(quotient), expected);
    if ($signed(quotient) !== expected)
      $display("ERROR: Mismatch.");
    else
      $display("PASS");

    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // ================
    // Test 2: -50 / 5 (signed)
    a = -50; b = 5; expected = $signed(a) / $signed(b);
    dividend = a;
    divisor = b;
    signed_div = 1;
    valid_in = 1;
    @(posedge clk);
    valid_in = 0;

    wait (valid_out);

    $display("Test 2 (signed): %0d / %0d = %0d (Expected: %0d)", $signed(a), $signed(b), $signed(quotient), expected);
    if ($signed(quotient) !== expected)
      $display("ERROR: Mismatch.");
    else
      $display("PASS");

    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // ================
    // Test 3: 50 / -5 (signed)
    a = 50; b = -5; expected = $signed(a) / $signed(b);
    dividend = a;
    divisor = b;
    signed_div = 1;
    valid_in = 1;
    @(posedge clk);
    valid_in = 0;

    wait (valid_out);

    $display("Test 3 (signed): %0d / %0d = %0d (Expected: %0d)", $signed(a), $signed(b), $signed(quotient), expected);
    if ($signed(quotient) !== expected)
      $display("ERROR: Mismatch.");
    else
      $display("PASS");

    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // ================
    // Test 4: -50 / -5 (signed)
    a = -50; b = -5; expected = $signed(a) / $signed(b);
    dividend = a;
    divisor = b;
    signed_div = 1;
    valid_in = 1;
    @(posedge clk);
    valid_in = 0;

    wait (valid_out);

    $display("Test 4 (signed): %0d / %0d = %0d (Expected: %0d)", $signed(a), $signed(b), $signed(quotient), expected);
    if ($signed(quotient) !== expected)
      $display("ERROR: Mismatch.");
    else
      $display("PASS");

    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // ================
    // Test 5: 0 / 12345 (unsigned)
    a = 0; b = 12345; expected = a / b;
    dividend = a;
    divisor = b;
    signed_div = 0;
    valid_in = 1;
    @(posedge clk);
    valid_in = 0;

    wait (valid_out);

    $display("Test 5 (unsigned): %0d / %0d = %0d (Expected: %0d)", a, b, $signed(quotient), expected);
    if ($signed(quotient) !== expected)
      $display("ERROR: Mismatch.");
    else
      $display("PASS");

    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // ================
    // Test 6: max int / 1 (signed)
    a = 64'h7FFFFFFFFFFFFFFF; b = 1; expected = $signed(a) / $signed(b);
    dividend = a;
    divisor = b;
    signed_div = 1;
    valid_in = 1;
    @(posedge clk);
    valid_in = 0;

    wait (valid_out);

    $display("Test 6 (signed): %0d / %0d = %0d (Expected: %0d)", $signed(a), $signed(b), $signed(quotient), expected);
    if ($signed(quotient) !== expected)
      $display("ERROR: Mismatch.");
    else
      $display("PASS");

    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // ================
    // Test 7: min int / 1 (signed)
    a = 64'h8000000000000000; b = 1; expected = $signed(a) / $signed(b);
    dividend = a;
    divisor = b;
    signed_div = 1;
    valid_in = 1;
    @(posedge clk);
    valid_in = 0;

    wait (valid_out);

    $display("Test 7 (signed): %0d / %0d = %0d (Expected: %0d)", $signed(a), $signed(b), $signed(quotient), expected);
    if ($signed(quotient) !== expected)
      $display("ERROR: Mismatch.");
    else
      $display("PASS");

    yumi_in = 1; @(posedge clk); yumi_in = 0; @(posedge clk);

    // Finish simulation
    #50;
    $display("Finished enumerated divide testbench");
    $finish;
  end

endmodule
