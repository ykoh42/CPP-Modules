#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion(void);
	RadScorpion(const RadScorpion& other);
	~RadScorpion(void);

	RadScorpion&	operator=(const RadScorpion& other);

	void			takeDamage(int damage);
};

#endif