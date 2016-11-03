#include <iostream>
#include "Vetor.h"
int main()
{

	Vetor v1(10.f, 20.f);
	Vetor v2 = v1 + 20.f;

	std::cout << v2.GetX()
		<< ","
		<< v2.GetY();


	return 0;
}