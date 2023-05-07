#include<iostream>

void throw_exception() {
	throw std::runtime_error("error");
}

void test_function_noexcept()noexcept {
	try {
		throw_exception();
	}
	catch (const std::exception& e) {
		throw; //error
	}
}

void test_function() {
	try {
		throw_exception();
	}
	catch (const std::exception& e) {
		throw;
	}
}
int main() {
	try {
		test_function();
	}
	catch (const std::exception& e) {
		std::cerr << "try/catch error : " << e.what() << '\n';
	}
	// noexcept error 
	/*
	try {
		test_function_noexcept();
	}
	catch (const std::exception& e) {
		std::cerr << "try/catch error : " << e.what() << '\n';
	}
	*/

	return 0;
}