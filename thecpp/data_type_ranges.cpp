#pragma execution_character_set("utf-8")
#include <windows.h>
// 标题：验证C++数据类型范围表
// 说明：打印每种类型的字节大小、最大值、最小值（验证你的表）
//       对比Python的无限精度，展示C++固定范围的特性

#include <iostream>
#include <cfloat>    // 浮点数极限
#include <climits>   // 整数极限
#include <cstdint>   // C++11固定大小类型
using namespace std;

void data_type_ranges() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout << "=== C++ 整数类型验证 ===" << endl;
    
    // 1字节
    cout << "char (signed): " << sizeof(char) << " bytes, "
         << (int)CHAR_MIN << " to " << (int)CHAR_MAX << endl;
    cout << "unsigned char: " << sizeof(unsigned char) << " bytes, "
         << "0 to " << (unsigned int)UCHAR_MAX << endl;
    
    // 2字节
    cout << "short (signed): " << sizeof(short) << " bytes, "
         << SHRT_MIN << " to " << SHRT_MAX << endl;
    cout << "unsigned short: " << sizeof(unsigned short) << " bytes, "
         << "0 to " << USHRT_MAX << endl;
    
    // 4字节
    cout << "int (signed): " << sizeof(int) << " bytes, "
         << INT_MIN << " to " << INT_MAX << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes, "
         << "0 to " << UINT_MAX << endl;
    
    cout << "long (signed): " << sizeof(long) << " bytes, "
         << LONG_MIN << " to " << LONG_MAX << endl;
    cout << "unsigned long: " << sizeof(unsigned long) << " bytes, "
         << "0 to " << ULONG_MAX << endl;
    
    // 8字节
    cout << "long long (signed): " << sizeof(long long) << " bytes, "
         << LLONG_MIN << " to " << LLONG_MAX << endl;
    cout << "unsigned long long: " << sizeof(unsigned long long) << " bytes, "
         << "0 to " << ULLONG_MAX << endl;
    
    // UE5风格（C++11）
    cout << "\n=== UE5风格固定大小类型 ===" << endl;
    cout << "int8_t: " << sizeof(int8_t) << " bytes, "
         << (int)INT8_MIN << " to " << (int)INT8_MAX << endl;
    cout << "uint8_t: " << sizeof(uint8_t) << " bytes, "
         << "0 to " << (unsigned int)UINT8_MAX << endl;
    
    cout << "int32_t: " << sizeof(int32_t) << " bytes, "
         << INT32_MIN << " to " << INT32_MAX << endl;
    cout << "uint32_t: " << sizeof(uint32_t) << " bytes, "
         << "0 to " << UINT32_MAX << endl;
    
    cout << "int64_t: " << sizeof(int64_t) << " bytes, "
         << INT64_MIN << " to " << INT64_MAX << endl;
    cout << "uint64_t: " << sizeof(uint64_t) << " bytes, "
         << "0 to " << UINT64_MAX << endl;
}
