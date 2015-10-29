#include "Forma.h"

Forma::Forma(int x, int y)
{
	m_x = x;
	m_y = y;
}

void Forma::SetX(int p_x)
{
	m_x = p_x;
}

void Forma::SetY(int p_y)
{
	m_y = p_y;
}

int Forma::GetY()
{
	return m_y;
}

int Forma::GetX()
{
	return m_x;
}

