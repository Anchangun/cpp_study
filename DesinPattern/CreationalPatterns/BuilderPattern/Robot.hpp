#pragma once
#include<iostream>
// builder
/**
* @brief Robot Builder
*/
class Robot{
	private:
		std::string m_model_name;  // Essential
		float m_max_vel; //Essential
		float m_max_angle; //Essential
		float m_min_vel; // Select
		float m_min_angle; // Select
	public:
		Robot();
		void fn_set_model_name(std::string model_name);
		void fn_set_max_vel(float max_vel);
		void fn_set_max_angle(float max_angle);
		void fn_set_min_vel(float min_vel);
		void fn_set_min_angle(float min_angle);
		virtual ~Robot();
		void fn_print_all();
};

