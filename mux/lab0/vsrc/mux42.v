module mux42(x0, x1, x2, x3, s, y);
	input [1:0] x0;
	input [1:0] x1;
	input [1:0] x2;
	input [1:0] x3;
	input [1:0] s;
	output[1:0] y;
  MuxKeyWithDefault #(4, 2, 2) i0(y, s, 2'b0, {
    2'b00, x0,
    2'b01, x1,
    2'b10, x2,
    2'b11, x3
  });
endmodule
