#ifndef ZOMBIEVENT_HPP
# define ZOMBIEVENT_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent();

	void 		setZombieType(const std::string& type);
	Zombie*		newZombie(const std::string& name);
	Zombie*		randomChump(void);

private:
	std::string	type;
};

#endif