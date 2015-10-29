#include "Ciclo.h"


Ciclo::Ciclo(unsigned int minimo, 
			 unsigned int maximo,
			 unsigned int atual)
{
	m_minimo = minimo;
	m_maximo = maximo;
	m_atual = atual;
}

void Ciclo::Adicionar(unsigned int valor)
{
	unsigned int novo = m_atual + valor;
	
	if (novo > m_maximo)
		m_atual = m_minimo + (novo - m_maximo);
	else
		m_atual = novo;
}

unsigned int Ciclo::GetAtual()
{
	return m_atual;
}
