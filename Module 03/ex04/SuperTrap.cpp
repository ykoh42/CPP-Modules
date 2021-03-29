#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
    : ClapTrap()
    , FragTrap()
    , NinjaTrap()
{
    srand(time(NULL));
    mHitPoints = 100;
    mMaxHitPoints = 100;
    mEnergyPoints = 120;
    mMaxEnergyPoints = 120;
    mMeleeAttackDamage = 60;
    mRangedAttackDamage = 20;
    mArmorDamageReduction = 5;
    std::cout << mName
                << " THE SUPERMAN Gen!" << std::endl;
}

SuperTrap::SuperTrap(const std::string& name)
    : ClapTrap(name)
    , FragTrap(name)
    , NinjaTrap(name)
{
    srand(time(NULL));
    mHitPoints = 100;
    mMaxHitPoints = 100;
    mEnergyPoints = 120;
    mMaxEnergyPoints = 120;
    mMeleeAttackDamage = 60;
    mRangedAttackDamage = 20;
    mArmorDamageReduction = 5;
    std::cout << mName
                << " THE SUPERMAN Gen!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& other)
    : ClapTrap(other)
    , FragTrap(other)
    , NinjaTrap(other)
{
    srand(time(NULL));
    *this = other;
    std::cout << mName
            << " THE SUPERMAN Gen!" << std::endl;
}

SuperTrap&   SuperTrap::operator=(const SuperTrap& other)
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

SuperTrap::~SuperTrap(void)
{
    std::cout << "SUPERMAN destroyed!!" << std::endl;
}

void        SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
}

void        SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::meleeAttack(target);
}