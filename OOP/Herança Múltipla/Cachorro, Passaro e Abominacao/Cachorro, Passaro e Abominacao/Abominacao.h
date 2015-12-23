#pragma once
#include "Cachorro.h"
#include "Passaro.h"

class Abominação :
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