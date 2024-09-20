module top(clk, rst, outsegL, outsegH);
	input clk;
	input rst;

	wire [7:0] LFSR_out;

	output [7:0] outsegL;
	output [7:0] outsegH;

	LFSR lfsr1(clk, rst, LFSR_out);
	bcd7seg bcd7seg1(LFSR_out[3:0], outsegL);
	bcd7seg bcd7seg2(LFSR_out[7:4], outsegH);

	
endmodule