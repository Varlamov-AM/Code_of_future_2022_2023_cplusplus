#include <iostream>

int func(int x) {
    if (x > 4) {
        int ans = 4;
        return ans;
    }
    if (x > 1) {
        int ans = 1;
        return ans;
    }
    int ans = 0;
}

int main(){

    std::cout << func(5) << " " <<  func(0) << "\n";

    return 0;
}
