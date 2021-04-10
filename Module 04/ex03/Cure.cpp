#include "Cure.hpp"

Cure::Cure(void)
	: AMateria("cure")
{
}

Cure::Cure(const Cure& other)
	: AMateria(other)
{
	*this = other;
}

Cure::~Cure(void)
{
}

Cure&		Cure::operator=(const Cure& other)
{
	setXP(other.getXP());
	return (*this);
}

AMateria*	Cure::clone(void) const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}