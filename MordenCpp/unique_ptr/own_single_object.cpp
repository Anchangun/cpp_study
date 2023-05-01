#include<iostream>
#include<memory>

int main() {
	std::unique_ptr<int> test1(new int(10));
	std::unique_ptr<int> test2 = std::move(test1);

	if (test1 == nullptr) {
		std::cout << "test1 is null" << '\n';
	}
	std::cout << *test2<<'\n';
	return 0;
}