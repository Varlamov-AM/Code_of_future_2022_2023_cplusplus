#include <iostream>

int main(int args, char** argv){ // argv -> char*[args]

    //atoi, atof,  

    std::cout << "args = " << args << "\n"; 
    for (int i = 0; i < args; ++i){
        std::cout << argv[i] << " "; 
        std::cout << argv[i][0] << "\n";   
    }
   
    return 0;
}
