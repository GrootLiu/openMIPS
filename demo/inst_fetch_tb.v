module inst_fetch_tb ();
    
    //数据类型说明
    reg CLOCK;          //激励信号CLOCK，这是时钟信号
    reg rstn;           //激励信号rstn，这是复位信号
    wire [31:0] inst;   //显示信号，取出的指令
    

    /*iverilog */
    initial
    begin
        $dumpfile("wave.vcd");        //生成的vcd文件名称
        $dumpvars(0, inst_fetch_tb);    //tb模块名称
    end
/*iverilog */

    //激励向量定义
    
    
    //定义CLOCK信号，每隔10个时间单位，CLOCK的值翻转，由此得到一个周期信号
    //在仿真的时候，一个时间单位默认是1ns，所以CLOCK的值每10ns翻转一次，对应
    //就是50MHz的时钟
    initial begin
        CLOCK             <= 1'b0;
        forever #10 CLOCK <= ~CLOCK;
    end
    
    //定义rstn信号，最开始为1，过了195个时间单位，即195ns，
    //设置rstn信号的值为0，复位信号无效，复位结束，再运行1000ns，暂停仿真
    initial begin
        rstn      <= 1'b1;
        #195 rstn <= 1'b0;
        #1000 $finish;
    end
    
    inst_fetch inst_fetch0( .clk(CLOCK),
                            .rstn(rstn),
                            .inst_o(inst));
    
endmodule //inst_fetch_tb
