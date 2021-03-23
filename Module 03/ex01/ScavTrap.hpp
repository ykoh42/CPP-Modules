#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap
{
public:
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);
	~ScavTrap(void);

	ScavTrap&	        operator=(const ScavTrap& other);
    void                rangedAttack(std::string const & target);
    void                meleeAttack(std::string const & target);
    void                takeDamage(unsigned int amount);
    void                beRepaired(unsigned int amount);
    void                challengeNewcomer(std::string const & target);

private:
    std::string         mName;
    int                 mHitPoints;
    int                 mEnergyPoints;
    int                 mMaxHitPoints;
    int                 mMaxEnergyPoints;
    int                 mLevel;
    int                 mMeleeAttackDamage;
    int                 mRangedAttackDamage;
    int                 mArmorDamageReduction;
    static std::string  mList[5];

    const int&          getHitPoints(void) const;
};


#endif