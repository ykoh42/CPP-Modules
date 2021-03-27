#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

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
    std::cout << "------------function test-----------" << std::endl;
    d.ninjaShoebox(a);
    d.ninjaShoebox(b);
    d.ninjaShoebox(c);
    d.ninjaShoebox(d);
    std::cout << "------------------------------------" << std::endl;
    std::cout << "----------destructor test-----------" << std::endl;
    return (0);
}