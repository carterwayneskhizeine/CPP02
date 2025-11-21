#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void integer_float_division() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // 整数除法（会截断）
    int result1 = 7 / 2;
    cout << "int: 7 / 2 = " << result1 << endl;  // 输出: 3
    
    // 浮点数除法（保留小数）
    double result2 = 7.0 / 2.0;
    cout << "double: 7.0 / 2.0 = " << result2 << endl;  // 输出: 3.5
    
    // 混合运算（会转换为浮点数）
    double result3 = 7 / 2.0;  // 其中一个是浮点数就够了
    cout << "混合: 7 / 2.0 = " << result3 << endl;  // 输出: 3.5
    
    // 类型转换
    double result4 = (double)7 / 2;  // 强制转换
    cout << "转换: (double)7 / 2 = " << result4 << endl;  // 输出: 3.5
}
