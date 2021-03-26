#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "----------constructor test----------" << std::endl;
    FragTrap a("AI");
    std::cout << "------------------------------------" << std::endl;
    std::cout << "----------constructor test----------" << std::endl;
    ScavTrap b("BI");
    std::cout << "------------------------------------" << std::endl;

    std::cout << "------------function test-----------" << std::endl;
    std::cout << "HP : " << b.getHitPoints() << std::endl;
    a.meleeAttack("b");
    b.takeDamage(30);
    std::cout << "------------------------------------" << std::endl;
    std::cout << "HP : " <<  a.getHitPoints() << std::endl;
    b.meleeAttack("a");
    a.takeDamage(20);
    std::cout << "HP : " <<  a.getHitPoints() << std::endl;
    std::cout << "------------------------------------" << std::endl;
    return (0);
}