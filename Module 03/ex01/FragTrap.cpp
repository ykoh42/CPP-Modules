#include "FragTrap.hpp"

std::string FragTrap::mList[5] = {"PeePee!", "PooPoo!", "throwing paci!", "BooBoo Attack!", "Covering blanky!"};

FragTrap::FragTrap(const std::string& name)
    : mName(name)
    , mHitPoints(100)
    , mEnergyPoints(100)
    , mMaxHitPoints(100)
    , mMaxEnergyPoints(100)
    , mLevel(1)
    , mMeleeAttackDamage(30)
    , mRangedAttackDamage(20)
    , mArmorDamageReduction(5)
{
    srand(time(NULL));
    std::cout << mName
                << " is booted! HURRAY!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
    : mName(other.mName)
    , mHitPoints(other.mHitPoints)
    , mEnergyPoints(other.mEnergyPoints)
    , mMaxHitPoints(other.mMaxHitPoints)
    , mMaxEnergyPoints(other.mMaxEnergyPoints)
    , mLevel(other.mLevel)
    , mMeleeAttackDamage(other.mMeleeAttackDamage)
    , mRangedAttackDamage(other.mRangedAttackDamage)
    , mArmorDamageReduction(other.mArmorDamageReduction)
{
    srand(time(NULL));
    std::cout << mName
            << " is booted! HURRAY!" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap& other)
{
    mHitPoints = other.mHitPoints;
    mEnergyPoints = other.mHitPoints;
    mName = other.mName;
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

void        FragTrap::takeDamage(unsigned int amount)
{
    if (getHitPoints() > 0)
    {
        int damage = amount - mArmorDamageReduction;

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
}

void        FragTrap::beRepaired(unsigned int amount)
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

const int&  FragTrap::getHitPoints(void) const
{
    return (mHitPoints);
}