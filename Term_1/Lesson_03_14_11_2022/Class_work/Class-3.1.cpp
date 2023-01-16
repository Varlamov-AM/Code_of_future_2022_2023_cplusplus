#include <iostream>
#include <typeinfo>

int main(){

    long long a = 1;
    double b = 3.0;
    char c = 'a';

    std::cout << typeid(static_cast<short int>(static_cast<short int>(1ll * a + b) + c)).name() << '\n';

    return 0;
}
