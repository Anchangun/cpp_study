#include "UserWavem.hpp"

UserWavem::UserWavem(const std::string& id, std::shared_ptr<IMediator> mediator) : IColleague(mediator), m_id(id){
}

void UserWavem::send(const std::string& message){
	std::cout << "UserWavem Send " << std::endl;
	m_mediator->send(message, shared_from_this());
}

void UserWavem::recv(const std::string& message){
	std::cout << "UserWavem recv " << std::endl;
	std::cout << m_id << " recv message " << message << std::endl;
}

