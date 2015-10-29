#include <iostream>
#include <vector>

#include "Retangulo.h"
#include "Circulo.h"

void desenhar(Forma& f1)
{
	f1.Desenhar();
}

int main()
{
	Retangulo r1(10, 10, 100, 200);
	Circulo c1(10, 20, 50);


	std::cout << "Desenhando com a funcao: " << std::endl;
	desenhar(r1);
	desenhar(c1);

	
	std::cout << std::endl
			  << "Desenhando com loop: " << std::endl;
	Forma* formas[2];
	formas[0] = new Circulo(10, 20, 20);
	formas[1] = new Retangulo(10, 20, 30, 40);

	for (int i = 0; i < 2; i++)
	{
		formas[i]->Desenhar();
	}


	system("pause");
	return 0;
}