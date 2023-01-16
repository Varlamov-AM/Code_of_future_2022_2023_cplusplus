#include <iostream>

int getBin(int i){
    int number = 123456789;
    
    int bit = 0;

    bit  = (number >> i) & 1;
    return bit;
}

void submitNumber(int k){
    if (k == 123456789){
        std::cout << "True!\n";
    } else {
        std::cout << "False\n";
    }
}

int main() {

    unsigned int number = 0;
    
    for (int i = 0; i < 20; ++i){
        std::cout << getBin(i);
    }
    std::cout << "\n";

    for (int i = 0; i < 20; ++i){
        number += (getBin(i) << i);
        std::cout << getBin(i) << i << "\n";
    }    

    submitNumber(number);

    return 0;
}
