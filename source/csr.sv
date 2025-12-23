// Shane Nelson
// Control and status registers

`include "structs.sv"

// illegal access e should act as a read disable for ROB,
// in ROB we can set head.mcause = illegal and then process that.
// For any robs that have an exception we can set valid_write high
// and then set mcause and trap by sending a signal to the new_pc
// module which will need to take trap vector as input

module csr (
  input logic [CSR_BITS:0] csr_read_select, csr_write_select,   // Which CSR are we accessing
  input logic valid_write,  // is the instruction writing a csr
  input logic valid_read,   // is the intstruction reading a csr
  input logic [1:0] special,         // is this a ecall/mret
  input logic [31:0] mepc_WriteData, // Need to write mepc when we hit an exception
  input clk, reset, 
  input logic [31:0] csr_WriteData, // What are we writing to csr
  input logic [7:0] mcause,
  input logic exception,            // Is there an exception (switch mode, save mepc)
  output logic [31:0] csr_ReadData, // data in requested csr
  output logic [31:0] mepc_ReadData, // current value of mepc
  output logic [31:0] mtvec_ReadData, // current ptr to trap vector
  output logic [1:0] curr_priv,  // current privilege level (for spike diff)
  output logic illegal_access_e,  // did user mode try and write csrs?
  output logic mret
);
  import structs_pkg::*;

  logic [NUM_CSR:0][31:0] csr_data;

  // Use index() function to get array index for csr based on csr num
  assign mepc_ReadData = csr_data[index(12'h300)];
  assign mtvec_ReadData = csr_data[index(12'h305)];

  assign illegal_access_e = (valid_write |(special == MRET)) && (curr_priv == U);
  assign mret = (special == MRET) && ~(curr_priv == U);

  // Combinational reads
  always_comb begin
    if (valid_read) begin
      csr_ReadData = csr_data[csr_read_select];
    end
    else begin
      csr_ReadData = 32'b0;
    end
  end

  // Handle writes
  always_ff @(posedge clk) begin
    csr_data <= csr_data;
    // Reset csrs to 0
    if (reset) begin
      csr_data <= '0;
    end
    // Handle exceptions
    else if (exception) begin
      // Write mepc with pc of committing instruction
      csr_data[2] <= mepc_WriteData;
      csr_data[0] <= {{csr_data[0][31:13]}, 
                    curr_priv,
                    {csr_data[0][10:8]},
                    csr_data[0][3],
                    {csr_data[0][6:4]},
                    1'b0,
                    {csr_data[0][2:0]}};
      // Update mepc correctly
      if (special == ECALL) begin
        // If ECALL then we set based on privilege
        if (curr_priv == M) begin
          csr_data[3] <= 32'd11;
        end
        else begin
          csr_data[3] <= 32'd8;
        end
      end
      // If not then use mcause from commit
      else begin
        csr_data[3] <= {24'b0, mcause};
      end
    end
    // Handle normal writes
    else if (valid_write && ~illegal_access_e) begin
      csr_data[csr_write_select] <= csr_WriteData;
    end
    // MRET
    else if (special == MRET && ~illegal_access_e) begin
      csr_data[0] <= {{csr_data[0][31:13]}, 
                    2'b0,
                    {csr_data[0][10:8]},
                    1'b0,
                    {csr_data[0][6:4]},
                    csr_data[0][7],
                    {csr_data[0][2:0]}};
    end
  end


  // Store current privilege level
  always_ff @(posedge clk) begin
    if (reset) begin
      curr_priv <= M;
    end
    else if (exception) begin
      curr_priv <= M;
    end
    else if (special == MRET) begin
      curr_priv <= csr_data[0][12:11];
    end
  end
endmodule
