
#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	unsigned int n = 0;
	std::cin >> n;
	/*if (n < 10) {
		std::cout << n;
		return 0;
	}
	else if (n < 100) {
		std::cout << (n - (n % 10)) / 10 << std::endl;
		return 0;
	}
	std::cout << ((n % 100) - (n % 10))/ 10 << std::endl;*/
	std::cout << (n % 100) / 10;
	return 0;
}
