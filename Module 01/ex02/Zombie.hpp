#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <random>

class Zombie
{
public:
	Zombie(const std::string& type, const std::string& name);

	void announce(void) const;

private:
	const std::string	type;
	const std::string	name;
};

#endif