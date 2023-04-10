#include <iostream>
#include <memory>

class DemontrateSmartPointers {
public:

    DemontrateSmartPointers(int a){
        field = a;
        std::cout << "We construct object of our class with a = " << field << "\n";
    }

    ~DemontrateSmartPointers(){
        std::cout << "We deconstruct object of our class with a = " << field << "\n";
    }

    int field;

};

void func(){
    for (int i = 0; i < 10; ++i){
        if (i == 8){
            double error = 6;
            throw error;
        }
    }
}

int main(){

    // std::unique_ptr<DemontrateSmartPointers> ptr_to_DSP (new DemontrateSmartPointers(1));
    auto sm_ptr_to_DSP = std::make_unique<DemontrateSmartPointers>(1);
    DemontrateSmartPointers* ns_ptr_to_DSP = new DemontrateSmartPointers(2);


    try {
        func();
    } catch (const double& error){
        std::cout << "Catch double error = " << error << "\n";
    } catch (...){

    }

    delete ns_ptr_to_DSP;

    return 0;
}