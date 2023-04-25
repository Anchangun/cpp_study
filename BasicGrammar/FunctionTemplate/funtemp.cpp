#include<iostream>
/**
* template function study 
*/
template <class Any> //typename
void swap(Any& a, Any& b);
int main() {
	int i = 10;
	int j = 20;
	std::cout << "i,j = " << i << " , " << j << '\n';
	swap(i, j); //reference variable
	std::cout << "i,j = " << i << " , " << j << '\n';

	double x = 20.2;
	double y = 7.2;
	std::cout << "x,y = " << x << " , " << y << '\n';
	swap(x, y);
	std::cout << "x,y = " << x << " , " << y << '\n';

	return 0;
}

template<class Any>
void swap(Any& a, Any& b){
	Any temp;
	temp = a;
	a = b;
	b = temp;
}
