#pragma once
class Inimigo
{
private:
	int m_quantidadeJogadores;
	int m_for�a;
public:
	Inimigo(int p_quantidadeJogadores, 
			int p_for�a);
	void Atacar();
	void Atacar(int jogador);
	void Atacar(int jogador, int for�a);
	
	
};