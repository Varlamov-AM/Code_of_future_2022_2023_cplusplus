#include <iostream>

// Standart syntaxis if struct

/*
struct Struct {

    type1 field1;
    type2 field2;   
    type3 field3;
    ...

    Struct(){};
    ~Struct(){};

    type1 method1();
    type2 method2();
    ...

};
*/ 

// We can use template:

// We have two objects with type T, and we can compare our 
// objects: <, >, =, !=,
// How define function, which object is large?

template <typename T>
T max(T a, T b){
    return a < b ? b : a;
}

template <typename T>
T& print_from_ref_with_amp(T& ref){
    std::cout << "Before change " << ref << "\n";
    ref += 1;
    std::cout << "After change " << ref << "\n";
    return ref;
}

template <typename T>
T print_from_ref(T ref){
    std::cout << "Before change " << ref << "\n";
    ref += 1;
    std::cout << "After change " << ref << "\n";
    return ref;
}


int main(){

    int ai, bi;
    double ad, bd;
    char ac, bc;
    bool ab, bb;

    int& ai_ref = ai;

    ai = 3;
    bi = 4;
    ad = 3.14;
    bd = 4.15;
    ac = 'a';
    bc = 'b';
    ab = false;
    bb = true;

    // if we want specify type of args we can use:
    // max<type_of_args>

    // std::cout << "ai, bi: " << max<int>(ai, bi) << "\n";
    // std::cout << "ad, bd: " << max<double>(ad, bd) << "\n";
    // std::cout << "ac, bc: " << max(ac, bc) << "\n";
    // std::cout << "ab, bb: " << max(ab, bb) << "\n";

    int k  = print_from_ref(ai_ref);
    int& l = print_from_ref_with_amp(ai_ref);

    std::cout << &ai << " " << &(ai_ref) << " " << &k << "\n";
    std::cout << &ai << " " << &(ai_ref) << " " << &l << "\n";
 
    /*std::cout << "In main ai = " << ai << "\n";
    int& ai_ref_new = print_from_ref(ai_ref);
    std::cout << "In main ai_ref before change in main = " << ai_ref 
              << " and ai_ref_new before change in main = " 
              << ai_ref_new << "\n";

    ai_ref_new += 2;

    std::cout << "In main ai_ref after change in main = " << ai_ref
              << " and ai_ref_new after change in main = "
              << ai_ref_new << "\n";*/




    return 0;
}
