`include "defines.v"

module top(btn0, btn1, btn2, btn3, btn4, A, B, result, Overflow, Carry, zero);
	input btn0;
	input btn1;
	input btn2;
	input btn3;
	input btn4;
	input [`alu_bit-1:0] A;
	input [`alu_bit-1:0] B;

    output [`alu_bit-1:0] result;

	reg [`aluctr_width-1:0] aluctr;

	output wire Carry;
	output wire Overflow;
    output wire zero;

	always @(*)
	begin
		if      (btn0 == 1) aluctr = `aluctr_add;
		else if (btn1 == 1) aluctr = `aluctr_sub;
		else if (btn2 == 1) aluctr = `aluctr_not;
		else if (btn3 == 1) aluctr = `aluctr_or ;
		else if (btn4 == 1) aluctr = `aluctr_xor;
		else                aluctr = `aluctr_add;
	end

	alu alu0(aluctr, A, B, result, Overflow, Carry, zero);
endmodule
	
