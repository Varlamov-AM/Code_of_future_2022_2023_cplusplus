#include <iostream>

int main() {
    long long x, y, z;
    std::cin >> x >> y >> z;
    void* ptr = &x;
    ptr += 16;
    long long* ptr_ll = reinterpret_cast<long long*>(ptr);
    std::cout << *ptr_ll << "\n";

    long long* ptrz = &z;
    ptrz = ptrz - 1;
    std::cout << *ptrz << "\n";

    return 0;
}
