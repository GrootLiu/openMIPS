/*
 * @Author: Groot
 * @Date: 2022-04-12 16:04:07
 * @LastEditTime: 2022-05-03 21:35:35
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /openMIPS/vsrc/openmips.v
 * 版权声明
 */
`include "/home/groot/openMIPS/include/define.v"
`include "/home/groot/openMIPS/vsrc/ex_mem.v"
`include "/home/groot/openMIPS/vsrc/ex.v"
`include "/home/groot/openMIPS/vsrc/hilo_reg.v"
`include "/home/groot/openMIPS/vsrc/id_ex.v"
`include "/home/groot/openMIPS/vsrc/id.v"
`include "/home/groot/openMIPS/vsrc/if_id.v"
`include "/home/groot/openMIPS/vsrc/inst_rom.v"
`include "/home/groot/openMIPS/vsrc/mem_wb.v"
`include "/home/groot/openMIPS/vsrc/mem.v"
`include "/home/groot/openMIPS/vsrc/pc_reg.v"
`include "/home/groot/openMIPS/vsrc/regfile.v"
`include "/home/groot/openMIPS/vsrc/ctrl.v"

module openmips (input wire clk,
                 input wire rst,
                 input wire[`RegBus] rom_data_i,  //存疑
                 output wire[`RegBus] rom_addr_o, //存疑
                 output wire rom_ce_o);
    //连接 IF/ID模块与译码阶段ID模块的变量
    wire[`InstAddrBus] pc;
    wire[`InstAddrBus] id_pc_i;
    wire[`InstBus] id_inst_i;
    
    //连接译码阶段ID模块输出与ID/EX模块输入的变量
    wire[`AluOpBus] id_aluop_o;
    wire[`AluSelBus] id_alusel_o;
    wire[`RegBus] id_reg1_o;
    wire[`RegBus] id_reg2_o;
    wire id_wreg_o;
    wire[`RegAddBus] id_wd_o;
    
    //连接ID/EX模块输出与执行阶段EX模块输入的变量
    wire[`AluOpBus] ex_aluop_i;
    wire[`AluSelBus] ex_alusel_i;
    wire[`RegBus] ex_reg1_i;
    wire[`RegBus] ex_reg2_i;
    wire ex_wreg_i;
    wire[`RegAddBus] ex_wd_i;
    
    //连接执行阶段EX模块的输出与EX/MEM模块的输入的变量
    wire ex_wreg_o;
    wire[`RegAddBus] ex_wd_o;
    wire[`RegBus] ex_wdata_o;
    wire ex_whilo_o;
    wire[`RegBus] ex_hi_o;
    wire[`RegBus] ex_lo_o;
    
    //连接EX/MEM模块的输出与访存阶段MEM模块的输入的变量
    wire mem_wreg_i;
    wire[`RegAddBus] mem_wd_i;
    wire[`RegBus] mem_wdata_i;
    wire mem_whilo_i;
    wire[`RegBus] mem_hi_i;
    wire[`RegBus] mem_lo_i;
    
    
    //连接访存阶段MEM模块的输出与MEM/WB模块的输入的变量
    wire mem_wreg_o;
    wire[`RegAddBus] mem_wd_o;
    wire[`RegBus] mem_wdata_o;
    wire mem_whilo_o;
    wire[`RegBus] mem_hi_o;
    wire[`RegBus] mem_lo_o;
    
    //连接MEM/WB模块的输出与写回阶段的输入的变量
    wire wb_wreg_i;
    wire[`RegAddBus] wb_wd_i;
    wire[`RegBus] wb_wdata_i;
    wire wb_whilo_i;
    wire[`RegBus] wb_hi_i;
    wire[`RegBus] wb_lo_i;
    
    //连接译码阶段ID模块与通用寄存器Regfile模块的变量
    wire reg1_read;
    wire reg2_read;
    wire[`RegBus] reg1_data;
    wire[`RegBus] reg2_data;
    wire[`RegAddBus] reg1_addr;
    wire[`RegAddBus] reg2_addr;
    
    //连接执行阶段和HILO模块的输出，读取HI、LO寄存器
    wire[`RegBus] hi;
    wire[`RegBus] lo;
    
    // 用于流水线暂停的连线
    wire[5:0] stall;
    wire stallreq_from_id;
    wire stallreq_from_ex;

    // 用于累乘加、累乘减指令的ex模块和ex/mem模块的连线
    wire[1:0] cnt_i;
    wire[`DoubleRegBus] hilo_temp_i;
    wire[1:0] cnt_o;
    wire[`DoubleRegBus] hilo_temp_o;
    
    //pc_reg的例化
    pc_reg pc_reg0(.clk(clk),
    .rst(rst),
    .pc(pc),
    .ce(rom_ce_o),
    .stall(stall));
    
    assign rom_addr_o = pc;
    
    //IF/ID模块的例化
    if_id if_id0(.clk(clk),
    .rst(rst),
    .if_pc(pc),
    .if_inst(rom_data_i),
    .id_pc(id_pc_i),
    .id_inst(id_inst_i),
    .stall(stall));
    
    //译码阶段ID模块的例化
    id id0(.rst(rst),
    .pc_i(id_pc_i),
    .inst_i(id_inst_i),
    //来自Regfile的输入
    .reg1_data_i(reg1_data),
    .reg2_data_i(reg2_data),
    
    //处于执行阶段的指令要写入的目的寄存器信息
    .ex_wreg_i(ex_wreg_o),
    .ex_wdata_i(ex_wdata_o),
    .ex_wd_i(ex_wd_o),
    
    //处于访存阶段的指令要写入的目的寄存器信息
    .mem_wreg_i(mem_wreg_o),
    .mem_wdata_i(mem_wdata_o),
    .mem_wd_i(mem_wd_o),
    
    //送到Regfile的信息
    .reg1_read_o(reg1_read),
    .reg2_read_o(reg2_read),
    .reg1_addr_o(reg1_addr),
    .reg2_addr_o(reg2_addr),
    //送到ID/EX模块的信息
    .aluop_o(id_aluop_o),
    .alusel_o(id_alusel_o),
    .reg1_o(id_reg1_o),
    .reg2_o(id_reg2_o),
    .wd_o(id_wd_o),
    .wreg_o(id_wreg_o),

    // 流水线暂停指令输出
    .stallreq(stallreq_from_id)
    );
    
    //通用寄存器Regfile的例化
    regfile regfile1(.clk(clk),
    .rst(rst),
    .we(wb_wreg_i),
    .waddr(wb_wd_i),
    .wdata(wb_wdata_i),
    .re1(reg1_read),
    .raddr1(reg1_addr),
    .rdata1(reg1_data),
    .re2(reg2_read),
    .raddr2(reg2_addr),
    .rdata2(reg2_data)
    );
    
    //ID/EX模块例化
    id_ex id_ex0(.clk(clk),
    .rst(rst),
    //从译码阶段ID模块传递过来的信息
    .id_aluop(id_aluop_o),
    .id_alusel(id_alusel_o),
    .id_reg1(id_reg1_o),
    .id_reg2(id_reg2_o),
    .id_wd(id_wd_o),
    .id_wreg(id_wreg_o),
    //传递到执行阶段EX模块的信息
    .ex_aluop(ex_aluop_i),
    .ex_alusel(ex_alusel_i),
    .ex_reg1(ex_reg1_i),
    .ex_reg2(ex_reg2_i),
    .ex_wd(ex_wd_i),
    .ex_wreg(ex_wreg_i),
    .stall(stall)
    );
    
    //EX模块例化
    ex ex0(
    //ports
    .rst(rst),
    .aluop_i(ex_aluop_i),
    .alusel_i(ex_alusel_i),
    .reg1_i(ex_reg1_i),
    .reg2_i(ex_reg2_i),
    .wd_i(ex_wd_i),
    .wreg_i(ex_wreg_i),
    .wd_o(ex_wd_o),
    .wreg_o(ex_wreg_o),
    .wdata_o(ex_wdata_o),
    .hi_i(hi),
    .lo_i(lo),
    .mem_whilo_i(mem_whilo_i),
    .mem_hi_i(mem_hi_o),
    .mem_lo_i(mem_lo_o),
    .wb_whilo_i(wb_whilo_i),
    .wb_hi_i(wb_hi_i),
    .wb_lo_i(wb_lo_i),
    .whilo_o(ex_whilo_o),
    .hi_o(ex_hi_o),
    .lo_o(ex_lo_o),
    .stallreq(stallreq_from_ex),
    .cnt_i(cnt_i),
    .hilo_temp_i(hilo_temp_i),
    .cnt_o(cnt_o),
    .hilo_temp_o(hilo_temp_o)
    );
    
    
    //EX/MEM模块例化
    ex_mem ex_mem0(
    //ports
    .clk(clk),
    .rst(rst),
    .stall(stall),
    .ex_wd(ex_wd_o),
    .ex_wreg(ex_wreg_o),
    .ex_wdata(ex_wdata_o),
    .mem_wd(mem_wd_i),
    .mem_wreg(mem_wreg_i),
    .mem_wdata(mem_wdata_i),
    .ex_whilo(ex_whilo_o),
    .ex_hi(ex_hi_o),
    .ex_lo(ex_lo_o),
    .mem_whilo(mem_whilo_i),
    .mem_hi(mem_hi_i),
    .mem_lo(mem_lo_i),
    .cnt_i(cnt_o),
    .hilo_i(hilo_temp_o),
    .cnt_o(cnt_i),
    .hilo_o(hilo_temp_i)
    );
    
    //MEM模块例化
    mem mem0(
    //ports
    .rst(rst),
    .wd_i(mem_wd_i),
    .wreg_i(mem_wreg_i),
    .wdata_i(mem_wdata_i),
    .wd_o(mem_wd_o),
    .wreg_o(mem_wreg_o),
    .wdata_o(mem_wdata_o),
    .whilo_i(mem_whilo_i),
    .hi_i(mem_hi_i),
    .lo_i(mem_lo_i),
    .whilo_o(mem_whilo_o),
    .hi_o(mem_hi_o),
    .lo_o(mem_lo_o)
    );
    
    //MEM/WB模块例化
    mem_wb mem_wb0(
    //ports
    .clk(clk),
    .rst(rst),
    .mem_wd(mem_wd_o),
    .mem_wreg(mem_wreg_o),
    .mem_wdata(mem_wdata_o),
    .wb_wd(wb_wd_i),
    .wb_wreg(wb_wreg_i),
    .wb_wdata(wb_wdata_i),
    .mem_whilo(mem_whilo_o),
    .mem_hi(mem_hi_o),
    .mem_lo(mem_lo_o),
    .wb_whilo(wb_whilo_i),
    .wb_hi(wb_hi_i),
    .wb_lo(wb_lo_i),
    .stall(stall)
    );
    
    //hilo_reg模块例化
    hilo_reg hilo_reg0(
    //ports
    .rst(rst),
    .clk(clk),
    .we (wb_whilo_i),
    .hi_i(wb_hi_i),
    .lo_i(wb_lo_i),
    .hi_o(hi),
    .lo_o(lo)
    );
    
    // ctrl模块
    ctrl ctrl0(
    //ports
    .rst(rst),
    .stallreq_from_id(stallreq_from_id),
    .stallreq_from_ex(stallreq_from_ex),
    .stall(stall)
    );


endmodule ///home/groot/openmips
