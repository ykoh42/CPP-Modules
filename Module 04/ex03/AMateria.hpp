#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
public:
    AMateria(void);
    AMateria(const std::string& type);
    AMateria(const AMateria& other);
    virtual ~AMateria(void);

	AMateria&           operator=(const AMateria& other);
    
    const std::string&  getType(void) const;
    unsigned int        getXP(void) const;
    void                setType(const std::string& type) const;
    void                setXP(const int xp) const;

    virtual AMateria*   clone(void) const = 0;
    virtual void        use(ICharacter& target);

private:
    std::string         _type;
    unsigned int        _xp;
};

#endif