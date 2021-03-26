#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::cout << "----------constructor test----------" << std::endl;
    ScavTrap    a;
    ScavTrap    b("b");
    ScavTrap    c(b);
    std::cout << "------------------------------------" << std::endl;
    std::cout << "------------fuction test------------" << std::endl;
    a.rangedAttack("b");
    b.takeDamage(15);
    a.meleeAttack("b");
    b.takeDamage(20);
    a.meleeAttack("b");
    b.takeDamage(20);
    a.meleeAttack("b");
    b.takeDamage(20);
    a.meleeAttack("b");
    b.takeDamage(20);
    a.meleeAttack("b");
    b.takeDamage(20);
    a.meleeAttack("b");
    b.takeDamage(20);
    a.meleeAttack("b");
    b.takeDamage(20);
    std::cout << "------------------------------------" << std::endl;
    std::cout << "HP : " << b.getHitPoints() << std::endl;
    b.beRepaired(50);
    b.beRepaired(50);
    std::cout << "HP : " << b.getHitPoints() << std::endl;
    b.beRepaired(50);
    std::cout << "HP : " << b.getHitPoints() << std::endl;
    std::cout << "------------------------------------" << std::endl;
    b.challengeNewcomer("c");
    b.challengeNewcomer("c");
    b.challengeNewcomer("c");
    b.challengeNewcomer("c");
    std::cout << "----------destructor test-----------" << std::endl;
    return (0);
}