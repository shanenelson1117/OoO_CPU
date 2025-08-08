onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -radix decimal /tl_test/dut/fetch_stage/program_counter/pc
add wave -noupdate -expand /tl_test/dut/res_sched/pipe_out
add wave -noupdate /tl_test/dut/res_sched/busy_bus
add wave -noupdate /tl_test/dut/res_sched/rob_full
add wave -noupdate /tl_test/dut/res_sched/lsq_full
add wave -noupdate /tl_test/dut/res_sched/stall
add wave -noupdate -radix unsigned /tl_test/dut/reg_status_register/reg_status_table
add wave -noupdate /tl_test/dut/res_sched/ROB_entry
add wave -noupdate /tl_test/dut/res_sched/rob_input
add wave -noupdate /tl_test/dut/res_sched/new_packet
add wave -noupdate -expand /tl_test/dut/reservation_stations/rs0_data
add wave -noupdate -expand /tl_test/dut/reservation_stations/rs1_data
add wave -noupdate -expand /tl_test/dut/reservation_stations/rs2_data
add wave -noupdate /tl_test/dut/reservation_stations/rs3_data
add wave -noupdate -expand /tl_test/dut/cdb/new_CDB
add wave -noupdate /tl_test/dut/cdb/yummi_in_bus
add wave -noupdate /tl_test/dut/fu_sched/consumed_bus
add wave -noupdate /tl_test/dut/fu_sched/ready_bus
add wave -noupdate /tl_test/dut/cdb/valid_out_bus
add wave -noupdate /tl_test/dut/reorder_buffer/wptr
add wave -noupdate /tl_test/dut/reorder_buffer/rptr
add wave -noupdate /tl_test/dut/res_sched/clk
add wave -noupdate /tl_test/dut/reorder_buffer/head
add wave -noupdate -childformat {{{/tl_test/dut/reorder_buffer/rob_data[1]} -radix unsigned} {{/tl_test/dut/reorder_buffer/rob_data[2]} -radix unsigned} {{/tl_test/dut/reorder_buffer/rob_data[3]} -radix unsigned} {{/tl_test/dut/reorder_buffer/rob_data[4]} -radix unsigned} {{/tl_test/dut/reorder_buffer/rob_data[5]} -radix decimal} {{/tl_test/dut/reorder_buffer/rob_data[6]} -radix decimal} {{/tl_test/dut/reorder_buffer/rob_data[7]} -radix decimal} {{/tl_test/dut/reorder_buffer/rob_data[8]} -radix unsigned} {{/tl_test/dut/reorder_buffer/rob_data[9]} -radix unsigned} {{/tl_test/dut/reorder_buffer/rob_data[10]} -radix unsigned} {{/tl_test/dut/reorder_buffer/rob_data[11]} -radix unsigned} {{/tl_test/dut/reorder_buffer/rob_data[12]} -radix unsigned} {{/tl_test/dut/reorder_buffer/rob_data[13]} -radix unsigned} {{/tl_test/dut/reorder_buffer/rob_data[14]} -radix unsigned} {{/tl_test/dut/reorder_buffer/rob_data[15]} -radix unsigned}} -subitemconfig {{/tl_test/dut/reorder_buffer/rob_data[1]} {-height 15 -radix unsigned} {/tl_test/dut/reorder_buffer/rob_data[2]} {-height 15 -radix unsigned} {/tl_test/dut/reorder_buffer/rob_data[3]} {-height 15 -radix unsigned} {/tl_test/dut/reorder_buffer/rob_data[4]} {-height 15 -radix unsigned} {/tl_test/dut/reorder_buffer/rob_data[5]} {-height 15 -radix decimal} {/tl_test/dut/reorder_buffer/rob_data[6]} {-height 15 -radix decimal} {/tl_test/dut/reorder_buffer/rob_data[7]} {-height 15 -radix decimal} {/tl_test/dut/reorder_buffer/rob_data[8]} {-height 15 -radix unsigned} {/tl_test/dut/reorder_buffer/rob_data[9]} {-height 15 -radix unsigned} {/tl_test/dut/reorder_buffer/rob_data[10]} {-height 15 -radix unsigned} {/tl_test/dut/reorder_buffer/rob_data[11]} {-height 15 -radix unsigned} {/tl_test/dut/reorder_buffer/rob_data[12]} {-height 15 -radix unsigned} {/tl_test/dut/reorder_buffer/rob_data[13]} {-height 15 -radix unsigned} {/tl_test/dut/reorder_buffer/rob_data[14]} {-height 15 -radix unsigned} {/tl_test/dut/reorder_buffer/rob_data[15]} {-height 15 -radix unsigned}} /tl_test/dut/reorder_buffer/rob_data
add wave -noupdate /tl_test/dut/reservation_stations/rs3_data.ALU_op
add wave -noupdate /tl_test/dut/reservation_stations/rs2_data.ALU_op
add wave -noupdate /tl_test/dut/reservation_stations/rs1_data.ALU_op
add wave -noupdate /tl_test/dut/reservation_stations/rs0_data.ALU_op
add wave -noupdate /tl_test/dut/reservation_stations/rs3_data.ROB_entry
add wave -noupdate /tl_test/dut/reservation_stations/rs2_data.ROB_entry
add wave -noupdate /tl_test/dut/reservation_stations/rs1_data.ROB_entry
add wave -noupdate /tl_test/dut/reservation_stations/rs0_data.ROB_entry
add wave -noupdate /tl_test/dut/registers/RegData
add wave -noupdate /tl_test/dut/mult_fu/valid_in
add wave -noupdate -radix decimal /tl_test/dut/mult_fu/A
add wave -noupdate -radix decimal /tl_test/dut/mult_fu/B
add wave -noupdate -radix decimal /tl_test/dut/mult_fu/result
add wave -noupdate -radix decimal -childformat {{/tl_test/dut/reservation_stations/rs0/d.Q_j -radix decimal} {/tl_test/dut/reservation_stations/rs0/d.Q_k -radix decimal} {/tl_test/dut/reservation_stations/rs0/d.V_j -radix decimal} {/tl_test/dut/reservation_stations/rs0/d.V_k -radix decimal} {/tl_test/dut/reservation_stations/rs0/d.ROB_entry -radix binary} {/tl_test/dut/reservation_stations/rs0/d.ALU_op -radix binary} {/tl_test/dut/reservation_stations/rs0/d.branch_type -radix decimal} {/tl_test/dut/reservation_stations/rs0/d.busy -radix decimal}} -expand -subitemconfig {/tl_test/dut/reservation_stations/rs0/d.Q_j {-height 15 -radix decimal} /tl_test/dut/reservation_stations/rs0/d.Q_k {-height 15 -radix decimal} /tl_test/dut/reservation_stations/rs0/d.V_j {-height 15 -radix decimal} /tl_test/dut/reservation_stations/rs0/d.V_k {-height 15 -radix decimal} /tl_test/dut/reservation_stations/rs0/d.ROB_entry {-height 15 -radix binary} /tl_test/dut/reservation_stations/rs0/d.ALU_op {-height 15 -radix binary} /tl_test/dut/reservation_stations/rs0/d.branch_type {-height 15 -radix decimal} /tl_test/dut/reservation_stations/rs0/d.busy {-height 15 -radix decimal}} /tl_test/dut/reservation_stations/rs0/d
add wave -noupdate -radix decimal -childformat {{/tl_test/dut/reservation_stations/rs0/q_reg.Q_j -radix decimal} {/tl_test/dut/reservation_stations/rs0/q_reg.Q_k -radix decimal} {/tl_test/dut/reservation_stations/rs0/q_reg.V_j -radix decimal} {/tl_test/dut/reservation_stations/rs0/q_reg.V_k -radix decimal} {/tl_test/dut/reservation_stations/rs0/q_reg.ROB_entry -radix decimal} {/tl_test/dut/reservation_stations/rs0/q_reg.ALU_op -radix binary} {/tl_test/dut/reservation_stations/rs0/q_reg.branch_type -radix decimal} {/tl_test/dut/reservation_stations/rs0/q_reg.busy -radix decimal}} -subitemconfig {/tl_test/dut/reservation_stations/rs0/q_reg.Q_j {-height 15 -radix decimal} /tl_test/dut/reservation_stations/rs0/q_reg.Q_k {-height 15 -radix decimal} /tl_test/dut/reservation_stations/rs0/q_reg.V_j {-height 15 -radix decimal} /tl_test/dut/reservation_stations/rs0/q_reg.V_k {-height 15 -radix decimal} /tl_test/dut/reservation_stations/rs0/q_reg.ROB_entry {-height 15 -radix decimal} /tl_test/dut/reservation_stations/rs0/q_reg.ALU_op {-height 15 -radix binary} /tl_test/dut/reservation_stations/rs0/q_reg.branch_type {-height 15 -radix decimal} /tl_test/dut/reservation_stations/rs0/q_reg.busy {-height 15 -radix decimal}} /tl_test/dut/reservation_stations/rs0/q_reg
add wave -noupdate /tl_test/dut/reservation_stations/rs1/q_reg
add wave -noupdate /tl_test/dut/reservation_stations/rs2/q_reg
add wave -noupdate /tl_test/dut/reservation_stations/rs3/q_reg
add wave -noupdate /tl_test/dut/reservation_stations/rs0/valid_operands_reg
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {0 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 314
configure wave -valuecolwidth 282
configure wave -justifyvalue left
configure wave -signalnamewidth 0
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ps
update
WaveRestoreZoom {989084573 ps} {1008469233 ps}
