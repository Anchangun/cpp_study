#include <iostream>
int main() {
	int rats = 101;
	int& ref_rats = rats;
	std::cout << "[rats] : " << rats << std::endl;
	std::cout << "[ref_rats] : " << ref_rats << std::endl;
	std::cout << "[Address rats] : " << &rats << std::endl;
	std::cout << "[Address ref_rats] : " << &ref_rats << std::endl;
	std::cout << std::endl;

	int change_variable = 50;
	ref_rats = change_variable;
	std::cout << "[change_variable] : " << change_variable << std::endl;
	std::cout << "[rats] : " << rats << std::endl;
	std::cout << "[ref_rats] : " << ref_rats << std::endl;
	std::cout << std::endl;
	std::cout << "[Address change_variable] : " << &change_variable << std::endl;
	std::cout << "[Address rats] : " << &rats << std::endl;
	std::cout << "[Address ref_rats] : " << &ref_rats << std::endl;
	std::cout << std::endl;

	int num = 30;
	int* p = &num;
	std::cout << "[num] : " << num << std::endl;
	std::cout << "[p] : " << p << std::endl;
	std::cout << "[Address num] : " << &num << std::endl;
	std::cout << "[Address p] : " << &p << std::endl;
	std::cout << std::endl;

	int change_variable_p = 50;
	p = &change_variable_p;
	std::cout << "[num] : " << num << std::endl;
	std::cout << "[p] : " << p << std::endl;
	std::cout << "[change_variable_p] : " << change_variable_p << std::endl;
	std::cout<<std::endl;
	std::cout << "[Address num] : " << &num << std::endl;
	std::cout << "[Address p] : " << &p << std::endl;
	std::cout << "[Address change_variable_p] : " << &change_variable_p << std::endl;
	std::cout << std::endl;

}