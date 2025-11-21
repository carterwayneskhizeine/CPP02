#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void simple_arithmetic() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int temp;
    temp = 5+5;
    cout << temp * 2<< endl;
}