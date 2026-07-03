module sub_bytes_tb;
reg [127:0]data_in;
wire [127:0]state;
  
sub_bytes dut (
  .data_in(data_in),
  .state(state)
 );

initial begin
     $display("Time\tInput\t\t\t\t\tOutput");

    // Test 1: All zeros
    data_in = 128'h00000000000000000000000000000000;
    #10;
    $display("%0t\t%h\t%h", $time, data_in, state);

    // Test 2: Incrementing pattern
    data_in = 128'h00112233445566778899aabbccddeeff;
    #10;
    $display("%0t\t%h\t%h", $time, data_in, state);

    // Test 3: Boss pattern (contains 0x53)
    data_in = 128'h53535353535353535353535353535353;
    #10;
    $display("%0t\t%h\t%h", $time, data_in, state);

    // Test 4: Random pattern
    data_in = 128'hdeadbeefcafebabe1234567890abcdef;
    #10;
    $display("%0t\t%h\t%h", $time, data_in, state);
    
    // Test 5: All Fs
    data_in = 128'hffffffffffffffffffffffffffffffff;
    #10;
    $display("%0t\t%h\t%h", $time, data_in, state);

    $finish;
end

endmodule
