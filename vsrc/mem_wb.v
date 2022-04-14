/*
 * @Author: Groot
 * @Date: 2022-04-09 18:01:23
 * @LastEditTime: 2022-04-14 15:13:34
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /openMIPS/vsrc/mem_wb.v
 * 版权声明
 */
`include "./include/define.v"

module mem_wb (input wire clk,
               input wire rst,
               input wire[`RegAddBus] mem_wd,
               input wire mem_wreg,
               input wire[`RegBus] mem_wdata,
               output reg[`RegAddBus] wb_wd,
               output reg wb_wreg,
               output reg[`RegBus] wb_wdata);
    
    always @(posedge clk) begin
        if (rst == `RstEnable) begin
            wb_wd    <= `NOPRegAddr;
            wb_wreg  <= `WriteDisable;
            wb_wdata <= `ZeroWord;
        end
        else begin
            wb_wd    <= mem_wd;
            wb_wreg  <= mem_wreg;
            wb_wdata <= mem_wdata;
        end
    end
    
endmodule //mem_wb
