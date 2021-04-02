#include "C.hpp"

C::C(void)
{
}

C::C(const C& other)
{
    *this = other;
}

C::~C(void)
{
}

C&  C::operator=(const C& other)
{
    (void)other;
    return (*this);
}