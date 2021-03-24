#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void)
    : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& other)
{
    *this = other;
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion&    RadScorpion::operator=(const RadScorpion& other)
{
    mHP = other.mHP;
    mType = other.mType;
    return (*this);
}

void            RadScorpion::takeDamage(int damage)
{
    Enemy::takeDamage(damage);
}