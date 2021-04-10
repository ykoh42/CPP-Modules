#include "Ice.hpp"

Ice::Ice(void)
	: AMateria("ice")
{
}

Ice::Ice(const Ice& other)
	: AMateria(other)
{
	*this = other;
}

Ice::~Ice(void)
{
}

Ice&		Ice::operator=(const Ice& other)
{
	setXP(other.getXP());
	return (*this);
}

AMateria*	Ice::clone(void) const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
}