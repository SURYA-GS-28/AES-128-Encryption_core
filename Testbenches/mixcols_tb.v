`timescale 1ns/1ps
module mixcols_tb;
reg  [127:0] data_in;
wire [127:0] out;

mix_cols m0 (.mix_in({data_in[127:120],data_in[119:112],data_in[111:104],data_in[103:96]}), .out(out[127:96]));  //MSB
mix_cols m1 (.mix_in({data_in[95:88],data_in[87:80],data_in[79:72],data_in[71:64]}),  .out(out[95:64]));
mix_cols m2 (.mix_in({data_in[63:56],data_in[55:48],data_in[47:40],data_in[39:32]}),  .out(out[63:32]));
mix_cols m3 (.mix_in({data_in[31:24],data_in[23:16],data_in[15:8],data_in[7:0]}),   .out(out[31:0]));

initial begin
    $display("==== MixColumns TB ====");

    // Test 1
    data_in = 128'h00000000000000000000000000000100;
    #10;
    $display("IN  = %h", data_in);
    $display("OUT = %h\n", out);
    
    // Test 2
    data_in = 128'h00000000000000000000000000000000;
    #10;
    $display("IN  = %h", data_in);
    $display("OUT = %h\n", out);

    // Test 3
    data_in = 128'h000000000000000000000000E11A043A;
    #10;
    $display("IN  = %h", data_in);
    $display("OUT = %h\n", out);

    // Test 4
    data_in = 128'h23BE4618C4C7C5C2C79A425DE11A043A;
    #10;
    $display("IN  = %h", data_in);
    $display("OUT = %h\n", out);

    // Test 5 (known column test embedded)
    data_in = 128'h00000000000000000000000004030201;
    #10;
    $display("IN  = %h", data_in);
    $display("OUT = %h\n", out);
      // Test 6: Pattern
        data_in = 128'h00112233445566778899aabbccddeeff;
        #10;
        $display("IN  = %h", data_in);
        $display("OUT = %h\n", out);

    $stop;
end

initial begin
	$dumpfile("wave1.vcd");
	$dumpvars(0,mixcols_tb);
end
endmodule
