#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
#include <cfloat>  // 浮点数的限制常量
using namespace std;

void floating_point_limits() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout << "=== float 类型 ===" << endl;
    cout << "最小正值: " << FLT_MIN << endl;
    cout << "最小负值: " << -FLT_MAX << endl;  // 新增
    cout << "最大值: " << FLT_MAX << endl;
    cout << "精度(位数): " << FLT_DIG << " 位" << endl;
    
    cout << "\n=== double 类型 ===" << endl;
    cout << "最小正值: " << DBL_MIN << endl;
    cout << "最小负值: " << -DBL_MAX << endl;  // 新增
    cout << "最大值: " << DBL_MAX << endl;
    cout << "精度(位数): " << DBL_DIG << " 位" << endl;
    
    cout << "\n=== long double 类型 ===" << endl;
    cout << "最小正值: " << LDBL_MIN << endl;
    cout << "最小负值: " << -LDBL_MAX << endl;  // 新增
    cout << "最大值: " << LDBL_MAX << endl;
    cout << "精度(位数): " << LDBL_DIG << " 位" << endl;
}