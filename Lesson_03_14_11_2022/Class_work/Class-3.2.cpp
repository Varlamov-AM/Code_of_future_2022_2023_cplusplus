#include <iostream>

int main(){

    int* ptr_int;
    long long* ptr_long_long;
    char* ptr_char;
    double* ptr_double;
    float* ptr_float;
    long double* ptr_long_double;

    std::cout << sizeof(ptr_int) << '\n'
              << sizeof(ptr_long_long) << '\n'   
              << sizeof(ptr_char) << '\n'
              << sizeof(ptr_double) << '\n'
              << sizeof(ptr_float) << '\n'
              << sizeof(ptr_long_double) << '\n';

    return 0;
}
