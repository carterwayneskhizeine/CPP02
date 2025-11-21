#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
#include <cmath>  // 数学函数库
using namespace std;

void math_functions_demo() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double x = 2.0;
    
    cout << "2 的平方根: " << sqrt(x) << endl;
    cout << "e^2: " << exp(x) << endl;
    cout << "2^3: " << pow(x, 3) << endl;
    cout << "sin(2): " << sin(x) << endl;
}