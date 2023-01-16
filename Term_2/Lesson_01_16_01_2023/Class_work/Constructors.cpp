#include <iostream>


struct struct_with_constr {

    int x;

    // default constructor:
    // struct_name(){}

    struct_with_constr(){
        std::cout << "We call default constructor!\n";
        x = 2;
        std::cout << "x = " << x << "\n";
    }

    struct_with_constr(int y){
        x = y;
        std::cout << "We call constructor with int arg!\n";
    }

    void Set_x(int y){
        x = y;
    }    

    int Get_x(){
        return x;
    }

};


int main(){

    struct_with_constr s; // call sonstructor (default constructor)


    std::cout << "s.Get_x() = " << s.Get_x() << "\n";
    s.Set_x(1);
    std::cout << "s.Get_x() = " << s.Get_x() << "\n";

    int a = 0;

    std::cin >> a;

    struct_with_constr sa(a);
    std::cout << "sa.Get_x() " << sa.Get_x() << "\n";

    return 0;
}
