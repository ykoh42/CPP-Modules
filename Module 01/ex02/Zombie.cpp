#include "Zombie.hpp"

Zombie::Zombie(std::string const &type, std::string const &name)
	: type(type)
	, name(name)
{


}

void Zombie::announce(void) const
{
	std::cout << "<" << name << " (" << type << ")>" << " Braiiiiiiinnnssss..." << std::endl;
}