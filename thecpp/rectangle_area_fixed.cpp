#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void rectangleAreaFixed()
{
    //TODO: 修复用户输入功能
    int width;
    int length;
    int area;

    cout << "Width: ";
    cin >> width;

    cout << "Length: ";
    cin >> length;

    //TODO: 修复计算逻辑bug
    area = width * length;
    cout << endl << "面积是：" << area << endl;
}