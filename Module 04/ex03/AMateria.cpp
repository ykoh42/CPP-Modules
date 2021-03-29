#include "AMateria.hpp"

AMateria::AMateria(void)
    : _xp(0) 
{
    
}

AMateria::AMateria(const std::string& type)
    : _type(type)
    , _xp(0)
{
}

AMateria::AMateria(const AMateria& other)
{
    *this = other;
}

AMateria::~AMateria(void)
{
}

AMateria&           AMateria::operator=(const AMateria& other)
{
    _type = other._type;
    _xp = other._xp;
    return (*this);
}

const std::string&  AMateria::getType() const //Returns the materia type
{
    return (_type);
}

unsigned int        AMateria::getXP() const //Returns the Materia's XP
{
    return (_xp);
}

void                AMateria::use(ICharacter& target)
{
    (void)target;
    _xp += 10;
}

