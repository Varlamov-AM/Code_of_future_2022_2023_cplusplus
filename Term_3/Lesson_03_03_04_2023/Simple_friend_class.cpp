#include <iostream>

class MyClass {
private:
    int x;

public:
    MyClass() {
        x = 0;
    }
    friend class MyFriendClass;
};

class MyFriendClass {
public:
    void MyFriendFunction(MyClass obj) {
        obj.x = 10;
        std::cout << obj.x << "\n";
    }
};

int main() {
    MyClass myObj;
    MyFriendClass myFriend;
    myFriend.MyFriendFunction(myObj);
}