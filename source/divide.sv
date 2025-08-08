// Author: Shane Nelson
// Project: OoO CPU
// File: Integer Division Functional Unit
// Stage: Execute

`include "structs.svh"

module divide (
  input logic clk, reset, valid_in, yumi_in,
  input logic [3:0] rs_rob_entry,
  input logic ALUop, // are we doing div or remu (remainder unsigned)
  output logic valid_out, ready,
  input logic [31:0] dividend, divisor, 
  output CDB_packet_t out
);
  logic a_lt_b, loadregs, pass1, pass2, pass3, pass4, signadj, div;
  logic [31:0] P, quotient, remainder, result;
  logic [3:0] curr_rob;
  // register operand msb's
  logic sor_msb, end_msb;

  logic [31:0] abs_sor, abs_end;
  assign abs_sor = (ALUop && divisor[31])  ? (~divisor + 1)  : divisor;
  assign abs_end = (ALUop && dividend[31]) ? (~dividend + 1) : dividend;

  assign a_lt_b = abs_sor > abs_end;

  // instantiate datapath and control
  datapath_dv divide_dp(.*);
  control_dv divide_cu(.*);
  
  assign result = div ? quotient : remainder;

  // generate outbound cdb packet
  assign out.dest_ROB_entry = curr_rob;
  assign out.result = result;
  assign out.branch_result = 1'b0;
  assign out.from_memory = 1'b0;
  assign out.load_step1 = 0;

   always_ff @(posedge clk) begin
        if (reset) begin
            curr_rob <= 4'b0;
            div <= 0;
            sor_msb <= 0;
            end_msb <= 0;
        end else if (valid_in) begin
            curr_rob <= rs_rob_entry;
            div <= ALUop;
            sor_msb <= divisor[31];
            end_msb <= dividend[31];
        end else if (yumi_in) begin
            curr_rob <= 4'b0;
            div <= 0;
            sor_msb <= 0;
            end_msb <= 0;
        end
  end

endmodule

module datapath_dv (
  input logic [31:0] abs_sor, abs_end,
  output logic [31:0] quotient, P, remainder,
  input logic clk, loadregs, pass1, pass2, signadj, ALUop, a_lt_b,
  input logic sor_msb, end_msb
);
  logic [31:0] A, M, Q, A_temp, Q_temp, A_temp2, Q_temp2;
  logic [63:0] temp;

always_ff @(posedge clk) begin
  if (loadregs) begin
    A <= 0; P <= 31;
    M <= abs_sor;
    Q <= abs_end;
  end
  else if (pass1) begin
    A <= A_temp;
    Q <= Q_temp;
    P <= P - 1;
  end
  else if (pass2) begin
    if (A[31]) A <= A + M;
  end
  else if (signadj) begin
    if (sor_msb ^ end_msb) Q <= (0 - Q);
  end
end

always_comb begin
  temp = {A[30:0], Q[31:0], 1'b0};
  if (!A[30]) begin
    A_temp = temp[63:32] - M;
    Q_temp = {temp[31:1], ~A_temp[31]};
  end
  else begin
    A_temp = temp[63:32] + M;
    Q_temp = {temp[31:1], ~A_temp[31]};
  end
end

  assign quotient = Q;
  assign remainder = A;
        
endmodule

module control_dv (
  input logic valid_in, clk, reset, yumi_in, a_lt_b, div,
  input logic [31:0] P,
  output logic loadregs, pass1, pass2, signadj, valid_out, ready
);
  
  enum logic [2:0] {s_idle = 3'b000, s_pass1 = 3'b001, s_pass2 = 3'b010, s_pass3 = 3'b011, s_signadj = 3'b100, s_done = 3'b101, unused1 = 3'b110, s_pass4 = 3'b111} ps, ns;

  // assign control signals
  assign loadregs = (ps == s_idle) & valid_in;
  assign pass1 = (ps == s_pass1);
  assign pass2 = (ps == s_pass2);
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
      s_pass1: ns = (P == 32'b0) ? s_pass2 : s_pass1;
      s_pass2: ns = div ? s_signadj : s_done;
      s_signadj: ns = s_done;
      s_done: ns = yumi_in ? s_idle : s_done;
      default: ns = s_idle;
    endcase 
  end 
endmodule

`timescale 1ns/1ps

module divide_tb;

  // Inputs
  logic clk = 0;
  logic reset;
  logic valid_in;
  logic yumi_in;
  logic [3:0] rs_rob_entry;
  logic ALUop;
  logic [31:0] dividend, divisor;

  // Outputs
  logic valid_out;
  logic ready;
  CDB_packet_t out;

  // Clock generation
  always #5 clk = ~clk;

  // Instantiate the divide module
  divide uut (
    .clk(clk),
    .reset(reset),
    .valid_in(valid_in),
    .yumi_in(yumi_in),
    .rs_rob_entry(rs_rob_entry),
    .ALUop(ALUop),
    .valid_out(valid_out),
    .ready(ready),
    .dividend(dividend),
    .divisor(divisor),
    .out(out)
  );

  // Task to perform one division test
  task run_test(input [31:0] a, input [31:0] b, input logic op, string label);
    logic signed [31:0] expected_signed;
    logic [31:0] expected_unsigned;
    logic [31:0] expected;

    begin
      @(negedge clk);
      valid_in = 1;
      ALUop = op;
      dividend = a;
      divisor = b;
      rs_rob_entry = 4'd3;
      yumi_in = 0;

      // Wait until ready
      while (!ready) @(negedge clk);
      @(negedge clk);
      valid_in = 0;

      // Wait until output is valid
      while (!valid_out) @(negedge clk);

      // Compute expected result
      if (b == 0) begin
        $display("[%s] Division by zero! Skipping assertion. Dividend = %0d (0x%h)", label, a, a);
      end
      else begin
        if (op) begin  // Signed division
          expected_signed = $signed(a) / $signed(b);
          expected =$signed(expected_signed);
        end else begin  // Unsigned remainder
          expected_unsigned = a % b;
          expected = expected_unsigned;
        end

        // Display result
        $display("[%s] ALUop=%0d, dividend=%0d (0x%h), divisor=%0d (0x%h) => Result=%0d (0x%h), Expected=%0d",
                label, op, a, a, b, b, out.result, out.result, expected);

        // Assertion
        assert(out.result === expected)
          else $error("[%s] Mismatch: got %0d, expected %0d", label, out.result, expected);
      end

      // Handshake out
      @(negedge clk);
      yumi_in = 1;
      @(negedge clk);
      yumi_in = 0;
    end
endtask


  // Main test sequence
  initial begin
    $display("=== Starting divide module testbench ===");
    reset = 1;
    valid_in = 0;
    yumi_in = 0;
    ALUop = 0;
    dividend = 0;
    divisor = 0;
    rs_rob_entry = 0;

    repeat (2) @(negedge clk);
    reset = 0;

    // === Signed Division Tests (ALUop = 1) ===
    run_test(32'd100, 32'd3, 1, "Signed: 100 / 3");
    run_test(-32'd100, 32'd3, 1, "Signed: -100 / 3");
    run_test(32'd100, -32'd3, 1, "Signed: 100 / -3");
    run_test(-32'd100, -32'd3, 1, "Signed: -100 / -3");
    run_test(32'h80000000, 32'd1, 1, "Signed: INT_MIN / 1");
    run_test(32'h80000000, 32'd2, 1, "Signed: INT_MIN / 2");

    // Division by 0 (should be handled somehow—undefined in Verilog)
    run_test(32'd12345, 32'd0, 1, "Signed: /0 (should not crash)");

    // === Unsigned Remainder Tests (ALUop = 0) ===
    run_test(32'd100, 32'd3, 0, "Unsigned: 100 mod 3");
    run_test(32'hFFFFFFFF, 32'd10, 0, "Unsigned: MaxUint mod 10");
    run_test(32'd0, 32'd10, 0, "Unsigned: 0 mod 10");
    run_test(32'd12345, 32'd0, 0, "Unsigned: /0 (should not crash)");

    // End of test
    $display("=== Testbench finished ===");
    $finish;
  end

endmodule
