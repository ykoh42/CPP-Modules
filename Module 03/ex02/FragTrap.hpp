#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& other);
	~FragTrap(void);

	FragTrap&			operator=(const FragTrap& other);
	void				rangedAttack(const std::string& target);
	void				meleeAttack(const std::string& target);
	void				vaulthunter_dot_exe(const std::string& target);

private:
	static std::string	mList[5];
};

#endif