#pragma once
#include <exception>

class RetanguloException : public std::exception
{
public:
	RetanguloException(const char* msg);
};

