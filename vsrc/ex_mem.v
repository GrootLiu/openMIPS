/*
 * @Author: Groot
 * @Date: 2022-04-09 18:01:23
 * @LastEditTime: 2022-05-03 10:23:14
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /openMIPS/vsrc/ex_mem.v
 * 版权声明
 */
`include "/home/groot/openMIPS/include/define.v"

module ex_mem (input wire clk,
               input wire rst,
               input wire[5:0] stall,
               input wire[`RegAddBus] ex_wd,   //来自执行阶段的信息
               input wire ex_wreg,
               input wire[`RegBus] ex_wdata,
               output reg[`RegAddBus] mem_wd,  //送到访存阶段的信息
               output reg mem_wreg,
               output reg[`RegBus] mem_wdata,
               
               input wire ex_whilo,
               input wire[`RegBus] ex_hi,
               input wire[`RegBus] ex_lo,

               output reg mem_whilo,
               output reg[`RegBus] mem_hi,
               output reg[`RegBus] mem_lo
               );
    
    always @(posedge clk) begin
        if (rst == `RstEnable) begin
            mem_wd    <= `NOPRegAddr;
            mem_wreg  <= `WriteDisable;
            mem_wdata <= `ZeroWord;
            mem_whilo <= `WriteDisable;
            mem_hi    <= `ZeroWord;
            mem_lo    <= `ZeroWord;
        end
        else if (stall[3] == `Stop && stall[4] == `NoStop) begin
            mem_wd    <= `NOPRegAddr;
            mem_wreg  <= `WriteDisable;
            mem_wdata <= `ZeroWord;
            mem_whilo <= `WriteDisable;
            mem_hi    <= `ZeroWord;
            mem_lo    <= `ZeroWord;
        end
        else if (stall[3] == `NoStop) begin
            mem_wd    <= ex_wd;
            mem_wreg  <= ex_wreg;
            mem_wdata <= ex_wdata;
            mem_whilo <= ex_whilo;
            mem_hi    <= ex_hi;
            mem_lo    <= ex_lo;
        end
        else begin
            mem_wd    <= ex_wd;
            mem_wreg  <= ex_wreg;
            mem_wdata <= ex_wdata;
            mem_whilo <= ex_whilo;
            mem_hi    <= ex_hi;
            mem_lo    <= ex_lo;
        end
    end
    
    //来自执行阶段的信息
endmodule //ex_mem
