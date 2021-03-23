#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap
{
public:
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& other);
	~FragTrap(void);

	FragTrap&	        operator=(const FragTrap& other);
    void                rangedAttack(std::string const & target);
    void                meleeAttack(std::string const & target);
    void                takeDamage(unsigned int amount);
    void                beRepaired(unsigned int amount);
    void                vaulthunter_dot_exe(std::string const & target);

private:
    std::string         mName;
    int                 mHitPoints;
    int                 mEnergyPoints;
    const int           mMaxHitPoints;
    const int           mMaxEnergyPoints;
    const int           mLevel;
    const int           mMeleeAttackDamage;
    const int           mRangedAttackDamage;
    const int           mArmorDamageReduction;
    static std::string  mList[5];

    const int&          getHitPoints(void) const;
};


#endif