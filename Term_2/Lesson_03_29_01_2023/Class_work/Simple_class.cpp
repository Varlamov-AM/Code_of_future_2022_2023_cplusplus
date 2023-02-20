#include <iostream>
#include <string>

class simple_class {

    int i;

public:
    
    int j;
    void hello(){

        std::cout << "Hello, world!\n";

    }
private:

    std::string str;

public:

    double d;

};


int main(){

    simple_class s;
    s.hello();

    return 0;
}
