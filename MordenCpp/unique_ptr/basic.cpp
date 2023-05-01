#include<iostream>
#include<memory>
class Test {
public : 
	Test() {
		std::cout << "Constructor" << '\n';
	}
	virtual ~Test() {
		std::cout << "Destructor" << '\n';
	}
};
void func_test() {
	std::unique_ptr<Test> u_t(std::make_unique<Test>());
}

int main() {
	std::unique_ptr<int> ptr(new int);
	//ptr = 10; 일치하는 연산자 없음.
	*ptr = 10;
	std::cout << ptr << ' ' << *ptr << '\n';
	// std::unique_ptr<int>new_ptr = ptr; 삭제된 함수 입니다.라는 에러 발생
	std::unique_ptr<int> new_ptr = std::move(ptr); // 소유권 전달은 std::move를 통하여 전달.
	std::cout << new_ptr << ' ' << *new_ptr << '\n';
	// std::cout << ptr << ' ' << *ptr << '\n'; 소유권이 이전 됐으므로 액세스 위반
	// unique_ptr은 객체가 블록을 벗어날 때 자동으로 메모리를 해제
	func_test();

	return 0;
}