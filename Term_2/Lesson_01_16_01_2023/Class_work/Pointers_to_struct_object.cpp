#include <iostream>


struct Struct {

    int x = 0;
    int y = 1;

    void Set_x(int x){
        this->x = x;
    }

};


int main(){

    Struct s;
    std::cout << "s.x = " << s.x << "\n"; // s.x = 0

    Struct* s_ptr = &s;
    std::cout << "(*s_ptr).x = " << (*s_ptr).x << "\n"; // (*s_ptr).x = 0
    std::cout << "s_ptr->x = " << s_ptr->x << "\n"; // s_ptr->x = 0

    s_ptr->x = s_ptr->y;

    std::cout << "s_ptr->x = " << s_ptr->x << "\n"; // s_ptr->x = 1;

    s_ptr->Set_x(2);
    std::cout << "s_ptr->x = " << s_ptr->x << "\n"; // s_ptr->x = 2;

    return 0;
}
