#include <iostream>
int sum(int, int);
int main() {
	int (* pf)(int, int)=sum;

	// lvalue 예시
	int x = 10;
	int* ptr = &x;
	int& ref = x;  // x는 lvalue이므로 참조 가능
	std::cout << ref << std::endl;
	// rvalue 예시
	int y = 20;
	int z = x + y;  // x + y는 rvalue이므로 값을 계산하여 z에 대입 가능

	// rvalue 참조 예시
	int a = 100;
	int&& rvalueRef = a + 200;  // a + 200은 rvalue이므로 rvalue 참조를 사용하여 참조 가능
	std::cout << rvalueRef << std::endl;

	int lvaule = 10;
	int& ref_lvalue = lvaule;
	//int& f_lvaule = (1 , 2); error
	// int&& pf_rvuale = pf(1, 2); error
	 
	// int&& rvalue = lvaule; error
	int&& rvuale = sum(1 , 2);
	int&& pf_rvuale = pf(1,2);
	return 0;
}

int sum(int x, int y){
	return x+y;
}
