#include <iostream>


int main(){


    int n;

    std::cin >> n;

    for (int i = 0; i < n; ++i){

        int a, b;
        char op;

        std::cin >> a >> op >> b;
    
        switch (op){
            case '+':
                std::cout << a + b << "\n";
                break;
            case '-':
                std::cout << a - b << "\n";
                break;
            case '*':
                std::cout << a * b << "\n";
                break;
            case '/':
                if (a % b == 0){
                    std::cout << a / b << "\n";
                } else {
                    std::cout << "No\n";
                }
                break;
        }
    }

    return 0;
}
