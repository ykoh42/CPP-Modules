#include "A.hpp"

A::A(void)
{
}

A::A(const A& other)
{
	*this = other;
}

A::~A(void)
{
}

A&  A::operator=(const A& other)
{
	(void)other;
	return (*this);
}