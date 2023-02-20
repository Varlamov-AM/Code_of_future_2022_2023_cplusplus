#include <iostream>
#include <algorithm>
#include <vector>

void Bubble_sort(std::vector<int>);

int main(int argc, char** argv){

    std::vector<int> data = {1, 3, 5, 4, 9, 6, 1, 3, 7, 8, 4, 10};

    std::vector<int> sorted_vector  = {1, 1, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> inv_sor_vector = {10, 9, 8, 7, 6, 5, 4, 4, 3, 3, 1, 1};

    std::cout << "Before bubble sort our vector looks like:\n";

    std::cout << argv[1];

    std::vector<int> test(atoi(argv[1]));
    for (int i = 0; i < atoi(argv[1]); ++i){
        test[i] = atoi(argv[1]) - i;
    }

    //for (auto value : data){
  //      std::cout << value << "   ";
//    }

    //Bubble_sort(test);                      O(n^2)
    //std::sort(test.begin(), test.end());    O(n*log(n))

    std::cout << "\n";

    return 0;
}


void Bubble_sort(std::vector<int> data_to_sort){

    // We want to sort our array from lowest to max elements

    int i, j;
    i = 0;
    j = 0;

    int count = 0;

    for (i = 0; i < data_to_sort.size(); ++i){
        for (j = 0; j < data_to_sort.size() - i - 1; ++j){
            if (data_to_sort[j] > data_to_sort[j + 1]){
                int tmp = data_to_sort[j];
                data_to_sort[j] = data_to_sort[j + 1];
                data_to_sort[j + 1] = tmp;
                
                //std::cout << "\ncount = " << count << "\n";
                
                //for (auto value : data_to_sort){
                    //std::cout << value << "   ";
                //}

                std::cout << "\n";

                count++;
            } 
        }
    }
    std::cout << count << "\n";

    return;
}
