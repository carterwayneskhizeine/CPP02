#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
using namespace std;

void yearly_salary_calculator() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const int MONTHS_IN_YEAR = 12;
    float monthlySalary = 0.0f;
    float yearlySalary = 0.0f;

    cout << "Enter your monthly salary: $";
    cin >> monthlySalary;

    yearlySalary = monthlySalary * MONTHS_IN_YEAR;

    cout << "Your yearly salary is: $" << yearlySalary << endl;

    cout << endl;
}