#include "Calculadora.h"
#include <iostream>

double Calculadora::Dividir(double a, double b)
{
	// ou aqui....
	if (b != 0.0)
	{
		std::cout << "Denominador n�o pode ser zero" << std::endl;
		return -1.0; //  O que retornar?
	}
	else
		return a / b;
}