#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad
{
public:
	Squad(void);
	Squad(const Squad& other);
	virtual ~Squad(void);

	Squad&          operator=(const Squad& other);

	int             getCount(void) const;
	ISpaceMarine*   getUnit(int index) const;

	int             push(ISpaceMarine* unit);

private:
	int             mCount;
	ISpaceMarine**  mUnits;
};

#endif