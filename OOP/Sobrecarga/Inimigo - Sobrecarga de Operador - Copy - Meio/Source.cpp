#include <iostream>
#include <time.h>
#define BUFFER_SIZE 150
#include "Inimigo.h"

int main()
{
	char* buffer;
	buffer = new char[BUFFER_SIZE];
	std::cout << "Informe o nome do inimigo: " << std::endl;
	std::cin >> buffer;
	
	Inimigo inimigo1;
	inimigo1.SetNome(buffer);

	Inimigo inimigo2;
	inimigo2 = inimigo1;

	std::cout << "Nome inimigo 1: " << inimigo1.GetNome() << std::endl;
	std::cout << "Nome inimigo 2: " << inimigo2.GetNome() << std::endl;
	
	std::cout << "Informe o novo nome do inimigo: " << std::endl;
	std::cin >> buffer;
	
	std::cout << "Nome inimigo 1: " << inimigo1.GetNome() << std::endl;
	std::cout << "Nome inimigo 2: " << inimigo2.GetNome() << std::endl;
	
	std::cout << "Ao mudar o nome do inimigo1 " 
			  << "o nome do inimigo2 não deveria ser alterado..." << std::endl;
	inimigo1.SetNome(buffer);

	std::cout << "Nome inimigo 1: " << inimigo1.GetNome() << std::endl;
	std::cout << "Nome inimigo 2: " << inimigo2.GetNome() << std::endl;
	 

	delete buffer;
	return 0;
}