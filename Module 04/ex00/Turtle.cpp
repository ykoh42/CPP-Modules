#include "Turtle.hpp"

Turtle::Turtle(void)
    : Victim()
{
    std::cout << "Gguikkk!! Gguikkk!!" << std::endl;
}

Turtle::Turtle(const Turtle& other)
    : Victim(other)
{
    *this = other;
    std::cout << "Gguikkk!! Gguikkk!!" << std::endl;
}

Turtle::Turtle(const std::string& name)
    : Victim(name)
{
    std::cout << "Gguikkk!! Gguikkk!!" << std::endl;
}

Turtle::~Turtle(void)
{
    std::cout << "Gguikkk....." << std::endl;
}

void    Turtle::getPolymorphed(void) const
{
    std::cout << mName << " has been turned into a cute rabbit!" << std::endl;
}

Turtle&   Turtle::operator=(const Turtle& other)
{
    mName = other.mName;
    return (*this);
}