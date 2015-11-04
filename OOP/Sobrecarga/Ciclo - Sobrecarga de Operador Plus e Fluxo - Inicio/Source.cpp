#include "Ciclo.h"
#include <iostream>


int main()
{
	Ciclo c4(3, 11, 3);
	c4.Adicionar(12);
	std::cout << std::endl << "Atual: " << c4.GetAtual();

	c4.Adicionar(32);
	std::cout << std::endl << "Atual: " << c4.GetAtual();

	return 0;
}