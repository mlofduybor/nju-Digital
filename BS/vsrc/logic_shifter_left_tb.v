`timescale 1ns / 1ps

module logic_shifter_left_tb(out);

	// Inputs
	reg [31:0] data;
	reg direction;
	reg [4:0] len;

	// Outputs
	output wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	barrelShifter uut (
		.out(out), 
		.data(data), 
		.direction(direction), 
		.len(len)
	);

	initial begin
		// Initialize Inputs
		data = {32{1'b1}};
		direction = 0;
		len = 0;
		#1000 ;
		$finish;
	end

	always #10 len <= len + 1;



endmodule
