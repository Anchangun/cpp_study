#include"OnlineStore.hpp"
#include"DeliveryService.hpp"
#include"Prodouct.hpp"
int main() {
    std::shared_ptr<IMPLEMENTOR::IProdouct> book = std::make_shared<IMPLEMENTOR::Book>();
    std::shared_ptr<IMPLEMENTOR::IDeliveryService> postal = std::make_shared<IMPLEMENTOR::PostalService>();
    std::shared_ptr<ABSTRACTION::OnlineStore> bookstore = std::make_shared<ABSTRACTION::BookStore>(book,postal);

    std::shared_ptr<IMPLEMENTOR::IProdouct> clothing = std::make_shared<IMPLEMENTOR::Clothing>();
    std::shared_ptr<IMPLEMENTOR::IDeliveryService> courier = std::make_shared<IMPLEMENTOR::CourierService>();
    std::shared_ptr<ABSTRACTION::OnlineStore> clothingstore = std::make_shared<ABSTRACTION::ClothingStore>(clothing, courier);
    bookstore->purchase();
    clothingstore->purchase();

    return 0;
}