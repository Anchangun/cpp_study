#include<iostream>
template <typename T>
void swap(T& a, T& b);
template <typename T>
void swap(T* a, T* b, int n);
void show(int a[]);

const int Lim = 8;
int main() {
	int i = 10;
	int j = 20;
	std::cout << "i,j = " << i << " , " << j << '\n';
	swap(i, j); //reference variable
	std::cout << "i,j = " << i << " , " << j << '\n';

	int d1[Lim] = { 0,1,2,3,4,5,6,7 };
	int d2[Lim] = { 8,9,10,11,12,13,14,15 };
	show(d1);
	show(d2);

	swap(d1, d2, Lim); // Lim == arr size 
	show(d1);
	show(d2);
	
	return 0;
}

template<typename T>
void swap(T& a, T& b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
void swap(T* a, T* b, int n) {
	T temp;
	for (int i = 0; i < n; i++) {
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void show(int a[])//arr size unknown
{
	std::cout << a[0] << ' ' << a[1] << '\n';
	std::cout << a[2] << ' ' << a[3] << '\n';
	for (int i = 4 ; i < Lim; i++) {
		std::cout << a[i];
	}
	std::cout << '\n';

}
