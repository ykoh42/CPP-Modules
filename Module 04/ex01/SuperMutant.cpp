#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void)
    : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& other)
{
    *this = other;
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant&    SuperMutant::operator=(const SuperMutant& other)
{
    mHP = other.mHP;
    mType = other.mType;
    return (*this);
}

void            SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}