#include <iostream>

int main(){

    const int lenght = 5;

    int arr[lenght];

    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;

    for (int i = 0; i < lenght; ++i){
        std::cout << arr[i] << " ";
    }    

    std::cout << "\n";

    for (int j = 0; j < lenght; ++j){
        arr[j] = 2 * j;
        std::cout << arr[j] << " ";
    }
    
    std::cout << "\n";

    int arr_[2*lenght];

    for (int k = 0; k < lenght * 2; ++k){
        std::cin >> arr_[k];
    }
    
    std::cout << "\n";

    for (int l = 0; l < lenght * 2; ++l){
        std::cout << arr_[l] << " ";
    }

    return 0;
}
