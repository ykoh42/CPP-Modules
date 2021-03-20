#include "Zombie.hpp"

Zombie::Zombie(const std::string& type, const std::string& name)
	: type(type)
	, name(name)
{
}

void Zombie::announce(void) const
{
	std::cout << "<" << name << " (" << type << ")>" << " Braiiiiiiinnnssss..." << std::endl;
}