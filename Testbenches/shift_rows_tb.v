module shift_rows_tb;
reg [127:0]data_in;
wire [127:0]data_out;
  
shift_rows uut (
  .data_in(data_in),
  .data_out(data_out)
 );

initial begin
     $display("Time\tInput\t\t\t\t\tOutput");

    // Test 1: All zeros
    data_in = 128'h63636363636363636363636363636363;
    #10;
    $display("%0t\t%h\t%h", $time, data_in, data_out);

    // Test 2: Incrementing pattern
    data_in = 128'h638293c31bfc33f5c4eeacea4bc12816;
    #10;
    $display("%0t\t%h\t%h", $time, data_in,data_out);

    // Test 3: Boss pattern (contains 0x53)
    data_in = 128'hedededededededededededededededed;
    #10;
    $display("%0t\t%h\t%h", $time, data_in, data_out);

    // Test 4: Random pattern
    data_in = 128'h1d95aedf74bbf4aec918b1bc6062bddf;
    #10;
    $display("%0t\t%h\t%h", $time, data_in,data_out);
    
    // Test 5: All Fs
    data_in = 128'h16161616161616161616161616161616;
    #10;
    $display("%0t\t%h\t%h", $time, data_in, data_out);

    $finish;
end

endmodule
