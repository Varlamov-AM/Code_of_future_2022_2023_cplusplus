#include <iostream>


int main(){

    int a;
    int b;
    int c;

    int x = 341241;
    int y = 24235;

    long long int w = x * y;

    //std::cin >> a >> b >> c;
    a = x;
    b = y;
    c = 1000;

    int res = (a * b) % c;
    int res_cor = ((long long int)a * (long long int)b) % c;

    std::cout << "(a * b) \% c = " << res << " and w \% c = " 
              << w % c << " cor res = " << res_cor
              << " and w = " << w << " and a * b = " 
              << a * b <<'\n';

    return 0;
}
