#include "Vmux21.h"     // 包含由 Verilator 生成的模块头文件
#include "verilated.h"  // 包含基础 Verilated 库
#include <iostream>

int main(int argc, char** argv, char** env) {
    // 初始化 Verilator 的变量
    Verilated::commandArgs(argc, argv);

    // 实例化模块
    Vmux21* mux = new Vmux21;

    // 初始化模拟
    mux->a = 0;
    mux->b = 0;
    mux->s = 0;
    mux->eval();

    // 测试用例 1: a = 0, b = 1, s = 0
    mux->a = 0;
    mux->b = 1;
    mux->s = 0;
    mux->eval();
    std::cout << "Test case 1: Expected output y = 0, Actual output y = " << (mux->y ? 1 : 0) << std::endl;

    // 测试用例 2: a = 0, b = 1, s = 1
    mux->s = 1;
    mux->eval();
    std::cout << "Test case 2: Expected output y = 1, Actual output y = " << (mux->y ? 1 : 0) << std::endl;

    // 清理
    delete mux;
    exit(0);
}