////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____ 
//  /   /\/   / 
// /___/  \  /    Vendor: Xilinx 
// \   \   \/     Version : 14.1
//  \   \         Application : sch2hdl
//  /   /         Filename : section3_schematic.vf
// /___/   /\     Timestamp : 04/25/2013 10:55:00
// \   \  /  \ 
//  \___\/\___\ 
//
//Command: sch2hdl -intstyle ise -family xc9500xl -verilog "Z:/ECE 272/section3/section3_schematic.vf" -w "Z:/ECE 272/section3/section3_schematic.sch"
//Design Name: section3_schematic
//Device: xc9500xl
//Purpose:
//    This verilog netlist is translated from an ECS schematic.It can be 
//    synthesized and simulated, but it should not be modified. 
//
`timescale 1ns / 1ps

module section3_schematic(A, 
                          B, 
                          C, 
                          Ld, 
                          Le, 
                          Rd, 
                          Re);

    input A;
    input B;
    input C;
   output Ld;
   output Le;
   output Rd;
   output Re;
   
   wire XLXN_3;
   wire XLXN_4;
   wire XLXN_6;
   wire XLXN_7;
   wire XLXN_8;
   wire XLXN_9;
   wire XLXN_10;
   wire XLXN_11;
   wire XLXN_27;
   wire XLXN_28;
   wire XLXN_30;
   wire XLXN_31;
   wire XLXN_32;
   wire XLXN_33;
   wire XLXN_34;
   
   AND3  XLXI_2 (.I0(XLXN_30), 
                .I1(XLXN_28), 
                .I2(XLXN_27), 
                .O(XLXN_4));
   AND2B2  XLXI_3 (.I0(XLXN_28), 
                  .I1(XLXN_27), 
                  .O(XLXN_3));
   AND2B1  XLXI_4 (.I0(XLXN_28), 
                  .I1(XLXN_27), 
                  .O(XLXN_7));
   AND2  XLXI_5 (.I0(XLXN_28), 
                .I1(XLXN_27), 
                .O(XLXN_6));
   AND2B2  XLXI_6 (.I0(XLXN_30), 
                  .I1(XLXN_28), 
                  .O(XLXN_8));
   AND3  XLXI_7 (.I0(XLXN_30), 
                .I1(XLXN_28), 
                .I2(XLXN_27), 
                .O(XLXN_9));
   AND2B1  XLXI_8 (.I0(XLXN_27), 
                  .I1(XLXN_30), 
                  .O(XLXN_10));
   AND2B1  XLXI_9 (.I0(XLXN_28), 
                  .I1(XLXN_30), 
                  .O(XLXN_11));
   OR2  XLXI_11 (.I0(XLXN_4), 
                .I1(XLXN_3), 
                .O(XLXN_31));
   OR2  XLXI_12 (.I0(XLXN_6), 
                .I1(XLXN_7), 
                .O(XLXN_32));
   OR2  XLXI_13 (.I0(XLXN_9), 
                .I1(XLXN_8), 
                .O(XLXN_33));
   OR2  XLXI_14 (.I0(XLXN_11), 
                .I1(XLXN_10), 
                .O(XLXN_34));
   INV  XLXI_15 (.I(A), 
                .O(XLXN_27));
   INV  XLXI_16 (.I(B), 
                .O(XLXN_28));
   INV  XLXI_18 (.I(C), 
                .O(XLXN_30));
   (* SLEW = "SLOW" *) 
   OBUF  XLXI_19 (.I(XLXN_31), 
                 .O(Le));
   (* SLEW = "SLOW" *) 
   OBUF  XLXI_20 (.I(XLXN_32), 
                 .O(Ld));
   (* SLEW = "SLOW" *) 
   OBUF  XLXI_21 (.I(XLXN_33), 
                 .O(Re));
   (* SLEW = "SLOW" *) 
   OBUF  XLXI_22 (.I(XLXN_34), 
                 .O(Rd));
endmodule
