#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void floating_point_addition() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float a = 0.1f;
    float b = 0.2f;
    float c = a + b;
    
    cout << "0.1 + 0.2 = " << c << endl;
    // 可能输出: 0.300000012 (不是精确的0.3!)
    
    if (c == 0.3f) {
        cout << "相等" << endl;
    } else {
        cout << "不相等!" << endl;  // 很可能会输出这个
    }
}