`timescale 1ns / 1ps
module fsm(clk, clrn, data, ready, nextdata_n, display, data_reg, count_key);
	input clk;
	input clrn;
	input [7:0] data;
	input ready;
	input nextdata_n;
	output reg display;
	output reg [7:0] count_key;
	output reg [7:0] data_reg;

	wire tag;
	reg [1:0] state;
	reg [1:0] nextstate;
	reg count_tag;

	parameter s0 = 2'b00;
	parameter s1 = 2'b01;
	parameter s2 = 2'b10;

	always @(posedge clk)
	begin
		if (ready == 1 && nextdata_n == 0)
		begin
			data_reg <= data;
		end
		else
		begin
			data_reg <= data_reg;
		end
	end

	assign tag = (data_reg == 8'hf0);

	always @(*)
	begin
		if (ready == 1 && nextdata_n == 0)
		begin
		case (state)
			s0: nextstate = tag == 1?s1:s2;
			s1: nextstate = tag == 1?s1:s2;
			s2: nextstate = tag == 1?s1:s2;
			default: nextstate = s1;
		endcase
		end
	end


	always @(posedge clk)
	begin
		if (!clrn) state <= s0;
	    else state <= nextstate;
	end

	always @(*)
	begin
		case (state)
			s0: display = 0; 
			s1: display = 0; 
			s2: display = 1;
			default: display = 0;
		endcase
	end


	always @(posedge clk)
	begin
		if (!clrn)
			count_tag <= 0;
		else if (ready == 1 && nextdata_n == 0 && data_reg == 8'hf0)
			count_tag <= 1;
		else
			count_tag <= 0;
	end


	always @(posedge clk)
	begin
		if (!clrn)
			count_key <= 0;
		else if (count_tag == 1)
		begin
			count_key <= count_key + 1;
			count_tag <= 0;
		end
		else
			count_key <= count_key;
	end


endmodule
