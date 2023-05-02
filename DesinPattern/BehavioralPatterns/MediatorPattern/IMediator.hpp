#pragma once
#include <iostream>
#include <memory>
#include"IColleague.hpp"
// Mediator 인터페이스
class IColleague;
class IMediator {
public :
	virtual void send(const std::string& message, std::shared_ptr<IColleague> sender)=0;
};