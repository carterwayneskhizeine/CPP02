#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void integer_division_modulo() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // 初始化三个变量
    int x(2), y(5), z(7);
    
    // 第8行：计算 y ÷ x 的商
    int temp = y / x;  // 5 / 2 = 2（商）
    
    // 第10-11行：输出变量值和商
    cout << "x = " << x << "\ty = " << y << "\tz = " << z << endl;
    // 输出: x = 2    y = 5    z = 7
    
    cout << "y / x = " << temp << endl;
    // 输出: y / x = 2
    
    // 第13行：计算 y ÷ x 的余数
    temp = y % x;  // 5 % 2 = 1（余数）
    
    // 第14行：输出余数
    cout << "y % x = " << temp << endl;
    // 输出: y % x = 1
}