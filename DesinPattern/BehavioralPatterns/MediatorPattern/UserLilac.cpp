#include "UserLilac.hpp"

UserLilac::UserLilac(const std::string& id, std::shared_ptr<IMediator> mediator) : IColleague(mediator),m_id(id)
{
}

void UserLilac::send(const std::string& message) {
	std::cout << "UserLilac Send " << std::endl;
	m_mediator->send(message, shared_from_this());
}

void UserLilac::recv(const std::string& message) {
	std::cout << "UserLilac recv " << std::endl;
	std::cout << m_id << " recv message " << message << std::endl;
}