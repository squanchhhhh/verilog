#include "Vmux41_2bit.h"        // 包含由 Verilator 生成的模块头文件
#include "verilated.h"          // 包含基础 Verilated 库
#include "verilated_vcd_c.h"    // 包含 VCD 波形输出支持库
#include <iostream>

int main(int argc, char** argv, char** env) {
    // 初始化 Verilator 的变量
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true); // 开启波形跟踪支持

    // 实例化模块
    Vmux41_2bit* mux = new Vmux41_2bit;

    // 创建波形记录对象
    VerilatedVcdC* vcd = new VerilatedVcdC;
    mux->trace(vcd, 5); // 5 是跟踪的深度，可根据需要调整
    vcd->open("output.vcd"); // 指定波形输出文件名

    // 初始化模拟
    mux->a = 0;
    mux->b = 0;
    mux->c = 0;
    mux->d = 0;
    mux->s = 0;
    mux->eval();
    vcd->dump(0); // 记录时间点 0 的信号状态

    // 测试用例 1: a = 0, b = 1, s = 2
    mux->a = 0;
    mux->b = 1;
    mux->c = 2;
    mux->d = 3;
    mux->s = 2;
    mux->eval();
    vcd->dump(1); // 记录时间点 1 的信号状态

    std::cout << "Test case 1: Expected output y = 2, Actual output y = " << static_cast<int>(mux->y) << std::endl;

    // 记录完成，关闭波形文件
    vcd->close();

    // 清理
    delete mux;
    delete vcd;
    exit(0);
}