#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <random>

class Zombie
{
public:
	Zombie(void);
	Zombie(const std::string& type, const std::string& name);

	void		announce(void) const;
	void		SetType(const std::string& type);
	void		SetName(const std::string& name);

private:
	std::string	type;
	std::string	name;
};

#endif