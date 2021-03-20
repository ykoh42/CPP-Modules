#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
	: mType(type)
{
}

void	Weapon::setType(const std::string& type)
{
	mType = type;
}

const std::string&	Weapon::getType(void) const
{
	return (mType);
}