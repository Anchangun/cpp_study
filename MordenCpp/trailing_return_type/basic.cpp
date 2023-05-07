#include<iostream>
class A {
public:
	A() {}
	virtual ~A() {}

};
auto test1(int a)->int {
	return a * a;
}

/* error
template <typename T>
decltype(t) test2(const T& t) {
	return t;
}
*/

template <typename T>
auto test2(const T& t)->decltype(t) {
	return t;
}
int main() {
	A a_a(A);

	return 0;
}