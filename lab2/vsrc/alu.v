`include "defines.v"

module alu(aluctr, A, B, result, Overflow, Carry, zero);
	input [`aluctr_width-1:0] aluctr;
	input [`alu_bit-1:0] A;
	input [`alu_bit-1:0] B;
	output [`alu_bit-1:0] result;

	wire Cin;
	wire [`alu_bit-1:0] _B;
	wire [`alu_bit-1:0] result_add;
	wire [`alu_bit-1:0] result_not;
	wire [`alu_bit-1:0] result_and;
	wire [`alu_bit-1:0] result_or;
	wire [`alu_bit-1:0] result_xor;
	wire                result_compare;
	wire                result_equal;
	output wire Carry;
	wire        Overflow_signed;
	output wire Overflow;
    output wire zero;

	//add, sub
	assign Cin = (aluctr == `aluctr_sub);
	assign  _B = ({(`alu_bit){Cin}}^B);
	assign {Carry, result_add} = A + _B + {{(`alu_bit-1){1'b0}}, Cin};
	assign Overflow_signed = (A[`alu_bit-1] == _B[`alu_bit-1]) && (result_add[`alu_bit-1] != A[`alu_bit-1]);
	assign zero = ~ (| result_add);
	assign Overflow = ((aluctr == `aluctr_add || aluctr == `aluctr_sub) && Overflow_signed);


	//not, and, or, xor
	assign result_not = {(`alu_bit){1'b1}} ^ A;
	assign result_and = A & B;
	assign result_or = A | B;
	assign result_xor = A ^ B;

	//compare, equal
	assign result_compare = result_add[`alu_bit-1] ^ Overflow;
	assign result_equal = zero;
	
	//result输出
	assign result = (aluctr == `aluctr_add || aluctr == `aluctr_sub)?result_add:
					 (aluctr == `aluctr_not)?result_not:
				   (aluctr == `aluctr_and)?result_and:
					 (aluctr == `aluctr_or)?result_or:
					 (aluctr == `aluctr_xor)?result_xor:
					 (aluctr == `aluctr_compare)?{(`alu_bit){result_compare}}:
					 (aluctr == `aluctr_equal)?{(`alu_bit){result_equal}}:
					 {(`alu_bit){1'b0}};

endmodule
