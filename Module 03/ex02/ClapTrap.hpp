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

    const int&          getHitPoints(void) const;
};

#endif