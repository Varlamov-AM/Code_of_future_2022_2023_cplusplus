#include <iostream>

class SimpleClassA{
public: 
    int a;
    double b;

    SimpleClassA(){
        a = 2;
        b = 3.14;
        d = 5;
    }

    void Print_content(){
        std::cout << "my a = " << a << "my_b " << b << "\n";
    }

    friend void Print_increased_fileds(SimpleClassA object, double c);

private:
    int d;

};

void Print_increased_fileds(SimpleClassA object, double c){
    std::cout << "object.a * c = " << object.a * c << 
        " object.b * c = " << object.b * c << "\n";
    std::cout << "And private field d = " << object.d << "\n";
    return;
}

int main(){

    SimpleClassA obj;

    Print_increased_fileds(obj, 2.);

    return 0;
}