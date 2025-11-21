#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void floating_point_types() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // 三种浮点类型的声明
    float price = 9.99f;           // 注意：float 要加 f 后缀
    double pi = 3.14159265359;     // 最常用
    long double precise = 3.14159265358979323846L;  // 加 L 后缀
    
    cout << "float: " << price << endl;
    cout << "double: " << pi << endl;
    cout << "long double: " << precise << endl;
}