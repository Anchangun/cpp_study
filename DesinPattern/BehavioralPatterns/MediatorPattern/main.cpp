#pragma once
#include"ConcreteMediator.hpp"
#include"UserLilac.hpp"
int main() {
	ConcreteMediator* mediator = new ConcreteMediator();
	UserWavem* wavem = new UserWavem("code", mediator);
	UserLilac* lilac = new UserLilac("changun", mediator);

	mediator->set_user_wavem(wavem);
	mediator->set_user_lilac(lilac);
	
	wavem->send("hi, changun");
	lilac->send("Do u want to do climbing?");
	wavem->send("Sure, Let's go");
	
	delete lilac;
	delete wavem;
	delete mediator;

	return 0;
}