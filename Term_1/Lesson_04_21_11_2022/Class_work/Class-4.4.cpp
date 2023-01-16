#include <iostream>

int main(){

    int n;

    std::cin >> n;
    
    int arr[n];    
    
    int count = 0;

    for (int i = 0; i < n; ++i){
        std::cin  >> arr[i]; 
        // std::cout << "arr[" << i << "] = " << arr[i] << "\n";
        if (arr[i] & 1){
            continue;    
        } else {
            ++count;
        }
    }
    
    std::cout << count << "\n";

    return 0;
}
