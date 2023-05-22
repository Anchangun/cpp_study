#include "DeliveryService.hpp"
#include"common.hpp"
void IMPLEMENTOR::PostalService::deliver(){
	std::cout << "Delivering via postal service." << std::endl;
}

void IMPLEMENTOR::CourierService::deliver(){
	std::cout << "Delivering via courier service." << std::endl;
}
