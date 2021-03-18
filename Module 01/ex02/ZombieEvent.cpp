#include "ZombieEvent.hpp"

void 		ZombieEvent::setZombieType(const std::string& type)
{
	this->type = type;
}

Zombie*		ZombieEvent::newZombie(const std::string& name)
{
	return (new Zombie(this->type, name));
}

Zombie*		ZombieEvent::randomChump(void)
{
	std::string	alphabet("AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz");
	std::string	name;

	std::srand(std::time(NULL));
	for (std::string::size_type i = 0; i < 10; i++)
	{
		 name.push_back(alphabet[rand() % alphabet.length()]);
	}
	Zombie*	zombie = new Zombie(this->type, name);
	zombie->announce();
	return (zombie);
}