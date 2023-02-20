#include <iostream>
#include <deque>

int main(){

    // std::deque<type> deque_name

    std::deque<int> dem_deq = {1, 2, 3, 4};

    // container deque have the similar list of 
    // operators as a std::list, and one more:

    std::cout << dem_deq[2] << "\n";

    // ++iter        -- correct
    // --iter        -- correct
    // iter++        -- correct
    // iter--        -- correct
    // iter +/- k    -- correct
    // k +/- iter    -- correct
    // iter1 - iter2 -- correct
    // iter[index]   -- correct

    return 0;
}
