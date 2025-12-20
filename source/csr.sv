// Shane Nelson
// Control and status registers

`include "structs.svh"

// illegal access e should act as a read disable for ROB,
// in ROB we can set head.mcause = illegal and then process that.
// For any robs that have an exception we can set valid_write high
// and then set mcause and trap by sending a signal to the new_pc
// module which will need to take trap vector as input

module csr (
  input logic [11:0] csr_read_select, csr_write_select,   // Which CSR are we accessing
  input logic valid_write,  // is the instruction writing a csr
  input logic valid_read,   // is the intstruction reading a csr
  input logic [1:0] special,         // is this a ecall/mret
  input logic [31:0] mepc_WriteData, // Need to write mepc when we hit an exception
  input clk, reset, 
  input logic [31:0] csr_WriteData, // What are we writing to csr
  input logic [7:0] mcause,
  output logic [31:0] csr_ReadData, // data in requested csr
  output logic [31:0] mepc_ReadData, // current value of mepc
  output logic [31:0] mtvec_ReadData, // current ptr to trap vector
  output logic [1:0] curr_priv,  // current privilege level (for spike diff)
  output logic illegal_access_e  // did user mode try and write csrs?
);
  logic [31:0] mstatus, mtvec, mepc, mcause;

  assign mepc_ReadData = mepc;
  assign mtvec_ReadData = mtvec;

  assign illegal_access_e = (valid_write | valid_read | (special == MRET)) && (curr_priv == U);

  // Combinational reads
  always_comb begin
    if (valid_read) begin
      case (csr_read_select)
        12'f300: csr_ReadData = mstatus;
        12'f305: csr_ReadData = mtvec;
        12'f314: csr_ReadData = mepc;
        12'f342: csr_ReadData = mcause;
        default: csr_ReadData = 32'b0;
      endcase
    end
    else begin
      csr_ReadData = 32'b0;
    end
  end

  // Handle writes
  always_ff @(posedge clk) begin
    mstatus <= mstatus;
    mtvec <= mtvec;
    mepc <= mepc;
    mcause <= mcause;
    if (reset) begin
      mstatus <= '0;
      mtvec <= '0;
      mepc <= '0;
      mcause <= '0;
    end
    else if (valid_write) begin
      case (csr_write_select)
        12'f300: mstatus <= csr_WriteData;
        12'f305: mtvec <= csr_WriteData;
        12'f314: mepc <= csr_WriteData;
        12'f342: mcause <= csr_WriteData;
        default: begin 
          mstatus <= mstatus;
          mtvec <= mtvec;
          mepc <= mepc;
          mcause <= mcause;
        end
      endcase
    end
    // ECALL from U
    else if (special == ECALL) begin
      mstatus <= {{mstatus[31:13]}, 
                    curr_priv,
                    {mstatus[10:8]},
                    mstatus[3],
                    {mstatus[6:4]},
                    1'b0,
                    {mstatus[2:0]}};
      if (curr_priv == M) begin
        mcause <= 32'd11;
      end
      else begin
        mcause <= 32'd8;
      end
      mepc <= mepc_WriteData;
    end
    // MRET
    else if (special == MRET) begin
      mstatus <= {{mstatus[31:13]}, 
                    2'b0,
                    {mstatus[10:8]},
                    1'b0,
                    {mstatus[6:4]},
                    mstatus[7],
                    {mstatus[2:0]}};
    // ADD SUPPORT FOR EBREAK
    end
  end


  // Store current privilege level
  always_ff @(posedge clk) begin
    if (reset) begin
      curr_priv <= M;
    end
    else if (special[0]) begin
      curr_priv <= M;
    end
    else if (special == MRET) begin
      curr_priv <= mstatus[12:11]
    end
  end
endmodule
