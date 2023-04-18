#include<iostream>

int main() {
	int rats = 100;
	int& ref_rats = rats;
	std::cout << "[rats] : " << rats << std::endl;
	std::cout << "[Address rats] : " << &rats << std::endl;
	std::cout << "[ref_rats] : " << ref_rats << std::endl;
	std::cout << "[Address ref_rats] : " << &ref_rats << std::endl;

	rats++;
	std::cout << "[rats] : " << rats << std::endl;
	std::cout << "[ref_rats] : " << ref_rats << std::endl;

	ref_rats++;
	std::cout << "[rats] : " << rats << std::endl;
	std::cout << "[ref_rats] : " << ref_rats << std::endl;

	return 0;
}

