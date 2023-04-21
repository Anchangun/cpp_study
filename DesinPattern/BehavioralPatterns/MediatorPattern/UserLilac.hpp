#pragma once
#include"IColleague.hpp"
class UserLilac : public IColleague{
public:
	UserLilac(const std::string& id, IMediator* mediator);
	void send(const std::string& message) override;
	void recv(const std::string& message) override;
private:
	std::string m_id;
};

