#pragma once
#include <iostream>
class Inimigo
{
public:
	Inimigo(int x, int y ) : m_x(x), m_y(y) {}
	friend std::ostream& operator<<(std::ostream& os, const Inimigo& inimigo);

private:
	int m_x, m_y;
};


std::ostream& operator<<(std::ostream& os, const Inimigo& inimigo)
{
	os << "x: (" << inimigo.m_x << ")" << ", y: " << inimigo.m_y;
	return os;
}