#include "CalculadoraException.h"

CalculadoraException::CalculadoraException(const char* msg) : std::exception(msg)
{
}
