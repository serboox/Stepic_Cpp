
#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	unsigned int n = 0, x=0;
	std::cin >> n;
	if ((n%2) == 0) {
		n++;
	}
	n++;
	std::cout << n << std::endl;
	return 0;
}
