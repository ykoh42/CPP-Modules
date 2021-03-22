#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(const int size);
	~ZombieHorde();

	void		announce(void) const;

private:
	const int	mSize;
	Zombie*		mHorde;
};

#endif