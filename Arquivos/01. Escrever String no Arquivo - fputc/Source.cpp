#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


int main()
{
	char texto[100];
	printf("Digite um texto");
	gets(texto);

	int t = strlen(texto);
	FILE* arquivo;
	arquivo = fopen("c:/temp/meuarquivo.txt",
					"w");
	if (arquivo == nullptr)
	{
		printf("Ocorreu um erro ao abrir o arquivo");
		return 1;
	}
	
	for (int i = 0; i < strlen(texto); i++)
	{
		fputc(texto[i], arquivo);
	}

	fclose(arquivo);

	return 0;
}