
module tb_key_expansion;

reg  [127:0] key;
wire [127:0] r_key [10:0];

// DUT
key_expansion dut (
  .key(key),
  .r_key(r_key)
);

integer i;

initial begin
  // AES standard test key
  key = 128'h2b7e151628aed2a6abf7158809cf4f3c;

  #10;

  // Print all round keys
  for (i = 0; i <= 10; i = i + 1) begin
    $display("r_key[%0d] = %h", i, r_key[i]);
  end

  // 🔥 Quick sanity checks
  $display("\n--- CHECK ---");

  if (r_key[0] == 128'h2b7e151628aed2a6abf7158809cf4f3c)
    $display("K0 OK");
  else
    $display("K0 WRONG");

  if (r_key[10] == 128'hd014f9a8c9ee2589e13f0cc8b6630ca6)
    $display("K10 OK");
  else
    $display("K10 WRONG");

  $finish;
end

endmodule
