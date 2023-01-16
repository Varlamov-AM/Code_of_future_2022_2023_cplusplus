#include <iostream>

int main(){

    for (int i = 0; i < 10; ++i){
        //std::cout << i << "\n";
        if (i & 1) {
            continue;
        }
        std::cout << i << "\n";
        if (i == 6){
            std::cout << "enything!" << " res!";
            break;
        }
    }    

   // continue -- operator, which can stop handle iteration and go to the next iter

    

    return 0;
}
