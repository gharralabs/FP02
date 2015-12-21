#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	FILE* arquivo;
	arquivo = fopen("c:/temp/meuarquivo.txt"
				   ,"r" );

	char letra;
	for (int i = 0; i < 5; i++)
	{
		letra = fgetc(arquivo);
		printf("%c\n", letra);
	}

	fclose(arquivo);

	system("pause");
	return 0;
}