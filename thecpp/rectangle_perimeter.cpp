#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void rectangle_perimeter() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int width = 3;
    int length = 4;

    int area;

    area =width + length + width + length;

    cout << "The area of the rectangle is " << area << endl;
}