/*
计算器
*/
#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void calculator_demo() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char operation{};
    double num1{}, num2{}, result{};

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
    }

    cout << "Result: " << result << endl;
}