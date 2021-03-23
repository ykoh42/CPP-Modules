#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(void);
	SuperTrap(const std::string& name);
	SuperTrap(const SuperTrap& other);
	~SuperTrap(void);

	SuperTrap&	        operator=(const SuperTrap& other);
    void                rangedAttack(std::string const & target);
    void                meleeAttack(std::string const & target);
};

#endif