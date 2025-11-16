#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void ifelseExample() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    bool isAlive = true;

    if (isAlive) 
    {
        cout << "角色存活，继续游戏！" << endl;
    } 
    else 
    {
        cout << "角色已死亡，游戏结束！" << endl;
    }
}