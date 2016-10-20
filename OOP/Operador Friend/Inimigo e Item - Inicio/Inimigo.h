#pragma once
#include "PocaoCura.h"
#include <stdlib.h>
#include <iostream>

class Inimigo
{
private:
	PocaoCura* pocao;

public:
	Inimigo()
	{
		pocao = new PocaoCura(rand() % 10);
	}

	void UsarPocao()
	{
		std::cout << pocao->GetEnergia() << std::endl;
	}

	~Inimigo()
	{
		delete pocao;
	}
};