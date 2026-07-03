module sub_bytes (
  input [127:0] in,
  output [127:0] out
);

genvar i;
generate
  for(i=0;i<16;i++) begin : sbox_inst
    sbox dut(
      .in(in[(i*8)+7:i*8]),
      .out(out[(i*8)+7:i*8])
     );
   end
 endgenerate
endmodule
