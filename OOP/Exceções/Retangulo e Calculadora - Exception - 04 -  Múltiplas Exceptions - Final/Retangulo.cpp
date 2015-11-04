#include "Retangulo.h"
#include "RetanguloException.h"

Retangulo::Retangulo(int x, int y, int largura, int altura)
{

	if (x < 0)
		throw RetanguloException("X nao pode ser menor que zero.");

	if (y < 0)
		throw RetanguloException("Y nao pode ser menor que zero.");

	if (largura < 0)
		throw RetanguloException("Largura nao pode ser menor que zero.");

	if (altura < 0)
		throw RetanguloException("Largura nao pode ser menor que zero.");


	m_x = x;
	m_y = y;
	m_largura = largura;
	m_altura = altura;
}


