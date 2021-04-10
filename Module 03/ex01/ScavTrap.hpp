#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap
{
public:
	ScavTrap(void);
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);
	~ScavTrap(void);

	ScavTrap&			operator=(const ScavTrap& other);
	void				rangedAttack(const std::string& target);
	void				meleeAttack(const std::string& target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				challengeNewcomer(const std::string& target);
	const int&			getHitPoints(void) const;

private:
	std::string			mName;
	int					mHitPoints;
	int					mEnergyPoints;
	int					mMaxHitPoints;
	int					mMaxEnergyPoints;
	int					mLevel;
	int					mMeleeAttackDamage;
	int					mRangedAttackDamage;
	int					mArmorDamageReduction;
	static std::string	mList[5];

};


#endif