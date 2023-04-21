#pragma once
#include"IMediator.hpp"
#include"UserLilac.hpp"
#include"UserWavem.hpp"
class ConcreteMediator : public IMediator{
public : 
	void set_user_wavem(UserWavem* wavem);
	void set_user_lilac(UserLilac* lilac);
	void send(const std::string& message, IColleague* sender) override;
private:
	UserWavem* m_wavem;
	UserLilac* m_lilac;
};

