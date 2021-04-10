#include "FragTrap.hpp"

int main(void)
{
	std::cout << "----------constructor test----------" << std::endl;
	FragTrap    a;
	FragTrap    b("b");
	FragTrap    c(b);
	std::cout << "------------------------------------" << std::endl;
	std::cout << "------------fuction test------------" << std::endl;
	a.rangedAttack("b");
	b.takeDamage(20);
	a.meleeAttack("b");
	b.takeDamage(30);
	a.meleeAttack("b");
	b.takeDamage(30);
	a.meleeAttack("b");
	b.takeDamage(30);
	a.meleeAttack("b");
	b.takeDamage(30);
	b.takeDamage(30);
	std::cout << "------------------------------------" << std::endl;
	std::cout << "HP : " << b.getHitPoints() << std::endl;
	b.beRepaired(50);
	b.beRepaired(50);
	std::cout << "HP : " << b.getHitPoints() << std::endl;
	b.beRepaired(50);
	std::cout << "HP : " << b.getHitPoints() << std::endl;
	std::cout << "------------------------------------" << std::endl;
	b.vaulthunter_dot_exe("b");
	b.vaulthunter_dot_exe("b");
	b.vaulthunter_dot_exe("b");
	b.vaulthunter_dot_exe("b");
	b.vaulthunter_dot_exe("b");
	b.vaulthunter_dot_exe("b");
	std::cout << "----------destructor test-----------" << std::endl;
	return (0);
}