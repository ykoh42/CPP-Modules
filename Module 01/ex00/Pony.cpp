#include "Pony.hpp"

Pony::Pony(const std::string& name)
	: name(name)
{
	std::cout << name << " was born!" << std::endl;

}

void	Pony::Cry(void)
{
	std::cout << name << "NEIGH~" << name << std::endl;
}

void	Pony::Run(void)
{
	std::cout << name << "🐎💨💨" << name << std::endl;
}