#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main(){

    /*
    // Classic cycle with iterator:

    for (auto iter = container.begin(); iter != container.end(); ++iter){
        auto value = *iter;
        std::cout << value << "\n";
    } // print container content;
    
    // Range based cycle for:
    
    for (auto value : container){
        std::cout << value << "\n";
    }
    */

    std::vector<int> vec_int = {1, 2, 3, 4};
    int  i = 0;

    for (auto value : vec_int){
        std::cout << "vec_int[" << i << "] = " << value << "\n";
        ++i;
    }

    std::list<int> list_int = {1, 2, 3, 4};
    i = 0;
    for (auto value : list_int){
        std::cout << "list_int[" << i << "] = " << value << "\n";
        ++i;
    }
    
    return 0;
}

