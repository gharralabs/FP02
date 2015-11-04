#include "Ciclo.h"
#include <iostream>


int main()
{
	Ciclo c1(3, 10, 3);

	std::cout << std::endl << "Atual: " << c1;

	c1 = c1 + 5;
	std::cout << std::endl << "Atual: " << c1;

	c1 = c1 + 5;
	std::cout << std::endl << "Atual: " << c1
			  << std::endl;

	system("pause");
	return 0;
}