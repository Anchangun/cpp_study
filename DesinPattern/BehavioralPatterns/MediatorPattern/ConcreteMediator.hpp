#pragma once
#include"IMediator.hpp"
#include"UserLilac.hpp"
#include"UserWavem.hpp"

class ConcreteMediator : public IMediator{
public : 
	void set_user_wavem(std::shared_ptr<UserWavem> wavem);
	void set_user_lilac(std::shared_ptr<UserLilac> lilac);
	void send(const std::string& message, std::shared_ptr<IColleague> sender) override;
private:
	std::shared_ptr<UserWavem> m_wavem;
	std::shared_ptr<UserLilac> m_lilac;
};

