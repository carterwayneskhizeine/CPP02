#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

// 函数声明
void simpleComparison();
void ifelseExample();
void logicalOperatorsExample();
void average_score_calculation();
void boolean_equality_demo();
void calculator_demo();
void circle_area_calculator();

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

    cout << ">>> 正在调用average_score_calculation函数..." << endl;
    average_score_calculation();
    cout << ">>> average_score_calculation函数调用完成" << endl;
    
    cout << endl;

    cout << ">>> 正在调用boolean_equality_demo函数..." << endl;
    boolean_equality_demo();
    cout << ">>> boolean_equality_demo函数调用完成" << endl;

    cout << endl;

	cout << ">>> 正在调用calculator_demo函数..." << endl;
	calculator_demo();
	cout << ">>> calculator_demo函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用circle_area_calculator函数..." << endl;
	circle_area_calculator();
	cout << ">>> circle_area_calculator函数调用完成" << endl;

	cout << endl;
    
    return 0;
}
