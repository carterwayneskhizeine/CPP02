#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void print_age() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    //int my_age= 97;

    int myAge =33;

    cout << "My age is " << myAge << endl;
}