#pragma once
#include <iostream>
#include "Animal.h"

class Passaro : public Animal
{
public:
	Passaro()
	{
		std::cout << "Passaro criado" << std::endl;
	}

	void Andar()
	{
		std::cout << "Passaro andando" << std::endl;
	}

	void Piar()
	{
		std::cout << "Piu Piu" << std::endl;
	}
};