`timescale 1ns / 1ps
`include "defines.v"
module keyboard_decoder_rom(clk, ready, nextdata_n, scan_code, dout);
	input clk;
	input ready;
	input nextdata_n;
	input [7:0] scan_code;
	output [7:0] dout;

	wire read_en;
	reg [7:0] data;

	assign read_en = (ready == 1 && nextdata_n == 0);

	always @(posedge clk)
	begin
		if (read_en)
			case(scan_code)
				`a_scan: data <= `a_acsill;
				`b_scan: data <= `b_acsill;
				`c_scan: data <= `c_acsill;
				default: data <= data;
			endcase
		else
			data <= data;
	end

	assign dout = data;

endmodule
