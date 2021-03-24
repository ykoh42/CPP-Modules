#include "Enemy.hpp"

Enemy::Enemy(void)
    : mHP(0)
{
}

Enemy::Enemy(const Enemy& other)
{
    *this = other;
}

Enemy::Enemy(int hp, const std::string& type)
    : mHP(hp)
    , mType(type)
{
}

Enemy::~Enemy(void)
{
    std::cout << "enemy destructor called" << std::endl;
}

Enemy&              Enemy::operator=(const Enemy& other)
{
    mHP = other.mHP;
    mType = other.mType;
    return (*this);
}

const std::string&  Enemy::getType(void) const
{
    return (mType);
}

int                 Enemy::getHP(void) const
{
    return (mHP);
}

void                Enemy::takeDamage(int damage)
{
    if (damage < 0)
    {
        return ;
    }
    else
    {
        mHP -= damage;
        if (mHP < 0)
        {
            mHP = 0;
        }   
    }
}