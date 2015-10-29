#pragma once
class Circulo
{
private:
	int m_raio;
	int m_x;
	int m_y;

public:
	Circulo(int x, int y, int raio);
	void SetX(int x);
	int GetX();
	void SetY(int y);
	int GetY();
	void DesenharCirculo();
};

