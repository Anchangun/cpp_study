#pragma once
#include <iostream>
#include"IColleague.hpp"
// Mediator �������̽�
class IColleague;
class IMediator {
public :
	virtual void send(const std::string& message, IColleague* sender)=0;
private :

};