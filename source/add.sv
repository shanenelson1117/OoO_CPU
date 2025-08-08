// Author: Shane Nelson
// Project: OoO CPU
// File: Add/Sub functional unit
// Stage: Execute

`include "structs.svh"

module add (  // adder FSM
    input logic clk, reset, valid_in, yumi_in, ALUop, load,
    input logic [3:0] rs_rob_entry, 
    input logic [31:0] rs1, rs2,
    input logic [1:0] branch_type, // branch controls, need sub to be high for any branch
    output logic valid_out, ready,
    output CDB_packet_t out
);
    logic [31:0] s, result;
    logic zero, negative, overflow, sub;
    logic b_inter, b_taken;
	logic load_step1;
    logic [3:0] curr_rob;

    adder_32bit adder (.*);
	
	// branch logic
    assign bne = (branch_type == 2'b01);
    assign beq = (branch_type == 2'b10);
    assign blt = (branch_type == 2'b11);

    assign b_inter = (bne & ~zero) | (beq & zero) | (blt & (negative ^ overflow));

	// 2-state fsm
    always_ff @(posedge clk) begin
        if (reset | yumi_in) begin
            valid_out <= 0;
            b_taken <= 0;
            curr_rob <= 4'b0;
            sub <= 0;
            ready <= 1;
			load_step1 <= 0;
        end else if (valid_in) begin
            result <= s;
            valid_out <= 1;
            b_taken <= b_inter;
            curr_rob <= rs_rob_entry;
            sub <= ALUop; 
            ready <= 0;
			load_step1 <= load;
        end
    end

	// generate cdb packet
	assign out.load_step1 = load_step1;
    assign out.dest_ROB_entry = curr_rob;
    assign out.result = result;
    assign out.branch_result = b_taken;
    assign out.from_memory = 1'b0;
endmodule

// 32-bit adder
module adder_32bit ( // full adder
	input logic [31:0] rs1, rs2,
	input logic sub, ALUop,
	output logic [31:0] s,
	output logic zero, overflow, negative
	);
	
	logic [32:0] c_bus;
	logic [31:0] b;
	
	assign c_bus[0] = ALUop;

    assign b = ~ALUop ? rs2 : ~rs2;
	
	genvar i;
	
	generate 
		for (i=0; i < 32; i++)begin:add_loop
			full_add addi (s[i], c_bus[i+1], rs1[i], b[i], c_bus[i]);
		end
	endgenerate 
	
	assign carry = c_bus[32];
	
	xor of (overflow, c_bus[32], c_bus[31]);
	assign zero = (s == 32'b0);
	assign negative = s[31];
	
endmodule 

// full adder
module full_add (sum, c_out, a, b, c_in); // full adder
	input logic a, b, c_in;
	output logic c_out, sum;
	
	logic i1, i2, i3;
	
	half_add add1 (i1, i2, a, b);
	half_add add2 (sum, i3, c_in, i1);
	
	or final_or (c_out, i2, i3);
	
endmodule

//half-adder
module half_add (sum, c_out, a, b); // half adder
	input logic a, b;
	output logic sum, c_out;
	
	xor sum_calc (sum, a, b);
	and carry_calc (c_out, a, b);

endmodule 