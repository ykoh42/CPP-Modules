#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
    : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& other)
{
    *this = other;
}

PlasmaRifle::~PlasmaRifle(void)
{
}

PlasmaRifle&    PlasmaRifle::operator=(const PlasmaRifle& other)
{
    mName = other.mName;
    mAPcost = other.mAPcost;
    mDamage = other.mDamage;
    return (*this);
}

void            PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}