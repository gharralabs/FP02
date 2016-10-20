#pragma once
#include "Inimigo.h"
class PocaoCura
{

friend class Inimigo;

public:

	PocaoCura(int m_energia) : m_energia(m_energia)
	{
	}


	int GetEnergia() const
	{
		return m_energia;
	}


private:
	int m_energia;

};