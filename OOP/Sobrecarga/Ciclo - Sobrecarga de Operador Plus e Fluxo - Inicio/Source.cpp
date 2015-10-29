#include "Ciclo.h"
#include <iostream>


int main()
{

	Ciclo c1(1, 10);

	std::cout << std::endl << "Atual: " << c1.GetAtual();

	c1.Adicionar(5);
	std::cout << std::endl << "Atual: " << c1.GetAtual();

	c1.Adicionar(5);
	std::cout << std::endl << "Atual: " << c1.GetAtual();

	return 0;
}