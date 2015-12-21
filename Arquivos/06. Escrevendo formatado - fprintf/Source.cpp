#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int main()
{
	FILE* arquivo;
	arquivo = fopen("c:/temp/meuarquivo.txt",
		  "w");

	for (int i = 0; i <= 9; i++)
	{
		fprintf(arquivo,
			"%d * %d = %d %c\n",
			i, i, i * i, i + 65);
	}
	
	fclose(arquivo);

	return 0;
}