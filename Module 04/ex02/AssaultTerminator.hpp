#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator(void);
	AssaultTerminator(const AssaultTerminator& other);
	virtual ~AssaultTerminator(void);

	AssaultTerminator&  operator=(const AssaultTerminator& other);

	ISpaceMarine*       clone(void) const;
	void                battleCry(void) const;
	void                rangedAttack(void) const;
	void                meleeAttack(void) const;
};

#endif