#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_MAX_SIZE 200
#include <iostream>

int main()
{

	FILE* arquivo1;
	arquivo1 = fopen("meuarquivo.txt", "w");

	fputs("Você queria sair\n", arquivo1);
	fputs("mas a única balada que vai ver no fim de semana\n", arquivo1);
	fputs("é essa com as luzes do seu modem piscando.\n", arquivo1);
	fclose(arquivo1);


	FILE* arquivo;
	arquivo = fopen("meuarquivo.txt", "r");

	char texto[BUFFER_MAX_SIZE];

	while (fgets(texto, BUFFER_MAX_SIZE, arquivo) != NULL)
	{
		printf("%s", texto);
	}
	
	fclose(arquivo);
	system("pause");
	return 0;
}