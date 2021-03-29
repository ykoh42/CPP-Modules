#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine(void);
	TacticalMarine(TacticalMarine const &other);
	virtual ~TacticalMarine(void);

	TacticalMarine& operator=(const TacticalMarine& other);

	ISpaceMarine*   clone(void) const;
	void            battleCry(void) const;
	void            rangedAttack(void) const;
	void            meleeAttack(void) const;
};

#endif