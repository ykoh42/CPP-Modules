#include "B.hpp"

B::B(void)
{
}

B::B(const B& other)
{
	*this = other;
}

B::~B(void)
{
}

B&	B::operator=(const B& other)
{
	(void)other;
	return (*this);
}