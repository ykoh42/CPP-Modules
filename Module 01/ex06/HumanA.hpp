#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
public:
	HumanA(const std::string& name, const Weapon& weapon);

	void attack(void) const;

private:
	std::string		mName;
	const Weapon&	mWeapon;
};

#endif