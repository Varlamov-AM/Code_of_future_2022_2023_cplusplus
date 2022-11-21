#include <iostream>

int main(){

    for (int i = 0; i < 3; ++i) {
       for (int j = 0; j < 3; ++j) {
            if (j == i) {
                continue;
            }
            std::cout << i * j << " ";
        }
    }    

    return 0;
}
