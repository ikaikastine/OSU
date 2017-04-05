`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:26:31 05/23/2013 
// Design Name: 
// Module Name:    BumpModule 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module BumpModule(
    input RB,
    input LB,
    input Reset,
    input clk,
    output LE,
    output LD,
    output RE,
    output RD
    );

reg [4:0] state, nextstate;
parameter S0 = 5'b00101;
parameter S1 = 5'b00000;
parameter S2 = 5'b00001;
parameter S3 = 5'b10000;
parameter S4 = 5'b00100;

// Instantiate the module
ClockDivider instance_name (
    .Clock(Clock), 
    .Reset(Reset), 
    .Clock_2(Clock_2), 
    .Clock_4(Clock_4), 
    .Clock_8(Clock_8), 
    .Clock_16(Clock_16), 
    .Clock_32(Clock_32), 
    .Clock_64(Clock_64), 
    .Clock_128(Clock_128), 
    .Clock_256(Clock_256), 
    .Clock_512(Clock_512), 
    .Clock_1024(Clock_1024)
    );



//state register
always @ (posedge Clock_512, negedge Reset)
	if (~Reset) state <= S0;
	else			state <= nextstate;
//next state logic
always @ (*)
	case (state)
	S0: if (~RB) nextstate = S1;
		 else if (~LB) nextstate = S3;
		 else    nextstate = S0;
	S1: 			nextstate = S2;
	S2:			nextstate = S0;
	S3:			nextstate = S4;
	S4: 			nextstate = S0;
	default: 	nextstate = S0;
	endcase
	//output logic
	assign LE=state[3];
	assign LD=state[2];
	assign RE=state[1];
	assign RD=state[0];
endmodule