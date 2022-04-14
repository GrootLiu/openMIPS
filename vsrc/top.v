/*
 * @Author: Groot
 * @Date: 2022-04-09 18:01:23
 * @LastEditTime: 2022-04-14 15:13:06
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /openMIPS/vsrc/top.v
 * 版权声明
 */
`include "./include/define.v"
`include "./vsrc/openmips.v"
module top (input wire clk,
            input wire rst);
    //连接指令存储器
    wire[`InstAddrBus] inst_addr;
    wire[`InstBus] inst;
    wire rom_ce;
    
    //例化处理器openMIPS
    openmips openmips0(.clk(clk),
    .rst(rst),
    .rom_data_i(inst),
    .rom_ce_o(rom_ce),
    .rom_addr_o(inst_addr));
    
    //例化指令存储器ROM
    inst_rom inst_rom0(.ce(rom_ce),
    .addr(inst_addr),
    .inst(inst));
endmodule //top
