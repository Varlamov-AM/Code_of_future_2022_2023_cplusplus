#include <iostream>

struct Point {
    int x = 0;
    int y = 0;
    
    Point& operator+=(const Point& another) {
        x += another.x;
        y += another.y;
        return *this;
    }
};

Point operator+(const Point& left, const Point& right) {
    Point res = left;
    res += right;
    return res;
}

std::ostream& operator<<(std::ostream& out, const Point& v) {
    out << "(" << v.x << " " << v.y << ")";
    return out;
}
std::istream& operator>>(std::istream& in, Point& v) {
    in >> v.x >> v.y;
    return in;
}


int main(){

    Point a = {5, 6};
    Point b = {1, 2};
    Point c = a + b;
    std::cout << "(" << c.x << " " << c.y << ")\n";
    std::cout << c << "\n";
    return 0;
}

