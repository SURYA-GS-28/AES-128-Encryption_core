module AesFsm(
  input [127:0] plain_txt,
  input start,
  input clk,
  output reg done,
  output reg [127:0] cipher_txt
);

reg [2:0] ps;
reg [127:0] state;
reg [127:0] key;
//reg [127:0] round_key[10:0];
reg [127:0] sbout;
reg [127:0] shift_out;
wire [127:0] mix_out;
wire [1407:0] r_key_raw;
wire [127:0] round_key[10:0];
reg [3:0] round;
parameter IDLE = 3'b000;
parameter LOAD = 3'b001;
parameter KEY = 3'b010;
parameter ROUND = 3'b011;
parameter LAST_ROUND = 3'b100;
parameter DONE = 3'b101;
        
sub_bytes sb(.in(state),
              .out(sbout));
shift_rows sr(.data_in(sbout),
	   .data_out(shift_out));
mix_cols m0 (.mix_in({shift_out[127:120],shift_out[119:112],shift_out[111:104],shift_out[103:96]}), .out(mix_out[127:96]));  //MSB
mix_cols m1 (.mix_in({shift_out[95:88],shift_out[87:80],shift_out[79:72],shift_out[71:64]}),  .out(mix_out[95:64]));
mix_cols m2 (.mix_in({shift_out[63:56],shift_out[55:48],shift_out[47:40],shift_out[39:32]}),  .out(mix_out[63:32]));
mix_cols m3 (.mix_in({shift_out[31:24],shift_out[23:16],shift_out[15:8],shift_out[7:0]}),   .out(mix_out[31:0]));

    
key_expansion passkey(.key(key),
	          .r_key(r_key_raw));

assign round_key[0]  = r_key_raw[127:0]; // 0-127
assign round_key[1]  = r_key_raw[255:128]; // 128-255
assign round_key[2]  = r_key_raw[383:256]; // 256-383
assign round_key[3]  = r_key_raw[511:384];// 384 - 511
assign round_key[4]  = r_key_raw[639:512]; //512 - 639
assign round_key[5]  = r_key_raw[767:640];//640 - 767
assign round_key[6]  = r_key_raw[895:768]; //768-895
assign round_key[7]  = r_key_raw[1023:896];//896 - 1023
assign round_key[8]  = r_key_raw[1151:1024] ;//1024-1151
assign round_key[9]  = r_key_raw[1279:1152];//1152 - 1279
assign round_key[10] = r_key_raw[1407:1280]; //1280 - 1407

always @ (posedge clk) begin

  case (ps)
    default : begin 
      ps<=IDLE;
     end
    IDLE : begin
      round <= 1;
      state <= 128'h0;
      if (start) begin
        key   <= 128'h2b7e151628aed2a6abf7158809cf4f3c;
        ps <=LOAD;
       end
      else begin
	ps <= IDLE;
       end
     end
    LOAD : begin
      state <= plain_txt^round_key[0];
      ps    <= ROUND;
     end
    ROUND : begin
      state <= mix_out ^ round_key[round];

      if(round==9)begin
        ps<=LAST_ROUND;
       end
       else begin
        round <= round+1;
	ps <= ROUND;
       end
      end
     
    LAST_ROUND : begin
	state <=shift_out^round_key[10];
	ps<=DONE;
     end
    DONE : begin
	cipher_txt <= state;
	done <= 1;
	ps <=IDLE;
     end
   endcase
  end
endmodule
