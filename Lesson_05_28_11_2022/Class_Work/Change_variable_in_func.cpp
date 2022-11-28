#include <iostream>
#include <vector>


int incr_num(int y){
    // y -> 2 * y
    return 2 * y;
}

void Hello(){
    std::cout << "Hello, world!" << "\n";
    return;
}

void Change_number(int* ptr_x){
    // x -> 2 * x;  
    *(ptr_x) = 2 * *(ptr_x);
}

void Change_array(int* ptr_to_a, const int len){
    for (int i = 0; i < len; ++i){
        *(ptr_to_a + i) = 2 * *(ptr_to_a + i);
    }
} 


std::vector<int> Invers_vec(std::vector<int> vec){

    std::vector<int> result[vec.size()] = {};
    for (int i = 0; i < vec.size(); ++i){
        result[i] = vec[vec.size() - i - 1];
    }

    return result;
}

int main(){
    
    const int len_of_array = 10;
    /*    
    int array[len_of_array] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "array = " << array << "\n"; // 1

    
    for (int i = 0; i < len_of_array; ++i){
        std::cout << "old array[" << i << "] = " << array[i] << "\n";
    }
    
    Change_array(array, len_of_array);

    for (int i = 0; i < len_of_array; ++i){
        std::cout << "new array[" << i << "] = " << array[i] << "\n";
    }
    */


    std::vector<int> vec[len_of_array];
    for (int i = 0; i < len_of_array; ++i){
        vec[i] = i * i;
    }
    
    std::vector<int> invers = Invers_vec(&vec);

    for (int j = 0; j < invers.size(); ++j){
        std::cout << "invers[" << j << "] = " << invers[j] << " | " 
                  << " vec[" << j << "] = " << vec[j] << "\n";
    }
    return 0;
}
