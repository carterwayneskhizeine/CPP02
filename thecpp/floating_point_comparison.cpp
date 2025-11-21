#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
#include <cmath>  // 用于 fabs()
using namespace std;

void floating_point_comparison() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double a = 0.1 + 0.2;
    double b = 0.3;
    
    // 错误的比较方式
    if (a == b) {
        cout << "相等" << endl;
    }
    
    // 正确的比较方式
    double epsilon = 0.0001;  // 误差范围
    if (fabs(a - b) < epsilon) {
        cout << "近似相等" << endl;
    }
}