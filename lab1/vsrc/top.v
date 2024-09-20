module top(in, tag, o_seg, encoder_y);
	input [7:0] in;
	output tag;
	output [2:0] encoder_y;
	output [7:0] o_seg;

	encoder83 encoder1(in, encoder_y, tag);

	bcd7seg seg1({1'b0, encoder_y}, o_seg);

endmodule
