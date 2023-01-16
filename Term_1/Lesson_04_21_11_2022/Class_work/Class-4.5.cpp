#include <iostream>

int main(){

    int n;

    std::cin >> n;

    int num[n];

    for (int i = 0; i < n; ++i){
        std::cin >> num[i];
    }    

    int new_num[n];
    int count = 0;

    for (int j = 0; j < n; ++j){
        if (num[j] % 3 == 0){
            new_num[count] = num[j];
            count++;
        }
    }

    for (int k = 0; k < n; ++k){
        if (num[k] % 3 == 1 || num[k] % 3 == -2){
            new_num[count] = num[k];
            count++;
        }
    }

    for (int l = 0; l < n; ++l){
        if (num[l] % 3 == 2 || num[l] % 3 == -1){
            new_num[count] = num[l];
            count++;
        }
    }

    for (int m = 0; m < n; ++m){
        std::cout << new_num[m] << " "; 
    }

    return 0;
}
