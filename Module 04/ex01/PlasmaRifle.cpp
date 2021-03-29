#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
    : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& other)
    : AWeapon(other)
{
    *this = other;
}

PlasmaRifle::~PlasmaRifle(void)
{
}

PlasmaRifle&    PlasmaRifle::operator=(const PlasmaRifle& other)
{
    setName(other.getName());
    setAPCost(other.getAPCost());
    setDamage(other.getDamage());
    return (*this);
}

void            PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}