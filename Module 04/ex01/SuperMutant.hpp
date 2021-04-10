#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant(void);
	SuperMutant(const SuperMutant& other);
	~SuperMutant(void);

	SuperMutant&	operator=(const SuperMutant& other);

	void			takeDamage(int damage);
};

#endif