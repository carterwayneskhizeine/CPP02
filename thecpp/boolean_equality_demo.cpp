#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void boolean_equality_demo() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    bool bEquality{false}, bInequality{false};
    int X{}, Y{};

    cout << "Enter an integer value for X: ";
    cin >> X;

    cout << "Enter an integer value for Y: ";
    cin >> Y;

    bEquality = (X == Y);
    bInequality = (X != Y);

    cout << boolalpha; // Enable boolean text representation
    cout << "Variables X equals variable y (x == y): " << bEquality << endl;
    cout << "Variables X not equals variable y (x != y): " << bInequality << endl;

    cout << endl;
}