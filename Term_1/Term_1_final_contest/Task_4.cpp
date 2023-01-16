#include <iostream>


int main(){

    int q;
    std::cin >> q;

    for (int i = 0; i < q; ++i){
        int k;
        std::cin >> k;  
        
        int max;
        int min;
        
        for (int j = 0; j < k; ++j){
            int data;
            std::cin >> data;
            if (j == 0){
                max = data;
                min = data;    
            }
            if (data > max){
                max = data;
            } 
            if (data < min){
                min = data;
            }
        }        
        std::cout << max - min << "\n";
    }    

    return 0;
}
