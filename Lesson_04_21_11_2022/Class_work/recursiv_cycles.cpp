#include <iostream>

int main(){

    for (int i = 0; i < 10; ++i){ // 10 iterations
        for (int j = 0; j < 10; ++j){ // 10 iterations
            std::cout << i << j << " "; // 100 std::cout's
        }
        std::cout << "\n";
    }    

    return 0;
}
