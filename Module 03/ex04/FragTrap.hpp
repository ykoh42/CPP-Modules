#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& other);
	~FragTrap(void);

	FragTrap&	        operator=(const FragTrap& other);
    void                rangedAttack(std::string const & target);
    void                meleeAttack(std::string const & target);
    void                vaulthunter_dot_exe(std::string const & target);

private:
    static std::string  mList[5];
};

#endif