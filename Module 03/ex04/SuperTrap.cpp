#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
    srand(time(NULL));
    mHitPoints = FragTrap::mHitPoints;
    mMaxHitPoints = FragTrap::mMaxHitPoints;
    mEnergyPoints = NinjaTrap::mEnergyPoints;
    mMaxEnergyPoints = NinjaTrap::mMaxEnergyPoints;
    mMeleeAttackDamage = NinjaTrap::mMeleeAttackDamage;
    mRangedAttackDamage = FragTrap::mRangedAttackDamage;
    mArmorDamageReduction = FragTrap::mArmorDamageReduction;
    std::cout << mName
                << " THE SUPERMAN Gen!" << std::endl;
}

SuperTrap::SuperTrap(const std::string& name)
    : ClapTrap(name)
    , FragTrap(name)
    , NinjaTrap(name)
{
    srand(time(NULL));
    mHitPoints = FragTrap::mHitPoints;
    mMaxHitPoints = FragTrap::mMaxHitPoints;
    mEnergyPoints = NinjaTrap::mEnergyPoints;
    mMaxEnergyPoints = NinjaTrap::mMaxEnergyPoints;
    mMeleeAttackDamage = NinjaTrap::mMeleeAttackDamage;
    mRangedAttackDamage = FragTrap::mRangedAttackDamage;
    mArmorDamageReduction = FragTrap::mArmorDamageReduction;
    std::cout << mName
                << " THE SUPERMAN Gen!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& other)
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