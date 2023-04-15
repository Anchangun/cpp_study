#include "ChangunbotConcreteBuilder.hpp"
ChangunbotConcreteBuilder::ChangunbotConcreteBuilder() {
	robot = new Robot();
}
	
void ChangunbotConcreteBuilder::fn_set_model_name(){
	robot->fn_set_model_name("Changunbot");
}

void ChangunbotConcreteBuilder::fn_set_max_vel(){
	robot->fn_set_max_vel(50);
}

void ChangunbotConcreteBuilder::fn_set_max_angle(){
	robot->fn_set_max_angle(30);
}

void ChangunbotConcreteBuilder::fn_set_min_vel(){
	robot->fn_set_min_vel(2);
}

void ChangunbotConcreteBuilder::fn_set_min_angle(){
	robot->fn_set_min_angle(5);
}

Robot* ChangunbotConcreteBuilder::fn_get_robot(){
	return robot;
}
