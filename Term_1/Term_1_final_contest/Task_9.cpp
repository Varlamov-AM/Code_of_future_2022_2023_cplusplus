#include <iostream>


int f(int x){
    if (x == 1){
        return 1;
    }
    if (x == 2){
        return 1;
    }
    if (x == 3){
        return 1;
    }
    int res = f(x - 1) + f(x - 2) + f(x - 3);
    return res;
}


int main(){

    int n;

    std::cin >> n;
    
    std::cout << f(n) << "\n";

    return 0;
}
