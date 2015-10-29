#include <iostream>

#include "Retangulo.h"
#include "Circulo.h"

int main()
{
	Retangulo r1(10, 10, 100, 200);
	r1.SetX(15);
	r1.SetY(15);
	
	Circulo c1(20, 30, 50);
	c1.SetX(15);
	c1.SetY(15);
	
	r1.DesenharRetangulo();
	c1.DesenharCirculo();

	system("pause");
	return 0;
}