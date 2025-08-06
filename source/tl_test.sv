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

  initial begin // Set up the clock
    clk <= 0;
    forever #(ClockDelay/2) clk <= ~clk;
  end

  initial begin
    $display("Starting single_cycle testbench...");

    reset <= 1; @(posedge clk);

    // Hold reset for a few cycles
  
    reset <= 0; @(posedge clk);

    // Run long enough to execute all instructions including the B HALT
    repeat (200) @(posedge clk);
    
    $finish;
  end

endmodule