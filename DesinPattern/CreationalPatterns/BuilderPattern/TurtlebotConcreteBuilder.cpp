#include "TurtlebotConcreteBuilder.hpp"

TurtlebotConcreteBuilder::TurtlebotConcreteBuilder(){
	robot = new Robot();
}

void TurtlebotConcreteBuilder::fn_set_model_name(){
	robot->fn_set_model_name("Turtlebot");
}

void TurtlebotConcreteBuilder::fn_set_max_vel(){
	robot->fn_set_max_vel(10);
}

void TurtlebotConcreteBuilder::fn_set_max_angle(){
	robot->fn_set_max_angle(20);
}

void TurtlebotConcreteBuilder::fn_set_min_vel(){
	robot->fn_set_min_vel(3);
}

void TurtlebotConcreteBuilder::fn_set_min_angle(){
	robot->fn_set_min_angle(10);
}

Robot* TurtlebotConcreteBuilder::fn_get_robot(){
	return robot;
}
