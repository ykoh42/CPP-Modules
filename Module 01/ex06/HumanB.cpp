#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
	: mName(name)
	, mWeapon(NULL)
{
}

void	HumanB::attack(void) const
{
	std::cout << mName << " attacks with his " << mWeapon->getType() << std::endl;
}

void	HumanB::setWeapon(const Weapon& weapon)
{

	
}