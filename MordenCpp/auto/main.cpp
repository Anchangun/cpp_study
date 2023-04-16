#include <iostream>
#include <functional>
#include <vector>
/*
* 매개변수에는 사용이 불가능
int fn_sum(auto a, auto b) {
	return a+b
}
*/


// 반환형은 가능하다.
auto fn_sum(int a, int b) {
	return a+b;
}
class Robot{
private :
	std::string test;
public :
	Robot();
	virtual ~Robot();

};

template<typename T1, typename T2>
auto A(T1 t1, T2 t2)->decltype(t1 + t2) {
	return t1 + t2;
}

int main() {
	int int_a = 2;
	int int_b = 3;
	//int
	auto int_sum = int_a + int_b;
	std::cout << "sum : " << sizeof(int_sum) << std::endl;

	double double_a = 2;
	int double_b = 3;
	//double
	auto double_sum = double_a + double_a;
	std::cout << "sum : " << sizeof(double_sum) << std::endl;

	int int_c = 5;
	int* ptr = nullptr;
	ptr = &int_c;
	// int
	auto auto_ptr_a= *ptr;
	// int *
	auto auto_ptr_b = ptr;
	std::cout << "*ptr : " << auto_ptr_a << "ptr"<< auto_ptr_b << std::endl;
	// initializer_list<int>
	auto test_a = { 1,2,3 };
	// initializer_list<int>
	auto test_b = { 4 };
	// int 
	auto test_c{ 5 };
	// initializer_list<double>
	auto test_double = { 1.0,2.0 };
	
	// Error  
	// auto test_all = { 1,2.0,'a' };

	Robot r;
	//Robot
	auto test_class = r;

	//auto pf=  int(*ptr)(int);

	//std::vector<int>
	std::vector<int> test_vec;
	auto test_vec = test_vec;

	return 0;
}