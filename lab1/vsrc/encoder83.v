module encoder83(x, y, tag);
	input [7:0] x;
	output tag;
	output reg[2:0] y;

	integer i;

	always @(*)
	begin
		y = 3'b0;
		for (i = 0;i<8;i++)
			if (x[i] == 1) y = i[2:0];
	end

	assign tag = (x == 8'b0)?0:1;

endmodule
