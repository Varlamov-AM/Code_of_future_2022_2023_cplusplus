#include <iostream>
#include <string>

class People{
public:
    std::string profession;
};

class Worker : public People{
public:
    Worker(){
        profession = "Worker";
    }
};

class Director : public People{
public:
    Director(){
        profession = "Director"; 
    }
};

int main(){

    People* People1 = new Worker();
    People* People2 = new Director();

    std::cout << "People1.profession = " << People1->profession << "\n";
    std::cout << "People2.profession = " << People2->profession << "\n";

    delete People1;
    delete People2;

    return 0;
}