#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
public:
	HumanB(const std::string& name);

	void	attack(void) const;
	void	HumanB::setWeapon(const Weapon& weapon);

private:
	std::string		mName;
	const Weapon*	mWeapon;
};

#endif