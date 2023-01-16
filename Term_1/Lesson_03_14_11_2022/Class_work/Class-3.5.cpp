#include <iostream>

int main() {
    int x;
    std::cin >> x;
    int y;
    std::cin >> y;
    int& a = x;
    int& b = y;
    int t = b;
    b = a;
    a = t;
    std::cout << x << " " << y << "\n";

    return 0;
}


