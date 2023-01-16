#include <iostream>


// struct Struct_name{
// 
// type1 field1;
// type2 field2;
//
// type3 method1();
// type4 method2();
//
// }

struct Simple_struct {
    
    int number1;
    float number2;
    float number4 = 3.;
    
    float mult_field(float x){
        return number1 * number2 * x * number4;
    }
    
    void print_field();

};


void Simple_struct::print_field(){
    std::cout << "Hello, world!\n";
    return;
}


int main(){

    // Create of object : Struct_name object_name    
    Simple_struct struct1;

    struct1.number1 = 2; // acces to field number in object 
                        // struct1 of type Simple_struct
    struct1.number2 = 3.5;
    
    float tmp = 5;
    std::cout << "struct1.mult_field() = " << struct1.mult_field(tmp) << "\n";
    

    std::cout << "struct1.number1 = " << struct1.number1 
              << " " << "struct1.number2 = " << struct1.number2 <<"\n";


    Simple_struct struct2;
    Simple_struct* struct2_ptr = &struct2;
    Simple_struct& struct2_ref = struct2;
    std::cout << "struct2_ptr = " << struct2_ptr 
              << " and &struct2_ref = " << &struct2_ref <<  "\n";
    
        
    struct2.print_field();

    return 0;
}
