/*
 * @Author: Groot
 * @Date: 2022-05-13 17:54:24
 * @LastEditTime: 2022-05-14 10:43:20
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /openMIPS/vsrc/data_ram.v
 * 版权声明
 */
 `include "/home/groot/openMIPS/include/define.v"

module data_ram (
	input wire clk,
	input wire ce,
	input wire we,
	input wire[`RegBus] addr,
	input wire[3:0] sel,
	input wire[`RegBus] data_i,
	output reg[`RegBus] data_o
);

// 定义四个字节数组
reg[`ByteWidth] data_ram0[0:`DataMemNum-1];
reg[`ByteWidth] data_ram1[0:`DataMemNum-1];
reg[`ByteWidth] data_ram2[0:`DataMemNum-1];
reg[`ByteWidth] data_ram3[0:`DataMemNum-1];

// 写操作
	always @(posedge clk) begin
		if (ce == `ChipDisable) begin
			data_o	<= `ZeroWord;
		end
		else if(ce == `ChipEnable && we == `WriteEnable) begin
			if (sel[0] == 1'b1) begin
				data_ram0[addr[`DataMemNumLog2:2]] <= data_i[7:0];
			end
			if (sel[1] == 1'b1) begin
				data_ram1[addr[`DataMemNumLog2:2]] <= data_i[15:8];
			end
			if (sel[2] == 1'b1) begin
				data_ram2[addr[`DataMemNumLog2:2]] <= data_i[23:16];
			end
			if (sel[3] == 1'b1) begin
				data_ram3[addr[`DataMemNumLog2:2]] <= data_i[31:24];
			end
		end
	end

// 读操作
	always @(posedge clk) begin
		if (ce == `ChipDisable) begin
			data_o	<= `ZeroWord;
		end
		else if(ce == `ChipEnable) begin
			if (sel[0] == 1'b1) begin
				data_o	<= data_ram0[addr[`DataMemNumLog2:2]];
			end
			if (sel[1] == 1'b1) begin
				data_o	<= data_ram0[addr[`DataMemNumLog2:2]];
			end
			if (sel[2] == 1'b1) begin
				data_o	<= data_ram2[addr[`DataMemNumLog2:2]];
			end
			if (sel[3] == 1'b1) begin
				data_o	<= data_ram3[addr[`DataMemNumLog2:2]];
			end
		end
	end

endmodule //data_ram