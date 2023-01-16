#include <iostream>

int min(int a, int b){
    if (a >= b){
        return b;
    } else {
        return a;
    }
}

int product(int a, int b){
    return a * b;
}

int pow(int a, int b){
    int res = 1;

    if (b == 0) {
        return 1;
    }

    for (int i = 0; i < b; ++i){
        res *= a;
    }

    return res;
}


int main(){
    
    std::cout << pow(3, 2) << "\n"; // 2^0 = 1
    return 0;
}

