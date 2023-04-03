#include <iostream>

class Animal {
public:
    virtual void MakeSound() {
        std::cout << "I am an unknown animal(\n";
    }

    virtual void MakeLife() = 0;

    virtual ~Animal(){};
};

class Dog : public Animal {
public:
    void MakeSound() override {
        std::cout << "Dog(\n";
    }

    void MakeLife() override {
        std::cout << "Make dog life!)\n";
    }
};

class Cat : public Animal {
public:
    void MakeSound() override {
        std::cout << "Cat(\n";
    }

    void MakeLife() override {
        std::cout << "Make cat life!)\n";
    }
};

int main(){
    int n;
    std::cin >> n;

    Animal* ptr = 0;
    auto c = Cat();
    auto d = Dog();
    if (n >= 0) {
        ptr = &c;
    } else {
        ptr = &d;
    }
    ptr->MakeSound();
    ptr->MakeLife();
    return 0;
}