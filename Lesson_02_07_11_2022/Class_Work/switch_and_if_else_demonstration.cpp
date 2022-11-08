#include <iostream>

int main(){
	
	int a;

	std::cin >> a;

	int r = a & 1;

	// condition operator:
	// if (bool flag){
	//	body if flag == true
	// } else {
	//	body if flag == false | flag != true | !flag
	// }
	
	if (a & 1){
		std::cout << "odd" << std::endl;
	} else {
		std::cout << "even" << std::endl;
		if (a > 100){
			std::cout << "and large than 100" << std::endl;
		} else {
			std::cout << "and smaller than  100" << std::endl;
		}
	}

	switch (a){
		case 1:
			std::cout << "a = 1" << std::endl;
			break;
		case 2: 
			std::cout << "a = 2" << std::endl;
			break;
		case 3: 
			std::cout << "a != 2 and a != 1" << std::endl;
			break;
		default:
			std::cout << "a != 1, 2, 3" << std::endl;
			break;
	}



	return 0;
}
