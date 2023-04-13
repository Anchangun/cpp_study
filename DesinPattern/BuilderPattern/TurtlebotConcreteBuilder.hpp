#pragma once
#include"Robot.hpp"
#include"IRobotBuilder.hpp"
class TurtlebotConcreteBuilder : public IRobotBuilder {
	public :
		TurtlebotConcreteBuilder();
		void fn_set_model_name();
		void fn_set_max_vel();
		void fn_set_max_angle(); 
		void fn_set_min_vel();
		void fn_set_min_angle();
		Robot* fn_get_robot();
	private :
		Robot* robot;
};

