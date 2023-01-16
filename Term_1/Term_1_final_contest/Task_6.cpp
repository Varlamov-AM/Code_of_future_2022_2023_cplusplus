#include <iostream>

int isTrue(int p1, int p2, int p3, int p4){
    if (p1 || (p2 && p4) || (!p2 && !p4 && p3)){
        return 1;
    } else {
        return 0;    
    }
}

int main(){

    std::cout << isTrue(0, 0, 1, 0) << "\n";
    std::cout << isTrue(1, 0, 0, 0) << "\n";
    std::cout << isTrue(0, 1, 0, 1) << "\n";
    std::cout << isTrue(0, 1, 0, 0) << "\n";

    return 0;
}
