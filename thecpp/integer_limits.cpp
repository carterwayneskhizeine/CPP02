#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
#include <climits>  // 必须包含这个头文件
using namespace std;

void integer_limits() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout << "=== 你的系统上各类型的范围 ===" << endl;
    cout << "short 范围: " << SHRT_MIN << " 到 " << SHRT_MAX << endl;
    cout << "int 范围: " << INT_MIN << " 到 " << INT_MAX << endl;
    cout << "long 范围: " << LONG_MIN << " 到 " << LONG_MAX << endl;
    cout << "long long 范围: " << LLONG_MIN << " 到 " << LLONG_MAX << endl;
    cout << "\n=== 无符号类型的最大值 ===" << endl;
    cout << "unsigned short 最大: " << USHRT_MAX << endl;
    cout << "unsigned int 最大: " << UINT_MAX << endl;
    cout << "unsigned long long 最大: " << ULLONG_MAX << endl;
}

/*

**输出示例：**
```
=== 你的系统上各类型的范围 ===
short 范围: -32768 到 32767
int 范围: -2147483648 到 2147483647
long 范围: -2147483648 到 2147483647
long long 范围: -9223372036854775808 到 9223372036854775807

=== 无符号类型的最大值 ===
unsigned short 最大: 65535
unsigned int 最大: 4294967295
unsigned long long 最大: 18446744073709551615

*/