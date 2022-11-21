#include <iostream>

int main(){
    
    // while, for, do while

    // while (condition) {
    //     body of cycle
    // }    

    int a = 10;

    while (a > 0){
        std::cout << a << "\n";
        --a;
    }

    // for (what we shold do before cycle;
    //      condition of cycle;
    //      what after iteration){
    //      body of cycle
    // }
    
    std::cout << "a = " << a << "\n";
    
    for (a = 0; a < 10; ++a){
        std::cout << a + 1 << "\n";
    }
    int b = 10;

    do {
        std::cout << b << "\n";
//        std::cout << b + a << "\n";
        b += a;
    } while(b < 100);

    

    return 0;
}
