#include <iostream>
#include <memory>
// �߻� ��ǰ A �������̽�
class ProductA {
public:
    virtual ~ProductA() {}
    virtual void operationA() = 0;
};

// �߻� ��ǰ B �������̽�
class ProductB {
public:
    virtual ~ProductB() {}
    virtual void operationB() = 0;
};

// Concrete Product A1
class ConcreteProductA1 : public ProductA {
public:
    void operationA() override {
        std::cout << "ConcreteProductA1::operationA" << '\n';
    }
};

// Concrete Product B1
class ConcreteProductB1 : public ProductB {
public:
    void operationB() override {
        std::cout << "ConcreteProductB1::operationB" << '\n';
    }
};

// Concrete Product A2
class ConcreteProductA2 : public ProductA {
public:
    void operationA() override {
        std::cout << "ConcreteProductA2::operationA" << '\n';
    }
};

// Concrete Product B2
class ConcreteProductB2 : public ProductB {
public:
    void operationB() override {
        std::cout << "ConcreteProductB2::operationB" << '\n';
    }
};

// �߻� ���丮 �������̽�
class AbstractFactory {
public:
    virtual ~AbstractFactory() {}
    virtual std::shared_ptr<class ProductA> createProductA() = 0;
    virtual std::shared_ptr<class ProductB> createProductB() = 0;
};

// Concrete Factory 1
class ConcreteFactory1 : public AbstractFactory {
public:
    std::shared_ptr<class ProductA> createProductA() override {
        return std::make_shared<ConcreteProductA1>();
    }

    std::shared_ptr<class ProductB> createProductB() override {
        return std::make_shared<ConcreteProductB1>();
    }
};

// Concrete Factory 2
class ConcreteFactory2 : public AbstractFactory {
public:
    std::shared_ptr<class ProductA> createProductA() override {
        return std::make_shared<ConcreteProductA2>();
    }

    std::shared_ptr<class ProductB> createProductB() override {
        return std::make_shared<ConcreteProductB2>();
    }
};

int main() {
    // Concrete Factory 1 ���
    std::shared_ptr<AbstractFactory> factory1 = std::make_shared<ConcreteFactory1>();
    std::shared_ptr<ProductA> productA1 = factory1->createProductA();
    std::shared_ptr<ProductB> productB1 = factory1->createProductB();
    productA1->operationA(); // "ConcreteProductA1::operationA" ���
    productB1->operationB(); // "ConcreteProductB1::operationB" ���

    // Concrete Factory 2 ���
    std::shared_ptr<AbstractFactory> factory2 = std::make_shared<ConcreteFactory2>();
    std::shared_ptr<ProductA> productA2 = factory2->createProductA();
    std::shared_ptr<ProductB> productB2 = factory2->createProductB();
    productA2->operationA(); // "ConcreteProductA2::operationA" ���
    productB2->operationB(); // "ConcreteProductB2::operationB" ���

    return 0;
}
