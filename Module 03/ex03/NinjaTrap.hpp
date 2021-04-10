#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(void);
	NinjaTrap(const std::string& name);
	NinjaTrap(const NinjaTrap& other);
	~NinjaTrap(void);

	NinjaTrap&			operator=(const NinjaTrap& other);
	void				rangedAttack(const std::string& target);
	void				meleeAttack(const std::string& target);
	void				ninjaShoebox(FragTrap& trap);
	void				ninjaShoebox(ScavTrap& trap);
	void				ninjaShoebox(ClapTrap& trap);
	void				ninjaShoebox(NinjaTrap& trap);
};

#endif