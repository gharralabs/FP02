#include <iostream>
#include "Abominacao.h"

int main()
{
	Abominação ab;
	ab.Latir();
	ab.Piar();
	ab.LatirEPiar();

	((Passaro)ab).Andar();
	((Cachorro)ab).Andar();

	system("pause");
	return 0;
}
