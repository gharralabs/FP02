#pragma once
#include <iostream>

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
	unsigned int GetAtual() const;

	friend Ciclo operator+(const Ciclo& c1, const unsigned int valor);
	friend std::ostream& operator<<(std::ostream& out, Ciclo& ciclo);
	
	

};

