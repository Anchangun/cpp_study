#include "InchToMetricAdapter.hpp"

double InchToMetricAdapter::calculate_area(double width, double height)
{   
    double witdh_in_cm = width * 2.54;
    double height_in_cm = height * 2.54;
    return inch_.calculate_area(witdh_in_cm, height_in_cm);
}
