
#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	unsigned int n = 0, x =0, y =0, z=0;
	std::cin >> n;
	x = n / 100;
	y = (n % 100) / 10;
	z = n % 10;
	
	//std::cout << "x: " << x << std::endl;
	//std::cout << "y: " << y << std::endl;
	//std::cout << "z: " << z << std::endl;
	std::cout << x + y + z << std::endl;
	return 0;
}
