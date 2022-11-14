#include <iostream>

int main(){

    int a;
    int b;
    int c;

    std::cin >> a >> b >> c;

    int res = (static_cast<long long int >(a) * b) % c;
    //int res = (a * b) % c;

    std::cout << "(a * b) \% c = " << res << '\n';

    return 0;
}
