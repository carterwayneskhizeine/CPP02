#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

// 函数声明
void simpleComparison();
void ifelseExample();
void logicalOperatorsExample();
int main() {
    // 设置控制台编码支持中文
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    
    cout << ">>> 正在调用simpleComparison函数..." << endl;
    simpleComparison();
    cout << ">>> simpleComparison函数调用完成" << endl;

    cout << endl;

    cout << ">>> 正在调用ifelseExample函数..." << endl;
    ifelseExample();
    cout << ">>> ifelseExample函数调用完成" << endl;

    cout << endl;
    
    cout << ">>> 正在调用logicalOperatorsExample函数..." << endl;
    logicalOperatorsExample();
    cout << ">>> logicalOperatorsExample函数调用完成" << endl;

    cout << endl;
    
    return 0;
}