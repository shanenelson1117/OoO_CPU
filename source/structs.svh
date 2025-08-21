// Author: Shane Nelson
// Project: OoO CPU
// Contains structs for various storage and transfer applications

// alu operation types
parameter logic [3:0] 
    ADD   = 4'b0000,
    XOR   = 4'b0001,
    OR    = 4'b0010,
    AND   = 4'b0011,
    SUB   = 4'b0100,
    SLTU  = 4'b0110,
    SLT   = 4'b0111,
    MUL   = 4'b1100,
    MULH  = 4'b1101,
    DIV   = 4'b1011,
    REMU  = 4'b1010,
    SRL   = 4'b1000,
    SRA   = 4'b1001,
    SLL   = 4'b1111,
    NOP   = 4'b0101;

// branch types
parameter logic [2:0] 
    BEQ = 3'b000,
    BNE = 3'b001,
    BLT = 3'b100,
    BGE = 3'b101,
    BLTU = 3'b110,
    BGEU = 3'b111,
    NB = 3'b010;


// fetch-issue pipeline register data format
typedef struct packed {
    logic [31:0] pc;   
    logic [31:0] instruction;
    logic prediction; // was a branch predicted?
    logic branch; // was instruction a branch?
    logic jump; // was instruction a jal?
    logic [3:0] ras_ptr;
    logic [31:0] jalr_address;
} pipe_in_t;

// reservation station data format
typedef struct packed {
    logic [3:0] Q_j, Q_k; // ROB entry # for unready operands (0 if operand is ready)
    logic [31:0] V_j, V_k; // Value of ready operands
    logic [3:0] ROB_entry; // What is the ROB entry associated with this instruction
    logic [3:0] ALU_op; // what operation must be performed
    // 000: add, 001: sub, 100: mul, 101: mul_h, 011: div, 010: remu
    logic [2:0] branch_type; // see enum below
    logic busy, load; // is the rs waiting for operands? is the operation a load?
} rs_data_t;

// Reorder buffer entry format
typedef struct packed {
    logic [3:0] ROB_number; // entry number
    logic branch_pred; // branch tracking
    logic branch_result;
    logic [3:0] ras_pointer; // ras pointer at time of issue, used to roll back ras on mispredicted branch
    logic [31:0] destination; // register or address (for branches the pc of the branch)
    logic [31:0] value; // value to be written (se immediate for branches)
    logic [1:0] itype; // instruction type, branch (00), store (01), register dest (10), load (11)
    logic ready; // is the entry raedy to be committed?
    logic jalr;
} ROB_entry_t; 

// CDB data format
typedef struct packed {
    logic [3:0] dest_ROB_entry; // which rob entry is the packet for
    logic [31:0] result; // the data
    logic branch_result; // the adder generated branch result
    logic load_step1; // high if packet is a load address (need monitorers to not treat this as a valid packet)
    logic from_commit; // high if packet is a load value
} CDB_packet_t;

// register status register entry format
typedef struct packed {
    logic [3:0] ROB_number; // rob entry writing register
    logic busy; // low if register contents are valid
} reg_stat_t;

// data needed by fu's from rs 
typedef struct packed {
    logic [2:0] branch_type; // branch type
    logic [3:0] ALU_op; // alu operation to perform
    logic [3:0] ROB_entry; // rob entry associated with rs
    logic [31:0] rs1; // operand 1
    logic [31:0] rs2; // operand 2
    logic valid_operands, load; // operands are valid, instruction is a load
} rs_out_t;

// load-store queue data format
typedef struct packed {
    logic load; // is instruction a load or store
    logic store; // both 0 signifies invalid packet
    logic [31:0] address; // data address
    logic [31:0] result; // data to write to mem for stores
    logic [3:0] ROB_entry; // rob entry associated instruction
    logic address_valid; // packet is ready
    logic [3:0] Q_store; // rob entry of instruction providing store data (0 if ready)
    logic [2:0] xfer_size; // 1, 2, 4
    logic lsq_signed; // are we doing a signed load
} lsq_packet_t;

typedef struct packed {
    logic valid; // is this a valid jalrq input packet
    logic [31:0] jalr_taken_address; // address the jalr takes
    logic [31:0] jalr_actual_address; // actual register address
    logic [11:0] imm;
    logic [3:0] Q_address; // ROB entry of the ins writing the address
} jalrq_packet_t;


