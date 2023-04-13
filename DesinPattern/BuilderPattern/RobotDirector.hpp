#pragma once
#include"Robot.hpp"
#include"IRobotBuilder.hpp"
class RobotDirector{
public :
	void fn_set_robot_builder(IRobotBuilder* robot_builder);
	Robot* fn_build();
private :
	IRobotBuilder* m_robot_builder;
};

