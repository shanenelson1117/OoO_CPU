// Author: Shane Nelson
// Project: OoO CPU
// File: Add/Sub functional unit
// Stage: Execute

`include "structs.sv"

module add (  // adder FSM
    input logic clk, reset, valid_in, yumi_in, load,
		input logic [3:0] ALUop, // want all sub instructions to have msb == 1
    input logic [3:0] rs_rob_entry, 
    input logic [31:0] rs1, rs2,
    input logic [2:0] branch_type, // branch controls, need sub to be high for any branch
    output logic valid_out, ready,
    output CDB_packet_t out
);
    logic [31:0] s, result;
    logic zero, negative, overflow, ALUop1, carry;
    logic b_inter, b_taken;
		logic load_step1, bne, beq, blt, bge, bltu, bgeu;
    logic [3:0] curr_rob;

		assign ALUop1 = ALUop[2]; // subtraction signal

    adder_32bit adder (.*);

		assign bge = (branch_type == BGE);
    assign bne = (branch_type == BNE);
    assign beq = (branch_type == BEQ);
    assign blt = (branch_type == BLT);
		assign bltu = (branch_type == BLTU);
		assign bgeu = (branch_type == BGEU);

    assign b_inter = (bne & ~zero) | 
					(beq & zero) | 
					(blt & (negative ^ overflow)) | 
					(bge & ~(negative ^ overflow)) |
					(bltu & ~(carry)) |
					(bgeu & carry);

	// Register rs signals
    always_ff @(posedge clk) begin
        if (reset | yumi_in) begin
            valid_out <= 0;
            b_taken <= 0;
            curr_rob <= 4'b0;
            ready <= 1;
						load_step1 <= 0;
        end else if (valid_in) begin
            out.result <= result;
            valid_out <= 1;
            b_taken <= b_inter;
            curr_rob <= rs_rob_entry; 
            ready <= 0;
						load_step1 <= load;
        end
    end

	always_comb begin
		// SLT
		if (ALUop == SLT) begin
			result = (negative ^ overflow) ? 32'd1 : 32'b0;
		end
		// SLTU
		else if (ALUop == SLTU) begin
			result = (~carry) ? 32'd1 : 32'b0;
		end
		// XOR
		else if (ALUop == XOR) begin
			result = rs1 ^ rs2;
		end
		// OR
		else if (ALUop == OR) begin
			result = rs1 | rs2;
		end
		// AND
		else if (ALUop == AND) begin
			result = rs1 & rs2;
		end
		// sub, add
		else begin
			result = s;
		end
	end

		assign out.load_step1 = load_step1;
    assign out.dest_ROB_entry = curr_rob;
    assign out.branch_result = b_taken;
endmodule

module adder_32bit ( // full adder
	input logic [31:0] rs1, rs2,
	input logic ALUop1,
	output logic [31:0] s,
	output logic zero, overflow, negative, carry
	);
	
	logic [32:0] c_bus;
	logic [31:0] b;
	
	assign c_bus[0] = ALUop1;

    assign b = ~ALUop1 ? rs2 : ~rs2;
	
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

module full_add (sum, c_out, a, b, c_in); // full adder
	input logic a, b, c_in;
	output logic c_out, sum;
	
	logic i1, i2, i3;
	
	half_add add1 (i1, i2, a, b);
	half_add add2 (sum, i3, c_in, i1);
	
	or final_or (c_out, i2, i3);
	
endmodule

module half_add (sum, c_out, a, b); // half adder
	input logic a, b;
	output logic sum, c_out;
	
	xor sum_calc (sum, a, b);
	and carry_calc (c_out, a, b);

endmodule 

module zero_detect (
	input logic [31:0] bus,
	output logic zero
	);
	
	logic [15:0] inner_or;
	logic or1, or2, or3, or4, or_final;
	
	genvar i;
	
	generate
		for (i = 0; i < 16; i++) begin:or_loop
			or (inner_or[i], bus[4*i], bus[(4*i)+1], bus[(4*i)+2], bus[(4*i)+3]);
		end
	endgenerate
	
	or (or1, inner_or[0], inner_or[1], inner_or[2], inner_or[3]);
	or (or2, inner_or[4], inner_or[5], inner_or[6], inner_or[7]);
	or (or3, inner_or[8], inner_or[9], inner_or[10], inner_or[11]);
	or (or4, inner_or[12], inner_or[13], inner_or[14], inner_or[15]);
	
	or (or_final, or1, or2, or3, or4);
	not (zero, or_final);

endmodule 
