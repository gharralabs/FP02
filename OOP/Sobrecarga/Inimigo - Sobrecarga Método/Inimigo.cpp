#include "Inimigo.h"
#include <iostream>

Inimigo::Inimigo(int quantidadeJogadores, 
				 int força)
{
	m_quantidadeJogadores = quantidadeJogadores;
	m_força = força;
}

void Inimigo::Atacar(int jogador, int força)
{
	std::cout << "Jogador: "
			  << jogador
			  << " recebeu "
			  << força
			  << " de dano."
			  << std::endl;
}

void Inimigo::Atacar(int jogador)
{
	Atacar(jogador, m_força);
}

void Inimigo::Atacar()
{
	int jogador = rand() % m_quantidadeJogadores + 1;
	Atacar(jogador, m_força);
}

