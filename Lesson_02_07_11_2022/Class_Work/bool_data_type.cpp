#include <iostream>

int main(){

	bool x = true;
	bool y = false;

	// x = 1 | true and y = 0 | false
	
	bool z = 2;
	bool w = -1;

	// false -> 0; true -> !0
	
	bool eq1 = 5 < 6;
	bool eq2 = 5 > 6;

	// Logic operations: Logic "and" -> &&, Logic "or" -> ||, Logic "n" -> !

	std::cout << x << " " << y << " " << z << " " << w << std::endl;
	std::cout << eq1 << " " << eq2 << std::endl;

	bool a = true;
	bool b = false;

	bool pi = 3.1415926;
	bool float_zero = 0.15 * 2 - 0.1 - 0.2;   // != 0
	bool another_float_zero = 0.375  - 0.125 * 2 - 0.125; // = 0

	std::cout << "another_float_zero = " << another_float_zero << std::endl;
	std::cout << "float_ zero = " << float_zero << " And equation on float zero have result = " << 0.15 * 2 - 0.1 - 0.2 << " = 0.15 * 2 - 0.1 - 0.2" << std::endl;
	std::cout << pi << std::endl;
	std::cout << "a = " << a << " b = " << b << std::endl;   // a = 1 b = 0
	std::cout << "!a = " << (!a) << std::endl; 	         // !a = 0
	std::cout << "a + b = " << (a || b) << std::endl;        // a + b = 1
	std::cout << "a * b = " << (a && b) << std::endl;        // a * b = 0
	std::cout << (5 == 5) << std::endl;                      // 1
	std::cout << (5 <= 4) << std::endl;								 
	return 0;
}
