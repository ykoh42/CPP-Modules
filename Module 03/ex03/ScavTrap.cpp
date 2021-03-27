#include "ScavTrap.hpp"

std::string ScavTrap::mList[5] = {"navy seal", "programmer", "superhero", "astronaut", "saint"};

ScavTrap::ScavTrap(void)
    : ClapTrap()
{
    srand(time(NULL));
    mEnergyPoints = 50;
    mMaxEnergyPoints = 50;
    mRangedAttackDamage = 15;
    mArmorDamageReduction = 3;
    std::cout << mName
                << " : What do U need?" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name)
{
    srand(time(NULL));
    mEnergyPoints = 50;
    mMaxEnergyPoints = 50;
    mRangedAttackDamage = 15;
    mArmorDamageReduction = 3;
    std::cout << mName
                << " : What do U need?" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
    : ClapTrap(other)
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