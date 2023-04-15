#include "Robot.hpp"

Robot::Robot(std::string model_name, float max_vel, float max_angle, float min_vel, float min_angle) : m_model_name(model_name), m_max_vel(max_vel), m_max_angle(max_angle), m_min_vel(min_vel), m_min_angle(min_angle) {
}

Robot::Robot(std::string model_name, float max_vel, float max_angle) : Robot(model_name,max_vel,max_angle,(float)0.0,(float)0.0) {
}

Robot::Robot(std::string model_name, float max_vel, float max_angle, float min_vel ) : Robot(model_name, max_vel, max_angle,min_vel,(float)0.0) {
}

Robot::~Robot() {
}

void Robot::fn_print_all() {
	std::cout << "model_name : " << m_model_name << " max_vel : " << m_max_vel << " max_angle : " << m_max_angle << " min_vel : "<<m_min_vel<< " min_angle : " << m_min_angle<<std::endl;
}
