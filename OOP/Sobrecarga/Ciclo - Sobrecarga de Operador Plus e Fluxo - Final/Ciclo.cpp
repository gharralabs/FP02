#include "Ciclo.h"
#include <iostream>

Ciclo::Ciclo(unsigned int minimo,
			 unsigned int maximo,
			 unsigned int atual) 
{
	m_minimo = minimo;
	m_maximo = maximo;
	m_atual = atual; 	// checar a faixa usando um setter
}

unsigned int Ciclo::GetAtual() const
{
	return m_atual;
}

/// note: A função a seguir não é um membro da classe Ciclo
Ciclo operator+(const Ciclo& p1, const unsigned int p2)
{
	auto novo = p1.m_atual + p2;

	if (novo > p1.m_maximo)
	{
		auto tmp = novo - p1.m_maximo;
		int qtde = p1.m_maximo - p1.m_minimo + 1;
		tmp = tmp % qtde;
		tmp = tmp == 0 ? qtde : tmp;
		tmp -= 1;
		tmp += p1.m_minimo;
		novo = tmp;
	}

	Ciclo c1(p1.m_minimo, p1.m_maximo, novo);

	return c1;
}

std::ostream& operator << (std::ostream& out, Ciclo& ciclo)
{
	out << ciclo.GetAtual();
	return out;
}