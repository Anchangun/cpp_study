#include"InchToMetricAdapter.hpp"
#include<iostream>
#include<memory>
int main() {
	std::unique_ptr<IMetricCalculator> cal = std::make_unique<InchToMetricAdapter>();
	double width = 5.0;
	double height = 3.0;
	double area = cal->calculate_area(width, height);
	std::cout << "area : " << area << '\n';
	return 0;
}