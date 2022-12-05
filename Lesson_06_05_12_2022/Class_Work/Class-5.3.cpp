#include <iostream>

void hanoi(int n, int start, int finish){
    
    if (n == 1){
        std::cout << n << " " << start << " " << finish << "\n";
    } else {
        int tmp = 6 - start - finish;
        hanoi(n - 1, start, tmp);
        std::cout  << n << " " << start << " " << finish << "\n";
        hanoi(n - 1, tmp, finish);
    }
    
    return;
}

int main(){

    int n;
    std::cin >> n;
    
    int start_pos  = 1;
    int finish_pos = 3;

    hanoi(n, start_pos, finish_pos);

    return 0;
}
