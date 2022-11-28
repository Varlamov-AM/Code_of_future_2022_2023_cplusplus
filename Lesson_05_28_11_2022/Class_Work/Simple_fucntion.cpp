#include <iostream>

// type_of_value Name_of_function(type_of_arg_1 arg1, type_of_arg_2, arg2, ...){
//  return res;
// }

int Sum_of_num(int num1, int num2){
    
    int sum = num1 + num2;

    return sum;
}


int main(){

    std::cout << "Hello, World!" << "\n";

    // First type:

    int a, b;

    std::cin >> a >> b;

    int sum = a + b;

    std::cout << "Sum of " << a << " and " << b << " = " << sum << "\n";

    // Second type:

    std::cout << "Sum of " << a << " and " << b << " = " 
              << Sum_of_num(a, b) << "\n";

    return 0;
}
