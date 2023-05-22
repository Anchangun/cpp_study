#include "OnlineStore.hpp"
#include"common.hpp"
ABSTRACTION::OnlineStore::OnlineStore(std::shared_ptr<IMPLEMENTOR::IProdouct> product, std::shared_ptr<IMPLEMENTOR::IDeliveryService> delivery_service)
	: product_(product),delivery_service_(delivery_service)
{
}

ABSTRACTION::BookStore::BookStore(std::shared_ptr<IMPLEMENTOR::IProdouct> product, std::shared_ptr<IMPLEMENTOR::IDeliveryService> delivery_service):OnlineStore(product,delivery_service)
{
}

void ABSTRACTION::BookStore::purchase(){
	std::cout << "Purchasing a book." << '\n';
	product_->show_details();
	delivery_service_->deliver();
}

ABSTRACTION::ClothingStore::ClothingStore(std::shared_ptr<IMPLEMENTOR::IProdouct> product, std::shared_ptr<IMPLEMENTOR::IDeliveryService> delivery_service):OnlineStore(product, delivery_service)
{
}

void ABSTRACTION::ClothingStore::purchase()
{
	std::cout << "Purchasing clothing." << '\n';
	product_->show_details();
	delivery_service_->deliver();
}
