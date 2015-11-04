#include "RetanguloException.h"

RetanguloException::RetanguloException(const char* msg) 
{
	std::exception(msg)
}