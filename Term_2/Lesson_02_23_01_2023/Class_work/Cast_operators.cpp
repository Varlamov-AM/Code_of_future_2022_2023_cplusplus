#include <iostream>

struct UserId {
    int id = 0;
    operator int() {
        return id;
    }
};

int main() {
    UserId id = {15};
    int intID = id; // CE

    return 0;
}
