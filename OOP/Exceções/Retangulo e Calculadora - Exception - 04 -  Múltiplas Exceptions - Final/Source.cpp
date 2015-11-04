// EX: CLASSE EQUAÇÃO DO SEGUNDO GRAU
#include "Retangulo.h"
#include "Calculadora.h"
#include "RetanguloException.h"
#include "CalculadoraException.h"
#include <iostream>

int main()
{

	int x, y, largura, altura;
	double a, b;
	Calculadora calc;

	try
	{
		std::cout << "A: " << std::endl;
		std::cin >> a;

		std::cout << "B: " << std::endl;
		std::cin >> b;

		std::cout << calc.Dividir(a, b) << std::endl;

		std::cout << "X: " << std::endl;
		std::cin >> x;

		std::cout << "Y: " << std::endl;
		std::cin >> y;

		std::cout << "Largura: " << std::endl;
		std::cin >> largura;

		std::cout << "Altura: " << std::endl;
		std::cin >> altura;

		Retangulo r1(x, y, largura, altura);

	}
	catch (CalculadoraException& ex)
	{
		// Trate os erros da calculadora aqui..
	}

	catch (RetanguloException& ex)
	{
		// Trate os erros do retangulo aqui
	}
	catch (std::exception& ex)
	{
		// demais erros...
	}

	return 0;
}
