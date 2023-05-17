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

class Handler {
private:
    std::map<int, Animal*> animal_map_;
    int id_counter_;

public:
    Handler() {
        id_counter_ = 0;
    }

    ~Handler() {
        for (const auto& pair : animal_map_) {
            delete pair.second;
        }
    }

    int addAnimal(Animal* animal) {
        animal_map_[id_counter_] = animal;
        return id_counter_++;
    }

    void removeAnimal(int id) {
        auto it = animal_map_.find(id);
        if (it != animal_map_.end()) {
            delete it->second;
            animal_map_.erase(it);
        }
    }

    void makeAnimalSound(int id) {
        auto it = animal_map_.find(id);
        if (it != animal_map_.end()) {
            it->second->sound();
        }
    }
};

int main() {
    Handler handler;
    Cat* cat = new Cat();
    int catId = handler.addAnimal(cat);
    Dog* dog = new Dog();
    int dogId = handler.addAnimal(dog);
    handler.makeAnimalSound(catId);
    handler.makeAnimalSound(dogId);
    handler.removeAnimal(catId);
    handler.makeAnimalSound(catId);

    return 0;
}
