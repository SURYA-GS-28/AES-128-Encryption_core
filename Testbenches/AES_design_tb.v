
module tb_aes_demo;

reg clk;
reg start;
reg [127:0] plain_txt;

wire done;
wire [127:0] cipher_txt;

// stats
integer count;
integer start_time;

// DUT
AesFsm dut (
  .clk(clk),
  .start(start),
  .plain_txt(plain_txt),
  .done(done),
  .cipher_txt(cipher_txt)
);

// clock (100 MHz → 10ns period)
always #5 clk = ~clk;

initial begin
  clk = 0;
  start = 0;
  count = 0;

  // initial plaintext
  plain_txt = 128'h3243f6a8885a308d313198a2e0370734;

  #20;
  start_time = $time;

  // kick off first encryption
  start = 1;
  #10;
  start = 0;
end

// 🔥 Continuous streaming (auto-trigger next block)
always @(posedge clk) begin
  if (done) begin
    count = count + 1;

    // display result
    $display("Time=%0t ns | Block %0d → %h",
              $time, count, cipher_txt);

    // change input dynamically (so it doesn't look static)
    plain_txt <= plain_txt + count;

    // trigger next encryption immediately
    start <= 1;
  end else begin
    start <= 0;
  end
end

// 🔥 Throughput report
initial begin
  #2000;  // run long enough

  $display("\n==== PERFORMANCE REPORT ====");
  $display("Total Blocks = %0d", count);
  $display("Total Time   = %0t ns", $time - start_time);

  // throughput calculation
  if ($time > start_time)
    $display("Throughput   ≈ %0f blocks/sec",
      (count * 1.0e9) / ($time - start_time));

  $display("============================\n");

  $finish;
end
initial begin
 // 🔥 waveform dump
  $dumpfile("wave.vcd");
  $dumpvars(0, tb_aes_fsm);
  end

endmodule
