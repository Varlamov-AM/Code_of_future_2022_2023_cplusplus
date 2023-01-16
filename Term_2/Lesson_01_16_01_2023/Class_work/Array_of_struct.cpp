#include <iostream>
#include <vector>

struct Struct {

    int x;
    double y;
    
    Struct(){};
    Struct(int x) : x(x), y(3.1415){};
    Struct(double y) : x(2), y(y){};
    
    void print_x(){
        std::cout << this->x << "\n";
    }

};


int main(){

    int n = 0;

    std::cin >> n;

    Struct* arr_of_struct = new Struct[n];

    // arr_of_struct ...
    for (int i = 0; i < n; ++i){
        arr_of_struct[i].x = i;
        arr_of_struct[i].print_x();
    }

    delete[] arr_of_struct;

    std::vector<Struct> vec_of_struct(n);
    for (int i = 0; i < n; ++i){
        (vec_of_struct[i]).x = i;
        (vec_of_struct[i]).print_x();
    }

    // Struct s({3, 3.14});
    Struct ss(1);
    Struct sss(3.141592);
    // std::cout << "s.x = " << s.x << " and s.y = " << s.y << "\n";    
    std::cout << "ss.x = " << ss.x << " and ss.y = " << ss.y << "\n";
    std::cout << "sss.x = " << sss.x << " and sss.y = " << sss.y << "\n";


    return 0;
}
