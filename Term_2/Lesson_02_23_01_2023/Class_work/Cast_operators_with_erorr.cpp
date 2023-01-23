#include <iostream>

struct UserId {
    int id = 0;
    explicit UserId(int id) : id(id) {};
    explicit operator int() {
        return id;
    }
};

UserId operator+(const UserId& left, const UserId& right) {
    UserId res = left;
    res.id += right.id;
    return res;
}

int main() {
    UserId idCE = {15}; // CE
    UserId id = UserId(15); // OK
    
    id + 15; // CE
    int(id) + 15; // OK;
    id + UserId(15); // OK
}
