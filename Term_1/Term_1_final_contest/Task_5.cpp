#include <iostream>
#include <vector>

std::vector<int> merge(std::vector<int> a, std::vector<int> b){
    
    std::vector<int> res;
    res = a;
    for (int i = 0; i < b.size(); ++i){
        res.push_back(b[i]);
    }

    return res;
}

int main(){

    std::vector<int> a = {4, 5};
    std::vector<int> b = {1, 2, 3};

    std::vector<int> c = merge(a, b);
    for (int i = 0; i < c.size(); ++i){
        std::cout << c[i] << "\n";
    }

    return 0;
}
