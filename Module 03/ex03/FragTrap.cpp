#include "FragTrap.hpp"

std::string FragTrap::mList[5] = {"PeePee!", "PooPoo!", "throwing paci!", "BooBoo Attack!", "Covering blanky!"};

FragTrap::FragTrap(void)
    : ClapTrap()
{
    srand(time(NULL));
    mMeleeAttackDamage = 30;
    std::cout << mName
                << " is booted! HURRAY!" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name)
{
    srand(time(NULL));
    mMeleeAttackDamage = 30;
    std::cout << mName
                << " is booted! HURRAY!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
    : ClapTrap(other)
{
    srand(time(NULL));
    *this = other;
    std::cout << mName
            << " is booted! HURRAY!" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap& other)
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

FragTrap::~FragTrap(void)
{
    std::cout << "Am I dead? UNBELIEVABLE!" << std::endl;
}

void        FragTrap::rangedAttack(std::string const & target)
{
    if (getHitPoints() > 0)
    {
        std::cout << "FR4G-TP "
                    << "<" << mName << ">"
                    << " attacks "
                    << "<" << target << ">"
                    << " at range, causing "
                    << "<" << mRangedAttackDamage << ">"
                    << " points of damage!" << std::endl;
    }
}

void        FragTrap::meleeAttack(std::string const & target)
{
    if (getHitPoints() > 0)
    {
        std::cout << "FR4G-TP "
                    << "<" << mName << ">"
                    << " attacks "
                    << "<" << target << ">"
                    << " at melee, causing "
                    << "<" << mMeleeAttackDamage << ">"
                    << " points of damage!" << std::endl;
    }
}

void        FragTrap::vaulthunter_dot_exe(std::string const & target)
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
            std::cout << "FR4G-TP "
                        << "<" << mName << ">"
                        << " attacks "
                        << "<" << target << ">"
                        << " at " << mList[rand() % 5] << ", causing "
                        << "<" << 0 << ">"
                        << " points of damage! USELESS!" << std::endl;
        }
        else
        {
            std::cout << "FR4G-TP "
                        << "<" << mName << ">"
                        << " not enough engery!" << std::endl;
        }
    }
}