#pragma once
#include<iostream>
#include<vector>
#include<string>
class RobotMove {
public :
	explicit RobotMove(const std::string& goal_name);
	void fn_goal_add(const std::string& goal);
private :
	std::string m_goal_name;
	std::vector<std::string> m_goal;
	int m_num;
	
};