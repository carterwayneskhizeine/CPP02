#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void simpleComparison() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x, y;

    cout << "请输入第一个整数 x Please input first integer x: ";
    cin >> x;

    cout << "请输入第二个整数 y Please input second integer y: ";
    cin >> y;

    // Use boolalpha to output boolean values as true/false instead of 1/0
    cout << boolalpha;

    cout << endl;
    cout << "Your input values: x = " << x << ", y = " << y << endl;
    cout << endl;

    // Equal operator == usage
    cout << "x == y result is: " << (x == y) << endl;
    cout << "x == y means: " << (x == y ? "equal" : "not equal") << endl;
    cout << endl;

    // Not equal operator != usage
    cout << "x != y result is: " << (x != y) << endl;
    cout << "x != y means: " << (x != y ? "not equal" : "equal") << endl;
}