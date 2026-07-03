module sbox_test_tb;

reg  [7:0] in;
wire [7:0] out;

sbox_test uut (
    .in(in),
    .out(out)
);

initial begin
    $display("Time\tInput\tOutput");

    in = 8'h00; #10;
    $display("%0t\t%h\t%h", $time, in, out);

    in = 8'h01; #10;
    $display("%0t\t%h\t%h", $time, in, out);

    in = 8'h02; #10;
    $display("%0t\t%h\t%h", $time, in, out);

    in = 8'h53; #10;   // IMPORTANT TEST
    $display("%0t\t%h\t%h", $time, in, out);

    in = 8'hFF; #10;
    $display("%0t\t%h\t%h", $time, in, out);

    $finish;
end

endmodule
