#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
#include <locale>
using namespace std;

void taxCalculator()
{
    // 设置locale以支持中文输出
    setlocale(LC_ALL, "");
    
    float tax, taxRate, price;
    taxRate = 0.15;

    cout << "输入价格:";
    cin >> price;

    tax = taxRate * price;
    cout.precision(5);  // 设置输出5位有效数字
    cout << endl << "税率是: " << tax << endl;
}
