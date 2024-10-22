module fsm(clk, clrn, data, ready, nextdata_n, display, data_reg, count_key, combination);
	input clk;
	input clrn;
	input [7:0] data;
	input ready;
	input nextdata_n;
	output reg display;
	output reg [7:0] count_key;
	output reg [7:0] data_reg;
	output reg combination;

	reg [1:0] tag;
	reg [7:0] data_reg_prv;
	reg [2:0] state;
	reg [2:0] nextstate;
	reg count_tag;

	parameter s0 = 3'b000;
	parameter s1 = 3'b001;
	parameter s2 = 3'b010;
	parameter s3 = 3'b011;

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

	always @(*)
	begin
		if (data_reg == 8'hf0)
			tag = 2'd1;
		else if(data_reg == 8'h14 || data_reg == 8'h12 || data_reg == 8'h59)
			tag = 2'd2;
		else
			tag = 2'd0; 
	end

	always @(*)
	begin
		nextstate = state;
		
		if (ready == 1 && nextdata_n == 0)
		begin
		case (state)
			s0: 
			begin
				if (tag == 0)
					nextstate = s2;
				else if (tag == 1)
					nextstate = s1;
				else if (tag == 2)
					nextstate = s3;
			end
			s1:
			begin
				if (tag == 0)
					nextstate = s2;
				else if (tag == 1)
					nextstate = s1;
				else if (tag == 2)
					nextstate = s3;
			end
			s2: 
			begin
				if (tag == 0)
					nextstate = s2;
				else if (tag == 1)
					nextstate = s1;
				else if (tag == 2)
					nextstate = s3;
			end
			s3: 
			begin
				if (tag == 0)
					nextstate = s2;
				else if (tag == 1)
					nextstate = s1;
				else if (tag == 2)
					nextstate = s3;
			end
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
			s0:
			begin 
			   display = 0;
			   combination = 0; 
			end
			s1:
			begin 
				display = 0;
				combination = 0;
			end 
			s2: 
			begin
				display = 1;
				combination = 0;
			end
			s3:
			begin
				display = 1;
				combination = 1;
			end
			default: 
			begin 
				display = 0;
				combination = 0;
			end
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
