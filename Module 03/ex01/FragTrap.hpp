#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap
{
public:
	FragTrap(void);
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& other);
	~FragTrap(void);

	FragTrap&	        operator=(const FragTrap& other);
    void                rangedAttack(std::string const & target);
    void                meleeAttack(std::string const & target);
    void                takeDamage(unsigned int amount);
    void                beRepaired(unsigned int amount);
    void                vaulthunter_dot_exe(std::string const & target);
    const int&          getHitPoints(void) const;

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

};


#endif