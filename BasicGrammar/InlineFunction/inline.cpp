#include<iostream>
#define SQU(X) ((X)*(X))
inline double square(double x) {
	return x * x;
}

int main() {
	double a = 0, b = 0;
	double c = 4.0;
	a = square(3.0); // Inline function body runs directly, not function calls
	b = square(3.0 + 2.0);
	std::cout << " a = " << a << " b = " << b << std::endl;
	std::cout << " c = " << c;
	std::cout <<" c�� ���� = "<<square(c++)<<std::endl;
	std::cout << " c = " << c << std::endl;
	{
		std::cout << " c1 : " << c << std::endl;
		double x = a, y = b;
		c = x - y;
		std::cout << c << std::endl;
	}

	{
		std::cout << " c2 : " << c << std::endl;
		// x = c; impossibility
		double x = c;
		std::cout << x << std::endl;
	}

	std::cout << SQU(3 + 2) << std::endl;



	return 0;
}
