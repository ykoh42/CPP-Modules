#include "ZombieEvent.hpp"

int	main(void)
{
	std::cout << "IF YOU KILL 5 ZOMBIES, YOU CAN GET A CLONE." << std::endl << std::endl;
	
	Zombie	a("Predator", "ykoh");
	std::cout << "There is a predator zombie." << std::endl;
	a.announce();
	
	ZombieEvent	e;
	Zombie*		prey[5];

	e.setZombieType("Prey");
	std::cout << std::endl << "There are 5 prey zombies." << std::endl;
	for (int i = 0; i < 5; i++)
	{
		prey[i] = e.randomChump();
	}
	std::cout << std::endl << "Unfortunately, they are killed by predator." << std::endl;
	for (int i = 0; i < 5; i++)
	{
		delete prey[i];
	}
	std::cout << std::endl << "Clone Generated." << std::endl;

	e.setZombieType("Clone");
	Zombie* clone = e.newZombie("ykoh");
	clone->announce();
	std::cout << std::endl << "Finally, the predator killed his clone, too." << std::endl;
	delete clone;
	std::cout << std::endl << "The predator became the only one." << std::endl;
	return (0);
}