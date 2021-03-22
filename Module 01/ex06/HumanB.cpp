#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
	: name(name)
	, weapon(NULL)
{
}

void	HumanB::attack(void) const
{
	if (weapon)
	{
		std::cout << name << " attacks with his " << weapon->getType() << std::endl;
	}
	else
	{
		std::cout << name << " has no weapon" << std::endl;
	}
}

void	HumanB::setWeapon(const Weapon& weapon)
{
	this->weapon = &weapon;
}