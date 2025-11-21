#!/usr/bin/env python3
import os
import re

def convert_main_to_function(file_path):
    """将文件中的 main() 函数转换为独立函数"""
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # 获取文件名（不含路径和扩展名）
        file_name = os.path.basename(file_path)
        func_name = os.path.splitext(file_name)[0]
        
        # 将 main() 替换为函数名
        # 处理不同格式的 main 函数声明
        patterns = [
            (r'int\s+main\s*\(\s*\)\s*\{', f'void {func_name}() {{'),
            (r'int\s+main\s*\(\s*void\s*\)\s*\{', f'void {func_name}() {{'),
            (r'void\s+main\s*\(\s*\)\s*\{', f'void {func_name}() {{'),
        ]
        
        modified_content = content
        for pattern, replacement in patterns:
            modified_content = re.sub(pattern, replacement, modified_content)
        
        # 移除 return 语句（如果是 void 函数）
        modified_content = re.sub(r'\s+return\s+0\s*;\s*\n\s*\}', '\n}', modified_content)
        modified_content = re.sub(r'\s+return\s*;\s*\n\s*\}', '\n}', modified_content)
        
        # 如果内容有变化，写回文件
        if modified_content != content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(modified_content)
            print(f"[OK] 已转换: {file_name} -> {func_name}()")
            return True
        else:
            print(f"[SKIP] 无需转换: {file_name}")
            return False
            
    except Exception as e:
        print(f"[ERROR] 转换失败 {file_path}: {e}")
        return False

def process_directory(directory):
    """处理目录中的所有 .cpp 文件"""
    converted_count = 0
    skipped_count = 0
    
    for file_name in os.listdir(directory):
        if file_name.endswith('.cpp'):
            file_path = os.path.join(directory, file_name)
            if convert_main_to_function(file_path):
                converted_count += 1
            else:
                skipped_count += 1
    
    print(f"\n转换完成:")
    print(f"  已转换: {converted_count} 个文件")
    print(f"  跳过: {skipped_count} 个文件")

if __name__ == "__main__":
    # 处理 othercpp 目录
    othercpp_dir = "othercpp"
    if os.path.exists(othercpp_dir):
        print(f"开始处理目录: {othercpp_dir}")
        process_directory(othercpp_dir)
    else:
        print(f"错误: 目录 {othercpp_dir} 不存在")