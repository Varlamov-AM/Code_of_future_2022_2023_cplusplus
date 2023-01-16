#include <iostream>

int main() {

    int x = 5;
    int y = 100;
    int z = 1000;
    int* ptrx = &x;
    int* ptry = &y;
    int* ptrz = &z;

    double a = 1.1;
    double b = 1.2;
    
    double* ptra = &a;
    double* ptrb = &b;

    std::cout << ptrx << "\n";
    std::cout << ptry << "\n";
    std::cout << ptrz << "\n";

    std::cout << ptra << "\n";
    std::cout << ptrb << "\n";

    return 0;
}
