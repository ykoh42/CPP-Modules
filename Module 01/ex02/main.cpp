#include "Zombie.hpp"

int	main(void)
{
	std::cout << "IF YOU KILL 5 ZOMBIES, YOU CAN BE A HUMAN!" << std::endl;
	Zombie	a("KOREAN", "Predator");
	Zombie	b("", "");
	Zombie	c("", "");
	a.announce();
	b.announce();
	c.announce();
	return (0);
}