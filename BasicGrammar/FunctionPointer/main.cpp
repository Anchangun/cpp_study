#include <iostream>
int think() {
	int num = 3;
	std::cout << "think" << std::endl;
	return 3;
};

double pam_origin(int num) {
	return static_cast<double>(num);
};
int pam_a(int num) {
	return num;
}
double pam_b(double num) {
	return num;
}
double (*pf)(int num);

void estimate(int lines, double(*pf)(int)) {
	std::cout << "estimate" << std::endl;
}

int main(int argc, char** argv) {
	std::cout << think << std::endl; // think의 주소값 전달
	std::cout << think() << std::endl; // think의 리턴값 전달

	pf = pam_origin;
	// pf = pam_a; 반환형식이 달라서 안됨.
	// pf = pam_b;매개변수 달라서 안됨.
	estimate(50, pam_origin);
	double x = pam_origin(4);
	double y = (*pf)(5); //pam_origin 호출
	double z = pf(5); //pam_origin 호출
	return 0;
};