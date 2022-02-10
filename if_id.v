`include "define.v"
module if_id (input wire clk,
              input wire rst,
              
              //来自取指阶段的信号，其中宏定义InstBus表示指令宽度，为32
              input wire[`InstAddrBus] if_pc,
              input wire[`InstBus] if_inst,
              output reg[`InstAddrBus] id_pc,
              output reg[`InstBus] id_inst);
    
endmodule //if_id
