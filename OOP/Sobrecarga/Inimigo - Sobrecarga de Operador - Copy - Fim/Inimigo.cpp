#include "Inimigo.h"
#include <iostream>

Inimigo::Inimigo()
{
	m_nome = new char[INIMIGO_TAMANHO_NOME];
}

void Inimigo::SetNome(char* nome)
{		
	strcpy_s(m_nome, INIMIGO_TAMANHO_NOME, nome);
}

char* Inimigo::GetNome() const
{
	return m_nome;
}

Inimigo::~Inimigo()
{
	delete m_nome;
}

Inimigo& Inimigo::operator=(const Inimigo& original)
{
	if (&original == this)
		return *this;
	
	strcpy_s(this->m_nome, INIMIGO_TAMANHO_NOME, original.m_nome);
	return *this;
}
