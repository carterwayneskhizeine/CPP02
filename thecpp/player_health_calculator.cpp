#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;
void player_health_calculator() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int STAT_MULTIPLIER = 10;
    const float HEALTH_PER_LEVEL = 50.0f;
    int playerLevel = 0;
    float totalHealth = 0.0f;
    cout << "Enter player level: ";
    cin >> playerLevel;
    totalHealth = playerLevel * HEALTH_PER_LEVEL;
    cout << "Player health at level " << playerLevel 
        << " is: " << totalHealth << endl;
}