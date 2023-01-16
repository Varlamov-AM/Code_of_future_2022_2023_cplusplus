#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> string_in_order(int N){

    if (N == 1){
        std::vector<std::string> res = {"0", "1"};
        return res;
    }

    std::vector<std::string> res;
    std::vector<std::string> prev = string_in_order(N - 1);
        
    for (int i = 0; i < 2; ++i){
        for(int j = 0; j < prev.size(); ++j){
            std::string tmp = std::to_string(i);
            tmp.append(prev[j]);
            res.push_back(tmp);
        }
    }
    

    return res;
}

int main(int argc, char** argv){

    /*if(argc == 2){
        
        std::vector<std::string> test = string_in_order(atoi(argv[1]));
        for(int i = 0; i < test.size(); ++i){
            std::cout << test[i] << "\n";    
        }
    }*/

    int n;
    std::cin >> n;
    std::vector<std::string> res = string_in_order(n);
    for (int i = 0; i < res.size(); ++i){
        std::cout << res[i] << "\n";    
    }
    return 0;
}
