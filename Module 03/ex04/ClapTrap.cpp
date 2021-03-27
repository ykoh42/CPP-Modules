#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
    : mName("undefined")
    , mHitPoints(100)
    , mEnergyPoints(100)
    , mMaxHitPoints(100)
    , mMaxEnergyPoints(100)
    , mLevel(1)
    , mMeleeAttackDamage(20)
    , mRangedAttackDamage(20)
    , mArmorDamageReduction(5)
{
    srand(time(NULL));
    std::cout << mName
                << " Base Trap is ready!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
    : mName(name)
    , mHitPoints(100)
    , mEnergyPoints(100)
    , mMaxHitPoints(100)
    , mMaxEnergyPoints(100)
    , mLevel(1)
    , mMeleeAttackDamage(20)
    , mRangedAttackDamage(20)
    , mArmorDamageReduction(5)
{
    srand(time(NULL));
    std::cout << mName
                << " Base Trap is ready!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    srand(time(NULL));
    *this = other;
    std::cout << mName
                << " Base Trap is ready!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << mName << " Base Trap is done!" << std::endl;
}

ClapTrap&           ClapTrap::operator=(const ClapTrap& other)
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

void                ClapTrap::takeDamage(unsigned int amount)
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

void                ClapTrap::beRepaired(unsigned int amount)
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

const int&          ClapTrap::getHitPoints(void) const
{
    return (mHitPoints);
}

const std::string&  ClapTrap::getName(void) const
{
    return (mName);
}