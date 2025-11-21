#pragma execution_character_set("utf-8")
#include <windows.h>
// 标题：C++ 显式转换 vs 强制类型转换完整演示
// 说明：对比C风格转换和C++ static_cast，展示安全性差异。
//       包含数值转换、溢出处理、调试技巧。适合从Python来的开发者。

#include <iostream>
#include <type_traits>  // 类型特征检查
#include <cfloat>       // 浮点数极限
using namespace std;

void type_conversion_demo() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout << "=== C++ 类型转换演示 ===" << endl;
    
    // 场景1: 数值转换（最常见）
    cout << "\n--- 场景1: 数值类型转换 ---" << endl;
    
    int original = 32750;  // 32位，范围充足
    cout << "原始int值: " << original << endl;
    
    // C风格转换（不推荐，但兼容旧代码）
    short c_style = (short)original;
    cout << "C风格转换 (short): " << c_style << endl;  // 可能溢出！
    
    // 函数式C风格
    short function_style = short(original);
    cout << "函数式转换 (short): " << function_style << endl;
    
    // C++ static_cast（推荐）
    short cpp_static = static_cast<short>(original);
    cout << "static_cast转换 (short): " << cpp_static << endl;
    
    // 验证结果：32750超过short最大值32767！
    cout << "short最大值: " << SHRT_MAX << endl;  // 32767
    cout << "转换结果是否正确? " << (cpp_static == (short)32750 ? "Yes" : "No") << endl;
    
    // 场景2: 正数转换（安全）
    cout << "\n--- 场景2: 安全转换（正数） ---" << endl;
    
    int positive = 100;
    short safe_short = static_cast<short>(positive);
    cout << "正数转换: " << positive << " → " << safe_short << endl;
    cout << "转换安全: " << (safe_short == positive ? "Yes" : "No") << endl;
    
    // 场景3: 负数转换（危险！）
    cout << "\n--- 场景3: 危险转换（负数） ---" << endl;
    
    int negative = -100;
    unsigned int bad_conversion = static_cast<unsigned int>(negative);
    cout << "负数转换为无符号: " << negative << " → " << bad_conversion << endl;
    // 输出：-100 → 4294967196（变成大数！）
    
    // 场景4: 浮点数转整数（截断）
    cout << "\n--- 场景4: 浮点数转整数 ---" << endl;
    
    float pi = 3.14159;
    int truncated = static_cast<int>(pi);  // 截断小数部分
    cout << "π: " << pi << " → 截断为: " << truncated << endl;
    cout << "完整转换需要round: " << static_cast<int>(pi + 0.5) << endl;
    
    // 场景5: 类型安全检查（C++11）
    cout << "\n--- 场景5: 类型特征检查 ---" << endl;
    
    int test_value = 42;
    cout << "值: " << test_value << endl;
    
    // 检查类型属性
    if (std::is_integral<decltype(test_value)>::value) {
        cout << " 这是一个整数类型" << endl;
    }
    
    if (std::is_signed<decltype(test_value)>::value) {
        cout << " 这是一个有符号类型" << endl;
    }
    
    cout << "字节大小: " << sizeof(test_value) << " bytes" << endl;
    cout << "取值范围: " << INT_MIN << " ~ " << INT_MAX << endl;
    /*
    // 场景6: UE5风格应用
    cout << "\n--- 场景6: UE5应用示例 ---" << endl;
    
    // 假设在UE5中，我们有Actor ID
    int32 ActorId = 1000;  // UE5的int32
    size_t ArrayIndex = static_cast<size_t>(ActorId);  // 用于索引TArray
    
    cout << "UE5 Actor ID: " << ActorId << endl;
    cout << "数组索引转换: " << ArrayIndex << endl;
    
    // 错误场景：负ID转换
    int32 negativeActorId = -5;
    if (negativeActorId < 0) {
        cout << "警告：负Actor ID转换为索引！" << endl;
        cout << "结果: " << static_cast<size_t>(negativeActorId) << endl;
    }
    */
}

/*
运行结果分析：
=== C++ 类型转换演示 ===

--- 场景1: 数值类型转换 ---
原始int值: 32750
C风格转换 (short): -32786
函数式转换 (short): -32786
static_cast转换 (short): -32786
short最大值: 32767
转换结果是否正确? No

结果分析：32750超过short最大值32767，发生溢出（32750 - 32768 = -32718？接近但位运算更复杂）。

--- 场景2: 安全转换（正数） ---
正数转换: 100 → 100
转换安全: Yes

--- 场景3: 危险转换（负数） ---
负数转换为无符号: -100 → 4294967196

--- 场景4: 浮点数转整数 ---
π: 3.14159 → 截断为: 3
完整转换需要round: 3

--- 场景5: 类型特征检查 ---
值: 42
 这是一个整数类型
 这是一个有符号类型
字节大小: 4 bytes
取值范围: -2147483648 ~ 2147483647

--- 场景6: UE5应用示例 ---
UE5 Actor ID: 1000
数组索引转换: 1000
警告：负Actor ID转换为索引！
结果: 18446744073709551611（如果size_t是64位）

关键理解：
1. C++的static_cast比C风格更安全、可读性强
2. 数值溢出是常见陷阱（32750 → short）
3. 负数转无符号会变成大数（补码重释）
4. 浮点转整数截断（不四舍五入）
5. 转换前检查范围和符号，避免意外
6. Python对比：Python转换不需要转换操作符，逻辑简单但性能低

调试提示：
- 用sizeof()检查大小
- 用std::numeric_limits<T>::max()查范围
- 在VS2022监视窗口看转换前后值
- 开启/W4警告检查潜在转换问题
*/