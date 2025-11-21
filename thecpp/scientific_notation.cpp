#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void scientific_notation() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double large = 1.23e8;    // 1.23 × 10^8 = 123,000,000
    double small = 4.56e-5;   // 4.56 × 10^-5 = 0.0000456
    
    cout << "大数: " << large << endl;
    cout << "小数: " << small << endl;
}
