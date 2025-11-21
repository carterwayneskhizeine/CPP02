#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>

void variable_declarations() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // 整数类型
    char initial = 'J';           // 姓名首字母
    int age = 20;                 // 年龄
    long long fileSize = 5368709120;  // 5GB文件大小 （字节）
    std::cout << "Goldie" << std::endl;
    // 浮点类型
    float itemPrice = 9.99f;      // 商品价格
    double accountBalance = 1234.56;  // 账户余额

    std::cout << "Initial: " << initial << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Price: " << itemPrice << std::endl;
}
