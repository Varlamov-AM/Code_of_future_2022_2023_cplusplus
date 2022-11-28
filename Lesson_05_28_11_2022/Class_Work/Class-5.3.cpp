#include <iostream>

void f(int x) {
    std::cout << x << "\n";
}
void f(long long x) {
    std::cout << x << "\n";
}

int main() {
    //float x = 1.1;
    //f(x);   

    long long int k = 10e9;
    int l = 5;
    f(l);
    f(k);
}
