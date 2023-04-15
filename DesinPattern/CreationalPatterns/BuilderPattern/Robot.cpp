#include "Robot.hpp"

Robot::Robot() : m_model_name("Defualt"), m_max_vel(0),m_max_angle(0),m_min_vel(0),m_min_angle(0){

}

void Robot::fn_set_model_name(std::string model_name){
	m_model_name = model_name;
}

void Robot::fn_set_max_vel(float max_vel){
	m_max_vel = max_vel;
}

void Robot::fn_set_max_angle(float max_angle){
	m_max_angle = max_angle;
}

void Robot::fn_set_min_vel(float min_vel){
	m_min_vel = min_vel;
}

void Robot::fn_set_min_angle(float min_angle){
	m_min_angle = min_angle;
}

Robot::~Robot() {
}

void Robot::fn_print_all() {
	std::cout << "model_name : " << m_model_name << " max_vel : " << m_max_vel << " max_angle : " << m_max_angle << " min_vel : " << m_min_vel << " min_angle : " << m_min_angle << std::endl;
}