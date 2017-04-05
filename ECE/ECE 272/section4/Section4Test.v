// Verilog test fixture created from schematic Z:\ECE 272\section4\section4.sch - Thu May 09 12:17:40 2013

`timescale 1ns / 1ps

module section4_section4_sch_tb();

// Inputs
   reg A;
   reg B;
   reg C;
   reg D;

// Output
   wire Seg_G;
   wire Seg_F;
   wire Seg_D;
   wire Seg_E;
   wire Seg_C;
   wire Seg_B;
   wire Seg_A;

// Bidirs

// Instantiate the UUT
   section4 UUT (
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.Seg_G(Seg_G), 
		.Seg_F(Seg_F), 
		.Seg_D(Seg_D), 
		.Seg_E(Seg_E), 
		.Seg_C(Seg_C), 
		.Seg_B(Seg_B), 
		.Seg_A(Seg_A)
   );
// Initialize Inputs
   `ifdef auto_init
       initial begin
		A = 0;
		B = 0;
		C = 0;
		D = 0;
   `endif
endmodule
