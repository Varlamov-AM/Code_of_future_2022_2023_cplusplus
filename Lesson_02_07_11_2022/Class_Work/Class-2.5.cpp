#include <iostream>

int main(){

	unsigned long long int a;
	unsigned int k;
	int c;
	unsigned long long int b = 1;

	std::cin >> a >> k >> c;

	switch(c) {
		case 1:
			if (a & (b << k)){
				std::cout << 1 << std::endl;
			} else {
				std::cout << 0 << std::endl;
			}
			break;
		case 2:
			a = (a | (b << k));
			std::cout << a << std::endl;
			break;
		case 3:
			a = (a & (~(b << k)));
			std::cout << a << std::endl;
			break;
    	default:
    		break;
	}

        return 0;
}
