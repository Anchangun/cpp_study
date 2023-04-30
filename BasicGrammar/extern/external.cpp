#include<iostream>

double warning = 0.3;
void update(double dt);
void local();

int main() {
	std::cout << "exteranl : " << warning << '\n';
	update(0.1);
	std::cout << "exteranl : " << warning << '\n';
	local();
	std::cout << "exteranl : " << warning << '\n';
	return 0;
}
