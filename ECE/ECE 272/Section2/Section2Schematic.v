////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____ 
//  /   /\/   / 
// /___/  \  /    Vendor: Xilinx 
// \   \   \/     Version : 14.1
//  \   \         Application : sch2hdl
//  /   /         Filename : Section2Schematic.vf
// /___/   /\     Timestamp : 04/18/2013 10:27:40
// \   \  /  \ 
//  \___\/\___\ 
//
//Command: sch2hdl -intstyle ise -family xc9500xl -verilog "Z:/ECE 272/Section2/Section2Schematic.vf" -w "Z:/ECE 272/Section2/Section2Schematic.sch"
//Design Name: Section2Schematic
//Device: xc9500xl
//Purpose:
//    This verilog netlist is translated from an ECS schematic.It can be 
//    synthesized and simulated, but it should not be modified. 
//
`timescale 1ns / 1ps

module Section2Schematic(A, 
                         B, 
                         C, 
                         Z);

    input A;
    input B;
    input C;
   output Z;
   
   wire XLXN_1;
   wire XLXN_3;
   wire XLXN_5;
   wire XLXN_6;
   wire XLXN_7;
   wire XLXN_8;
   
   AND2  XLXI_1 (.I0(XLXN_7), 
                .I1(XLXN_6), 
                .O(XLXN_8));
   XOR2  XLXI_2 (.I0(XLXN_3), 
                .I1(XLXN_1), 
                .O(XLXN_6));
   OR2  XLXI_3 (.I0(XLXN_5), 
               .I1(XLXN_3), 
               .O(XLXN_7));
   (* SLEW = "SLOW" *) 
   OBUF  XLXI_9 (.I(XLXN_8), 
                .O(Z));
   INV  XLXI_10 (.I(A), 
                .O(XLXN_1));
   INV  XLXI_11 (.I(B), 
                .O(XLXN_3));
   INV  XLXI_12 (.I(C), 
                .O(XLXN_5));
endmodule
