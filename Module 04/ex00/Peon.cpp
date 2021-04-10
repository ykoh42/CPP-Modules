#include "Peon.hpp"

Peon::Peon(void)
	: Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const std::string& name)
	: Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon& other)
	: Victim(other)
{
	*this = other;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon&	Peon::operator=(const Peon& other)
{
	SetName(other.GetName());
	return (*this);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << GetName() << " has been turned into a pink pony!" << std::endl;
}