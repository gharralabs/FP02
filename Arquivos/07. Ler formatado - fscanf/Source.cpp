#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int main()
{
	FILE* arquivo;
	arquivo = fopen("c:/temp/meuarquivo.txt",
					"r");

	int t1, t2, r;
	char letra;
	for (int i = 0; i <= 9; i++)
	{
		fscanf(arquivo,
			"%d * %d = %d %c",
			&t1, &t2, &r, &letra);
		
		printf("%d, %d, %d, %c\n",
			t1, t2, r, letra);
	}

	fclose(arquivo);
	return 0;
}
