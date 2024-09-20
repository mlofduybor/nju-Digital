module MuxKeyWithDefault #(parameter STATE_NUM = 9, 
						   parameter STATE_WIDTH = 4,
						   parameter OUT_WIDTH = 1)
						  (out, key, default_out, lut);
	input [STATE_WIDTH-1:0] key;
	input [STATE_NUM*(STATE_WIDTH + OUT_WIDTH)-1:0] lut;
	input [OUT_WIDTH-1:0] default_out;
	output [OUT_WIDTH-1:0] out;

	integer i;
	reg tag;
	reg [OUT_WIDTH-1:0] out_tmp;

	always @(*)
	begin
		tag = 0;
		out_tmp = default_out;
		for (i = 0;i<STATE_NUM;i = i + 1)
		begin
			if (key == lut[i*(STATE_WIDTH + OUT_WIDTH) + OUT_WIDTH +: STATE_WIDTH])
			begin
				tag = 1;
				out_tmp = lut[i*(STATE_WIDTH + OUT_WIDTH) +: OUT_WIDTH];
			end	
		end
	end


	assign out = tag ? out_tmp:default_out;


endmodule

