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
	//ptr = 10; ��ġ�ϴ� ������ ����.
	*ptr = 10;
	std::cout << ptr << ' ' << *ptr << '\n';
	// std::unique_ptr<int>new_ptr = ptr; ������ �Լ� �Դϴ�.��� ���� �߻�
	std::unique_ptr<int> new_ptr = std::move(ptr); // ������ ������ std::move�� ���Ͽ� ����.
	std::cout << new_ptr << ' ' << *new_ptr << '\n';
	// std::cout << ptr << ' ' << *ptr << '\n'; �������� ���� �����Ƿ� �׼��� ����
	// unique_ptr�� ��ü�� ����� ��� �� �ڵ����� �޸𸮸� ����
	func_test();

	return 0;
}