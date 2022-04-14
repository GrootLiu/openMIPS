/*
 * @Author: Groot
 * @Date: 2022-04-09 18:01:23
 * @LastEditTime: 2022-04-14 15:13:29
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /openMIPS/vsrc/mem.v
 * 版权声明
 */
`include "./include/define.v"

module mem (input wire rst,
            input wire[`RegAddBus] wd_i,
            input wire wreg_i,
            input wire[`RegBus] wdata_i,
            output reg[`RegAddBus] wd_o,
            output reg wreg_o,
            output reg[`RegBus] wdata_o);
    
    always @(*) begin
        if (rst == `RstEnable) begin
            wd_o    <= `NOPRegAddr;
            wreg_o  <= `WriteDisable;
            wdata_o <= `ZeroWord;
        end
        else begin
            wd_o    <= wd_i;
            wreg_o  <= wreg_i;
            wdata_o <= wdata_i;
        end
    end
    
endmodule //mem
