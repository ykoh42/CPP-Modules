#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
	: type(type)
{
}

void				Weapon::setType(const std::string& type)
{
	this->type = type;
}

const std::string&	Weapon::getType(void) const
{
	return (type);
}