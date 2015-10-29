#pragma once

class Retangulo
{

private:
	int m_x,
		m_y,
		m_largura,
		m_altura;

public:
	Retangulo(int x, 
			  int y, 
			  int largura, 
			  int altura);

	void DesenharRetangulo();
	
	void SetX(int x);
	int GetX();
	void SetY(int y);
	int GetY();


};