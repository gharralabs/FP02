#pragma once

class Vetor {

public:
	float m_x, m_y;
	
	Vetor(float x, float y) : m_x(x), m_y(y) 
	{}

	Vetor() : m_x(0.0f), m_y(0.0f)
	{}

	void Set(float x, float y)
	{
		m_x = x;
		m_y = y;
	}

	float GetX() const 
	{
		return m_x;
	}

	float GetY() const 
	{
		return m_y;
	}

	// produto por um numero escalar
	Vetor operator*(float n) 
	{
		float novoX = GetX() * n;
		float novoY = GetY() * n;
		return Vetor(novoX, novoY);
	}

	// diferença de vetores
	// v - w = (a - c, b - d)

	// produto escalar de dois vetores
	// u.v = a.c + b.d 

	// Soma de vetores 
	// v + w = (a+c,b+d)


	// comprimento de um vetor
	//  |v| = sqrt(a*a + b*b)
};