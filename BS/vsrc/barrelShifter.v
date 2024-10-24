`timescale 1ns / 1ps
module barrelShifter(
output reg [31:0] out,
input [31:0] data,
input direction,
input [4:0] len
    );

always @(*)
			begin
				if(direction)
					begin  // right
						out = len[0] ? {1'b0, data[31:1]} : data;
						out = len[1] ? {2'b0, out[31:2]} : out;
						out = len[2] ? {4'b0, out[31:4]} : out;
						out = len[3] ? {8'b0, out[31:8]} : out;
						out = len[4] ? {16'b0, out[31:16]} : out;
					end
				else
					begin  // left
						out = len[0] ? {data[30:0], 1'b0} : data;
						out = len[1] ? {out[29:0], 2'b0} : out;
						out = len[2] ? {out[27:0], 4'b0} : out;
						out = len[3] ? {out[23:0], 8'b0} : out;
						out = len[4] ? {out[15:0], 16'b0} : out;
					end
			end
endmodule
