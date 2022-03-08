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
 * @Date: 2022-02-14 13:13:43
 * @LastEditTime: 2022-02-14 13:48:15
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /groot/openMIPS/ex.v
 * 版权声明
 */

// `include "/home/groot/open/define.v"

module ex (input wire rst,                  //译码阶段送到执行阶段的信息
           input wire[`AluOpBus] aluop_i,
           input wire[`AluSelBus] alusel_i,
           input wire[`RegBus] reg1_i,
           input wire[`RegBus] reg2_i,
           input wire[`RegAddBus] wd_i,
           input wire wreg_i,
           output reg[`RegAddBus] wd_o,     //执行的结果
           output reg wreg_o,
           output reg[`RegBus] wdata_o);
    //包村逻辑运算的结果
    reg[`RegBus] logicout;
    
    //****************第一段：依据aluop_i指示的运算类型进行运算，此处只有逻辑“或”运算**************
    always @(*) begin
        if (rst == `RstEnable) begin
            logicout <= `ZeroWord;
        end
        else begin
            case (aluop_i)
                `EXE_OR_OP : begin
                    logicout <= reg1_i | reg2_i;
                end
                default : begin
                    logicout <= `ZeroWord;
                end
            endcase
        end
    end
    
    //****************第二段：依据alusel_i指示的运算子类型，选择一个运算结果作为最终结果，此处只有逻辑运算结果**************
    always @(*) begin
        wd_o   <= wd_i;                       //wd_o等于wd_i，要写的目的寄存器地址
        wreg_o <= wreg_i;                   //wreg_o等于wreg_i，表示是否要写目的寄存器
        case (alusel_i)
            `EXE_RES_LOGIC : begin
                wdata_o <= logicout;        //wdata_o中存放运算结果
            end
            default : begin
                wdata_o <= `ZeroWord;
            end
        endcase
    end
endmodule //ex
