#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void logicalOperatorsExample() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    cout << "=== 逻辑运算符 && 和 || 的用法示例 ===" << endl;
    
    // && (逻辑与) 运算符
    cout << "\n--- && (逻辑与) 运算符 ---" << endl;
    cout << "&& 运算符规则：只有当两个操作数都为真时，结果才为真" << endl;
    cout << "真值表：" << endl;
    cout << "true && true = " << (true && true) << endl;
    cout << "true && false = " << (true && false) << endl;
    cout << "false && true = " << (false && true) << endl;
    cout << "false && false = " << (false && false) << endl;
    
    // && 的实际应用示例
    int age = 20;
    bool hasLicense = true;
    cout << "\n实际应用示例：" << endl;
    cout << "年龄: " << age << ", 有驾照: " << (hasLicense ? "是" : "否") << endl;
    if (age >= 18 && hasLicense) {
        cout << "结果: 可以开车" << endl;
    } else {
        cout << "结果: 不可以开车" << endl;
    }
    
    // 短路求值示例
    cout << "\n&& 短路求值示例：" << endl;
    int x = 5;
    cout << "初始 x = " << x << endl;
    bool result = (x > 10) && (x++ > 0);  // 第一个条件为假，第二个条件不会执行
    cout << "执行 (x > 10) && (x++ > 0) 后，x = " << x << " (没有增加)" << endl;
    cout << "结果: " << result << endl;
    
    // || (逻辑或) 运算符
    cout << "\n--- || (逻辑或) 运算符 ---" << endl;
    cout << "|| 运算符规则：只要有一个操作数为真，结果就为真" << endl;
    cout << "真值表：" << endl;
    cout << "true || true = " << (true || true) << endl;
    cout << "true || false = " << (true || false) << endl;
    cout << "false || true = " << (false || true) << endl;
    cout << "false || false = " << (false || false) << endl;
    
    // || 的实际应用示例
    bool isWeekend = false;
    bool isHoliday = true;
    cout << "\n实际应用示例：" << endl;
    cout << "是周末: " << (isWeekend ? "是" : "否") << ", 是节假日: " << (isHoliday ? "是" : "否") << endl;
    if (isWeekend || isHoliday) {
        cout << "结果: 今天不用上班" << endl;
    } else {
        cout << "结果: 需要上班" << endl;
    }
    
    // || 短路求值示例
    cout << "\n|| 短路求值示例：" << endl;
    int y = 5;
    cout << "初始 y = " << y << endl;
    bool result2 = (y > 0) || (y++ > 10);  // 第一个条件为真，第二个条件不会执行
    cout << "执行 (y > 0) || (y++ > 10) 后，y = " << y << " (没有增加)" << endl;
    cout << "结果: " << result2 << endl;
    
    // 组合使用 && 和 ||
    cout << "\n--- 组合使用 && 和 || ---" << endl;
    int score = 85;
    bool isExcellent = score >= 90;
    bool isGood = score >= 80;
    bool hasExtraCredit = true;
    
    cout << "分数: " << score << endl;
    cout << "是否优秀(>=90): " << (isExcellent ? "是" : "否") << endl;
    cout << "是否良好(>=80): " << (isGood ? "是" : "否") << endl;
    cout << "有额外加分: " << (hasExtraCredit ? "是" : "否") << endl;
    
    if (isExcellent || (isGood && hasExtraCredit)) {
        cout << "结果: 获得奖学金" << endl;
    } else {
        cout << "结果: 未获得奖学金" << endl;
    }
    
    // 运算符优先级示例
    cout << "\n--- 运算符优先级 ---" << endl;
    cout << "&& 的优先级高于 ||" << endl;
    bool a = true, b = false, c = true;
    cout << "a = true, b = false, c = true" << endl;
    cout << "a || b && c = " << (a || b && c) << " (等同于 a || (b && c))" << endl;
    cout << "(a || b) && c = " << ((a || b) && c) << " (使用括号改变优先级)" << endl;
    
    cout << "\n=== 逻辑运算符示例结束 ===" << endl;
}