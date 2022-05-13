/*
 * @Author: Groot
 * @Date: 2022-05-13 17:54:24
 * @LastEditTime: 2022-05-13 18:17:39
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



endmodule //data_ram