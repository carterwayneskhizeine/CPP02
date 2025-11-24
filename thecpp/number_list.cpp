#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
#include <vector>
using namespace std;

void add_zeros_to_list(vector<int> &number_list, int zeros_number)
{
    for (int i = 0; i < zeros_number; i++)
    {
        number_list.push_back(0);
    }
    cout << "B. Size of number list: " << number_list.size() << endl;
}

/*
int main()
{
    vector<int> list = { 5, 5, 4 };
    cout << "A. Size of number list: " << list.size() << endl;
    add_zeros_to_list(list, 4);
    cout << "C. Size of number list: " << list.size() << endl;
    return 0;
}
*/