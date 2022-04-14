/*
 * @Author: Groot
 * @Date: 2022-04-09 18:01:23
 * @LastEditTime: 2022-04-14 15:41:31
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /openMIPS/vsrc/ex_mem.v
 * 版权声明
 */
`include "/home/groot/openMIPS/include/define.v"

module ex_mem (input wire clk,
               input wire rst,
               input wire[`RegAddBus] ex_wd,   //来自执行阶段的信息
               input wire ex_wreg,
               input wire[`RegBus] ex_wdata,
               output reg[`RegAddBus] mem_wd,  //送到访存阶段的信息
               output reg mem_wreg,
               output reg[`RegBus] mem_wdata);
    
    always @(posedge clk) begin
        if (rst == `RstEnable) begin
            mem_wd    <= `NOPRegAddr;
            mem_wreg  <= `WriteDisable;
            mem_wdata <= `ZeroWord;
        end
        else begin
            mem_wd    <= ex_wd;
            mem_wreg  <= ex_wreg;
            mem_wdata <= ex_wdata;
        end
    end
    
    //来自执行阶段的信息
endmodule //ex_mem
