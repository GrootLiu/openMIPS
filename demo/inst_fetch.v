module inst_fetch (input wire clk,
                   input wire rstn,
                   output wire [31:0] inst_o);
    wire [5:0] pc;
    wire rom_ce;
    
    //pc模块的例化
    pc_reg pc_reg0( .clk(clk),
                    .rstn(rstn),
                    .pc(pc),
                    .ce(rom_ce));

    //指令存储器ROM的例化
    rom rom_0(  .addr(pc),
                .ce(rom_ce),
                .inst(inst_o));
endmodule //inst_fetch
