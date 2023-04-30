#include<iostream>

extern double warning;

void update(double dt);
void local();

void update(double dt){
	extern double warning;
	warning += dt;
	std::cout << "support : " << warning <<'\n';
}

void local(){
	double warning = 0.8;
	std::cout << "support : " << warning << '\n';
	std::cout << "external.cpp recv : " <<::warning<<'\n';
}
