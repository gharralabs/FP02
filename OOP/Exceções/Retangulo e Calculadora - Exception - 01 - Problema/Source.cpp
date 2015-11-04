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

	// tratamento de divisão por zero aqui
	if (b == 0.0)
		std::cout << "Denominador não pode ser zero" << std::endl;
	else
		calc.Dividir(a, b);

	return 0;
}
