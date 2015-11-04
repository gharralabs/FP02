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
	auto novo = m_atual + valor;

	if (novo <= m_maximo)
		m_atual = novo;
	else
	{
		auto tmp = novo - m_maximo;
		int qtde = m_maximo - m_minimo + 1;
		tmp = tmp % qtde;
		tmp = tmp == 0 ? qtde : tmp;
		tmp -= 1;
		tmp += m_minimo;
		m_atual = tmp;
	}
}

unsigned int Ciclo::GetAtual() const
{
	return m_atual;
}
