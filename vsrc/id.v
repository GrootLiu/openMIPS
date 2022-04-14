/*
 * @Author: Groot
 * @Date: 2022-04-09 18:01:23
 * @LastEditTime: 2022-04-14 16:31:27
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /openMIPS/vsrc/id.v
 * 版权声明
 */
`include "/home/groot/openMIPS/include/define.v"

module id (input wire rst,
           input wire[`InstAddrBus] pc_i,
           input wire[`InstBus] inst_i,
           input wire[`RegBus] reg1_data_i,
           input wire[`RegBus] reg2_data_i,
           input wire ex_wreg_i,
           input wire[`RegAddBus] ex_wd_i,
           input wire[`InstBus] ex_wdata_i,
           input wire mem_wreg_i,
           input wire[`RegAddBus] mem_wd_i,
           input wire[`InstBus] mem_wdata_i,
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
            aluop_o     <= `EXE_NOP_OP;
            alusel_o    <= `EXE_RES_NOP;
            wd_o        <= `NOPRegAddr;
            wreg_o      <= `WriteDisable;
            instvalid   <= `InstValid;
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
            imm         <= `ZeroWord;
            
            case (op)
                `EXE_SPECIAL_INST : begin
                    case (op2)
                        5'b00000 : begin
                            case (op3)
                                `EXE_OR : begin
                                    wreg_o      <= `WriteEnable;
                                    aluop_o     <= `EXE_OR_OP;
                                    alusel_o    <= `EXE_RES_LOGIC;
                                    reg1_read_o <= `ReadEnable;
                                    reg2_read_o <= `ReadEnable;
                                    instvalid   <= `InstValid;
                                end
                                `EXE_AND : begin
                                    wreg_o      <= `WriteEnable;
                                    aluop_o     <= `EXE_AND_OP;
                                    alusel_o    <= `EXE_RES_LOGIC;
                                    reg1_read_o <= `ReadEnable;
                                    reg2_read_o <= `ReadEnable;
                                    instvalid   <= `InstValid;
                                end
                                `EXE_XOR : begin
                                    wreg_o      <= `WriteEnable;
                                    aluop_o     <= `EXE_XOR_OP;
                                    alusel_o    <= `EXE_RES_LOGIC;
                                    reg1_read_o <= `ReadEnable;
                                    reg2_read_o <= `ReadEnable;
                                    instvalid   <= `InstValid;
                                end
                                `EXE_NOR :begin
                                    wreg_o      <= `WriteEnable;
                                    aluop_o     <= `EXE_NOR_OP;
                                    alusel_o    <= `EXE_RES_LOGIC;
                                    reg1_read_o <= `ReadEnable;
                                    reg2_read_o <= `ReadEnable;
                                    instvalid   <= `InstValid;
                                end
                                `EXE_SLLV : begin
                                    wreg_o      <= `WriteEnable;
                                    aluop_o     <= `EXE_SLL_OP;
                                    alusel_o    <= `EXE_RES_SHIFT;
                                    reg1_read_o <= `ReadEnable;
                                    reg2_read_o <= `ReadEnable;
                                    instvalid   <= `InstValid;
                                end
                                `EXE_SRLV : begin
                                    wreg_o      <= `WriteEnable;
                                    aluop_o     <= `EXE_SRL_OP;
                                    alusel_o    <= `EXE_RES_SHIFT;
                                    reg1_read_o <= `ReadEnable;
                                    reg2_read_o <= `ReadEnable;
                                    instvalid   <= `InstValid;
                                end
                                `EXE_SRAV : begin
                                    wreg_o      <= `WriteEnable;
                                    aluop_o     <= `EXE_SRA_OP;
                                    alusel_o    <= `EXE_RES_SHIFT;
                                    reg1_read_o <= `ReadEnable;
                                    reg2_read_o <= `ReadEnable;
                                    instvalid   <= `InstValid;
                                end
                                `EXE_SYNC : begin
                                    wreg_o      <= `WriteEnable;
                                    alusel_o    <= `EXE_RES_NOP;
                                    aluop_o     <= `EXE_NOP_OP;
                                    reg1_read_o <= `ReadDisable;
                                    reg2_read_o <= `ReadEnable;
                                    instvalid   <= `InstValid;
                                end
                                `EXE_MOVZ : begin
                                    aluop_o     <= `EXE_MOVZ_OP;
                                    alusel_o    <= `EXE_RES_MOVE;
                                    reg1_read_o <= `WriteEnable;
                                    reg2_read_o <= `WriteEnable;
                                    instvalid   <= `InstValid;
                                    //reg2_o的值就是rt寄存器的值
                                    if(reg2_o == `ZeroWord) begin
                                        wreg_o	<= `WriteEnable;
                                    end	
                                    else begin
                                        wreg_o	<= `WriteDisable;
                                    end
                                end
                                `EXE_MOVN : begin
                                    aluop_o     <= `EXE_MOVN_OP;
                                    alusel_o    <= `EXE_RES_MOVE;
                                    reg1_read_o <= `WriteEnable;
                                    reg2_read_o <= `WriteEnable;
                                    instvalid   <= `InstValid;
                                    //reg2_o的值就是rt寄存器的值
                                    if(reg2_o != `ZeroWord) begin
                                        wreg_o	<= `WriteEnable;
                                    end	
                                    else begin
                                        wreg_o	<= `WriteDisable;
                                    end
                                end
                                `EXE_MFHI : begin
                                    wreg_o      <= `WriteEnable;
                                    aluop_o	    <= `EXE_MFHI_OP;
                                    alusel_o    <= `EXE_RES_MOVE;
                                    reg1_o      <= `WriteDisable;
                                    reg2_o      <= `WriteEnable;
                                    instvalid   <=  `InstValid;
                                end
                                `EXE_MFLO : begin
                                    wreg_o      <= `WriteEnable;
                                    aluop_o	    <= `EXE_MFLO_OP;
                                    alusel_o    <= `EXE_RES_MOVE;
                                    reg1_o      <= `WriteDisable;
                                    reg2_o      <= `WriteEnable;
                                    instvalid   <=  `InstValid;
                                end
                                `EXE_MTHI : begin
                                    wreg_o      <= `WriteDisable;
                                    aluop_o     <= `EXE_MTHI_OP;
                                    reg1_read_o <= `WriteEnable;
                                    reg2_read_o <= `WriteDisable;
                                    instvalid   <= `InstValid;
                                end
                                `EXE_MTLO : begin
                                    wreg_o      <= `WriteDisable;
                                    aluop_o     <= `EXE_MTLO_OP;
                                    reg1_read_o <= `WriteEnable;
                                    reg2_read_o <= `WriteDisable;
                                    instvalid   <= `InstValid;
                                end
                                default : begin
                                end
                            endcase // case op3
                        end
                        default : begin 
                        end
                    endcase //case op2
                end
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
                    imm <= {16'h0000,  inst_i[15:0]};
                    
                    //指令执行要写的目的寄存器地址
                    wd_o <= inst_i[20:16];
                    
                    //ori指令是有效指令
                    instvalid <= `InstValid;
                end
                `EXE_ANDI : begin
                    wreg_o      <= `WriteEnable;
                    alusel_o    <= `EXE_RES_LOGIC;
                    aluop_o     <= `EXE_AND_OP;
                    reg1_read_o <= `ReadEnable;
                    reg2_read_o <= `ReadDisable;
                    imm         <= {16'b0000, inst_i[15:0]};
                    wd_o        <= inst_i[20:16];
                    instvalid   <= `InstValid;
                end
                `EXE_XORI : begin
                    wreg_o      <= `WriteEnable;
                    alusel_o    <= `EXE_RES_LOGIC;
                    aluop_o     <= `EXE_XOR_OP;
                    reg1_read_o <= `ReadEnable;
                    reg2_read_o <= `ReadDisable;
                    imm         <= {16'b0000, inst_i[15:0]};
                    wd_o        <= inst_i[20:16];
                    instvalid   <= `InstValid;
                end
                // 将指令中的16bit立即数转移到高位，低位用16bit的0填充
                `EXE_LUI : begin
                    wreg_o      <= `WriteEnable;
                    alusel_o    <= `EXE_RES_LOGIC;
                    aluop_o     <= `EXE_OR_OP;
                    reg1_read_o <= `ReadEnable;
                    reg2_read_o <= `ReadDisable;
                    imm         <= {inst_i[15:0], 16'b0000};
                    wd_o        <= inst_i[20:16];
                    instvalid   <= `InstValid;
                end
                `EXE_PREF : begin
                    wreg_o      <= `WriteEnable;
                    alusel_o    <= `EXE_RES_NOP;
                    aluop_o     <= `EXE_NOP_OP;
                    reg1_read_o <= `ReadDisable;
                    reg2_read_o <= `ReadDisable;
                    instvalid   <= `InstValid;
                end
                //有待填写
                default : begin
                end
            endcase //case op
            if (inst_i[31:21] == 11'b0) begin
                if (op3 == `EXE_SLL) begin
                    wreg_o      <= `WriteEnable;
                    alusel_o    <= `EXE_RES_SHIFT;
                    aluop_o     <= `EXE_SLL_OP;
                    reg1_read_o <= `ReadDisable;
                    reg2_read_o <= `ReadEnable;
                    imm[4:0]    <= inst_i[10:6];
                    wd_o        <= inst_i[15:11];
                    instvalid   <= `InstValid;
                end
                else if(op3 == `EXE_SRL) begin
                    wreg_o      <= `WriteEnable;
                    alusel_o    <= `EXE_RES_SHIFT;
                    aluop_o     <= `EXE_SRL_OP;
                    reg1_read_o <= `ReadDisable;
                    reg2_read_o <= `ReadEnable;
                    imm[4:0]    <= inst_i[10:6];
                    wd_o        <= inst_i[15:11];
                    instvalid   <= `InstValid;
                end
                else if(op3 == `EXE_SRA) begin
                    wreg_o      <= `WriteEnable;
                    alusel_o    <= `EXE_RES_SHIFT;
                    aluop_o     <= `EXE_SRA_OP;
                    reg1_read_o <= `ReadDisable;
                    reg2_read_o <= `ReadEnable;
                    imm[4:0]    <= inst_i[10:6];
                    wd_o        <= inst_i[15:11];
                    instvalid   <= `InstValid;
                end
            end
        end
    end //always
    
    //****************************第二段：确定进行运算的源操作数1***************************
    //给reg1_赋值的过程增加了两种情况:
    //1. 如果Regfile模块读端口1要读取的寄存器就是执行阶段要写的目的寄存器，那么直接把执行阶段的结果ex_wdata_i作为reg1_o的值
    //2. 如果Regfile模块读端口1要读取的寄存器就是访存阶段要写的目的寄存器，那么直接把访存阶段的结果mem_wdata_i作为reg1_o的值
    always @(*) begin
        if (rst == `RstEnable) begin
            reg1_o <= `ZeroWord;
        end
        else if ((reg1_read_o == `ReadEnable) && (ex_wreg_i == `ReadEnable) && (reg1_addr_o == ex_wd_i)) begin
            reg1_o <= ex_wdata_i;
        end
            else if ((reg1_read_o == `ReadEnable) && (mem_wreg_i == `ReadEnable) && (reg1_addr_o == mem_wd_i)) begin
            reg1_o <= mem_wdata_i;
            end
            else if (reg1_read_o == `ReadEnable) begin
            reg1_o <= reg1_data_i;                  //Regfile读端口1的输出值
            end
            else if (reg1_read_o == `ReadDisable) begin
            reg1_o <= imm;
            end
        else begin
            reg1_o <= `ZeroWord;
        end
    end
    
    //****************************第三段：确定进行运算的源操作数2***************************
    //给reg2赋值过程同样也增加了两种情况，参考第二段
    always @(*) begin
        if (rst == `RstEnable) begin
            reg2_o <= `ZeroWord;
        end
        else if ((reg2_read_o == `ReadEnable) && (ex_wreg_i == `ReadEnable) && (reg2_addr_o == ex_wd_i)) begin
            reg2_o <= ex_wdata_i;
        end
            else if ((reg2_read_o == `ReadEnable) && (mem_wreg_i == `ReadEnable) && (reg2_addr_o == mem_wd_i)) begin
            reg2_o <= mem_wdata_i;
            end
            else if (reg2_read_o == `ReadEnable) begin
            reg2_o <= reg2_data_i;                              //Regfile读端口2的输出值
            end
            else if (reg2_read_o == `ReadDisable) begin
            reg2_o <= imm;                                      //立即数
            end
        else begin
            reg2_o <= `ZeroWord;
        end
    end
endmodule //id
