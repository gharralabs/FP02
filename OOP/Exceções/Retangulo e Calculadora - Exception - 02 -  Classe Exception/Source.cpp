// EX: CLASSE EQUAÇÃO DO SEGUNDO GRAU
#include "Calculadora.h"
#include <iostream>

int main()
{
	double a, b;
	Calculadora calc;
	std::cout << "A: " << std::endl;
	std::cin >> a;

	std::cout << "B: " << std::endl;
	std::cin >> b;

	try
	{
		calc.Dividir(a, b);
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what();
	}

	return 0;
}
