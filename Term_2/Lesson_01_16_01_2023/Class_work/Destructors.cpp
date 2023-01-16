#include <iostream>

struct A {
    A() {
        std::cout << "A";
    }
    ~A() {
        std::cout << "~A";
    }
};

struct B {
    B() {
        std::cout << "B";
    }
    ~B() {
        std::cout << "~B";
    }
};

struct C {
    A a;
    B b;
    C() {
        std::cout << "C";
    }
    ~C() {
        std::cout << "~C";
    }
};


struct Struct {

    int s = 0;

    Struct(){
        std::cout << "Struct object was created!\n";
    };
    ~Struct(){
        std::cout << "Struct object was deleted!\n";
    };
    
};


int main(){

    Struct s; 
    s.s = 1;
    std::cout << s.s << "\n";

    C c; // -> ABC~C~B~A
    std::cout << "\n";

    return 0;
}
