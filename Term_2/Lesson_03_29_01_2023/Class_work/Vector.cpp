#include <iostream>
#include <ostream>

template<typename T>
class Vector {

    //
    // Dynamic array:
    // -size;
    // -capacity;
    // -push_back(x);
    // -pop_back();
    // -insert(place, x);
    // -At(index);
    //

private: 
    
    T* buffer;
    unsigned int size = 0;
    unsigned int capacity = 1;

    void SetNewCapacity(unsigned int new_cap){
        T* new_buffer = new T[new_cap];

        for (unsigned int i = 0; i < size; ++i){
            new_buffer[i] = buffer[i];
        }
        delete[] buffer;
        buffer = new_buffer;
    }

public:

    Vector(){
        buffer = new T[capacity];
    };

    ~Vector(){
        delete[] buffer;
    };

    T& At(unsigned int index){
        return buffer[index];
    };

    void PushBack(const T& object){
        if (size < capacity){
            unsigned int NewIndex = size;
            buffer[NewIndex] = object;
            ++size;
        } else {
            SetNewCapacity(2 * capacity);
            unsigned int NewIndex = size;
            buffer[NewIndex] = object;
            ++size;
        }
    };

    void PopBack(){
        --size;
    };

    void Resize(unsigned int new_size){
        if (new_size > capacity){
            SetNewCapacity(2 * new_size);
        }
        size = new_size;
    };

    T& operator[](unsigned int index){
        return buffer[index];
    };

    std::ostream& operator<< (std::ostream& out, const Vector<T>& v) {
        for (unsigned int i = 0; i < size; ++i){
            out << v[i] << "\n";
        }
        return out;
    };

};  

int main(){

    Vector<int> vec;

    std::cout << vec;

    vec.PushBack(1);
    vec.PushBack(2);
    vec.PushBack(3);

    std::cout << vec;

    vec.PopBack();

    std::cout << vec;

    return 0;
}
