#include "Victim.hpp"

Victim::Victim(void)
	: mName("undefined")
{
	std::cout << "Some random victim called " << mName <<" just appeared!" << std::endl;
}

Victim::Victim(const std::string& name)
	: mName(name)
{
	std::cout << "Some random victim called " << mName <<" just appeared!" << std::endl;
}

Victim::Victim(const Victim& other)
{
	*this = other;
	std::cout << "Some random victim called " << mName <<" just appeared!" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << mName << " just died for no apparent reason!" << std::endl;
}

Victim&				Victim::operator=(const Victim& other)
{
	mName = other.mName;
	return (*this);
}

const std::string&	Victim::GetName(void) const
{
	return (mName);
}

void				Victim::SetName(const std::string& name)
{
	mName = name;
}

void				Victim::getPolymorphed(void) const
{
	std::cout << mName << " has been turned into a cute little sheep!" << std::endl;
}


std::ostream&		operator<<(std::ostream& os, const Victim& victim)
{
	return (os << "I'm " << victim.GetName() << " and I like otters!" << std::endl);
}