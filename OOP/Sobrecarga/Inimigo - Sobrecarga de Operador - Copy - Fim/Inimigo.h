#pragma once
#define INIMIGO_TAMANHO_NOME 150
class Inimigo
{
private:
	char* m_nome;
public:
	Inimigo();
	~Inimigo();
	void SetNome(char* nome);
	char* GetNome() const;
	Inimigo& operator=(const Inimigo& outro);

};