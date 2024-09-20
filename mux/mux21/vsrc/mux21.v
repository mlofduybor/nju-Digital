module mux21(a, b, s, y);
	input a;
	input b;
	input s;
	output y;
	assign y = (s==1)?b:a;
endmodule
