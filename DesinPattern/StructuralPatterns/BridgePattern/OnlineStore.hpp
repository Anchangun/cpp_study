#pragma once
#include"DeliveryService.hpp"
#include"Prodouct.hpp"
#include <memory>
namespace ABSTRACTION {
	class OnlineStore
	{
	protected:
		std::shared_ptr<IMPLEMENTOR::IProdouct> product_;
		std::shared_ptr<IMPLEMENTOR::IDeliveryService> delivery_service_;
	public :
		OnlineStore(std::shared_ptr<IMPLEMENTOR::IProdouct> product, std::shared_ptr<IMPLEMENTOR::IDeliveryService>delivery_service);
		virtual void purchase() = 0;
	};
	class BookStore : public OnlineStore {
	public :
		BookStore(std::shared_ptr<IMPLEMENTOR::IProdouct>product, std::shared_ptr<IMPLEMENTOR::IDeliveryService> delivery_service);
		void purchase() override;
	};

	class ClothingStore : public OnlineStore {
	public:
		ClothingStore(std::shared_ptr<IMPLEMENTOR::IProdouct>product, std::shared_ptr<IMPLEMENTOR::IDeliveryService> delivery_service);
		void purchase() override;
	};
}

