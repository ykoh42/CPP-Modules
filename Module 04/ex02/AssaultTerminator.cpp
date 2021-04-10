#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &other)
{
	*this = other;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator&	AssaultTerminator::operator=(const AssaultTerminator& other)
{
	(void)other;
	return (*this);
}

ISpaceMarine*		AssaultTerminator::clone(void) const
{
	return (new AssaultTerminator(*this));
}

void				AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;

}

void				AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;

}

void				AssaultTerminator::meleeAttack(void) const
{
	std::cout <<  "* attacks with chainfists *" << std::endl;
}
