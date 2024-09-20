module bcd7seg(bcd, o_seg);
	
	input  [3:0] bcd;
	output reg [7:0] o_seg;

	wire [7:0] segs [15:0];
	assign segs[0] = 8'b11111100;
	assign segs[1] = 8'b01100000;
	assign segs[2] = 8'b11011010;
	assign segs[3] = 8'b11110010;
	assign segs[4] = 8'b01100110;
	assign segs[5] = 8'b10110110;
	assign segs[6] = 8'b10111110;
	assign segs[7] = 8'b11100000;
	assign segs[8] = 8'b11111110;
	assign segs[9] = 8'b11110110;
	assign segs[10] = 8'b11101110;
	assign segs[11] = 8'b00111110;
	assign segs[12] = 8'b10011100;
	assign segs[13] = 8'b01111010;
	assign segs[14] = 8'b10011110;
	assign segs[15] = 8'b10001110;

	always @(*)
	begin
		case(bcd)
			4'h0 : o_seg = ~segs[0];
			4'h1 : o_seg = ~segs[1];
			4'h2 : o_seg = ~segs[2];
			4'h3 : o_seg = ~segs[3];
			4'h4 : o_seg = ~segs[4];
			4'h5 : o_seg = ~segs[5];
			4'h6 : o_seg = ~segs[6];
			4'h7 : o_seg = ~segs[7];
			4'h8 : o_seg = ~segs[8];
			4'h9 : o_seg = ~segs[9];
			4'ha : o_seg = ~segs[10];
			4'hb : o_seg = ~segs[11];
			4'hc : o_seg = ~segs[12];
			4'hd : o_seg = ~segs[13];
			4'he : o_seg = ~segs[14];
			4'hf : o_seg = ~segs[15];
			default : o_seg = 8'b00000000;
		endcase
	end

endmodule
