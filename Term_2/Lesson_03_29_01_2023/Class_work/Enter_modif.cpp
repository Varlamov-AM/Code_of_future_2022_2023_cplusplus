#include <iostream>

struct Struct {

private:

    int i = 0;
    double d = 3.14;
    bool flag = true;

    Struct(){};

    void Set_field(int input){

        i = input;

        return;
    }

public:

    Struct(int input){
        i = input;
    }

    int Get_field(){return i;}


    ~Struct(){
            std::cout << "We call destructor and field i = " << i << "\n";
    };


};


int main(){

    int a = 1;

    Struct s = Struct(a);
   
    s.~Struct();

    auto res = s.Get_field();

    std::cout << "s.i = " << res << "\n";

    return 0;
}
