#include "Inimigo.h"
#include <iostream>

void Inimigo::SetNome(char* nome)
{		
	m_nome = nome; // n�o fa�a isto em casa
}

char* Inimigo::GetNome() const
{
	return m_nome;
}