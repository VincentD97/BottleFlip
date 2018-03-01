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

parameter PLAYER_WIDTH = 32;

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

