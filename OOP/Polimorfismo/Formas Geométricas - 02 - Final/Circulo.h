#pragma once
#include "Forma.h"

class Circulo : public Forma
{
private:
	int m_raio;

public:
	Circulo(int x, int y, int raio);
	void DesenharCirculo();
	void Desenhar();
};

