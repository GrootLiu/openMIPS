/*
 * @Author: Groot
 * @Date: 2022-04-09 18:01:23
 * @LastEditTime: 2022-04-22 15:26:00
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
           output reg[`RegBus] wdata_o,
           input wire[`RegBus] hi_i,        //HILO模块给出的HI寄存器的值
           input wire[`RegBus] lo_i,        //HILO模块给出的LO寄存器的值
           input wire mem_whilo_i,          //处于访存阶段的指令是否要写HI、LO寄存器
           input wire[`RegBus] mem_hi_i,    //处于访存阶段的指令要写入的HI寄存器的值
           input wire[`RegBus] mem_lo_i,    //处于访存阶段的指令要写入的LO寄存器的值
           input wire wb_whilo_i,           //处于写回阶段的指令是否要写HI、LO寄存器
           input wire[`RegBus] wb_hi_i,     //处于写回阶段的指令要写入的HI寄存器的值
           input wire[`RegBus] wb_lo_i,     //处于写回阶段的指令要写入的LO寄存器的值
           output reg whilo_o,              //处于执行阶段的指令是否要写HI、LO寄存器
           output reg[`RegBus] hi_o,        //处于执行阶段的指令要写入的HI寄存器的值
           output reg[`RegBus] lo_o);       //处于执行阶段的指令要写入的LO寄存器的值
    
    reg[`RegBus] logicout;      //逻辑操作的结果
    reg[`RegBus] shiftres;      //以为操作的结果
    reg[`RegBus] movres;        //移动操作的结果
    reg[`RegBus] HI;            //保存HI寄存器的最新值
    reg[`RegBus] LO;            //保存LO寄存器的最新值
    
    //定义了一些新变量
    wire ov_sum;                    // 保存溢出结果
    wire reg1_eq_reg2;              // 第一个操作数是否等于第二个操作数
    wire reg1_lt_reg2;              // 第一个操作数是否小于第二个操作数
    reg[`RegBus] arithmeticres;     // 保存算术运算的结果
    wire[`RegBus] reg2_i_mux;       // 保存输入的第二个操作数reg2_i的补码
    wire[`RegBus] reg1_i_not;       // 保存输入的第一个操作数reg1_i的反码
    wire[`RegBus] result_sum;       // 保存加法结果
    wire[`RegBus] opdata1_mult;     // 乘法操作中的被乘数
    wire[`RegBus] opdata2_mult;     // 乘法操作中的乘数
    wire[`DoubleRegBus] hilo_temp;  // 临时保存乘法结果，宽度为64位
    reg[`DoubleRegBus] mulres;      // 保存乘法结果，宽度为64位
    
    /*****************************************第一段：计算以下五个变量的值**************************************/
    // 1.如果是减法或者有符号比较运算，那么第二个操作数需要使用补码
    //   否则，第二个操作数仍等于它自身
    assign reg2_i_mux = ((aluop_i == `EXE_SUB_OP)||(aluop_i == `EXE_SLT_OP) ? (~reg2_i)+1 : reg2_i);
    // 2. 分三种情况
    //      a. 如果是加法运算，那么reg2_i_mux就是第二个操作数reg2_i。所以result_sum就是加运算的结果
    //      b. 如果是减法运算，此时reg2_i_mux的值为第二个操作数reg2_i的补码。所以result_sum就是减法运算的结果
    //      c. 如果是有符号比较运算，此时reg2_i_mux的值也是第二个操作数reg2_i的补码。所以result_sum就是减法运算的结果，
    //         可以通过判断result_sum是否小于零，进而判断第一个操作数是否小于第二个操作数。
    assign result_sum = reg1_i + reg2_i_mux;
    // 3. 计算是否溢出
    //    加法指令add/addi和减法指令执行的时候需要判断是否溢出
    //    满足以下两种情况之一时，会产生溢出
    //        a. reg1_i为正数，reg2_i_mux为正数，但二者之和为负数
    //        b. reg1_i为负数，reg2_i_mux为负数，但二者之和为整数
    assign ov_sum = ((!reg1_i[31] && !reg2_i_mux[31] && result_sum[31]) || (reg1_i[31] && reg2_i_mux[31] && !result_sum[31]));
    // 4. 计算操作数1是否小于操作数2，分两种情况
    //    a. aluop_i为`EXE_SLT_OP表示有符号运算，此时又分三种情况
    //          - reg1_i为负数，reg2_i_mux为正数，显然reg1_i小于reg2_i_mux
    //          - reg1_i为正数，reg2_i_mux也为正数，此时通过判断result_sum的正负来判断操作数一是否小于操作数二
    //          - reg1_i为负数，reg2_i_mux也为负数，此时通过判断result_sum的正负来判断操作数一是否小于操作数二
    //    b. 无符号数比较的时候，直接用比较运算符比较reg1_i和reg2_i
    assign reg1_lt_reg2 = ((aluop_i == `EXE_SLT_OP) ? 
    (reg1_i[31] && !reg2_i_mux[31]) || (!reg1_i[31] && !reg2_i_mux[31] && result_sum[31]) || (reg1_i[31] && reg2_i_mux[31] && result_sum[31])
    : (reg1_i < reg2_i));
    // 5. 对操作数1按位取反，赋值给reg1_i_not
    assign reg1_i_not = ~reg1_i;
    /*****************************************第二段：依据不同的算术运算类型，给arithmetices变量赋值**************************************/
    always @ (*) begin
        if (rst == `RstEnable) begin
            arithmeticres <= `ZeroWord;
        end
        else begin
            case(aluop_i)
                `EXE_SLT_OP : begin
                    arithmeticres <= reg1_lt_reg2;
                end
                `EXE_ADD_OP, `EXE_ADDU_OP : begin
                    arithmeticres <= result_sum;
                end
                `EXE_SUB_OP, `EXE_SUBU_OP : begin
                    arithmeticres <= result_sum;
                end
                `EXE_CLO_OP : begin
                    arithmeticres <= reg1_i[31] ? 0 : reg1_i[30] ? 1 :
                                     reg1_i[29] ? 2 : reg1_i[28] ? 3 :
                                     reg1_i[27] ? 4 : reg1_i[26] ? 5 :
                                     reg1_i[25] ? 6 : reg1_i[24] ? 7 :
                                     reg1_i[23] ? 8 : reg1_i[22] ? 9 :
                                     reg1_i[21] ? 10 : reg1_i[20] ? 11 :
                                     reg1_i[19] ? 12 : reg1_i[18] ? 13 :
                                     reg1_i[17] ? 14 : reg1_i[16] ? 15 :
                                     reg1_i[15] ? 16 : reg1_i[14] ? 17 :
                                     reg1_i[13] ? 18 : reg1_i[12] ? 19 :
                                     reg1_i[11] ? 20 : reg1_i[10] ? 21 :
                                     reg1_i[9] ? 22 : reg1_i[8] ? 23 :
                                     reg1_i[7] ? 24 : reg1_i[6] ? 25 :
                                     reg1_i[5] ? 26 : reg1_i[4] ? 27 :
                                     reg1_i[3] ? 28 : reg1_i[2] ? 29 :
                                     reg1_i[1] ? 30 : reg1_i[0] ? 31 : 32;
                end
                `EXE_CLZ_OP : begin
                    arithmeticres <= reg1_i_not[31] ? 0 : 
                                     reg1_i_not[30] ? 1 :
                                     reg1_i_not[29] ? 2 : 
                                     reg1_i_not[28] ? 3 :
                                     reg1_i_not[27] ? 4 : 
                                     reg1_i_not[26] ? 5 :
                                     reg1_i_not[25] ? 6 : 
                                     reg1_i_not[24] ? 7 :
                                     reg1_i_not[23] ? 8 : 
                                     reg1_i_not[22] ? 9 :
                                     reg1_i_not[21] ? 10 : 
                                     reg1_i_not[20] ? 11 :
                                     reg1_i_not[19] ? 12 : 
                                     reg1_i_not[18] ? 13 :
                                     reg1_i_not[17] ? 14 : 
                                     reg1_i_not[16] ? 15 :
                                     reg1_i_not[15] ? 16 : 
                                     reg1_i_not[14] ? 17 :
                                     reg1_i_not[13] ? 18 : 
                                     reg1_i_not[12] ? 19 :
                                     reg1_i_not[11] ? 20 :
                                     reg1_i_not[10] ? 21 :
                                     reg1_i_not[9] ? 22 :
                                     reg1_i_not[8] ? 23 :
                                     reg1_i_not[7] ? 24 :
                                     reg1_i_not[6] ? 25 :
                                     reg1_i_not[5] ? 26 :
                                     reg1_i_not[4] ? 27 :
                                     reg1_i_not[3] ? 28 :
                                     reg1_i_not[2] ? 29 :
                                     reg1_i_not[1] ? 30 :
                                     reg1_i_not[0] ? 31 : 32;
                end
                default : begin
                    arithmeticres <= `ZeroWord;
                end
            endcase
        end
    end

    /*****************************************第三段：进行乘法运算**************************************/
    // 1. 取得乘法运算的被乘数，如果是有符号乘法且被乘数是负数，那么取补码
    assign opdata1_mult = ((aluop_i == `EXE_MUL_OP) && (reg1_i[31] == `NegNum)) ? (reg1_i_not + 1) : reg1_i;
    // 2. 取得乘法运算的乘数，如果是有符号乘法且乘数是负数，那么取补码
    assign opdata2_mult = ((aluop_i == `EXE_MUL_OP) && (reg2_i[31] == `NegNum)) ? (reg2_i_mux) : reg1_i;
    // 3. 得到临时乘法结果
    assign hilo_temp = opdata1_mult * opdata2_mult;
    // 4. 对临时乘法结果进行修正，最终的乘法结果保存在变量mulres中
    //      a. 如果是有符号乘法指令mul、mult，那么需要修正临时乘法结果
    //          - 如果被乘数与乘数一正一负，那么需要对临时乘法结果hilo_temp求补码，作为最后的结果赋值给mulres
    //          - 如果被乘数与乘数同号，那么hilo_temp的值就作为最终的乘法结果赋值给mulres
    //      b. 如果是无符号乘法指令multu，那么hilo_temp的值就作为最终的乘法结果赋值给 mulres
    always @(*) begin
        if (rst == `RstEnable) begin
                mulres <= {`ZeroWord, `ZeroWord};
        end
        else if ((aluop_i == `EXE_MUL_OP || aluop_i == `EXE_MULT_OP) && (reg1_i[31] ^ reg2_i[31] == `NegNum)) begin
                mulres <= ~hilo_temp + 1;
        end
        else begin
                mulres <= hilo_temp;
        end
    end

    //得到最新的HI、LO寄存器的值，此处要解决数据相关问题。
    //如果访存和回写阶段的指令要写HI、LO寄存器，则务必及时更新这两个寄存器
    always @(*) begin
        if (rst == `RstEnable) begin
            {HI, LO} <= {`ZeroWord, `ZeroWord};
        end
        else if (mem_whilo_i == `WriteEnable) begin
            {HI, LO} <= {mem_hi_i, mem_lo_i};           //访存阶段的指令要写HI、LO寄存器
        end
            else if (wb_whilo_i == `WriteEnable) begin
            {HI, LO} <= {wb_hi_i, wb_lo_i};             //回写阶段的指令要写HI、LO寄存器
            end
    end //always
            
    //****************第一段：依据aluop_i指示的运算类型进行运算
    always @(*) begin
        if (rst == `RstEnable) begin
            logicout <= `ZeroWord;
            shiftres <= `ZeroWord;
            movres   <= `ZeroWord;
        end //endif
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
                //进行移动操作
                `EXE_MOVZ_OP : begin
                    //如果是movz指令，将reg1_i的值作为移动操作的结果
                    movres <= reg1_i;
                end
                `EXE_MOVN_OP : begin
                    //如果是movn指令，将reg1_i的值作为移动操作的结果
                    movres <= reg1_i;
                end
                `EXE_MFHI_OP : begin
                    //如果是mfhi指令，将HI的值作为移动指令的结果
                    movres <= HI;
                end
                `EXE_MFLO_OP : begin
                    //如果是mflo指令，将LO的值作为移动指令的结果
                    movres <= LO;
                end
                default : begin
                    logicout <= `ZeroWord;
                end
            endcase //case aluop_i
        end //end else
    end //end always
    //进行移位运算
    
    //****************第二段：依据alusel_i指示的运算子类型，选择一个运算结果作为最终结果**************
    always @(*) begin
        //wd_o等于wd_i，要写的目的寄存器地址
        wd_o   <= wd_i;                       
        // 如果是add、addi、sub、subi指令，且发生溢出，那么设置wreg_o为WriteDisable，表示不写目的寄存器
        if ((aluop_i == `EXE_ADD_OP || aluop_i == `EXE_SUB_OP) && ov_sum == `OverFlow) begin
            wreg_o <= `WriteDisable;
        end
        else begin
            wreg_o <= wreg_i;
        end

        case (alusel_i)
            //选择逻辑运算结果位最终运算结果
            `EXE_RES_LOGIC : begin
                wdata_o <= logicout;        //wdata_o中存放运算结果
            end
            //选择移位运算结果位最终运算结果
            `EXE_RES_SHIFT : begin
                wdata_o <= shiftres;
            end
            `EXE_RES_MOVE : begin
                wdata_o <= movres;
            end
            `EXE_RES_ARITHMETIC : begin
                wdata_o <= arithmeticres;
            end
            `EXE_RES_MUL : begin
                wdata_o <= mulres;
            end
            default : begin
                wdata_o <= `ZeroWord;
            end
        endcase
    end // end always
    
    //如果是MTHI、MTLO指令，那么需要给出whilo_o,hi_o,lo_o的值
    always @(*) begin
        if (rst == `WriteEnable) begin
            whilo_o <= `WriteDisable;
            hi_o    <= `ZeroWord;
            lo_o    <= `ZeroWord;
        end
        else if (aluop_i == `EXE_MULT_OP) begin
            whilo_o <= `WriteEnable;
            hi_o    <= mulres[63:32];
            lo_o    <= mulres[31:0];
        end
        else if (aluop_i == `EXE_MTHI_OP) begin
            //写HI寄存器，所以LO寄存器保持不变
            whilo_o <= `WriteEnable;
            hi_o    <= reg1_i;
            lo_o    <= LO;
        end
        else if (aluop_i == `EXE_MTLO_OP) begin
            //写LO寄存器，所以HI寄存器保持不变
            whilo_o <= `WriteEnable;
            hi_o    <= HI;
            lo_o    <= reg1_i;
            end
        else begin
            whilo_o <= `WriteDisable;
            hi_o    <= `ZeroWord;
            lo_o    <= `ZeroWord;
        end
    end
endmodule //ex
