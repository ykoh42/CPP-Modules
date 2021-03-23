#include "ScavTrap.hpp"

std::string ScavTrap::mList[5] = {"Money", "Water", "Invisibility Cloak", "Time machine", "Portal"};

ScavTrap::ScavTrap(void)
{
    srand(time(NULL));
    mEnergyPoints = 50;
    mMaxEnergyPoints = 50;
    mRangedAttackDamage = 15;
    mArmorDamageReduction = 3;
    std::cout << mName
                << " 출격 준비 완료!" << std::endl;
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
                << " 출격 준비 완료!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    srand(time(NULL));
    *this = other;
    std::cout << mName
            << " 출격 준비 완료!" << std::endl;
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
    std::cout << "자폭합니다!!" << std::endl;
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
                        << " invented "
                        << "\"" << mList[rand() % 5] << "\"" << " for "
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