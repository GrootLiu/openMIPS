/*
 * @Author: Groot
 * @Date: 2022-04-12 16:04:07
 * @LastEditTime: 2022-04-14 15:13:22
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /openMIPS/vsrc/openmips.v
 * 版权声明
 */
`include "./include/define.v"
`include "./vsrc/ex_mem.v"
`include "./vsrc/ex.v"
`include "./vsrc/hilo_reg.v"
`include "./vsrc/id_ex.v"
`include "./vsrc/id.v"
`include "./vsrc/if_id.v"
`include "./vsrc/inst_rom.v"
`include "./vsrc/mem_wb.v"
`include "./vsrc/mem.v"
`include "./vsrc/pc_reg.v"
`include "./vsrc/regfile.v"

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
    
    //连接EX/MEM模块的输出与访存阶段MEM模块的输入的变量
    wire mem_wreg_i;
    wire[`RegAddBus] mem_wd_i;
    wire[`RegBus] mem_wdata_i;
    
    //连接访存阶段MEM模块的输出与MEM/WB模块的输入的变量
    wire mem_wreg_o;
    wire[`RegAddBus] mem_wd_o;
    wire[`RegBus] mem_wdata_o;
    
    //连接MEM/WB模块的输出与写回阶段的输入的变量
    wire wb_wreg_i;
    wire[`RegAddBus] wb_wd_i;
    wire[`RegBus] wb_wdata_i;
    
    //连接译码阶段ID模块与通用寄存器Regfile模块的变量
    wire reg1_read;
    wire reg2_read;
    wire[`RegBus] reg1_data;
    wire[`RegBus] reg2_data;
    wire[`RegAddBus] reg1_addr;
    wire[`RegAddBus] reg2_addr;
    
    //pc_reg的例化
    pc_reg pc_reg0(.clk(clk),
    .rst(rst),
    .pc(pc),
    .ce(rom_ce_o));
    
    assign rom_addr_o = pc;
    
    //IF/ID模块的例化
    if_id if_id0(.clk(clk),
    .rst(rst),
    .if_pc(pc),
    .if_inst(rom_data_i),
    .id_pc(id_pc_i),
    .id_inst(id_inst_i));
    
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
    .wreg_o(id_wreg_o)
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
    .ex_wreg(ex_wreg_i)
    );
    
    //EX模块例化
    ex ex0(.rst(rst),
    //从ID/EX模块传来的信息
    .aluop_i(ex_aluop_i),
    .alusel_i(ex_alusel_i),
    .reg1_i(ex_reg1_i),
    .reg2_i(ex_reg2_i),
    .wd_i(ex_wd_i),
    .wreg_i(ex_wreg_i),
    //输出到EX/MEM模块的信息
    .wdata_o(ex_wdata_o),
    .wd_o(ex_wd_o),
    .wreg_o(ex_wreg_o)
    );
    
    //EX/MEM模块例化
    ex_mem ex_mem0(.clk(clk),
    .rst(rst),
    //来自执行阶段EX模块的信息
    .ex_wdata(ex_wdata_o),
    .ex_wd(ex_wd_o),
    .ex_wreg(ex_wreg_o),
    //送到访存阶段MEM模块的信息
    .mem_wdata(mem_wdata_i),
    .mem_wd(mem_wd_i),
    .mem_wreg(mem_wreg_i)
    );
    
    //MEM模块例化
    mem mem0(.rst(rst),
    //来自EX/MEM模块的信息
    .wdata_i(mem_wdata_i),
    .wd_i(mem_wd_i),
    .wreg_i(mem_wreg_i),
    //送到MEM/WB模块的信息
    .wdata_o(mem_wdata_o),
    .wd_o(mem_wd_o),
    .wreg_o(mem_wreg_o)
    );
    
    //MEM/WB模块例化
    mem_wb mem_wb0(.clk(clk),
    .rst(rst),
    //来自访存阶段MEM模块的信息
    .mem_wdata(mem_wdata_o),
    .mem_wd(mem_wd_o),
    .mem_wreg(mem_wreg_o),
    //送到回写阶段的信息
    .wb_wd(wb_wd_i),
    .wb_wreg(wb_wreg_i),
    .wb_wdata(wb_wdata_i)
    );
endmodule ///home/groot/openmips
