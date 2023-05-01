#include<iostream>
#include<memory>

void function_throw() {
	std::unique_ptr<int> up(new int(10));
	throw std::runtime_error("Excetpion");
	if (up == nullptr) {
		std::cout << "up is null" << std::endl;
	}
}
int main() {
	try {
		function_throw();
	}
	catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	return 0;
}