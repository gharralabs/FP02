#define _CRT_SECURE_NO_WARNINGS


#include <iostream>

int main()
{
	FILE* arquivo;
	arquivo = fopen("c:/temp/meuarquivo.txt",
					"r");
	char letra;

	while ( (letra = fgetc(arquivo))  != EOF)
	{
		printf("%c", letra);
	}

	fclose(arquivo);
	return 0;
}