/*
 *  ┌───┐   ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┐
 *  │Esc│   │ F1│ F2│ F3│ F4│ │ F5│ F6│ F7│ F8│ │ F9│F10│F11│F12│ │P/S│S L│P/B│  ┌┐    ┌┐    ┌┐
 *  └───┘   └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┘  └┘    └┘    └┘
 *  ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐ ┌───┬───┬───┐ ┌───┬───┬───┬───┐
 *  │~ `│! 1│@ 2│# 3│$ 4│% 5│^ 6│& 7│* 8│( 9│) 0│_ -│+ =│ BacSp │ │Ins│Hom│PUp│ │N L│ / │ * │ - │
 *  ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ ├───┼───┼───┤ ├───┼───┼───┼───┤
 *  │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │{ [│} ]│ | \ │ │Del│End│PDn│ │ 7 │ 8 │ 9 │   │
 *  ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤ └───┴───┴───┘ ├───┼───┼───┤ + │
 *  │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │: ;│" '│ Enter  │               │ 4 │ 5 │ 6 │   │
 *  ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤     ┌───┐     ├───┼───┼───┼───┤
 *  │ Shift  │ Z │ X │ C │ V │ B │ N │ M │< ,│> .│? /│  Shift   │     │ ↑ │     │ 1 │ 2 │ 3 │   │
 *  ├─────┬──┴─┬─┴──┬┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤ ┌───┼───┼───┐ ├───┴───┼───┤ E││
 *  │ Ctrl│    │Alt │         Space         │ Alt│    │    │Ctrl│ │ ← │ ↓ │ → │ │   0   │ . │←─┘│
 *  └─────┴────┴────┴───────────────────────┴────┴────┴────┴────┘ └───┴───┴───┘ └───────┴───┴───┘
 *
 * @Author: Groot
 * @Date: 2022-02-11 10:28:52
 * @LastEditTime: 2022-02-12 09:51:57
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /groot/openMIPS/id.v
 * 版权声明
 */

`include "openMIPS/define.v"

module id (input wire rst,
           input wire[`InstAddrBus] pc_i,
           input wire[`InstBus] inst_i,
           input wire[`RegBus] reg1_data_i,
           input wire[`RegBus] reg2_data_i,
           output reg reg1_read_o,
           output reg reg2_read_o,
           output reg[`RegAddBus] reg1_addr_o,
           output reg[`RegAddBus] reg2_addr_o,
           output reg[`AluOpBus] aluop_o,
           output reg[`AluSelBus] alusel_o,
           output reg[`RegBus] reg1_o,
           output reg[`RegBus] reg2_o,
           output reg[`RegAddBus] wd_o,
           output reg wreg_o);
    
    //取得指令的指令码，功能码
    //对于ori指令只需要通过判断第26-31bit的值，即可判断是否是ori指令
    wire[5:0] op  = inst_i[31:26];
    wire[4:0] op2 = inst_i[10:6];
    wire[5:0] op3 = inst_i[5:0];
    wire[4:0] op4 = inst_i[20:16];
    
    //保存指令执行需要的立即数
    reg[`RegBus] imm;
    
    //指令是否有效
    reg instvalid;
    
    //****************************第一段：对指令进行译码***************************
    always @(*) begin
        if (rst == `RstEnable) begin
            aluop_o  <= `EXE_NOP_OP;
            alusel_o <= `EXE_RES_NOP;
            wd_o     <= `NOPRegAddr;
            wreg_o   <= `WriteDisable;
            instvalid <= `InstValid;
            reg1_read_o <= `ReadDisable;
            reg2_read_o <= `ReadDisable;
            reg1_addr_o <= `NOPRegAddr;
            reg2_addr_o <= `NOPRegAddr;
            imm         <= 32'h00000000;
        end
        else begin
            aluop_o     <= `EXE_NOP_OP;
            alusel_o    <= `EXE_RES_NOP;
            wd_o        <= inst_i[15:11]; //目的寄存器地址
            wreg_o      <= `WriteDisable;
            instvalid   <= `InstInvalid;
            reg1_read_o <= `ReadDisable;
            reg2_read_o <= `ReadDisable;
            reg1_addr_o <= inst_i[25:21];   //默认通过Regfile读端口1读取的寄存器地址
            reg2_addr_o <= inst_i[20:16];   //默认通过Regfile读端口2读取的寄存器地址
            imm         <= `ZeroWorld;
            
            case (op)
            `EXE_ORI : begin            //依据op的值判断是否是ori指令
            
            //ori指令需要将结果写入目的寄存器，所以wreg_o为WriteEnable
            wreg_o <= `WriteEnable;
            
            //运算类型是逻辑运算
            alusel_o <= `EXE_RES_LOGIC;
            
            //运算的子类型是逻辑“或”运算
            aluop_o <= `EXE_OR_OP;
            
            //需要通过Regfile的读端口1读取寄存器
            reg1_read_o <= `ReadEnable;
            
            //不需要通过Regfile的读端口2读取寄存器
            reg2_read_o <= `ReadDisable;
            
            //指令执行需要的立即数
            imm = {16'h0000,  inst_i[15:0]};
        end
        
        endcase
        
        
    end
    end
endmodule //id
