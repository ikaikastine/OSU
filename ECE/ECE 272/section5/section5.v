`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Kevin
// Engineer: Kevin Stine  
// 
// Create Date:    10:01:05 05/16/2013 
// Design Name: 
// Module Name:    section5 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: Section 3 Source 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module section5(
    input A,
    input B,
    input C,
    input AnalogLdir,
    input AnalogRdir,
    output Len,
    output Ldir,
    output Ren,
    output Rdir
    );
wire Lenw;
wire Ldirw;
wire Renw;
wire Rdirw;
wire select;
supply0 GND;
assign select = AnalogLdir & AnalogRdir;
// Verilog instantiation template created from schematic Z:\ECE 272\section3\section3_revised.sch - Thu May 16 10:07:47 2013
//
// Notes: 
// To use this template to instantiate this component,cut-and-paste and then edit
//
// Instantiate the UUT
   section3_revised section5 (
		.A(  A  ), 
		.B(  B  ), 
		.C(  C  ), 
		.Le(  Lenw  ), 
		.Ld(  Ldirw  ), 
		.Re(  Renw  ), 
		.Rd(  Rdirw )
   );
	
	mux2 Lenin (
    .d0(GND), 
    .d1(Lenw), 
    .s(select), 
    .y(Len)
    );

	mux2 Ldirin (
    .d0(AnalogLdin), 
    .d1(Ldirw), 
    .s(select), 
    .y(Ldir)
    );

	mux2 Renin (
    .d0(GND), 
    .d1(Renw), 
    .s(select), 
    .y(Ren)
    );

	mux2 Rdirin (
    .d0(AnalogRdir), 
    .d1(Rdirw), 
    .s(select), 
    .y(Rdir)
    );


endmodule

module mux2 ( input [3:0] d0, d1,
				  input		s,
				  output [3:0] y);
		assign y = s ? d1 : d0;
endmodule
