#include "PowerFist.hpp"

PowerFist::PowerFist(void)
    : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist& other)
{
    *this = other;
}

PowerFist::~PowerFist(void)
{
}

PowerFist&    PowerFist::operator=(const PowerFist& other)
{
    mName = other.mName;
    mAPcost = other.mAPcost;
    mDamage = other.mDamage;
    return (*this);
}

void            PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}