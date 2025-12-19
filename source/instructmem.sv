// instructmem.sv
// Simulation-only instruction memory for Verilator
// Not synthesizable. Supports loading memory from C++ testbench.

`ifndef INSTRUCTMEM_SV
`define INSTRUCTMEM_SV

`define INSTRUCT_MEM_SIZE 262144  // bytes

module instructmem (
    input  logic [31:0] address,
    output logic [31:0] instruction,
    input  logic        clk
);

    // Memory array
    logic [31:0] mem[`INSTRUCT_MEM_SIZE/4-1:0];

    // Optional: display time nicely
    initial $timeformat(-9, 2, " ns", 10);

    // Address assertions
    always_ff @(posedge clk) begin
        if (address !== 'x) begin
            assert(address[1:0] == 0) else $fatal("Unaligned address: %0h", address);
            assert(address/4 < `INSTRUCT_MEM_SIZE/4) else $fatal("Address out of bounds: %0h", address);
        end
    end

    // Combinational read
    always_comb begin
        if (address/4 < `INSTRUCT_MEM_SIZE/4)
            instruction = mem[address/4];
        else
            instruction = 'x;
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
