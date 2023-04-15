#include "TurtlebotConcreteBuilder.hpp"
#include "ChangunbotConcreteBuilder.hpp"
#include "Robot.hpp"
#include "RobotDirector.hpp"

int main() {
	RobotDirector robot_director;
	RobotDirector changunbot_director;
	TurtlebotConcreteBuilder turlebot;
	ChangunbotConcreteBuilder changunbot;

	robot_director.fn_set_robot_builder(&turlebot);
	changunbot_director.fn_set_robot_builder(&changunbot);

	Robot* robot_turlebot = robot_director.fn_build();
	Robot* robot_changunbot = changunbot_director.fn_build();
	robot_turlebot->fn_print_all();
	robot_changunbot->fn_print_all();
}