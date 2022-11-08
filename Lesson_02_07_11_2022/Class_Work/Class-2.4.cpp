#include <iostream>

int main(){

	double x;
	double y;

	double epsilon = 0.001;

	std::cin >> x >> y;

	if (x >= y){
		if (x - y > epsilon){
			std::cout << 0 << std::endl;
		} else {
			std::cout << 1 << std::endl;
		}
	} else {
		if (x - y < -epsilon){
                        std::cout << 0 << std::endl;
                } else {
                        std::cout << 1 << std::endl;
                }
	}


	return 0;
}
