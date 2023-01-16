#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    std::cout << std::setprecision(5); 
    std::cout << std::fixed;
    
    double a;
    double b;
    double c;

    std::cin >> a >> b >> c;

    double D = b * b - 4 * a * c;

    if (D > 0.){
	double x1 = (-b - sqrt(D))/(2 * a);
	double x2 = (-b + sqrt(D))/(2 * a);
	if (x1 > x2){
	    std::cout << x1 << std::endl << x2 << std::endl;
	} else {
	    std::cout << x2 << std::endl << x1 << std::endl;
	}
    	
    } else {
    	return 0;
    }

    return 0;
}
