#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <random>

class Zombie
{
public:
	// Zombie(void);
	Zombie(std::string const &type, std::string const &name);
	// virtual ~Zombie();

	// void setCharacteristics(std::string const &type, std::string const &name);
	// static std::string randomName(std::string::size_type length);
	void announce(void) const;

private:
	std::string	type;
	std::string	name;
};

#endif