#include<iostream>

template<class T>
T laser(T a, T b) {
	std::cout << "template" << '\n';
	return a < b ? a : b;
}
int laser(int a, int b) {
	std::cout << "int" << '\n';
	a = a < 0 ? -a : a;
	b = b < 0 ? -b : b;
	return a < b ? a : b;
}

int main() {
	int m = 20, n = -30;
	double x = 11.1, y = 22.2;
	std::cout << laser(m, n)<<'\n';
	std::cout << laser(x, y) << '\n';
	std::cout << laser<>(m, n) << '\n';
	std::cout << laser<int>(m, n) << '\n';

	return 0;
}