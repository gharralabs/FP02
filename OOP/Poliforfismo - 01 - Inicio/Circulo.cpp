#include "Circulo.h"
#include <iostream>


Circulo::Circulo(int x, int y, int raio)
{
	m_x = x;
	m_y = y;
	m_raio = raio;
}

void Circulo::DesenharCirculo()
{
	std::cout << "Circulo (" << "x: " << m_x << ","
							 << "y: " << m_y << ","
							 << "r: " << m_raio << ")"
							 << std::endl;
}


void Circulo::SetX(int p_x)
{
	m_x = p_x;
}

void Circulo::SetY(int p_y)
{
	m_y = p_y;
}

int Circulo::GetY()
{
	return m_y;
}

int Circulo::GetX()
{
	return m_x;
}



