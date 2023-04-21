#pragma once
#include"IMediator.hpp"
class IMediator;
class IColleague {
public :
	IColleague(IMediator* mediator) :m_mediator(mediator) {}
	virtual void send(const std::string& message) = 0;
	virtual void recv(const std::string& message) = 0;
protected:
	IMediator* m_mediator;
};