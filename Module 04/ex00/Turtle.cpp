#include "Turtle.hpp"

Turtle::Turtle(void)
    : Victim()
{
    std::cout << "SQUIRTLE SQUIRTLE." << std::endl;
}

Turtle::Turtle(const std::string& name)
    : Victim(name)
{
    std::cout << "SQUIRTLE SQUIRTLE." << std::endl;
}

Turtle::Turtle(const Turtle& other)
    : Victim(other)
{
    *this = other;
    std::cout << "SQUIRTLE SQUIRTLE." << std::endl;
}

Turtle::~Turtle(void)
{
    std::cout << "Squir......" << std::endl;
}

void    Turtle::getPolymorphed(void) const
{
    std::cout << GetName() << " has been turned into a stone!" << std::endl;
}

Turtle&   Turtle::operator=(const Turtle& other)
{
    SetName(other.GetName());
    return (*this);
}