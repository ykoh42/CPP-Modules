#include "PowerFist.hpp"

PowerFist::PowerFist(void)
    : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist& other)
    : AWeapon(other)
{
    *this = other;
}

PowerFist::~PowerFist(void)
{
}

PowerFist&      PowerFist::operator=(const PowerFist& other)
{
    setName(other.getName());
    setAPCost(other.getAPCost());
    setDamage(other.getDamage());
    return (*this);
}

void            PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}