#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
#include <iomanip>  // 用于设置输出精度
using namespace std;

void floating_point_precision() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float f = 3.14159265358979323846f; 
           // 3.1415927410125732422
    double d = 3.14159265358979323846; 
            // 3.141592653589793116
    long double ld = 3.14159265358979323846L; 
                  // 3.1415926535897932385
    
    cout << setprecision(20);  // 设置显示20位小数
    
    cout << "float:       " << f << endl;
    cout << "double:      " << d << endl;
    cout << "long double: " << ld << endl;
}

/*
float:       3.1415927410125732422  (只有6-7位准确)
double:      3.1415926535897931159  (15-16位准确)
long double: 3.1415926535897932385  (取决于系统)
*/