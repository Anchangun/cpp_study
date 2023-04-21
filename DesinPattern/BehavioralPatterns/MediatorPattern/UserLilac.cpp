#include "UserLilac.hpp"

UserLilac::UserLilac(const std::string& id, IMediator* mediator) : IColleague(mediator),m_id(id)
{
}

void UserLilac::send(const std::string& message) {
	std::cout << "UserLilac Send " << std::endl;
	m_mediator->send(message, this);
}

void UserLilac::recv(const std::string& message) {
	std::cout << "UserLilac recv " << std::endl;
	std::cout << m_id << " recv message " << message << std::endl;
}