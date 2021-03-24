#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
    std::cout << mName <<", " << mTitle << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& other)
{
    *this = other;
    std::cout << mName <<", " << mTitle << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const std::string& name, const std::string& title)
    : mName(name)
    , mTitle(title)
{
    std::cout << mName <<", " << mTitle << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << mName << ", " << mTitle << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&   Sorcerer::operator=(const Sorcerer& other)
{
    mName = other.mName;
    mTitle = other.mTitle;
    return (*this);
}

const std::string&  Sorcerer::GetName(void) const
{
    return (mName);
}

const std::string&  Sorcerer::GetTitle(void) const
{
    return (mTitle);
}

void                Sorcerer::polymorph(const Victim& victim) const
{
    victim.getPolymorphed();
}

std::ostream&       operator<<(std::ostream& os, const Sorcerer& sorcerer)
{
    return (os << "I am " << sorcerer.GetName() << ", " << sorcerer.GetTitle() << ", and I like ponies!" << std::endl);
}