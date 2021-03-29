#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void)
    : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& other)
    : Enemy(other)
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
    setHP(other.getHP());
    setType(other.getType());
    return (*this);
}

void            RadScorpion::takeDamage(int damage)
{
    Enemy::takeDamage(damage);
}