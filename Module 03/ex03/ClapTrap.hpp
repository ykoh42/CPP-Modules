#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
public:
	ClapTrap(void);
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& other);
	~ClapTrap(void);

	ClapTrap&	        operator=(const ClapTrap& other);
    void                takeDamage(unsigned int amount);
    void                beRepaired(unsigned int amount);
    const int&          getHitPoints(void) const;
    const std::string&  getName(void) const;

protected:
    std::string         mName;
    int                 mHitPoints;
    int                 mEnergyPoints;
    int                 mMaxHitPoints;
    int                 mMaxEnergyPoints;
    int                 mLevel;
    int                 mMeleeAttackDamage;
    int                 mRangedAttackDamage;
    int                 mArmorDamageReduction;

};

#endif