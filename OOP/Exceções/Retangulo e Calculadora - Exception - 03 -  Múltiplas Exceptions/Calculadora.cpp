#include "Calculadora.h"

double Calculadora::Dividir(double a, double b)
{
	if (b == 0.0)
		throw std::exception("denominador inv�lido");

	return a / b;
}