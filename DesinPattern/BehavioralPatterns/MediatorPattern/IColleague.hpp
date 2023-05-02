#pragma once
#include"IMediator.hpp"
class IMediator;
class IColleague {
public :
	IColleague(std::shared_ptr<IMediator> mediator) :m_mediator(mediator) {}
	virtual void send(const std::string& message) = 0;
	virtual void recv(const std::string& message) = 0;
protected:
	std::shared_ptr<IMediator> m_mediator;
};