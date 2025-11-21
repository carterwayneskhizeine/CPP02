#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void average_score_calculation() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int score1 = 85, score2 = 92, score3 = 78;
    
    // 错误：整数除法
    int wrongAvg = (score1 + score2 + score3) / 3;
    cout << "错误计算: " << wrongAvg << endl;  // 输出: 85 (255/3=85)
    
    // 正确：浮点数除法
    double correctAvg = (score1 + score2 + score3) / 3.0;
    cout << "正确计算: " << correctAvg << endl;  // 输出: 85
}