#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
#include <fstream>  // 文件操作

void saveGameScore() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // === 这些变量都在 RAM 中 ===
    int playerScore = 5000;
    int playerLevel = 10;

    std::cout << "Score: " << playerScore << std::endl;

    // === 如果想永久保存，必须写入文件（硬盘）===
    std::ofstream saveFile("savegame.txt");
    saveFile << playerScore << std::endl;
    saveFile << playerLevel << std::endl;
    saveFile.close();

    std::cout << "Game saved to disk!" << std::endl;
    // 现在即使关机，数据也安全了
}