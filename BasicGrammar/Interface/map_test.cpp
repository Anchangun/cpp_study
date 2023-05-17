#include <iostream>
#include <map>

class Animal {
public:
    virtual void sound() = 0;
};

class Cat : public Animal {
public:
    void sound() {
        std::cout << "Meow!" << std::endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    std::map<int, Animal*> animal_map;
    Cat* cat = new Cat();
    animal_map[1] = cat;
    Dog* dog = new Dog();
    animal_map[2] = dog;
    for (const auto& pair : animal_map) {
        pair.second->sound();
    }
    delete cat;
    delete dog;
    return 0;
}
