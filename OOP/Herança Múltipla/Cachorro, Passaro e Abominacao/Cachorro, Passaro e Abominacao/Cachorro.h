#pragma once
#include "Animal.h"

class Cachorro : public Animal
{
public:
	Cachorro()
	{
		std::cout << "Cachorro criado" << std::endl;
	}
	void Latir()
	{
		std::cout << "Au Au" << std::endl;
	}

	void Andar()
	{
		std::cout << "Cachorro andar" << std::endl;
	}
};