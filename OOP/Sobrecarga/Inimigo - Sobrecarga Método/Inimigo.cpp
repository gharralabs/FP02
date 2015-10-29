#include "Inimigo.h"
#include <iostream>

Inimigo::Inimigo(int quantidadeJogadores, 
				 int for�a)
{
	m_quantidadeJogadores = quantidadeJogadores;
	m_for�a = for�a;
}

void Inimigo::Atacar(int jogador, int for�a)
{
	std::cout << "Jogador: "
			  << jogador
			  << " recebeu "
			  << for�a
			  << " de dano."
			  << std::endl;
}

void Inimigo::Atacar(int jogador)
{
	Atacar(jogador, m_for�a);
}

void Inimigo::Atacar()
{
	int jogador = rand() % m_quantidadeJogadores + 1;
	Atacar(jogador, m_for�a);
}

