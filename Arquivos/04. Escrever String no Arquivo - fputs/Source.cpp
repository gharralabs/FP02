#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int main()
{
	FILE* arquivo;
	arquivo = fopen("c:/temp/meuarquivo.txt", "w");

	char texto[100];
	printf("Digite o texto:");
	gets(texto);
	
	fputs(texto, arquivo);

	fclose(arquivo);

	return 0;
}