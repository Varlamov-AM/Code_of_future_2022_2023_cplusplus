#include <iostream>
#include <string>

/*

    In cpp we have Exceptions, which are realized with
    simple ststements:

        1. operator throw ("Throw exception")
        2. block try ... catch

    1. Exception correct works only with objects!


    class exception {
        virtual const char* what() const;
    }

*/

class DivideByZeroException{
public:
    const char* what() const {
        const char* ErrorMessage = "We try to divide by zero!";
        return ErrorMessage;
    }
};

class NegativeNumberInInput{
public:
    const char* what() const {
        const char* ErrorMessage = "We try to divide negative number!";
        return ErrorMessage;
    }
};

class ParentException{};

class Child1Exception : public ParentException {};

class Child2Exception : public ParentException {};

double DivideNonNegative(double a, double b){
    // Good realization!
    if (a >= 0 and b >= 0){
        if (b != 0.){
            Child2Exception ErrorClassObject;
            throw ErrorClassObject;
            return a/b;
        } else {
            DivideByZeroException ErrorClassObject;
            throw ErrorClassObject;
        }
    } else {
        NegativeNumberInInput ErrorClassObject;
        throw ErrorClassObject;
    }


    

    // Bad realization!
    // if (b != 0.){
    //     return a/b;
    // } else {
    //     DivideByZeroException ErrorClassObject;
    //     throw ErrorClassObject;
    // }

    // if (a >= 0 and b >= 0){
    // } else {
    //     NegativeNumberInInput ErrorClassObject;
    //     throw ErrorClassObject;
    // }
    
    
}

int main(){

    int a, b;

    std::cin >> a >> b;
    try{
        std::cout << DivideNonNegative(a, b) << "\n";
    } catch (const DivideByZeroException& ThrowedErrorObject){
        std::cout << "Got error:\n" << ThrowedErrorObject.what() << "\n";
    } catch (const NegativeNumberInInput& ThrowedErrorObject){
        std::cout << "Got error:\n" << ThrowedErrorObject.what() << "\n";
    } catch (const Child1Exception& ThrowedErrorObject){
        std::cout << "Catch Child1!\n";
    } catch (const Child2Exception& ThrowedErrorObject){
        std::cout << "Catch Child2!\n";
    } catch (const ParentException& ThrowedErrorObject){
        std::cout << "Catch Parent!\n";
    } catch (...){
        std::cout << "Got \"all\" errors!\n";  
    }

    return 0;
}