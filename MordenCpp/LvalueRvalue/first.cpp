#include <iostream>
int sum(int, int);
int main() {
	int (* pf)(int, int)=sum;

	// lvalue ����
	int x = 10;
	int* ptr = &x;
	int& ref = x;  // x�� lvalue�̹Ƿ� ���� ����
	std::cout << ref << std::endl;
	// rvalue ����
	int y = 20;
	int z = x + y;  // x + y�� rvalue�̹Ƿ� ���� ����Ͽ� z�� ���� ����

	// rvalue ���� ����
	int a = 100;
	int&& rvalueRef = a + 200;  // a + 200�� rvalue�̹Ƿ� rvalue ������ ����Ͽ� ���� ����
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
