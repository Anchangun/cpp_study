#include<iostream>

void swapr(int& a, int& b);
void swapp(int* p, int* q);
void swapv(int a, int b);

int main() {
	int wallet1 = 3000;
	int wallet2 = 3500;
	std::cout << "wallet1 " << wallet1 << '\n';
	std::cout << "wallet2 " << wallet2 << '\n';
	std::cout << "reference swap" << '\n';
	swapr(wallet1, wallet2);
	std::cout << "wallet1 " << wallet1 << '\n';
	std::cout << "wallet2 " << wallet2 << '\n';

	std::cout << "pointer swap" << '\n';
	swapp(&wallet1, &wallet2);
	std::cout << "wallet1 " << wallet1 << '\n';
	std::cout << "wallet2 " << wallet2 << '\n';

	std::cout << "value copy swap" << '\n';
	swapv(wallet1, wallet2);
	std::cout << "wallet1 " << wallet1 << '\n';
	std::cout << "wallet2 " << wallet2 << '\n';
	return 0;
}

void swapr(int& a, int& b){
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}

void swapp(int* p, int* q){
	int temp = 0;
	temp = *p;
	*p = *q;
	*q = temp;
}

void swapv(int a, int b){
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}
