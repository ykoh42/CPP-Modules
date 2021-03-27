#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap(void);
	NinjaTrap(const std::string& name);
	NinjaTrap(const NinjaTrap& other);
	~NinjaTrap(void);

	NinjaTrap&	        operator=(const NinjaTrap& other);
    void                rangedAttack(std::string const & target);
    void                meleeAttack(std::string const & target);
	void				ninjaShoebox(FragTrap &trap);
	void				ninjaShoebox(ScavTrap &trap);
	void				ninjaShoebox(ClapTrap &trap);
	void				ninjaShoebox(NinjaTrap &trap);
};

#endif