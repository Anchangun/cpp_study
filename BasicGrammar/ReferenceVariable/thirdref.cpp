#include <iostream>
int main() {
	int rats = 101;
	int* p = &rats;
	int& ref_rats = *p;
	//int& ref_rats = p; ref_rats is int& but p == memory addres 


	std::cout << "[rats] : " << rats << std::endl;
	std::cout << "[p] : " << p << std::endl;
	std::cout << "[*p] : " << *p << std::endl;
	std::cout << "[ref_rats] : " << ref_rats << std::endl;
	std::cout << std::endl;
	std::cout << "[Address rats] : " << &rats << std::endl;
	std::cout << "[Address p] : " << &p << std::endl;
	std::cout << "[Address ref_rats] : " << &ref_rats << std::endl;
	std::cout << std::endl;
	int change = 50;
	p = &change;
	std::cout << "[rats] : " << rats << std::endl;
	std::cout << "[change] : " << change << std::endl;
	std::cout << "[p] : " << p << std::endl;
	std::cout << "[*p] : " << *p << std::endl;
	std::cout << "[ref_rats] : " << ref_rats << std::endl;
	std::cout << std::endl;
	std::cout << "[Address rats] : " << &rats << std::endl;
	std::cout << "[Address change] : " << &change << std::endl;
	std::cout << "[Address p] : " << &p << std::endl;
	std::cout << "[Address ref_rats] : " << &ref_rats << std::endl;

	std::cout << std::endl;
}