#pragma once
#include"IColleague.hpp"
class UserLilac : public IColleague, public std::enable_shared_from_this<UserLilac> {
public:
	UserLilac(const std::string& id, std::shared_ptr<IMediator> mediator);
	void send(const std::string& message) override;
	void recv(const std::string& message) override;
private:
	std::string m_id;
};

