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
	std::cout << think << std::endl; // think�� �ּҰ� ����
	std::cout << think() << std::endl; // think�� ���ϰ� ����

	pf = pam_origin;
	// pf = pam_a; ��ȯ������ �޶� �ȵ�.
	// pf = pam_b;�Ű����� �޶� �ȵ�.
	estimate(50, pam_origin);
	double x = pam_origin(4);
	double y = (*pf)(5); //pam_origin ȣ��
	double z = pf(5); //pam_origin ȣ��
	return 0;
};