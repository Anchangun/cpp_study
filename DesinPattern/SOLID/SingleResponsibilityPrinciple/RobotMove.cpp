#include "RobotMove.hpp"

RobotMove::RobotMove(const std::string& goal_name):m_goal_name{goal_name}, m_num(0){

}

void RobotMove::fn_goal_add(const std::string& goal){
	m_goal.push_back(std::to_string(m_num)+":"+ goal);
}
