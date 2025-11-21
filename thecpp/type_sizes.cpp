#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void type_sizes() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int age = 25;
    double price = 99.99;
    char letter = 'A';

    unsigned long long int a = 1099999999;
    cout << sizeof(a) << endl;
    cout << "The size of int is " << sizeof(int) << endl; 

    // 查询类型大小
    cout << "int 占用: " << sizeof(int) << " 字节" << endl;
    // 输出: int 占用: 4 字节
    
    // 查询变量大小
    cout << "age 变量占用: " << sizeof(age) << " 字节" << endl;
    // 输出: age 变量占用: 4 字节
    
    cout << "double 占用: " << sizeof(double) << " 字节" << endl;
    // 输出: double 占用: 8 字节
    
    cout << "char 占用: " << sizeof(char) << " 字节" << endl;
    // 输出: char 占用: 1 字节
}