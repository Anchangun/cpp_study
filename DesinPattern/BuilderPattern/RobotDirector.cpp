#include "RobotDirector.hpp"

void RobotDirector::fn_set_robot_builder(IRobotBuilder* robot_builder){
	m_robot_builder = robot_builder;
}

Robot* RobotDirector::fn_build()
{
	m_robot_builder->fn_set_model_name();
	m_robot_builder->fn_set_max_vel();
	m_robot_builder->fn_set_max_angle();
	m_robot_builder->fn_set_min_vel();
	m_robot_builder->fn_set_min_angle();
	return m_robot_builder->fn_get_robot();
}
