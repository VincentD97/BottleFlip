`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:28:25 03/19/2013 
// Design Name: 
// Module Name:    NERP_demo_top 
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
module tb;

reg clk;			//master clock = 50MHz
reg clr;			//right-most pushbutton for reset
wire [7:0] Led;
wire [6:0] seg;	//7-segment display LEDs
wire [3:0] an;	//7-segment display anode enable
wire dp;			//7-segment display decimal point
wire [2:0] red;	//red vga output - 3 bits
wire [2:0] green;//green vga output - 3 bits
wire [1:0] blue;	//blue vga output - 2 bits
wire hsync;		//horizontal sync out
wire vsync;	//vertical sync out

`include "consts.v"
// 7-segment clock interconnect
wire segclk;

// VGA display clock interconnect
wire dclk;

// our render clock
wire rclk;

// disable the 7-segment decimal points
assign dp = 1;

// 2d pixel 

wire [2:0] memo;
wire [2:0] memo2;  
wire [15:0] rmemaddr;
reg [15:0] rmemaddr2;
wire [2:0] memout;
assign memout = memo;

// generate 7-segment clock & display clock
clockdiv U1(
	.clk(clk),
	.clr(clr),
	.segclk(segclk),
	.dclk(dclk),
    .rclk(rclk)
	);

// 7-segment display controller
// segdisplay U2(
// 	.segclk(segclk),
// 	.clr(clr),
// 	.seg(seg),
// 	.an(an)
// 	);


// VGA controller
vga640x480 U3(
	.dclk(dclk),
	.clr(clr),
	.hsync(hsync),
	.vsync(vsync),
	.red(red),
	.green(green),
	.blue(blue),
	.rmemaddr(rmemaddr),
	.memout(memout)
	);
	
//parameter PSIZE = 640 * 480;





wire [SQ_WIDTH - 1 : 0] sq0;
wire [SQ_WIDTH - 1 : 0] sq1;
wire [SQ_WIDTH - 1 : 0] sq2;
wire [SQ_WIDTH - 1 : 0] sq3;
wire [PLAYER_WIDTH - 1 : 0] pl;
wire [15:0] score;
wire perfect;
wire dead;

reg [7:0] jump_dist;
reg restart_btn;


fsm U5(.clk(rclk), 
	.restart(restart_btn),
	.jump_dist(jump_dist),
	.square0(sq0),
	.square1(sq1),
	.square2(sq2),
	.square3(sq3),
	.player(pl),
	.out_score(score),
	.perfect(perfect),
	.dead(dead)
);

ssled _ssled(
	.in_score(score),
	.clk_disp(segclk),
	.seg(seg),
	.an(an)
    );

light light(
	.perfect(perfect),
	.dead(dead),
	.clk(clk),
	.led(Led)
);

renderer U4(.clk(clk),
			.square0(sq0),
			.square1(sq1),
			.square2(sq2),
			.square3(sq3),
			.player(pl),
			.dead(dead),
			.rmemaddr(rmemaddr),
			.rmemaddr2(rmemaddr2),
			.memo(memo),
			.memo2(memo2)
			);

integer f, i, j, cnt;
initial begin
	f = $fopen("output.txt", "w");
	cnt = 0;
	i = 0; 
	j = 0;
end

always @(negedge rclk) begin
    //$display("demo_top: %d ", PX_HEIGHT);
	for (j = 0; j < PX_HEIGHT; j = j + 1) 
		for (i = 0; i < PX_WIDTH; i = i +1) 
        begin
			rmemaddr2 = j * PX_WIDTH + i;
			case (memo2)
				3'b000: $fwrite(f, "0");	
				3'b001: $fwrite(f, "1");
				3'b010: $fwrite(f, "2");
				3'b011: $fwrite(f, "3");
				3'b100: $fwrite(f, "4");
				3'b101: $fwrite(f, "5");
				3'b110: $fwrite(f, "6");
				3'b111: $fwrite(f, "7");
				default: $fwrite(f, "0");
				//default: code_to_rgb = 8'b11111111;
			endcase
            //$display("pixel is ", pixel[(j * PX_WIDTH + i) * 3 +: 3]);
        end
	cnt = cnt + 1;
	$fwrite(f, " score: %d%d%d%d perfect: %d Led: %b\n", score[15:12], score[11:8], score[7:4], score[3:0], perfect, Led);
	$fflush(f);
	//$display("%b\n", pixel);
	$display("TB PRINTED %d-th frame", cnt);
end


initial begin 
	clk = 0;
	restart_btn = 0;
	forever begin
		clk = ~clk;
		#1;
	end
end


integer rcnt = 0;
always @(posedge rclk) begin
	if (rcnt == 2)
		jump_dist <= 31/*18*/; //jump starts at 4th frame
	if (rcnt == 3)
		jump_dist <= 0;

	if (rcnt == 30)
		jump_dist <= 14;
	if (rcnt == 31)
		jump_dist <= 0;

	if (rcnt == 60)
		jump_dist <= 17;
	if (rcnt == 61)
		jump_dist <= 0;

	if (rcnt == 90)
		jump_dist <= 13;
	if (rcnt == 91)
		jump_dist <= 0;

	if (rcnt == 120)
		jump_dist <= 25;
	if (rcnt == 121)
		jump_dist <= 0;

	if (rcnt == 150)
		restart_btn <= 1;
	if (rcnt == 151)
		restart_btn <= 0;

	if (rcnt == 170)
		jump_dist <= 15;
	if (rcnt == 171)
		jump_dist <= 0;

    rcnt <= rcnt + 1;
end

	

/*

reg btn;
wire jump_btn;
wire [7:0] jump_dist;
wire [15:0] digits;
wire light_on;
wire light_blink;
*/

/*
rebounce jump_btn_reb(.btn(btn), .clk(clk), .rst(rst), .inst_vld(jump_btn));
button2dist button2dist(.clk(clk), 
	.jump_btn(jump_btn),
	.jump_dist(jump_dist),
	.end_of_jump(end_of_jump)
);



*/

endmodule

