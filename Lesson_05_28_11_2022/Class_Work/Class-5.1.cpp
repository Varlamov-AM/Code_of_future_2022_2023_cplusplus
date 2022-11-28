#include <iostream>

int main(){

    int x = 0;
    std::cout << x << " ";
    if (x == 0) {
        int x = 1;
        x *= 2;
        std::cout << x << " ";
    }
    std::cout << x;

    return 0;
}
