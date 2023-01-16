#include <iostream>
#include <cmath>

int main(){

	int a = 36;
	int k = 4;

	std::cout << "a << k = " << (a << k) << " a = " << a << " k = " << k << " a * 2^k = " << a * pow(2, k) << std::endl;
	std::cout << "a >> k = " << (a >> k) << " a = " << a << " k = " << k << " a / 2^k = " << a / pow(2, k) << std::endl;

	int res_of_2_power = 1 << 10;
	std::cout << res_of_2_power << std::endl;

	std::cout << (a ^ k ^ k) << std::endl;

	return 0;
}
