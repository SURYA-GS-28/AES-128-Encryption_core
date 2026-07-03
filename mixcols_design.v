
module mix_cols(
  input  [31:0] mix_in,
  output [31:0] out
);

wire [7:0] s0;
wire [7:0] s1;
wire [7:0] s2;
wire [7:0] s3;
wire [7:0] out0;
wire [7:0] out1;
wire [7:0] out2;
wire [7:0] out3;

assign s0 = mix_in[31:24]; //Msb of first split
assign s1 = mix_in[23:16];
assign s2 = mix_in[15:8];
assign s3 = mix_in[7:0];    // Extreme right end (LSB of Sbout) marked for debugging
//(Finite Field Math -> GF(2^8))

// Multiple of 2 logic 
function [7:0] x2;
  input [7:0] a;
  x2 = ((a<<1) ^ ( a[7]? 8'h1B : 8'h00));    // If MSB is 1, XOR with 0x1B else 0X00
 endfunction

//Multiple of 3 logic
function [7:0]x3;
  input [7:0] b;
  x3 = x2(b)^b;
 endfunction

//Hardcoded output Logic
assign out0 = x2(s0)^ x3(s1)^ s2^ s3;
assign out1 = s0^ x2(s1)^ x3(s2)^ s3;
assign out2 = s0^ s1^ x2(s2)^ x3(s3);
assign out3 = x3(s0)^ s1^ s2^ x2(s3);

assign out ={out0,out1,out2,out3};
endmodule
