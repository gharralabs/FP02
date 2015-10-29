#include "Circulo.h"
#include <iostream>


Circulo::Circulo(int x, int y, int raio) : Forma(x, y)
{
	m_raio = raio;
}

void Circulo::DesenharCirculo()
{
	std::cout << "Circulo (" << "x: " << m_x << ","
		<< "y: " << m_y << ","
		<< "r: " << m_raio << ")"
		<< std::endl;
}


void Circulo::Desenhar()
{
	DesenharCirculo();
}





