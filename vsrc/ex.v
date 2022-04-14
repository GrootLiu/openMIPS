/*
 * @Author: Groot
 * @Date: 2022-04-09 18:01:23
 * @LastEditTime: 2022-04-14 15:41:36
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /openMIPS/vsrc/ex.v
 * 版权声明
 */
`include "/home/groot/openMIPS/include/define.v"

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
    reg[`RegBus] shiftres;
    
    //****************第一段：依据aluop_i指示的运算类型进行运算
    always @(*) begin
        if (rst == `RstEnable) begin
            logicout <= `ZeroWord;
        end
        else begin
            case (aluop_i)
                //进行逻辑运算
                `EXE_OR_OP : begin
                    logicout <= reg1_i | reg2_i;
                end
                `EXE_AND_OP : begin
                    logicout <= reg1_i & reg2_i;
                end
                `EXE_NOR_OP : begin
                    logicout <= ~(reg1_i | reg2_i);
                end
                `EXE_XOR_OP : begin
                    logicout <= reg1_i ^ reg2_i;
                end
                //进行位移运算
                //将左操作数按照右操作数指定的位数左移，左操作数移除的位数丢弃，右边补零
                `EXE_SLL_OP : begin
                    shiftres <= reg2_i << reg1_i[4:0];
                end
                `EXE_SRL_OP : begin
                    shiftres <= reg2_i >> reg1_i[4:0];
                end
                //明天看懂这句话
                `EXE_SRA_OP : begin
                    shiftres <= ({32{reg2_i[31]}} << (6'd32-{1'b0,reg1_i[4:0]})) | reg2_i >> reg1_i[4:0];
                end
                default : begin
                    logicout <= `ZeroWord;
                end
            endcase //case aluop_i
        end
    end
    //进行移位运算
    
    //****************第二段：依据alusel_i指示的运算子类型，选择一个运算结果作为最终结果**************
    always @(*) begin
        wd_o   <= wd_i;                       //wd_o等于wd_i，要写的目的寄存器地址
        wreg_o <= wreg_i;                   //wreg_o等于wreg_i，表示是否要写目的寄存器
        case (alusel_i)
            //选择逻辑运算结果位最终运算结果
            `EXE_RES_LOGIC : begin
                wdata_o <= logicout;        //wdata_o中存放运算结果
            end
            //选择移位运算结果位最终运算结果
            `EXE_RES_SHIFT : begin
                wdata_o <= shiftres;
            end
            default : begin
                wdata_o <= `ZeroWord;
            end
        endcase
    end
endmodule //ex
