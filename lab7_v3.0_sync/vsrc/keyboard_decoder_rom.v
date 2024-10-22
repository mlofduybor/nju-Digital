`include "defines.v"
module keyboard_decoder_rom(clk, ready, nextdata_n, combination, scan_code, dout);
	input clk;
	input ready;
	input nextdata_n;
	input combination;
	input [7:0] scan_code;
	output [7:0] dout;

	wire read_en;
	reg [7:0] data;

	assign read_en = (ready == 1 && nextdata_n == 0);

	always @(posedge clk)
	begin
		if (read_en)
			case(scan_code)
				`a_scan: 
				begin
					if (combination)
						data <= `A_acsill;
					else
						data <= `a_acsill;
				end
				`b_scan:
				begin 
					if (combination)
						data <= `B_acsill;
					else
						data <= `b_acsill;
				end
				`c_scan: 
				begin
					if (combination)
						data <= `C_acsill;
					else
						data <= `c_acsill;
				end
				default: data <= data;
			endcase
		else
			data <= data;
	end

	assign dout = data;

endmodule
