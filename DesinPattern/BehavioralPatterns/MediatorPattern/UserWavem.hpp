#pragma once
#include"IColleague.hpp"
class UserWavem : public IColleague, public std::enable_shared_from_this<UserWavem> {
public :
	UserWavem(const std::string& id, std::shared_ptr<IMediator> mediator);
	void send(const std::string& message) override;
	void recv(const std::string& message) override;
private:
	std::string m_id;
};

