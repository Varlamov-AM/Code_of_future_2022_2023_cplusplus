#include <iostream>
#include <vector>

int main(){

    const int BIG_INDEX = 100000000;
    std::vector<int> vec(5);
    try {
        vec.at(BIG_INDEX) = 1000;
    } catch(const std::out_of_range& ThrowedErrorObject) {
        std::cout << "Got error:\n" << ThrowedErrorObject.what() << "\n";
    }

    return 0;
}