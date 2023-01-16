#include <iostream>

int main(){

    	int x = 0;
	switch (x) {
        	case 0:
	            x += 2;
        	    std::cout << 1;
	        case 1:
        	    x += 2;
	            std::cout << 2;
        	case 2:
	            x += 2;
	            std::cout << 1;
	        case 4:
	            x += 2;
	            std::cout << 1;
	            break;
	        case 6:
	            x += 2;
	            std::cout << 1;
	        default:
	            std::cout << 2;
    }
	std::cout << std::endl;

	return 0;
}
