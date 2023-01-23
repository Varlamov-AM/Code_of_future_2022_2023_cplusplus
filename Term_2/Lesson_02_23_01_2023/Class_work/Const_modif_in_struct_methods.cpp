#include <iostream>

struct MethodsStruct {
    void NonConstMethod() {
        std::cout << "NonConstMethod\n";
    }
    void ConstMethod() const {
        std::cout << "ConstMethod\n";
    }
};

struct SampleStruct {
    SampleStruct() {
        std::cout << "default\n";
    }
    SampleStruct(const SampleStruct&) {
        std::cout << "copy\n";
    }

    void Print() const {
        std::cout << "Hello\n";
    }
};

void function(const SampleStruct& sample) {
    sample.Print();
}

int main() {
    /*    MethodsStruct m;
    m.NonConstMethod(); // Ok
    m.ConstMethod(); // Ok

    MethodsStruct& ref = m;
    ref.NonConstMethod(); // Ok
    ref.ConstMethod(); // Ok

    const MethodsStruct& constRef = m;
    constRef.NonConstMethod(); // CE
    constRef.ConstMethod(); // Ok

    const MethodsStruct justConst;
    constRef.NonConstMethod(); // CE
    constRef.ConstMethod(); // Ok */
    
    SampleStruct s;
    function(s);

    return 0;
}

