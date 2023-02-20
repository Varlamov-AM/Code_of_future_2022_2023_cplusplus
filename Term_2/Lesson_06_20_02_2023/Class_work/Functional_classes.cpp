#include <iostream>

class MyFunctionalClass {

    // we want to create polynomic function:
    // ax^2 + bx + c

    int a;
    int b;
    int c;

public:

    MyFunctionalClass(){};
    MyFunctionalClass(int a, int b, int c) : a(a), b(b), c(c) {};
    int operator()(int x) const {
        return a * x * x + b * x + c;
    }

    ~MyFunctionalClass(){};

};

int main(){

    // f(x) = 3x^2 + 4x + 5

    MyFunctionalClass f(3, 4, 5);

    std::cout << "f(0) = " << f(0) << "\n";
    std::cout << "f(1) = " << f(1) << "\n";    
    std::cout << "f(2) = " << f(2) << "\n";



    return 0;
}
