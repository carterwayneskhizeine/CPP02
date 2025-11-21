#pragma execution_character_set("utf-8")
#include <windows.h>
#include <clocale>
#include <iostream>
using namespace std;

void circle_area_calculator() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, "zh_CN.UTF-8");
    const double PI = 3.14159265359;
    double radius;

    cout << "Radius: ";
    cin >> radius;
    
    double area = PI * radius * radius;
    
    cout << "半径为 " << radius << " 的圆面积是: " << area << endl;
    // 输出: 半径为 5 的圆面积是: 78.5398
}