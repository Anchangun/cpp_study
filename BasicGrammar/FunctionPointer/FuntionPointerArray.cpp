#include<iostream>

const double* f1(const double ar[], int n);

const double* f2(const double[], int);

const double* f3(const double*, int);

int main() {
	double av[3] = { 111.1,222.2,333.3 };
	const double* (*p1)(const double*, int) = f1;
	auto p2 = f2;
	std::cout << &av[0] << " : " << &av[1] <<" : " << &av[2] << std::endl;
	
	std::cout << (*p1)(av, 3) << ":" << *(*p1)(av, 3)<<"               :"<<(*p1) <<":" << *(*p1)<<std::endl;
	std::cout << p2(av, 3) << ":" << *p2(av, 3) << std::endl;

	std::cout<<std::endl;
	const double* (*pa[3])(const double* ,int) = { f1,f2,f3 };
	// auto 리스트 초기화 불가
	//auto pb = { f1,f2,f3 }; 

	// 함수 포인터 배열 
	auto pb = pa;
	for (int i = 0; i < 3; i++) {
		std::cout << pa[i](av, 3) << ":" << *pa[i](av, 3) << std::endl;
	}
	for (int i = 0; i < 3; i++) {
		std::cout << pb[i](av, 3) << ":" << *pb[i](av, 3) << std::endl;
	}
	std::cout << std::endl;
	auto pc = &pa;
	std::cout << (* pc)[0](av, 3) << ":" << *(*pc)[0](av, 3) << std::endl;

	const double* (*(*pd)[3])(const double*, int) = &pa;
	const double* pdb = (*pd)[1](av, 3);
	std::cout << pdb << ":" << *pdb << std::endl;
	std::cout << (* (*pd)[2])(av, 3) << ":" << *(*(*pd)[2])(av, 3) << std::endl;
	return 0;
}

const double* f1(const double ar[], int n){
	std::cout << "f1 : " << ar << std::endl;
	return ar;
}

const double* f2(const double ar[], int){
	std::cout << "f2 : " << ar << std::endl;
	return ar+1;
}

const double* f3(const double*ar, int){
	std::cout << "f3 : " << ar << std::endl;
	return ar+2;
}
