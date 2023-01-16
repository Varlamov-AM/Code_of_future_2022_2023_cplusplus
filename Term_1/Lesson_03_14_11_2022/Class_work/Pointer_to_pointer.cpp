#include <iostream>


int main(){

    // Very bad working with pointers!

    int a = 1;
    int* ptr_a = &a;
    int** ptr_ptr_a = &ptr_a;

    std::cout << a << " " << ptr_a << " " << ptr_ptr_a << "\n";

    
    
    void* ptr_emp = reinterpret_cast<void*>(ptr_ptr_a); 
    ptr_ptr_a -= 1;
    ptr_emp -= 4;

    int* another_ptr = reinterpret_cast<int*>(ptr_ptr_a);
    std::cout << "another_ptr = " << another_ptr << "\n";
    another_ptr +=1;
    *(another_ptr) += 3;
    std::cout << "another_ptr = " << another_ptr << "\n";

    std::cout << a << " " << ptr_a << " " << ptr_ptr_a << " " << ptr_emp << "\n";    
    
    
    *(reinterpret_cast<int*>(ptr_emp)) += 2; // *(void*) -- Error!

    std::cout << a << " " << ptr_a << " " << ptr_ptr_a << " " << ptr_emp << "\n";

    return 0;
}
