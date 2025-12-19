// Author: Shane Nelson
// Project: OoO CPU
// File: Reservation Station Scheduler
// Stage: Issue

`include "structs.svh"

module issue (
    input pipe_in_t pipe_out,
    input logic [3:0] busy_bus, // busy signals from each rs
    input logic [31:0] rs1_data, rs2_data,
    input logic [3:0] ROB_entry, // all 0's indicates full ROB, otherwise avail rob number
    input logic rob_full, clk, reset,
    input logic lsq_full, valid_commit, jalrq_full,
    input CDB_packet_t new_CDB,
    input logic [3:0] Q_j, Q_k, commit_ROB,
    input logic rs1reg_busy, rs2reg_busy,
    // Necessary if an operand is not at the head of the ROB but is ready (previously broadcast)
    input logic [31:0] rs1rob_data, rs2rob_data,    // Ask ROB for operand data
    input logic rs1rob_ready, rs2rob_ready,   // Ask ROB if operand data is ready
    output rs_data_t rs_input, // create RS packet
    output ROB_entry_t new_packet, // create ROB packet
    output logic [2:0] rs_dest,
    output logic [4:0] issue_dest, rs1, rs2, // regfile/regstat control sigs
    output logic issue_writes, // ...
    output logic stall, pc_pipe_stall,// if no avail rs or rob slot, do not advance pipeline
    output lsq_packet_t lsq_input,
    output jalrq_packet_t jalrq_input
);
    logic [31:0] curr_branch_pc;
    logic prediction;
    logic [31:0] ins;
    logic [3:0] alu_op;
    logic [2:0] branch_type;
    logic [31:0] V_k, V_j;
    logic [3:0] Q_temp_j, Q_temp_k;
    logic branch, jump, temp_load, past_rd, issue_writes_temp;
    logic stall_lsq;

    ROB_entry_t rob_input;


    // Handshake with pipeline reg to not advance instruction on stall
    typedef enum logic [0:0] { S_EMPTY=1'b0, S_HOLD=1'b1 } state_t;
    state_t ps, ns;

    // Latched instruction and metadata
    pipe_in_t instr_hold;

    always_ff @(posedge clk) begin
        if (reset) begin
            ps <= S_EMPTY;
            instr_hold <= '0;
        end else begin
            ps <= ns;
            // Capture the instruction when first entering HOLD
            if (ps == S_EMPTY && ns == S_HOLD) begin
                instr_hold <= pipe_out;
            end
        end
    end

    // Next state logic
    always_comb begin
        ns = ps;
        case (ps)
            S_EMPTY: if (stall) ns = S_HOLD;
            S_HOLD : if (!stall) ns = S_EMPTY;
        endcase
    end

    // Stall signal comes from registered state
    assign pc_pipe_stall = (ps == S_HOLD);


    // hold instruction
    assign ins = (ps == S_HOLD) ? instr_hold.instruction   : pipe_out.instruction;

    assign new_packet = rob_input;

    // do not change reg stat if we are about to stall
    assign issue_writes = (ns == S_HOLD) ? 1'b0: issue_writes_temp;
    
    assign prediction = (ps == S_HOLD) ? instr_hold.prediction : pipe_out.prediction;

    assign curr_branch_pc = (ps == S_HOLD) ? instr_hold.pc : pipe_out.pc;

    assign branch =  (ps == S_HOLD) ? instr_hold.branch : pipe_out.branch;
    assign jump = (ps == S_HOLD) ? instr_hold.jump : pipe_out.jump;

    logic [6:0] op;
    assign op = ins[6:0];

    always_comb begin
        if (op == 7'b0000000)
            rs_dest = 3'b100;
        else if (~busy_bus[0])
            rs_dest = 3'b000;
        else if (~busy_bus[1])
            rs_dest = 3'b001;
        else if (~busy_bus[2])
            rs_dest = 3'b010;
        else if (~busy_bus[3])
            rs_dest = 3'b011;
        else 
            rs_dest = 3'b101;
    end

    logic lsq_stall, jalrq_stall;


    assign lsq_stall = lsq_full & ((op == 7'b0000011) | (op == 7'b0100011));
    assign jalrq_stall = jalrq_full & (op == 7'b1100111);

    assign stall = (rs_dest[2] & rs_dest[0]) | rob_full | lsq_stall | jalrq_stall;
    // decode instruction
    always_comb begin
        rs1 = ins[19:15];
        rs2 = ins[24:20];
        issue_dest = ins[11:7];

        // R-type
        if (op == 7'b0110011) begin
            branch_type = NB;
            issue_writes_temp = 1;
            temp_load = 0;
            // CDB forwarding resolves 0-2 data hazard
            if ((Q_j == new_CDB.dest_ROB_entry) && (new_CDB.dest_ROB_entry != 4'b0) && (~new_CDB.load_step1)) begin
                V_j = new_CDB.result;
                Q_temp_j = '0;
            end
            // Data available in reg file
            else if (~rs1reg_busy) begin
                V_j = rs1_data;
                Q_temp_j = '0;
            end
            // Query ROB
            else if (rs1rob_ready) begin
                V_j = rs1rob_data;
                Q_temp_j = '0;
            end
            // Data not ready anywhere, have to wait for CDB
            else begin
                V_j = 32'b0;
                Q_temp_j = Q_j;
            end


            if ((Q_k == new_CDB.dest_ROB_entry) && (new_CDB.dest_ROB_entry != 4'b0) && (~new_CDB.load_step1)) begin
                V_k = new_CDB.result;
                Q_temp_k = '0;
            end
   
            else if (~rs2reg_busy) begin
                V_k = rs2_data;
                Q_temp_k = '0;
            end
            // Query ROB
            else if (rs2rob_ready) begin
                V_k = rs2rob_data;
                Q_temp_k = '0;
            end

            else begin
                V_k = 32'b0;
                Q_temp_k = Q_k;
            end
            
            // ALu operation select
            if (ins[14:12] == 3'b0 && ins[31:25] == 7'b0000001) begin
                alu_op = MUL;
            end
            else if (ins[14:12] == 3'b001 && ins[31:25] == 7'b0000001) begin
                alu_op = MULH;
            end
            else if (ins[14:12] == 3'b100 && ins[31:25] == 7'b0000001) begin
                alu_op = DIV;
            end
            else if (ins[14:12] == 3'b111 && ins[31:25] == 7'b0000001) begin
                alu_op = REMU;
            end
            else if (ins[14:12] == 3'b0 && ins[31:25] == 7'b0000000) begin
                alu_op = ADD;
            end
            else if (ins[14:12] == 3'b0 && ins[31:25] == 7'b0100000) begin
                alu_op = SUB;
            end
            else if (ins[14:12] == 3'b100 && ins[31:25] == 7'b0000000) begin
                alu_op = XOR;
            end
            else if (ins[14:12] == 3'b110 && ins[31:25] == 7'b0000000) begin
                alu_op = OR;
            end
            else if (ins[14:12] == 3'b111 && ins[31:25] == 7'b0000000) begin
                alu_op = AND;
            end
            else if (ins[14:12] == 3'b001 && ins[31:25] == 7'b0000000) begin
                alu_op = SLL;
            end
            else if (ins[14:12] == 3'b101 && ins[31:25] == 7'b0000000) begin
                alu_op = SRL;
            end
            else if (ins[14:12] == 3'b101 && ins[31:25] == 7'b0100000) begin
                alu_op = SRA;
            end
            else if (ins[14:12] == 3'b010 && ins[31:25] == 7'b0000000) begin
                alu_op = SLT;
            end
            else begin
                alu_op = SLTU;
            end
        end

        // branches
        else if (branch) begin
            alu_op = SUB;
            issue_writes_temp = 1'b0;
            temp_load = 0;

           if ((Q_j == new_CDB.dest_ROB_entry) && (new_CDB.dest_ROB_entry != 4'b0) && (~new_CDB.load_step1)) begin
                V_j = new_CDB.result;
                Q_temp_j = '0;
            end
           
            else if (~rs1reg_busy) begin
                V_j = rs1_data;
                Q_temp_j = '0;
            end
            // Query ROB
            else if (rs1rob_ready) begin
                V_j = rs1rob_data;
                Q_temp_j = '0;
            end
            else begin
                V_j = 32'b0;
                Q_temp_j = Q_j;
            end

            if ((Q_k == new_CDB.dest_ROB_entry) && (new_CDB.dest_ROB_entry != 4'b0) && (~new_CDB.load_step1)) begin
                V_k = new_CDB.result;
                Q_temp_k = '0;
            end
            
            else if (~rs2reg_busy) begin
                V_k = rs2_data;
                Q_temp_k = '0;
            end
            // Query ROB
            else if (rs2rob_ready) begin
                V_k = rs2rob_data;
                Q_temp_k = '0;
            end
            else begin
                V_k = 32'b0;
                Q_temp_k = Q_k;
            end

            branch_type = (ins[14:12]);
        end
        
        // I-type instructions
        else if (op == 7'b0010011) begin
            issue_writes_temp = 1;
            if ((Q_j == new_CDB.dest_ROB_entry) && (new_CDB.dest_ROB_entry != 4'b0) && (~new_CDB.load_step1)) begin
                V_j = new_CDB.result;
                Q_temp_j = '0;
            end
    
            else if (~rs1reg_busy) begin
                V_j = rs1_data;
                Q_temp_j = '0;
            end
            // Query ROB
            else if (rs1rob_ready) begin
                V_j = rs1rob_data;
                Q_temp_j = '0;
            end
            else begin
                V_j = 32'b0;
                Q_temp_j = Q_j;
            end

            // ALU operation decode
            if (ins[14:12] == 3'b0) begin
                alu_op = ADD;
                V_k = {{20{ins[31]}}, ins[31:20]};
            end
            else if (ins[14:12] == 3'b100) begin
                alu_op = XOR;
                V_k = {{20{ins[31]}}, ins[31:20]};
            end
            else if (ins[14:12] == 3'b110) begin
                alu_op = OR;
                V_k = {{20{ins[31]}}, ins[31:20]};
            end
            else if (ins[14:12] == 3'b111) begin
                alu_op = AND;
                V_k = {{20{ins[31]}}, ins[31:20]};
            end
            else if (ins[14:12] == 3'b001) begin
                alu_op = SLL;
                V_k = {27'b0 , ins[24:20]};
            end
            else if (ins[14:12] == 3'b101 && ins[30] == 0) begin
                alu_op = SRL;
                V_k = {27'b0 , ins[24:20]};
            end
            else if (ins[14:12] == 3'b101 && ins[30] == 1) begin
                alu_op = SRA;
                V_k = {27'b0 , ins[24:20]};
            end
            else if (ins[14:12] == 3'b010) begin
                alu_op = SLT;
                V_k = {{20{ins[31]}}, ins[31:20]};
            end
            else begin
                alu_op = SLTU;
                V_k = {{20{ins[31]}}, ins[31:20]};
            end
            Q_temp_k = 4'b0;
            branch_type = NB;
            temp_load = 0;
        end
        else if (jump || op == 7'b1100111) begin
            alu_op = ADD;
            issue_writes_temp = 1;
            temp_load = 0;
            V_j = curr_branch_pc;
            V_k = {29'b0, 3'b100};
            Q_temp_j = 4'b0;
            Q_temp_k = 4'b0;
            branch_type = NB;
        end

        // load
        else if (op == 7'b0000011) begin
            alu_op = ADD;
            issue_writes_temp = 1;
            temp_load = 1;
            if ((Q_j == new_CDB.dest_ROB_entry) && (new_CDB.dest_ROB_entry != 4'b0) && (~new_CDB.load_step1)) begin
                V_j = new_CDB.result;
                Q_temp_j = '0;
            end
            else if (~rs1reg_busy) begin
                V_j = rs1_data;
                Q_temp_j = '0;
            end
            // Query ROB
            else if (rs1rob_ready) begin
                V_j = rs1rob_data;
                Q_temp_j = '0;
            end
            else begin
                V_j = 32'b0;
                Q_temp_j = Q_j;
            end

            V_k =  {{20{ins[31]}}, ins[31:20]};
            Q_temp_k = 4'b0;
            branch_type = NB;
        end

        // U type instructions
        else if (op == 7'b0110111 || op == 7'b0010111) begin
            issue_writes_temp = 1;
            temp_load = 0;
            Q_temp_k = 4'b0;
            branch_type = NB;
            Q_temp_j = 4'b0;
            alu_op = ADD;

            // lui
            if (op == 7'b0110111) begin
                V_j = 32'b0;
                V_k = {ins[31:12], 12'b0};
            end
            // auipc
            else begin
                V_j = curr_branch_pc;
                V_k = {ins[31:12], 12'b0};
            end
        end

        // store
        else if (op == 7'b0100011) begin
            // Need ROB to have access to operand buses in case rs2 is not available
            issue_writes_temp = 1'b0;
            alu_op = ADD;
			temp_load = 1;
            if ((Q_j == new_CDB.dest_ROB_entry) && (new_CDB.dest_ROB_entry != 4'b0) && (~new_CDB.load_step1)) begin
                V_j = new_CDB.result;
                Q_temp_j = '0;
            end
            else if (~rs1reg_busy) begin
                V_j = rs1_data;
                Q_temp_j = '0;
            end
            // Query ROB
            else if (rs1rob_ready) begin
                V_j = rs1rob_data;
                Q_temp_j = '0;
            end
            else begin
                V_j = 32'b0;
                Q_temp_j = Q_j;
            end

            V_k =  {{20{ins[31]}}, ins[31:25], ins[11:7]};
            Q_temp_k = 4'b0;
            branch_type = NB;
        end
        //nop
        else begin
            issue_writes_temp = 1'b0;
            alu_op = ADD; // in the future make this a nop designation and have mech to clear rs
            V_j = '0;
            V_k = '0;
            Q_temp_j = '0;
            Q_temp_k = '0;
            branch_type = NB;
            temp_load = 0;
        end
    end
    // assemble rs input packet
    always_comb begin 
        rs_input.Q_j = Q_temp_j;
        rs_input.Q_k = Q_temp_k;
        rs_input.V_j = V_j;
        rs_input.V_k = V_k;
        rs_input.load = temp_load;
        rs_input.ROB_entry = stall ? 4'b0000 : ROB_entry;
        rs_input.ALU_op = alu_op;
        rs_input.branch_type = branch_type;
        rs_input.busy = stall ? 1'b0 : 1'b1;
    end

    // assemble ROB input packet
    always_comb begin
        `ifdef VERILATOR
            rob_input.pc = curr_branch_pc;
        `endif

        rob_input.ROB_number = (stall | (op == 7'b0000000)) ? 4'b0000 : ROB_entry; // send invalid packet if stall
        rob_input.branch_pred = prediction;
        rob_input.branch_result = 1'b0; // to be updated later
        rob_input.jalr = (op == 7'b1100111) ? 1 : 0;
        rob_input.ras_pointer = (ps == S_HOLD) ? instr_hold.ras_ptr : pipe_out.ras_ptr;
        // store
        if (op == 7'b0100011) begin
            // unknown for now
            rob_input.destination = 32'b0;
            rob_input.itype = 2'b01;
            rob_input.value = rs2_data;
            rob_input.ready = 1'b1;
        end
        // branch
        else if (branch) begin
            rob_input.itype = 2'b00;
            rob_input.value = {{19{ins[31]}}, ins[31], ins[7], ins[30:25], ins[11:8], 1'b0};
            rob_input.destination = curr_branch_pc;
            rob_input.ready = 1'b0;
        end
        // load
        else if (op == 7'b0000011) begin
            rob_input.itype = 2'b11;
            rob_input.value = 32'b0; // to be updated later
            rob_input.destination = {27'b0, ins[11:7]};
            rob_input.ready = 1'b0;
        end

        // register output
        else begin
            rob_input.itype = 2'b10;
            rob_input.value = 32'b0; // to be updated later
            rob_input.destination = {27'b0, ins[11:7]};
            rob_input.ready = 1'b0;
        end
    end

    // assemble lsq packet
    always_comb begin
        if (~stall) begin

            // load/store transfer size and sign decode
            if ((ins[14:12] == 3'b000)) begin
                lsq_input.xfer_size = 3'b001;
                lsq_input.lsq_signed = 1;
            end
            else if (ins[14:12] == 3'b001) begin
                lsq_input.xfer_size = 3'b010;
                lsq_input.lsq_signed = 1;
            end
            else if (ins[14:12] == 3'b010) begin
                lsq_input.xfer_size = 3'b100;
                lsq_input.lsq_signed = 1;
            end
            else if (ins[14:12] == 3'b100) begin
                lsq_input.xfer_size = 3'b001;
                lsq_input.lsq_signed = 0;
            end
            else if (ins[14:12] == 3'b101) begin
                lsq_input.xfer_size = 3'b010;
                lsq_input.lsq_signed = 0;
            end

            // load
            if (op == 7'b0000011) begin
                lsq_input.load = ~stall;
                lsq_input.store = 0;
                lsq_input.address = '0;
                lsq_input.result = '0;
                lsq_input.ROB_entry = (stall | (op == 7'b0000000)) ? 4'b0000 : ROB_entry;
                lsq_input.address_valid = 0;
                lsq_input.Q_store = '0;
            end
            // store
            else if (op == 7'b0100011) begin
                lsq_input.load = 0;
                lsq_input.store = ~stall;
                lsq_input.address = '0;
                if ((new_CDB.dest_ROB_entry == Q_k) && (new_CDB.dest_ROB_entry != 4'b0) && (~new_CDB.load_step1)) begin
                    lsq_input.result = new_CDB.result;
                    lsq_input.Q_store = '0;
                end
                else if (~rs2reg_busy) begin
                    lsq_input.result = rs2_data;
                    lsq_input.Q_store = '0;
                end
                // Query ROB
                else if (rs2rob_ready) begin
                    lsq_input.result = rs2rob_data;
                    lsq_input.Q_store = '0;
                end
                else begin
                    lsq_input.result = 0;
                    lsq_input.Q_store = Q_k;
                end

                lsq_input.ROB_entry = (stall | (op == 7'b0000000)) ? 4'b0000 : ROB_entry;
                lsq_input.address_valid = 0;

    
            end
            // not valid if not load or store
            else begin
                lsq_input.load = 0;
                lsq_input.store = 0;
                lsq_input.address = '0;
                lsq_input.result = rs2;
                lsq_input.ROB_entry = (stall | (op == 7'b0000000)) ? 4'b0000 : ROB_entry;
                lsq_input.address_valid = 0;
                lsq_input.Q_store = Q_k;
                lsq_input.xfer_size = 3'b000;
                lsq_input.lsq_signed = 0;

            end
        end
        // not valid if stall
        else begin
                lsq_input.load = 0;
                lsq_input.store = 0;
                lsq_input.address = '0;
                lsq_input.result = rs2;
                lsq_input.ROB_entry = (stall | (op == 7'b0000000)) ? 4'b0000 : ROB_entry;
                lsq_input.address_valid = 0;
                lsq_input.Q_store = Q_k;
        end
    end

    // Assemble jalr queue packet
    always_comb begin
        jalrq_input.valid = (op == 7'b1100111) && ~stall;
        jalrq_input.jalr_taken_address = (ps == S_HOLD) ? instr_hold.jalr_address : pipe_out.jalr_address;
        jalrq_input.imm = ins[31:20];

        if ((Q_j == new_CDB.dest_ROB_entry) && (new_CDB.dest_ROB_entry != 4'b0) && (~new_CDB.load_step1)) begin
            jalrq_input.jalr_actual_address = new_CDB.result;
            jalrq_input.Q_address = '0;
        end
        else if (~rs1reg_busy) begin
            jalrq_input.jalr_actual_address = rs1_data;
            jalrq_input.Q_address = '0;
        end
        else if (rs1rob_ready) begin
            jalrq_input.jalr_actual_address = rs1rob_data;
            jalrq_input.Q_address = '0;
        end
        else begin
            jalrq_input.jalr_actual_address = 32'b0;
            jalrq_input.Q_address = Q_j;
        end
    end
        
endmodule
