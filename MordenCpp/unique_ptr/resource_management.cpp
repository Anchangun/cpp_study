#include<iostream>
#include<memory>
#include<fstream>
class Test {
public:
	Test() {
		std::cout << "Constructor" << '\n';
	}
	virtual ~Test() {
		std::cout << "Destructor" << '\n';
	}
};
int main() {
	std::unique_ptr<std::ofstream> up(new std::ofstream("test.txt"));
	*up << "hello unique_ptr" << '\n'; // operator<< : outputs the value of the managed pointer to an output stream
									   // fstream file write
	
	//==
	auto t(std::make_unique<Test>());
	if (t != nullptr) {
		std::cout << "t is not null" << '\n';
	}
	t.reset();
	if (t == nullptr) {
		std::cout << "t is null" << '\n';
	}
	return 0;
}