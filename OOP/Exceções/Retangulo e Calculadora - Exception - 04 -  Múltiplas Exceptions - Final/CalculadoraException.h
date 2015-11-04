#pragma once
#include <exception>

class CalculadoraException : public std::exception
{
public:
	CalculadoraException(const char* msg);
};

