#pragma once
#include <iostream>
class Robot {
private:
	std::string m_model_name;  // Essential
	float m_max_vel; //Essential
	float m_max_angle; //Essential
	float m_min_vel; // Select
	float m_min_angle; // Select
public:
	Robot(std::string model_name, float max_vel, float max_angle);
	Robot(std::string model_name, float max_vel, float max_angle, float min_vel);
	Robot(std::string model_name, float max_vel, float max_angle, float min_vel, float min_angle);
	virtual ~Robot();
	void fn_print_all();
};

