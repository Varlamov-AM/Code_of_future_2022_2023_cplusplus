#include <iostream>


struct Simple_struct {

    int i = 0;
    double d = 3.14;

    Simple_struct(){
        std::cout << "Empty constructor!\n";
    };
    
    Simple_struct(int int_inp){
        i = int_inp;
        std::cout << "Only int in input constructor!\n";
    }

    Simple_struct(double double_inp){
        d = double_inp;
        std::cout << "Only double in input constructor!\n";
    }

    Simple_struct(int int_inp, double double_inp){
        i = int_inp;
        d = double_inp;
        std::cout << "Both int and double in input constructor!\n";
    }

    Simple_struct(const Simple_struct& s){
        i = s.i;
        d = s.d;
        std::cout << "Copy constructor!\n";
    }

    ~Simple_struct(){};

};

int main(){

    Simple_struct s1;
    Simple_struct s2 = Simple_struct(1);
    Simple_struct s3 = Simple_struct(1.);
    Simple_struct s4 = Simple_struct(2, 3.14);
    Simple_struct s5 = s1;
    Simple_struct& s6 = s1;
    Simple_struct* s7_ptr = &s1;

    return 0;
}
