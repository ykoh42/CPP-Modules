#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);
	~ScavTrap(void);

	ScavTrap&	        operator=(const ScavTrap& other);
    void                rangedAttack(std::string const & target);
    void                meleeAttack(std::string const & target);
    void                challengeNewcomer(std::string const & target);

private:
    static std::string  mList[5];
};

#endif