//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:41:20 02/28/2018 
// Design Name: 
// Module Name:    consts 
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

parameter WIDTH = 240;
parameter HEIGHT = 480;
parameter PX_WIDTH = 60;
parameter PX_HEIGHT = 120;

parameter SQ_WIDTH = 41;  
// input reg[7:0] center_x, input reg[7:0] center_y, input reg [7:0] r, input reg [7:0] height, 
// input reg[2:0] color1, input reg[2:0] color2, input reg[2:0] color3); 

`define SQW 41
`define SQ_CX `SQW - 1 -: 8
`define SQ_CY `SQW - 8 - 1 -: 8
`define SQ_R  `SQW - 2*8 - 1 -: 8
`define SQ_H  `SQW - 3*8 - 1 -: 8
`define SQ_C1 `SQW - 4*8 - 1 -: 3
`define SQ_C2 `SQW - 4*8 - 3 - 1 -: 3
`define SQ_C3 `SQW - 4*8 - 2 * 3 - 1 -: 3
/*
typedef struct {
  reg[7:0] center_x;
  reg[7:0] center_y;
  reg[7:0] r;
  reg[7:0] height;
  reg[2:0] ccode1;
  reg[2:0] ccode2;
  reg[2:0] ccode3;
} sq;
*/

parameter PLAYER_WIDTH = 24;
parameter PL_DRAW_WIDTH = 1;
parameter PL_COLOR = 3'b110;
parameter PL_INIT_H = 8'd8;
// input reg[7:0] botmid_x, input reg[7:0] botmid_y, input reg [7:0] height

`define PLW 24
`define PL_X `PLW - 1       -: 8
`define PL_Y `PLW - 1 -   8 -: 8
`define PL_H `PLW - 1 - 2*8 -: 8


parameter DEBUG = 1;
// idle should be at least ten times 7200 = 72000
parameter idleMax = DEBUG ? 6000 /*60000*/ : 2000000;
parameter RENDER_CLK_HI_BIT = DEBUG ? 13/*16*/ : 21;