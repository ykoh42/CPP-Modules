#include "ScavTrap.hpp"

std::string ScavTrap::mList[5] = {"navy seal", "programmer", "superhero", "astronaut", "saint"};

ScavTrap::ScavTrap(void)
    : mName("undefined")
    , mHitPoints(100)
    , mEnergyPoints(50)
    , mMaxHitPoints(100)
    , mMaxEnergyPoints(50)
    , mLevel(1)
    , mMeleeAttackDamage(20)
    , mRangedAttackDamage(15)
    , mArmorDamageReduction(3)
{
    srand(time(NULL));
    std::cout << mName
                << " : What do U need?" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
    : mName(name)
    , mHitPoints(100)
    , mEnergyPoints(50)
    , mMaxHitPoints(100)
    , mMaxEnergyPoints(50)
    , mLevel(1)
    , mMeleeAttackDamage(20)
    , mRangedAttackDamage(15)
    , mArmorDamageReduction(3)
{
    srand(time(NULL));
    std::cout << mName
                << " : What do U need?" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    srand(time(NULL));
    *this = other;
    std::cout << mName
            << " : What do U need?" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& other)
{
    mName = other.mName;
    mHitPoints = other.mHitPoints;
    mEnergyPoints = other.mEnergyPoints;
    mMaxHitPoints = other.mMaxHitPoints;
    mMaxEnergyPoints = other.mMaxEnergyPoints;
    mLevel = other.mLevel;
    mMeleeAttackDamage = other.mMeleeAttackDamage;
    mRangedAttackDamage = other.mRangedAttackDamage;
    mArmorDamageReduction = other.mArmorDamageReduction;
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Suicide bombing!! BOOM!!" << std::endl;
}

void        ScavTrap::rangedAttack(std::string const & target)
{
    if (getHitPoints() > 0)
    {
        std::cout << "SC4B-TP "
                    << "<" << mName << ">"
                    << " attacks "
                    << "<" << target << ">"
                    << " at range, causing "
                    << "<" << mRangedAttackDamage << ">"
                    << " points of damage!" << std::endl;
    }
}

void        ScavTrap::meleeAttack(std::string const & target)
{
    if (getHitPoints() > 0)
    {
        std::cout << "SC4B-TP "
                    << "<" << mName << ">"
                    << " attacks "
                    << "<" << target << ">"
                    << " at melee, causing "
                    << "<" << mMeleeAttackDamage << ">"
                    << " points of damage!" << std::endl;
    }
}

void        ScavTrap::takeDamage(unsigned int amount)
{
    if (getHitPoints() > 0)
    {
        int damage = amount - mArmorDamageReduction;

        if (damage < 0)
        {
            damage = 0;
        }
        mHitPoints -= damage;
        if (mHitPoints > 0)
        {
            std::cout << "<" << mName << ">"
                        << " takes "
                        << "<" << damage << ">"
                        << " damages! " << std::endl;
        }
        else
        {
            mHitPoints = 0;
            std::cout << "<" << mName << ">"
                        << " is broken! " << std::endl;
        }
    }
    else
    {
            std::cout << "<" << mName << ">"
                        << " was already broken! " << std::endl;
    }
}

void        ScavTrap::beRepaired(unsigned int amount)
{
    mHitPoints += amount;
    if (mHitPoints > mMaxHitPoints)
    {
        mHitPoints = mMaxHitPoints;
    }
    std::cout << "<" << mName << "> "
                << "has been repaired!"
                << " <" <<  mHitPoints << ">" << std::endl;
}

void        ScavTrap::challengeNewcomer(std::string const & target)
{
    if (getHitPoints() > 0)
    {
        if (mEnergyPoints >= 25)
        {
            mEnergyPoints -= 25;
            if (mEnergyPoints < 0)
            {
                mEnergyPoints = 0;
            }
            else if (mEnergyPoints > mMaxEnergyPoints)
            {
                mEnergyPoints = mMaxEnergyPoints;
            }
            std::cout << "SC4B-TP "
                        << "<" << mName << ">"
                        << " Challenges to become a "
                        << "\"" << mList[rand() % 5] << "\"" << " with "
                        << "<" << target << ">"
                        << "! Cool!" << std::endl;
        }
        else
        {
            std::cout << "SC4B-TP "
                        << "<" << mName << ">"
                        << " not enough engery!" << std::endl;
        }
    }
}

const int&  ScavTrap::getHitPoints(void) const
{
    return (mHitPoints);
}