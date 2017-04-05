// Verilog test fixture created from schematic Z:\ECE 272\section3\section3_revised.sch - Thu May 23 10:30:04 2013

`timescale 1ns / 1ps

module section3_revised_section3_revised_sch_tb();

// Inputs
   reg A;
   reg B;
   reg C;

// Output
   wire Le;
   wire Ld;
   wire Re;
   wire Rd;

// Bidirs

// Instantiate the UUT
   section3_revised UUT (
		.A(A), 
		.B(B), 
		.C(C), 
		.Le(Le), 
		.Ld(Ld), 
		.Re(Re), 
		.Rd(Rd)
   );
// Initialize Inputs
       initial begin
			 A = 0; B = 0; C = 0;
		#10 A = 0; B = 0; C = 1;
		#10 A = 0; B = 1; C = 0;
		#10 A = 0; B = 1; C = 1;
		#10 A = 1; B = 0; C = 0;
		#10 A = 1; B = 0; C = 1;
		#10 A = 1; B = 1; C = 0;
		#10 A = 1; B = 1; C = 1;
   end
endmodule
