#include <iostream>
#include <time.h>
#define TOTAL_JOGADORES 4
#include "Inimigo.h"

int main()
{
	srand(time(NULL));
	Inimigo ini(TOTAL_JOGADORES, 30);
	
	// Inimigo ataca aleatoriamente
	ini.Atacar();

	// Inimigo ataca jogador 2
	ini.Atacar(2);

	// Inimigo ataca jogador 1 com 500 de força
	ini.Atacar(1, 500);

	system("pause");
	return 0;
}