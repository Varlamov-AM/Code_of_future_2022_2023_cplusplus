#include <iostream>
#include <typeinfo>
#include <list>

template<typename T>
T& AtIndex(std::list<T>& myList, unsigned int index){
    auto iter = myList.begin(); 
    for (unsigned int i = 0; i < index; ++i){
        ++iter;
    }
    return *iter;
}

int main(){

    // Syntaxis

    // std::list<type> list_name;   
    // std::list<type> list_name = {el1, el2, el3, ...};
    
    std::list<int> dem_list = {2, 3, 4};

    dem_list.push_back(5); // -> {2, 3, 4, 5}
    dem_list.push_front(1);// -> {1, 2, 3, 4, 5}

    

    dem_list.pop_back(); // -> {1, 2, 3, 4}
    dem_list.pop_front(); // -> {2, 3, 4}

    unsigned int size_dem_list = dem_list.size();

    auto it_begin = dem_list.begin();
    auto it_end   = dem_list.end();
    auto begin_of_dem_list = dem_list.front();
    auto back_of_dem_list  = dem_list.back();

    // std::cout << typeid(begin_of_dem_list).name() << "\n";
    // std::cout << typeid(it_begin).name() << "\n";

    std::list<int>::iterator iter = dem_list.begin();
    dem_list.insert(iter, 1); // -> {8, 2, 3, 4}
    iter = dem_list.begin();
    for (unsigned int i = 0; i < dem_list.size(); ++i){
        std::cout << "dem_list[" << i << "] = " << *(iter) << "\n";
        ++iter;
    } 

    // ++iter -- correct
    // --iter -- correct
    // iter++ -- correct
    // iter-- -- correct
    // iter +/- k    -- noncorrect
    // k +/- iter    -- noncorrect
    // iter1 - iter2 -- noncorrect
    // iter[index]   -- noncorrect


    return 0;
}
