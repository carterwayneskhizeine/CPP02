#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>

void float_literal_example() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // === 不加 f ===
    float temp1 = 36.5;       // 36.5 是 double，转换成 float
    temp1 = temp1 / 2.0;      // 2.0 是 double，运算时先转换
    
    // === 加 f ===
    float temp2 = 36.5f;      // 36.5f 直接是 float
    temp2 = temp2 / 2.0f;     // 2.0f 是 float，无需转换
    
    std::cout << "temp1: " << temp1 << std::endl;  // 输出：18.25
    std::cout << "temp2: " << temp2 << std::endl;  // 输出：18.25
    
    // 结果相同，但 temp2 的方式更好
}