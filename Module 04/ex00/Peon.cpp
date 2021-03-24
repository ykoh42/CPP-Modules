#include "Peon.hpp"

Peon::Peon(void)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon& other)
{
    *this = other;
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const std::string& name)
    : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl;
}

void    Peon::getPolymorphed(void) const
{
    std::cout << mName << " has been turned into a pink pony!" << std::endl;
}

Peon&   Peon::operator=(const Peon& other)
{
    mName = other.mName;
    return (*this);
}