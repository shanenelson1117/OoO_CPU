// Author: Shane Nelson
// Project: OoO CPU
// File: Integer Division Functional Unit
// Stage: Execute

`include "structs.sv"

module divide (
  input logic clk, reset, valid_in, yumi_in,
  input logic [3:0] rs_rob_entry,
  input logic [3:0] ALUop, // are we doing div or remu (remainder unsigned)
  output logic valid_out, ready,
  input logic [31:0] dividend, divisor, 
  output CDB_packet_t out
);
  import structs_pkg::*;

  logic a_lt_b, loadregs, pass1, pass2, signadj, div, a_lt_b_reg;
  logic [31:0] P, quotient, remainder, result;
  logic [3:0] curr_rob;
  // register operand msb's
  logic sor_msb, end_msb;


  logic [31:0] abs_sor, abs_end;
  assign abs_sor = (ALUop[0] && divisor[31])  ? (~divisor + 1)  : divisor;
  assign abs_end = (ALUop[0] && dividend[31]) ? (~dividend + 1) : dividend;

  assign a_lt_b = abs_sor > abs_end;

  // instantiate datapath and control
  datapath_dv divide_dp(.*);
  control_dv divide_cu(.*);

  // If a < b, switch derived remainder and quotient. Remainder should be a and quotient should be 0
  assign result = (div & ~a_lt_b_reg) | (~div & a_lt_b_reg) ? quotient : remainder;

  assign out.dest_ROB_entry = curr_rob;
  assign out.result = result;
  assign out.branch_result = 1'b0;
  assign out.load_step1 = 0;

  // register rs signals
  always_ff @(posedge clk) begin
      if (reset) begin
          curr_rob <= 4'b0;
          div <= 0;
          sor_msb <= 0;
          end_msb <= 0;
          a_lt_b_reg <= 0;
      end else if (valid_in) begin
          curr_rob <= rs_rob_entry;
          div <= ALUop[0];
          sor_msb <= divisor[31];
          end_msb <= dividend[31];
          a_lt_b_reg <= a_lt_b;
      end else if (yumi_in) begin
          curr_rob <= 4'b0;
          div <= 0;
          sor_msb <= 0;
          end_msb <= 0;
          a_lt_b_reg <= 0;
      end
end

endmodule

module datapath_dv (
  input logic [31:0] abs_sor, abs_end,
  output logic [31:0] quotient, P, remainder,
  input logic clk, loadregs, pass1, pass2, signadj,
  input logic sor_msb, end_msb
);
  logic [31:0] A, M, Q, A_temp, Q_temp;
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
