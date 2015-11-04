#include <iostream>
class Animal
{
	virtual void semEleNaoFunciona() = 0;
};

class Mamifero : public Animal
{
	void semEleNaoFunciona() { }
};

class Repetil : public Animal
{
	 void semEleNaoFunciona() { }
};


class AnalisadorAnimais
{
public:
	void Identificar(Animal* animal)
	{
		if (dynamic_cast<Mamifero*>(animal) != NULL)
			std::cout << "O animal e um mamifero" << std::endl;

		else if (dynamic_cast<Repetil*>(animal) != NULL)
			std::cout << "O animal e um repetil" << std::endl;
	}
};

int main()
{
	Mamifero* m = new Mamifero;
	Repetil* r = new Repetil;

	AnalisadorAnimais analisador;
	analisador.Identificar(m);
	std::cout << "--------------------------------------------------------------------------------" << std::endl;
	analisador.Identificar(r);
	
	return 0;
}