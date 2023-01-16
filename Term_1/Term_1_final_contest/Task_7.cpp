#include <iostream>

int sumDigit(int k){
    int res = 0;

    while(k){
        res += k % 10;
        k /= 10;
    }
    return res;
}

int main(int argc, char** argv){
        
    if(argc == 2){
        std::cout << sumDigit(atoi(argv[1])) << "\n";
    }

    return 0;
}
