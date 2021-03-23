#include "NinjaTrap.hpp"

std::string NinjaTrap::mList[5] = {"Money", "Water", "Invisibility Cloak", "Time machine", "Portal"};

NinjaTrap::NinjaTrap(void)
{
    srand(time(NULL));
    mHitPoints = 60;
    mMaxHitPoints = 60;
    mEnergyPoints = 120;
    mMaxEnergyPoints = 120;
    mMeleeAttackDamage = 60;
    mRangedAttackDamage = 5;
    mArmorDamageReduction = 0;
    std::cout << mName
                << " Ninja Gen!" << std::endl;
}

NinjaTrap::NinjaTrap(const std::string& name)
    : ClapTrap(name)
{
    srand(time(NULL));
    mHitPoints = 60;
    mMaxHitPoints = 60;
    mEnergyPoints = 120;
    mMaxEnergyPoints = 120;
    mMeleeAttackDamage = 60;
    mRangedAttackDamage = 5;
    mArmorDamageReduction = 0;
    std::cout << mName
                << " Ninja Gen!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& other)
{
    srand(time(NULL));
    *this = other;
    std::cout << mName
            << " Ninja Gen!" << std::endl;
}

NinjaTrap&   NinjaTrap::operator=(const NinjaTrap& other)
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

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "Ninja destroyed!!" << std::endl;
}

void        NinjaTrap::rangedAttack(std::string const & target)
{
    if (getHitPoints() > 0)
    {
        std::cout << "N2NJA-TP "
                    << "<" << mName << ">"
                    << " attacks "
                    << "<" << target << ">"
                    << " at range, causing "
                    << "<" << mRangedAttackDamage << ">"
                    << " points of damage!" << std::endl;
    }
}

void        NinjaTrap::meleeAttack(std::string const & target)
{
    if (getHitPoints() > 0)
    {
        std::cout << "N2NJA-TP "
                    << "<" << mName << ">"
                    << " attacks "
                    << "<" << target << ">"
                    << " at melee, causing "
                    << "<" << mMeleeAttackDamage << ">"
                    << " points of damage!" << std::endl;
    }
}

void        NinjaTrap::ninjaShoebox(FragTrap &trap)
{
    std::cout << "N2NJA-TP "
                    << "<" << mName << ">"
                    << " disguised to FragTrap! nobody can't notice! Even "
                    << mName << " too!" << std::endl;
    ClapTrap    *one = this;
    ClapTrap    *other = &trap;
    *one = *other;
}

void        NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
    std::cout << "N2NJA-TP "
                    << "<" << mName << ">"
                    << " disguised to FragTrap! nobody can't notice! Even "
                    << mName << " too!" << std::endl;
    ClapTrap    *one = this;
    ClapTrap    *other = &trap;
    *one = *other;
}

void        NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
    std::cout << "N2NJA-TP "
                    << "<" << mName << ">"
                    << " disguised to FragTrap! nobody can't notice! Even "
                    << mName << " too!" << std::endl;
    ClapTrap    *one = this;
    ClapTrap    *other = &trap;
    *one = *other;
}

void        NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
    std::cout << "N2NJA-TP "
                    << "<" << mName << ">"
                    << " disguised to FragTrap! nobody can't notice! Even "
                    << mName << " too!" << std::endl;
    ClapTrap    *one = this;
    ClapTrap    *other = &trap;
    *one = *other;
}