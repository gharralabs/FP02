#pragma once
#include "Forma.h"

class Retangulo : public  Forma
{
private:
	int m_largura,
		m_altura;

public:
	Retangulo(int x,
		int y,
		int largura,
		int altura);

	void DesenharRetangulo();
	void Desenhar();

};