onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -radix unsigned /tl_test/dut/fetch_stage/program_counter/pc_update
add wave -noupdate -radix unsigned /tl_test/dut/fetch_stage/program_counter/pc
add wave -noupdate /tl_test/dut/fetch_stage/branch
add wave -noupdate /tl_test/dut/fetch_stage/prediction
add wave -noupdate -radix unsigned /tl_test/dut/generate_new_pc/commit_pc
add wave -noupdate -radix decimal /tl_test/dut/generate_new_pc/commit_imm_se
add wave -noupdate -radix decimal /tl_test/dut/generate_new_pc/curr_branch_imm_se
add wave -noupdate /tl_test/dut/generate_new_pc/mispredicted
add wave -noupdate -radix decimal /tl_test/dut/generate_new_pc/pc_pre
add wave -noupdate -radix decimal /tl_test/dut/generate_new_pc/to_be_added
add wave -noupdate /tl_test/dut/clk
add wave -noupdate /tl_test/dut/stall
add wave -noupdate /tl_test/dut/fetch_stage/instruction
add wave -noupdate -radix unsigned /tl_test/dut/fetch_stage/index_read
add wave -noupdate /tl_test/dut/fetch_stage/history_reg/history
add wave -noupdate /tl_test/dut/fetch_stage/jump
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {59121219 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 283
configure wave -valuecolwidth 212
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
WaveRestoreZoom {52748691 ps} {75882899 ps}
