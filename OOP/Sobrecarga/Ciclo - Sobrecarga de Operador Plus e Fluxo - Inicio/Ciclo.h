#pragma once
class Ciclo
{

private:
	unsigned int m_minimo,
				 m_maximo,
				 m_atual;
public:
	Ciclo(unsigned int minimo, 
		  unsigned int maximo,
		  unsigned int atual);

	void Adicionar(unsigned int valor);
	unsigned int GetAtual();
};

