#include <iostream>

// big O notation in asymptotic analysis

int main(){

    
    const int N1 = 5;
    
    for (int i = 0; i < N1; ++i) {
        std::cout << i << "\n";
    } // Asympt -> O(1)

    int N2;
    std::cin >> N2;
    
    for (int i = 0; i < N2; ++i) {
        std::cout << i << "\n";
    } // Asympt -> O(N2)


    return 0;
}
