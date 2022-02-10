`include "define.v"
module if_id (input wire clk,
              input wire rst,
              input wire[`InstAddrBus] if_pc, //来自取指阶段的信号，其中宏定义InstBus表示指令宽度，为32cd
              input wire[`InstBus] if_inst,
              output reg[`InstAddrBus] id_pc, //对应译码阶段的信号
              output reg[`InstBus] id_inst);
    
    always @(posedge clk) begin
        if (rst == `RstEnable) begin
            id_pc   <= `ZeroWord;               //复位的时候pc为0
            id_inst <= `ZeoWord;                //复位的时候指令也为0，实际就是空指令
        end
        else begin
            id_pc   <= if_pc;                   //其余时刻向下传递取值阶段的值
            id_inst <= if_inst;
        end
    end
endmodule //if_id
//其中只有一个时许电路，IF/ID模块只是简单的将取值阶段的结果在每个时钟周期的上升沿传递到译码阶段