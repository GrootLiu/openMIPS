`include "define.v"
module pc_reg (input wire clk,
               input wire rst,
               output reg ce,
               output reg[`InstAddrBus] pc);
    
    //clk时钟信号
    //rst复位信号
    //ce指令存储器使能信号
    //pc要读取的指令地址
    
    always @(posedge clk) begin //时钟上升沿触发
        if (rst == `RstDisable) begin //复位信号有效的时候，指令存储器使能信号无效
            ce <= `ChipDisable;         
        end
        else begin              //复位信号无效的时候，指令存储器使能信号有效
            ce <= `ChipEnable;         
        end
    end
    
    always @(posedge clk) begin //时钟上升沿触发
        if (ce == `ChioDisable) begin   //指令存储器使能信号无效的时候，pc保持为0
            pc <= 32'h00000000;
        end
        else begin              //指令存储器使能信号有效的时候，pc在每个时钟加1
            pc <= pc + 4'h4;
        end
    end
    
endmodule //pc_reg
