#include "Retangulo.h"
#include <iostream>

Retangulo::Retangulo(int x,
					 int y,
					 int largura,
					 int altura) : Forma(x, y)
{
	m_largura = largura;
	m_altura = altura;
}

void Retangulo::DesenharRetangulo()
{
	std::cout << "Quadrado: ("
		<< "x: " << m_x << ","
		<< "y: " << m_y << ","
		<< "largura: " << m_largura << ","
		<< "altura: " << m_altura
		<< ")"
		<< std::endl;
}


void Retangulo::Desenhar()
{
	DesenharRetangulo();
}

