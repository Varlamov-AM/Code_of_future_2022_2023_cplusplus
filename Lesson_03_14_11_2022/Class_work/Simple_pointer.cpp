#include <iostream>


int main(){

    int a = 10;
    int* ptr_a = &a;

    int* ptr_b;
    int b = *(ptr_b);
    int* true_ptr_b = &b;

    std::cout << "a = " << a << " and pointer to a = " << ptr_a << '\n';
    std::cout << "pointer ptr_b = " << ptr_b << " and b = " << b << '\n';

    b = 11;

    std::cout << "pointer ptr_b = " << ptr_b << " and b = " << b 
              << ", but *(ptr_b) = " << *(ptr_b) << "\nBecause true ptr_b = " 
              << true_ptr_b << " and *(true_ptr_b) = " 
              << *(true_ptr_b) << '\n';

    double c = 0.11;
    double* ptr_c = &c;
    
    double* ptr_d;
    double d = *(ptr_d);
        

    std::cout << "pointer ptr_c = " << ptr_c << " and c = " << c
              << " and *(ptr_c) = " << *(ptr_c) << '\n';

    std::cout << "pointer ptr_d = " << ptr_d << " and d = " << d
              << " and *(ptr_d) = " << *(ptr_d) << '\n';

    return 0;
}
