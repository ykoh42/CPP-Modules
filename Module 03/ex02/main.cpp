#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "FragTrap class" << std::endl;
    FragTrap    frag("frag");
    std::cout << "------------------------" << std::endl;
    std::cout << "ScavTrap class" << std::endl;
    FragTrap    scav("scav");
    std::cout << "------------------------" << std::endl;
    return (0);
}