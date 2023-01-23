#include <iostream>
#include <vector>
#include <string>

int main(){

    std::vector<std::string> vec;
    vec.push_back("abc");

    auto firstCopy = vec[0]; // Тип будет std::string
    firstCopy = "a";

    std::cout << firstCopy << " " << vec[0] << "\n";

    auto& firstRef = vec[0]; // Тип будет std::string&
    firstRef = "a";
    
    std::cout << firstRef << " " << vec[0] << "\n";

    return 0;
}

