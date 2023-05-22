#pragma once
namespace IMPLEMENTOR {
	class IDeliveryService{
	public:
		virtual void deliver() = 0;
	};
	class PostalService : public IDeliveryService {
	public :
		void deliver() override;
	};
	class CourierService : public IDeliveryService {
		void deliver() override;
	};
}

