#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	std::cout << "----------constructor test----------" << std::endl;
	ClapTrap a("AI");
	std::cout << "------------------------------------" << std::endl;
	std::cout << "----------constructor test----------" << std::endl;
	FragTrap b("BI");
	std::cout << "------------------------------------" << std::endl;
	std::cout << "----------constructor test----------" << std::endl;
	ScavTrap c("CI");
	std::cout << "------------------------------------" << std::endl;
	std::cout << "----------constructor test----------" << std::endl;
	NinjaTrap d("DI");
	std::cout << "------------------------------------" << std::endl;
	std::cout << "----------constructor test----------" << std::endl;
	SuperTrap e("EI");
	std::cout << "------------------------------------" << std::endl;
	std::cout << "------------function test-----------" << std::endl;
	e.rangedAttack("BI");
	e.meleeAttack("BI");
	e.vaulthunter_dot_exe("BI");
	e.ninjaShoebox(b);
	std::cout << "------------------------------------" << std::endl;
	std::cout << "----------destructor test-----------" << std::endl;
	return (0);
}