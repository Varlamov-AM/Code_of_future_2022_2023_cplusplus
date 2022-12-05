#include <iostream>

int count = 0; 


int Fib_num(int n){

    ++count;
    int res = 0;
    
    if (n == 1){
        res = 1;
        return res;
    }
    if (n == 2){
        res = 1;
        return res;
    }

    res = Fib_num(n - 1) + Fib_num(n - 2);
    return res;
}

int main(){

    int n;
    std::cin >> n;

    std::cout << "Fib_num(" << n << ") = " << Fib_num(n) << "\n";
    std::cout << "And number of Fib_num calls is equal to " << count << "\n";

    return 0;
}
