module LFSR(clk, rst, LFSR_out);
	input clk;
	input rst;
	output [7:0] LFSR_out;
	reg [7:0] number;

	parameter CLK_NUM = 70000000;
	//reg [31:0] count;

	always @(posedge clk)
	begin
		if (rst)
		begin
			number <= 8'b10111000;
			//count <= 0;
		end
		else 
		begin
			//if(count == CLK_NUM) 
			number <= {number[7] ^ number[5] ^ number[4] ^ number[3], number[7:1]};
			//count <= (count == CLK_NUM) ? 0 : count + 1;
		end
	end
	
	assign LFSR_out = number;

	
endmodule
