#pragma once
#include"InchClalculator.hpp"
#include"MetricCalculator.hpp"
class InchToMetricAdapter : public IMetricCalculator{
private :
	InchClalculator inch_;
public :
	double calculate_area(double width, double height) override;
};

