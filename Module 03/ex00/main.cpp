#include "FragTrap.hpp"

int main(void)
{
    FragTrap    wilhelm("WILHELM");
    FragTrap    jack("JACK");

    std::cout << "\n<WILHELM> : I WILL KILL YOU JACK!!\n" << std::endl;
    wilhelm.rangedAttack("Jack");
    jack.takeDamage(30);
    wilhelm.meleeAttack("Jack");
    jack.takeDamage(30);
    wilhelm.meleeAttack("Jack");
    jack.takeDamage(30);
    std::cout << "\n<JACK> : STOP IT!!\n";
    std::cout << "\n<JACK> : TAKE MY ATTACK!!\n" << std::endl;
    jack.vaulthunter_dot_exe("WILHELM");
    jack.vaulthunter_dot_exe("WILHELM");
    jack.vaulthunter_dot_exe("WILHELM");
    jack.vaulthunter_dot_exe("WILHELM");
    jack.vaulthunter_dot_exe("WILHELM");
    jack.vaulthunter_dot_exe("WILHELM");
    std::cout << "\n<JACK> : SHIT 🤬 !!\n" << std::endl;
    wilhelm.meleeAttack("Jack");
    jack.takeDamage(30);
    std::cout << "\n<WILHELM> : JUST KIDDING 🤪 ! I WILL REPAIR YOU 😘 !!\n" << std::endl;
    jack.beRepaired(15);
    jack.beRepaired(90);
    std::cout << "\nTHEY LIVED HAPPILY FOR A LONG TIME 👨‍👩‍👦 !!\n" << std::endl;
    return (0);
}