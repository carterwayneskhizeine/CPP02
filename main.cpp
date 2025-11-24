#pragma execution_character_set("utf-8")
#include <windows.h>
#include <iostream>
#include <vector>
using namespace std;

// 函数声明
void simpleComparison();
void ifelseExample();
void logicalOperatorsExample();
void average_score_calculation();
void boolean_equality_demo();
void calculator_demo();
void circle_area_calculator();
void constants_demo();
void data_type_ranges();
void english_tax_calculator();
void floating_point_addition();
void floating_point_comparison();
void floating_point_limits();
void floating_point_precision();
void floating_point_types();
void float_literal_example();
void integer_division_modulo();
void integer_float_division();
void integer_limits();
void math_functions_demo();
void player_health_calculator();
void print_age();
void rectangleAreaFixed();
void rectangle_area_input();
void rectangle_perimeter();
void saveGameScore();
void scientific_notation();
void simple_arithmetic();
void taxCalculator();
void type_conversion_demo();
void type_sizes();
void variable_declarations();
void yearly_salary_calculator();
void say_hello(std::string user_name);
void add_zeros_to_list(vector<int> &number_list, int zeros_number);
void print_all_elements_from_list(const vector<int> &list);

int main() {

    // 设置控制台编码支持中文
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	/*
    // 调用各个函数
    cout << ">>> 正在调用simpleComparison函数..." << endl;
    simpleComparison();
    cout << ">>> simpleComparison函数调用完成" << endl;

    cout << endl;

    cout << ">>> 正在调用ifelseExample函数..." << endl;
    ifelseExample();
    cout << ">>> ifelseExample函数调用完成" << endl;

    cout << endl;
    
    cout << ">>> 正在调用logicalOperatorsExample函数..." << endl;
    logicalOperatorsExample();
    cout << ">>> logicalOperatorsExample函数调用完成" << endl;

    cout << endl;

    cout << ">>> 正在调用average_score_calculation函数..." << endl;
    average_score_calculation();
    cout << ">>> average_score_calculation函数调用完成" << endl;
    
    cout << endl;

    cout << ">>> 正在调用boolean_equality_demo函数..." << endl;
    boolean_equality_demo();
    cout << ">>> boolean_equality_demo函数调用完成" << endl;

    cout << endl;

	cout << ">>> 正在调用calculator_demo函数..." << endl;
	calculator_demo();
	cout << ">>> calculator_demo函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用circle_area_calculator函数..." << endl;
	circle_area_calculator();
	cout << ">>> circle_area_calculator函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用constants_demo函数..." << endl;
	constants_demo();
	cout << ">>> constants_demo函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用data_type_ranges函数..." << endl;
	data_type_ranges();
	cout << ">>> data_type_ranges函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用english_tax_calculator函数..." << endl;
	english_tax_calculator();
	cout << ">>> english_tax_calculator函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用floating_point_addition函数..." << endl;
	floating_point_addition();
	cout << ">>> floating_point_addition函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用floating_point_comparison函数..." << endl;
	floating_point_comparison();
	cout << ">>> floating_point_comparison函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用floating_point_limits函数..." << endl;
	floating_point_limits();
	cout << ">>> floating_point_limits函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用floating_point_precision函数..." << endl;
	floating_point_precision();
	cout << ">>> floating_point_precision函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用floating_point_types函数..." << endl;
	floating_point_types();
	cout << ">>> floating_point_types函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用float_literal_example函数..." << endl;
	float_literal_example();
	cout << ">>> float_literal_example函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用integer_division_modulo函数..." << endl;
	integer_division_modulo();
	cout << ">>> integer_division_modulo函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用integer_float_division函数..." << endl;
	integer_float_division();
	cout << ">>> integer_float_division函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用integer_limits函数..." << endl;
	integer_limits();
	cout << ">>> integer_limits函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用math_functions_demo函数..." << endl;
	math_functions_demo();
	cout << ">>> math_functions_demo函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用player_health_calculator函数..." << endl;
	player_health_calculator();
	cout << ">>> player_health_calculator函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用print_age函数..." << endl;
	print_age();
	cout << ">>> print_age函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用rectangleAreaFixed函数..." << endl;
	rectangleAreaFixed();
	cout << ">>> rectangleAreaFixed函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用rectangle_area_input函数..." << endl;
	rectangle_area_input();
	cout << ">>> rectangle_area_input函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用rectangle_perimeter函数..." << endl;
	rectangle_perimeter();
	cout << ">>> rectangle_perimeter函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用saveGameScore函数..." << endl;
	saveGameScore();
	cout << ">>> saveGameScore函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用scientific_notation函数..." << endl;
	scientific_notation();
	cout << ">>> scientific_notation函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用simple_arithmetic函数..." << endl;
	simple_arithmetic();
	cout << ">>> simple_arithmetic函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用taxCalculator函数..." << endl;
	taxCalculator();
	cout << ">>> taxCalculator函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用type_conversion_demo函数..." << endl;
	type_conversion_demo();
	cout << ">>> type_conversion_demo函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用type_sizes函数..." << endl;
	type_sizes();
	cout << ">>> type_sizes函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用variable_declarations函数..." << endl;
	variable_declarations();
	cout << ">>> variable_declarations函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用yearly_salary_calculator函数..." << endl;
	yearly_salary_calculator();
	cout << ">>> yearly_salary_calculator函数调用完成" << endl;

	cout << endl;
	
	cout << ">>> 正在调用say_hello函数..." << endl;
	say_hello("Alice");
	cout << ">>> say_hello函数调用完成" << endl;

	cout << endl;
	*/

	cout << ">>> 正在调用add_zeros_to_list函数..." << endl;
	vector<int> list = { 5, 5, 4 };
	cout << "A. Size of number list: " << list.size() << endl;
	add_zeros_to_list(list, 4);
	cout << "C. Size of number list: " << list.size() << endl;
	cout << ">>> add_zeros_to_list函数调用完成" << endl;

	cout << endl;

	cout << ">>> 正在调用print_all_elements_from_list函数..." << endl;
	print_all_elements_from_list(list);	
	cout << ">>> print_all_elements_from_list函数调用完成" << endl;
	   
	   return 0;
}
