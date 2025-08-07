onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -radix decimal /tl_test/dut/fetch_stage/program_counter/pc
add wave -noupdate -expand /tl_test/dut/res_sched/pipe_out
add wave -noupdate /tl_test/dut/res_sched/busy_bus
add wave -noupdate /tl_test/dut/res_sched/rob_full
add wave -noupdate /tl_test/dut/res_sched/lsq_full
add wave -noupdate /tl_test/dut/res_sched/stall
add wave -noupdate /tl_test/dut/res_sched/ROB_entry
add wave -noupdate /tl_test/dut/res_sched/rob_input
add wave -noupdate /tl_test/dut/res_sched/new_packet
add wave -noupdate /tl_test/dut/reservation_stations/rs0_data
add wave -noupdate /tl_test/dut/reservation_stations/rs1_data
add wave -noupdate /tl_test/dut/reservation_stations/rs2_data
add wave -noupdate /tl_test/dut/reservation_stations/rs3_data
add wave -noupdate /tl_test/dut/cdb/new_CDB
add wave -noupdate /tl_test/dut/cdb/yummi_in_bus
add wave -noupdate /tl_test/dut/fu_sched/ready_bus
add wave -noupdate /tl_test/dut/cdb/valid_out_bus
add wave -noupdate /tl_test/dut/reorder_buffer/wptr
add wave -noupdate /tl_test/dut/reorder_buffer/rptr
add wave -noupdate /tl_test/dut/res_sched/clk
add wave -noupdate /tl_test/dut/reorder_buffer/head
add wave -noupdate -childformat {{{/tl_test/dut/reorder_buffer/rob_data[1]} -radix unsigned} {{/tl_test/dut/reorder_buffer/rob_data[2]} -radix unsigned} {{/tl_test/dut/reorder_buffer/rob_data[3]} -radix unsigned} {{/tl_test/dut/reorder_buffer/rob_data[4]} -radix unsigned} {{/tl_test/dut/reorder_buffer/rob_data[5]} -radix unsigned}} -subitemconfig {{/tl_test/dut/reorder_buffer/rob_data[1]} {-height 15 -radix unsigned} {/tl_test/dut/reorder_buffer/rob_data[2]} {-height 15 -radix unsigned} {/tl_test/dut/reorder_buffer/rob_data[3]} {-height 15 -radix unsigned} {/tl_test/dut/reorder_buffer/rob_data[4]} {-height 15 -radix unsigned} {/tl_test/dut/reorder_buffer/rob_data[5]} {-height 15 -radix unsigned}} /tl_test/dut/reorder_buffer/rob_data
add wave -noupdate /tl_test/dut/reservation_stations/rs3_data.ALU_op
add wave -noupdate /tl_test/dut/reservation_stations/rs2_data.ALU_op
add wave -noupdate /tl_test/dut/reservation_stations/rs1_data.ALU_op
add wave -noupdate /tl_test/dut/reservation_stations/rs0_data.ALU_op
add wave -noupdate /tl_test/dut/reservation_stations/rs3_data.ROB_entry
add wave -noupdate /tl_test/dut/reservation_stations/rs2_data.ROB_entry
add wave -noupdate /tl_test/dut/reservation_stations/rs1_data.ROB_entry
add wave -noupdate /tl_test/dut/reservation_stations/rs0_data.ROB_entry
add wave -noupdate /tl_test/dut/registers/RegData
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {49352513 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 314
configure wave -valuecolwidth 211
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
WaveRestoreZoom {35437328 ps} {57585665 ps}
