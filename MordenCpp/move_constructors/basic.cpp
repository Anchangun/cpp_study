#include<iostream>
#include<memory>
class Test {
public :
	std::unique_ptr<int>data_;
	Test(int data) {
		data_ = std::make_unique<int>(data);
		std::cout << "Copy Constructors" << '\n';
	}
	Test(Test&& temp) noexcept {
		data_ = std::move(temp.data_);
		std::cout << "Move Constructors" << '\n';
	}
};

int main() {
	Test t1(10);
	Test t2(std::move(t1));
	std::cout << "t1 : " << (t1.data_ ? *(t1.data_) : -1) << '\n';
	std::cout << "t2 : " << (t2.data_ ? *(t2.data_) : -1) << '\n';
}