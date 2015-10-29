#pragma once
class Forma
{

protected:
	int m_x,
		m_y;
public:
	Forma(int x, int y);
	void SetX(int x);
	int GetX();
	void SetY(int y);
	int GetY();
	virtual void Desenhar() = 0;
};

