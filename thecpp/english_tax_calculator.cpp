#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void english_tax_calculator() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float tax, taxRate, price;
    taxRate = 0.15;

    cout << "Enter the price:";
    cin >> price;

    tax = taxRate * price;
    cout.precision(3);  // 设置输出3位有效数字
    cout << endl << "The Tax is: " << tax << endl;
}