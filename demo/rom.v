//指令宽度为32bit
module rom (input wire[5:0] addr,   //要读取的指令地址
            input wire ce,          //使能信号
            output reg[31:0] inst); //要读出的指令
        reg[31:0] rom[63:0];        //使用二维向量定义存储器
        always @(*) begin
            if (ce == 1'b0) begin   //使能信号无效时，给出的数据是0
                inst <= 32'h0;
            end else begin          //使能信号有效时，给出地址addr对应的指令
                inst <= rom[addr];
            end
        end
endmodule //rom
//其中使用了一个二维向量定义存储器，深度是64，每个元素的宽度是32，这也是使用6位地址即可的原因