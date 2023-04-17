#include<iostream>
void print(int, int&);
int main() {
	void (*pf)(int, int&) = print; // Use to get used to function pointers
	int rats = 100;
	int& ref_rats = rats;
	pf(rats, ref_rats);

	rats++;
	pf(rats, ref_rats);

	ref_rats++;
	pf(rats, ref_rats);
	

	return 0;
}

void print(int rats, int& ref_rats){
	std::cout << "[rats] : " << rats << std::endl;
	std::cout << "[Address rats] : " << &rats << std::endl;
	std::cout << "[ref_rats] : " << ref_rats << std::endl;
	std::cout << "[Address ref_rats] : " << &ref_rats << std::endl;
}
