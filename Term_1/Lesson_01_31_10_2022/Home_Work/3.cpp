#include <iostream>

int main(){

    int k;
    int n;

    std::cin >> k >> n;

    int left_b_k   = n / k;
    int right_b_k  = (n + k - 1)/k;

    //std::cout << left_b_k << " " << right_b_k << std::endl;

    if (n - left_b_k * k < right_b_k * k - n){
    	std::cout << left_b_k + n - left_b_k * k << std::endl;
    } else {
	std::cout << right_b_k + right_b_k * k - n << std::endl;
    }


    return 0;
}
