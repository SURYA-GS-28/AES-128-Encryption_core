
// Generates 11 round keys (128-bit each) from a 128-bit input key

module key_expansion (
  input  [127:0]key,
  output wire [1407:0] r_key
);

//reg [5:0] ctr;
/* verilator lint_off UNOPTFLAT */

// Word array for expanded key (44 words × 32 bits)
// Note: Verilator may flag this as circular due to dependency chaining,
// but the structure is a valid forward data dependency.

wire  [31:0] w [43:0];
/* verilator lint_on UNOPTFLAT */

// Initial key words (Round 0 key)
assign w[0] = key[127:96];
assign w[1] = key[95:64];
assign w[2] = key[63:32];
assign w[3] = key[31:0];

// RotWord: Performs a one-byte left rotation on a 32-bit word

function [31:0] RotWord;
  input [31:0] x;
  RotWord = {x[23:16],x[15:8],x[7:0],x[31:24]}; //One-byte left rotation
 endfunction

// Rcon: Round constant lookup for AES key expansion
function [31:0] Rcon;
 input [3:0] i;
 begin
 // Only the most significant byte is non-zero
    case(i)
        4'd1:  Rcon = 32'h01000000;
        4'd2:  Rcon = 32'h02000000;
        4'd3:  Rcon = 32'h04000000;
        4'd4:  Rcon = 32'h08000000;
        4'd5:  Rcon = 32'h10000000;
        4'd6:  Rcon = 32'h20000000;
        4'd7:  Rcon = 32'h40000000;
        4'd8:  Rcon = 32'h80000000;
        4'd9:  Rcon = 32'h1B000000;
        4'd10: Rcon = 32'h36000000;
        default: Rcon = 32'h00000000;
    endcase
  end
 endfunction


//-- Key Expansion --
genvar i;
generate 
  for(i=4;i<44;i=1+i) begin : key_gen
    if(i%4==0) begin :spl_key
      // Local signals for SubWord transformation and intermediate computations
      wire [7:0] s0,s1,s2,s3;
      wire [7:0] b0,b1,b2,b3;
      wire [31:0] sbout;
      /* verilator lint_off UNUSEDSIGNAL */
      wire [31:0] temp;
      /* verilator lint_on UNUSEDSIGNAL */

      wire [3:0] Rcon_ind;

      // Apply RotWord followed by byte-wise S-box substitution (SubWord)
      assign {b3,b2,b1,b0} = RotWord(w[i-1]);

      // SubWord: Apply S-box substitution to each byte
      sbox bx0(.in (b3),
      	       .out(s3) );
      sbox bx1(.in (b2),
  	       .out(s2) );
      sbox bx2(.in (b1),
  	       .out(s1) );
      sbox bx3(.in (b0),
	       .out(s0) );
      assign sbout = {s3,s2,s1,s0};

      // Derive round index (i/4) and truncate to 4 bits for Rcon lookup
      assign temp = (i>>2);
      assign Rcon_ind = temp[3:0];
      assign w[i] = w[i-4]^sbout^Rcon(Rcon_ind); // Compute next word using AES key schedule core transformation
     end
    else begin :norm_key
      assign w[i] = w[i-1]^w[i-4]; // Standard key expansion (no transformation required)
     end
   end
 endgenerate

/*always @(posedge clk) begin
  if(rst)
    r_key <= 0;
    ctr   <= 6'b0;
  else begin
    r_key <= w[ctr];
    ctr   <= ctr+1;
   end
end

endmodule*/

// Pack generated words into 128-bit round keys (11 total)
assign r_key[127:0] = {w[0],w[1],w[2],w[3]}; // 0-127
assign r_key[255:128] = {w[4],w[5],w[6],w[7]}; // 128-255
assign r_key[383:256] = {w[8],w[9],w[10],w[11]}; // 256-383
assign r_key[511:384] = {w[12],w[13],w[14],w[15]};// 384 - 511
assign r_key[639:512] = {w[16],w[17],w[18],w[19]};//512 - 639
assign r_key[767:640] = {w[20],w[21],w[22],w[23]};//640 - 767
assign r_key[895:768] = {w[24],w[25],w[26],w[27]};//768-895
assign r_key[1023:896] = {w[28],w[29],w[30],w[31]};//896 - 1023
assign r_key[1151:1024] = {w[32],w[33],w[34],w[35]};//1024-1151
assign r_key[1279:1152] = {w[36],w[37],w[38],w[39]};//1152 - 1279
assign r_key[1407:1280] = {w[40],w[41],w[42],w[43]};//1280 - 1407

endmodule
