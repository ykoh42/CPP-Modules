#include "AWeapon.hpp"

AWeapon::AWeapon(void)
    : mAPcost(0)
    , mDamage(0)
{
}

AWeapon::AWeapon(const AWeapon& other)
{
    *this = other;
}

AWeapon::AWeapon(const std::string& name, int apcost, int damage)
    : mName(name)
    , mAPcost(apcost)
    , mDamage(damage)
{
}

AWeapon::~AWeapon(void)
{
}

AWeapon&            AWeapon::operator=(const AWeapon& other)
{
    mName = other.mName;
    mAPcost = other.mAPcost;
    mDamage = other.mDamage;
    return (*this);
}

const std::string&  AWeapon::getName(void) const
{
    return (mName);
}

int                 AWeapon::getAPCost(void) const
{
    return (mAPcost);
}

int                 AWeapon::getDamage(void) const
{
    return (mDamage);
}
