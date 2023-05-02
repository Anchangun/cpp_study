#pragma once
#include"ConcreteMediator.hpp"
#include"UserLilac.hpp"
int main() {
	std::shared_ptr<ConcreteMediator> mediator = std::make_shared<ConcreteMediator>();
	std::shared_ptr<UserWavem> wavem = std::make_shared<UserWavem>("code", mediator);
	std::shared_ptr<UserLilac> lilac = std::make_shared<UserLilac>("changun", mediator);

	mediator->set_user_wavem(wavem);
	mediator->set_user_lilac(lilac);
	
	wavem->send("hi, changun");
	lilac->send("Do u want to do climbing?");
	wavem->send("Sure, Let's go");

	return 0;
}