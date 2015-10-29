#pragma once
class Inimigo
{
private:
	int m_quantidadeJogadores;
	int m_força;
public:
	Inimigo(int p_quantidadeJogadores, 
			int p_força);
	void Atacar();
	void Atacar(int jogador);
	void Atacar(int jogador, int força);
	
	
};