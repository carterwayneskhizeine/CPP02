import os
import re
from pathlib import Path

othercpp_dir = Path('othercpp')

for cpp_file_path in othercpp_dir.glob('*.cpp'):
    if cpp_file_path.name == 'average_score_calculation.cpp':
        continue  # Skip the example file

    content = cpp_file_path.read_text(encoding='utf-8-sig')
    lines = content.splitlines(keepends=True)

    # Check and add pragma if missing
    pragma_line_index = -1
    for i, line in enumerate(lines):
        if '#pragma execution_character_set("utf-8")' in line:
            pragma_line_index = i
            break

    if pragma_line_index == -1:
        lines.insert(0, '#pragma execution_character_set("utf-8")\n')
        pragma_line_index = 0

    # Check and add #include <windows.h> after pragma if missing
    windows_h_added = False
    for i in range(pragma_line_index + 1, len(lines)):
        if '#include <windows.h>' in lines[i]:
            windows_h_added = True
            break
    if not windows_h_added:
        lines.insert(pragma_line_index + 1, '#include <windows.h>\n')

    # Find the void function definition
    func_start_line = -1
    for i, line in enumerate(lines):
        match = re.match(r'^\s*void\s+\w+\s*\(\s*\)\s*\{', line)
        if match:
            func_start_line = i
            break

    if func_start_line != -1:
        # Skip empty lines after {
        insert_pos = func_start_line + 1
        while insert_pos < len(lines) and lines[insert_pos].strip() == '':
            insert_pos += 1

        # Check if SetConsoleOutputCP is already at insert_pos
        has_set_output = insert_pos < len(lines) and 'SetConsoleOutputCP' in lines[insert_pos]
        if not has_set_output:
            # Determine indent from next non-empty line or default to 4 spaces
            indent = '    '
            if insert_pos < len(lines):
                indent_match = re.match(r'^(\s*)', lines[insert_pos])
                if indent_match:
                    indent = indent_match.group(1)[:4]  # Up to 4 spaces
                else:
                    indent = '    '

            lines.insert(insert_pos, indent + 'SetConsoleOutputCP(CP_UTF8);\n')
            lines.insert(insert_pos + 1, indent + 'SetConsoleCP(CP_UTF8);\n')

    # Write back the modified content
    cpp_file_path.write_text(''.join(lines), encoding='utf-8-sig')

print("UTF-8 support added to all othercpp/*.cpp files except average_score_calculation.cpp")