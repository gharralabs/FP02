#include "Retangulo.h"
#include <iostream>

Retangulo::Retangulo(int x,
					 int y,
					 int largura,
					 int altura) 
{
	m_x = x;
	m_y = y;
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


void Retangulo::SetX(int p_x)
{
	m_x = p_x;
}

void Retangulo::SetY(int p_y)
{
	m_y = p_y;
}

int Retangulo::GetY()
{
	return m_y;
}

int Retangulo::GetX()
{
	return m_x;
}