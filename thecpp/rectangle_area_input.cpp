#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void rectangle_area_input() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int width;
    int length;
    int area;

    cout << "Width: ";
    cin >> width;

    cout << "Length: ";
    cin >> length;

    area = width * length;
    cout << endl << "面积是：" << area << endl;
}