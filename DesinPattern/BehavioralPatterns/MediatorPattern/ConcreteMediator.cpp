#include "ConcreteMediator.hpp"

void ConcreteMediator::set_user_wavem(std::shared_ptr<UserWavem> wavem) {
	m_wavem = wavem;
}

void ConcreteMediator::set_user_lilac(std::shared_ptr<UserLilac> lilac) {
	m_lilac = lilac;
}

void ConcreteMediator::send(const std::string& message, std::shared_ptr<IColleague> sender){
	if (sender == m_wavem) {
		m_lilac->recv(message);
	}
	else if (sender == m_lilac) {
		m_wavem->recv(message);
	}
}
