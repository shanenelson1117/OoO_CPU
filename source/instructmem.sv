// instructmem.sv
// Simulation-only instruction memory for Verilator
// Not synthesizable. Supports loading memory from C++ testbench.

`ifndef INSTRUCTMEM_SV
`define INSTRUCTMEM_SV

`define INSTRUCT_MEM_SIZE 262144  // bytes
`define BASE 32'h8000_0000

module instructmem (
    input  logic [31:0] address,
    output logic [31:0] instruction,
    output logic exception,
    output logic [7:0] mcause,
    input  logic        clk
);

    // Memory array
    logic [31:0] mem[`INSTRUCT_MEM_SIZE/4-1:0];

    // Optional: display time nicely
    initial $timeformat(-9, 2, " ns", 10);

    always_comb begin
        if (address < `BASE)
            instruction = 32'h00000013; // NOP
        else
            instruction = mem[(address - `BASE) >> 2];
    end

    // Address assertions
    always_comb begin
        exception = 0;
        mcause = '0;
        if (address !== 'x) begin
            if (((address - `BASE )/4 > `INSTRUCT_MEM_SIZE/4)) begin
                exception = 1;
                mcause = 8'd1;
                $display("oob: %h", address);
            end
            else if (address[1:0] != 0) begin
                $display("unaligned: %h", address);
                exception = 1;
            end

            assert(address[1:0] == 0) else $fatal("Unaligned address: %0h", address);
            //assert((address - `BASE )/4 < `INSTRUCT_MEM_SIZE/4) else $fatal("Address out of bounds: %0h", address);
        end
    end

		`ifdef VERILATOR
				// Testbench writes memory on clock edge
				logic [31:0] mem_wr_addr;
				logic [31:0] mem_wr_data;
				logic        mem_wr_en;

				always_ff @(posedge clk) begin
						if (mem_wr_en)
								mem[mem_wr_addr] <= mem_wr_data;
				end
		`else
				// Default: optional $readmemb for Verilog simulation
				initial begin
						$readmemb("benchmarks/default_bench.riscv", mem);
						$display("Loaded default benchmark");
				end
		`endif
`endif

endmodule
