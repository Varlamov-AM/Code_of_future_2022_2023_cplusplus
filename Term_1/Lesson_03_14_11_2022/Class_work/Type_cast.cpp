#include <iostream>
#include <typeinfo>

int main(){

    int a = 10;
    long long int b = 15;

    float c = 3e38;
    float d = 1.0;
    int e = 2;

    double f = 3e38;

    float g = f + c;
    double h = f + c;
    std::cout << "g = " << g << " h = " << h << '\n';   

 
/*  std::cout << ... << std::endl;
    std::cout << typeid(c + e).name() << '\n';
    std::cout << typeid(d + e).name() << '\n';
    std::cout << typeid(a + b).name() << '\n';
    std::cout << typeid(a).name()     << '\n';
    std::cout << typeid(b).name()     << '\n';
    std::cout << typeid(f).name()     << '\n';
    std::cout << typeid(c + f).name() << '\n';
*/

    return 0;
}
