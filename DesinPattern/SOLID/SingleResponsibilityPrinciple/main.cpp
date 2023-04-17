#include"RobotMove.hpp"
int main() {
	RobotMove* rm = new RobotMove("SRP");
	/*
	If you need to set the shortest path, it should be managed through the robot manager.
	Cohesion is strong, Coupling is weak.
	*/
	return 0;
}