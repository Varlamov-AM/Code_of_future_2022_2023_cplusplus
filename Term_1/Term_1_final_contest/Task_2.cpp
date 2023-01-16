#include <iostream>


void mySort2(int* ptr1, int* ptr2){

    int tmp;
    
    if(*ptr1 >= *ptr2){
        tmp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = tmp;
    } 
    
    return;
}


int main(){

    int a, b;
    std::cin >> a >> b;

    mySort2(&a, &b);
    std::cout << a << b << "\n";

    return 0;
}
