#pragma once
#include "Cachorro.h"
#include "Passaro.h"

class Abomina��o :
	public Cachorro,
	public Passaro
{
public:
	void LatirEPiar()
	{
		Latir();
		Piar();
	}
};