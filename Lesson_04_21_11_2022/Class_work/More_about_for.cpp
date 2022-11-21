#include <iostream>

int main(){

    int a = 0;
    int b = 10;
    int c;

    std::cout << a << " " << b << " " << c << "\n";    

    for (a = 1, b = 2; a - b; ++a){}

    std::cout << a << " " << b << " " << c << "\n";

    return 0;
}
