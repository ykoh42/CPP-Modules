#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, const Weapon& weapon)
	: name(name)
	, weapon(weapon)
{
}

void	HumanA::attack(void) const
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}