`timescale 1ns/10ps
module tl_test;

  logic clk;
  logic reset;

  parameter ClockDelay = 5000;

  // Instantiate the DUT (Device Under Test)
  out_of_order dut (
    .clk(clk),
    .reset(reset)
  );

  initial $timeformat(-9, 2, " ns", 10);

  // Clock generation
  initial begin
    clk <= 0;
    forever #(ClockDelay/2) clk <= ~clk;
  end

  initial begin
    $display("Starting single_cycle testbench...");

    reset <= 1; @(posedge clk);
    reset <= 0; @(posedge clk);

    // Run long enough to execute all instructions
    repeat (500) @(posedge clk);

    // Uncomment for benchmark 1

  /*
    // Register assertions
    assert (dut.registers.RegData[1] == 6)       else $fatal("x1 should be 6, got %0d", dut.registers.RegData[1]);
    assert (dut.registers.RegData[2] == 2)       else $fatal("x2 should be 2, got %0d", dut.registers.RegData[2]);
    assert (dut.registers.RegData[3] == 12)      else $fatal("x3 should be 12, got %0d", dut.registers.RegData[3]);
    assert (dut.registers.RegData[4] == 6)       else $fatal("x4 should be 6, got %0d", dut.registers.RegData[4]);
    assert (dut.registers.RegData[5] == 0)       else $fatal("x5 should be 0, got %0d", dut.registers.RegData[5]);
    assert (dut.registers.RegData[6] == 12)      else $fatal("x6 should be 12, got %0d", dut.registers.RegData[6]);
    assert (dut.registers.RegData[7] == 0)       else $fatal("x7 should be 0 (skipped), got %0d", dut.registers.RegData[7]);
    assert (dut.registers.RegData[8] == 0)       else $fatal("x8 should be 0 (skipped), got %0d", dut.registers.RegData[8]);
    assert (dut.registers.RegData[9] == 123)     else $fatal("x9 should be 123, got %0d", dut.registers.RegData[9]);
*/

  // uncomment for benchmark 2

    // Register assertions
    assert(dut.registers.RegData[1]  == 10);          // x1
    assert(dut.registers.RegData[2]  == 3);           // x2
    assert(dut.registers.RegData[3]  == -5);          // x3
    assert(dut.registers.RegData[4]  == 1);           // x4
    assert(dut.registers.RegData[5]  == 100);         // x5 (executed)
    assert(dut.registers.RegData[6]  == 0);           // x6 (skipped)
    assert(dut.registers.RegData[7]  == 13);          // x7 = 10 + 3
    assert(dut.registers.RegData[8]  == 10);          // x8 = 13 - 3
    assert(dut.registers.RegData[9]  == 30);          // x9 = 10 * 3
    assert(dut.registers.RegData[10] == -1);  // x10 = MULH(10, -5) = -1 (top 32 bits of 64-bit product)
    assert(dut.registers.RegData[11] == 3);           // x11 = 10 / 3
    assert(dut.registers.RegData[12] == 1);           // x12 = 10 % 3
    assert(dut.registers.RegData[13] == 3);           // x13 = mem[0]
    assert(dut.registers.RegData[14] == 0);           // x14 (skipped due to BLT taken)
    assert(dut.registers.RegData[15] == 0);           // x15 (skipped due to JAL)
    assert(dut.registers.RegData[16] == 0);           // x16 (skipped due to JAL)
    assert(dut.registers.RegData[17] == 4);           // x17 = x11 + x12 = 3 + 1
    assert(dut.registers.RegData[18] == 1);           // x18 = x17 - x2 = 4 - 3
    assert(dut.registers.RegData[19] == -5);          // x19 = 1 * -5
    assert(dut.registers.RegData[20] == -5);          // x20 = mem[4]
    assert(dut.registers.RegData[21] == 1);           // x21 = executed
    assert(dut.registers.RegData[22] == 12);          // x22 = loop: 0 -> 3 -> 6 -> 9 -> 12
    assert(dut.registers.RegData[23] == 22);          // x23 = x22 + x1 = 12 + 10
    assert(dut.registers.RegData[24] == 132);         // x24 = return address from JAL at PC=128

    // Optional: verify that x0 is still 0
    assert(dut.registers.RegData[0] == 0);

    $display("✅ All register assertions passed.");
    $finish;
  end

endmodule
