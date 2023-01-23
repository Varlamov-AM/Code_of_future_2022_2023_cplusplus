#include <iostream>
#include <vector>
#include <string>

template <typename First_type, typename Second_type>
struct Pair {

    First_type first;
    Second_type second;

    Pair(First_type f, Second_type s){
        first = f;
        second = s;
    }

    void Print(){
        std::cout << "first = " << first << "; second = " << typeid(second).name() << "\n";
        return;
    }

};

template <typename Arg_vec_type>
struct Vect_with_templ_arg {

    std::vector<Arg_vec_type> vec;
    Vect_with_templ_arg(){
        std::cout << typeid(Arg_vec_type).name() << "\n";
    }
};

int main(){

    int i1 = 1, i2 = 2;
    double d1 = 1.4, d2 = 2.8;
    std::string str = "Hello, world";
    std::vector<int> vec = {1, 2, 3};

    Pair<int, int> p1 = Pair(i1, i2);
    Pair<double, double> p2 = Pair(d1, d2);
    Pair<std::string, std::vector<int>> p3 = Pair(str, vec);

    Vect_with_templ_arg<int> vect = Vect_with_templ_arg<int>();

    std::pair pair = std::make_pair(str, vect);
    std::cout << pair.first << "\n";

    p1.Print();
    p2.Print();
    p3.Print();

    return 0;
}
