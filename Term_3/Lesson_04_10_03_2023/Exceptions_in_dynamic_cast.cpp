#include <iostream>

struct Parent {
    virtual void what() const = 0;
};

struct Child1 : Parent {
    void what() const override {
        std::cout << "child1\n";
    }
};

struct Child2 : Parent {
    void what() const override {
        std::cout << "child2\n";
    }
};

int main() {
    auto child1 = Child1();
    const Parent& parent = child1;
    const Child2& child2 = dynamic_cast<const Child2&>(parent);
    child2.what();
    
    return 0;
}