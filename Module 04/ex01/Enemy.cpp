#include "Enemy.hpp"

Enemy::Enemy(void)
    : mHP(0)
{
}

Enemy::Enemy(int hp, const std::string& type)
    : mHP(hp)
    , mType(type)
{
}

Enemy::Enemy(const Enemy& other)
{
    *this = other;
}

Enemy::~Enemy(void)
{
    // std::cout << "Enemy destructor called." << std::endl;
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

void                Enemy::setType(const std::string& type)
{
    mType = type;
}

void                Enemy::setHP(const int hp)
{
    mHP = hp;
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