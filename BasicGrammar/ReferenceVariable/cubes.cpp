#include <iostream>
double cube(double a) {
	a *= a * a;
	return a;
}
double refcube(double& ra) {
	ra *= ra * ra;
	return ra;
}
double const_refcube(const double& ra) {
	return ra*ra*ra;
}
int main(){
	double x = 3.0;
	std::cout << "cube(x) " << cube(x) << ' ' << x << '\n';
	std::cout << "refcube(x) " << refcube(x) << ' ' << x << '\n';
	//refcube(x+3.0) error : x+3.0 is not lvalue

	double* p= &x;
	double& rd = x;
	int test = 5;
	double arr[4] = { 1.0,2.0,3.0,4.0 };


	double p_r = const_refcube(*p); // reference
	double rd_r = const_refcube(rd); //reference
	double test_r = const_refcube(test); // Temporary Variable
	double arr_r = const_refcube(arr[1]); //reference
	double temp_r = const_refcube(x + 3);// Temporary Variable -value
	double num_r = const_refcube(3.0);// Temporary Variable - rvalue

	return 0;
}