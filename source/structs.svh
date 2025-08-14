// Author: Shane Nelson
// Project: OoO CPU
// Contains structs for various storage and transfer applications


// fetch-issue pipeline register data format
typedef struct packed {
    logic [31:0] pc;   
    logic [31:0] instruction;
    logic prediction; // was a branch predicted?
    logic branch; // was instruction a branch?
    logic jump; // was instruction a jal?
} pipe_in_t;

// reservation station data format
typedef struct packed {
    logic [3:0] Q_j, Q_k; // ROB entry # for unready operands (0 if operand is ready)
    logic [31:0] V_j, V_k; // Value of ready operands
    logic [3:0] ROB_entry; // What is the ROB entry associated with this instruction
    logic [2:0] ALU_op; // what operation must be performed
    // 000: add, 001: sub, 100: mul, 101: mul_h, 011: div, 010: remu
    logic [1:0] branch_type; // 00 (not branch) 01 (bne) 10 (beq) 11 (blt) control signals for alu
    logic busy, load; // is the rs waiting for operands? is the operation a load?
} rs_data_t;


// Reorder buffer entry format
typedef struct packed {
    logic [3:0] ROB_number; // entry number
    logic branch_pred; // branch tracking
    logic branch_result;
    logic [31:0] destination; // register or address (for branches the pc of the branch)
    logic [31:0] value; // value to be written (se immediate for branches)
    logic [1:0] itype; // instruction type, branch (00), store (01), register dest (10), load (11)
    logic ready; // is the entry raedy to be committed?
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
    logic [1:0] branch_type; // branch type
    logic [2:0] ALU_op; // alu operation to perform
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
} lsq_packet_t;


