#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void constants_demo() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // 1. 字面常量（Literal Constants）
    // 字面常量是直接写在代码中的固定值，它们不能被修改。
    // 例如：整数常量 42，浮点常量 3.14，字符串常量 "Hello"
    
    int num = 42;  // 42 是一个整数字面常量
    double pi = 3.14159;  // 3.14159 是一个浮点字面常量
    string message = "Hello, World!";  // "Hello, World!" 是一个字符串字面常量
    
    cout << "字面常量示例：" << endl;
    cout << "整数: " << num << endl;
    cout << "浮点数: " << pi << endl;
    cout << "字符串: " << message << endl;
    
    // 2. 使用 const 关键字定义常量（Const Constants）
    // const 修饰的变量在初始化后不能被修改，它的行为像常量。
    // 这是一种推荐的方式，因为它有类型检查，比宏更安全。
    
    const int maxAge = 100;  // const int 定义一个整数常量
    const double gravity = 9.8;  // const double 定义一个浮点常量
    
    // maxAge = 200;  // 这行会编译错误，因为 const 变量不能被修改
    
    cout << "\nconst 常量示例：" << endl;
    cout << "最大年龄: " << maxAge << endl;
    cout << "重力加速度: " << gravity << endl;
    
    // 3. 宏常量（Macro Constants，使用 #define）
    // #define 在预处理阶段定义常量，没有类型检查，容易出错，但简单。
    // 通常用于定义简单的值。
    
    #define PI 3.14159  // 定义宏常量 PI
    #define MAX_SIZE 100
    
    cout << "\n宏常量示例：" << endl;
    cout << "圆周率: " << PI << endl;
    cout << "最大大小: " << MAX_SIZE << endl;
    
    // 注意：宏常量在代码中会被直接替换，所以 PI 会被替换为 3.14159
}
