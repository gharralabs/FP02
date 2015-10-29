#include "Ciclo.h"
#include <iostream>


int main()
{
	Ciclo c1(1, 10, 1);

	std::cout << std::endl << "Atual: " << c1;

	c1 = c1 + 5;
	std::cout << std::endl << "Atual: " << c1;

	c1 = c1 + 5;
	std::cout << std::endl << "Atual: " << c1
			  << std::endl;

	system("pause");
	return 0;
}